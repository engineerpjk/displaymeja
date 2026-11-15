#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <LittleFS.h>
#include <Arduino_GFX_Library.h>
#include <XPT2046_Touchscreen.h>
#include <TAMC_GT911.h>
#include <lvgl.h>

extern "C" {
    #include "display_meja.h"
}

/* =========================================================================
 * 1. PIN HARDWARE ESP32-8048S043R (RGB 800x480 + XPT2046 Resistive Touch)
 * ========================================================================= */
#define TFT_BL      2

// Pin SPI Touchscreen XPT2046 pada Sunton ESP32-8048S043R
#define TOUCH_CS    38
#define TOUCH_MOSI  11
#define TOUCH_MISO  13
#define TOUCH_CLK   12

// Pin I2C GT911 (cadangan otomatis jika panel kapasitif)
#define GT911_SDA   19
#define GT911_SCL   20
#define GT911_INT   18
#define GT911_RST   38

// Kalibrasi mentah XPT2046 (Sumbu Y dibalik agar sesuai orientasi layar)
#define TS_MINX     220
#define TS_MAXX     3850
#define TS_MINY     250
#define TS_MAXY     3850

SPIClass touchSPI(HSPI);
XPT2046_Touchscreen ts(TOUCH_CS);
TAMC_GT911 ts_cap(GT911_SDA, GT911_SCL, GT911_INT, GT911_RST, 800, 480);
bool use_gt911 = false;

// Bus RGB Parallel 16-bit untuk ESP32-8048S043
Arduino_ESP32RGBPanel *rgbpanel = new Arduino_ESP32RGBPanel(
    40 /* DE */, 41 /* VSYNC */, 39 /* HSYNC */, 42 /* PCLK */,
    45 /* R0 */, 48 /* R1 */, 47 /* R2 */, 21 /* R3 */, 14 /* R4 */,
    5  /* G0 */, 6  /* G1 */, 7  /* G2 */, 15 /* G3 */, 16 /* G4 */, 4 /* G5 */,
    8  /* B0 */, 3  /* B1 */, 46 /* B2 */, 9  /* B3 */, 1  /* B4 */,
    0 /* hsync_polarity */, 8 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 8 /* hsync_back_porch */,
    0 /* vsync_polarity */, 8 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 8 /* vsync_back_porch */,
    1 /* pclk_active_neg */, 16000000 /* prefer_speed */
);

Arduino_RGB_Display *gfx = new Arduino_RGB_Display(800, 480, rgbpanel, 0 /* rotation */);

/* =========================================================================
 * 2. POINTER LAYAR & WIDGET DINAMIS
 * ========================================================================= */
static lv_obj_t *scr_standby       = NULL;
static lv_obj_t *scr_home          = NULL;
static lv_obj_t *scr_setup_wifi    = NULL;
static lv_obj_t *scr_setup_dtloc   = NULL;
static lv_obj_t *scr_edit          = NULL;

// Overlay Keyboard Pop-up
static lv_obj_t *kb_overlay        = NULL;
static lv_obj_t *kb_textarea       = NULL;
static lv_obj_t *kb_widget         = NULL;
static lv_obj_t *active_target_lbl = NULL;

// Buffer LVGL di PSRAM
static lv_display_t *disp = NULL;
static uint8_t *buf1 = NULL;
static uint8_t *buf2 = NULL;

/* =========================================================================
 * 3. PENCARIAN WIDGET REKURSIF (MENEMUKAN ANAK DI DALAM CARD / CONTAINER)
 * ========================================================================= */
static lv_obj_t *find_widget_recursive(lv_obj_t *parent, const char *target_name) {
    if (!parent || !target_name) return NULL;

    const char *name = lv_obj_get_name(parent);
    if (name && strcmp(name, target_name) == 0) {
        return parent;
    }

    uint32_t child_cnt = lv_obj_get_child_count(parent);
    for (uint32_t i = 0; i < child_cnt; i++) {
        lv_obj_t *found = find_widget_recursive(lv_obj_get_child(parent, i), target_name);
        if (found) return found;
    }
    return NULL;
}

/* =========================================================================
 * 4. DRIVER DISPLAY & TOUCH UNTUK LVGL 9
 * ========================================================================= */
void my_disp_flush(lv_display_t *display, const lv_area_t *area, uint8_t *px_map) {
    uint32_t w = lv_area_get_width(area);
    uint32_t h = lv_area_get_height(area);
    gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)px_map, w, h);
    lv_display_flush_ready(display);
}

void my_touchpad_read(lv_indev_t *indev, lv_indev_data_t *data) {
    if (use_gt911) {
        ts_cap.read();
        if (ts_cap.isTouched) {
            data->state = LV_INDEV_STATE_PRESSED;
            data->point.x = constrain(ts_cap.points[0].x, 0, 799);
            data->point.y = constrain(ts_cap.points[0].y, 0, 479);
        } else {
            data->state = LV_INDEV_STATE_RELEASED;
        }
        return;
    }

    if (ts.touched()) {
        TS_Point p = ts.getPoint();

        // Sumbu X normal (0 -> 800), Sumbu Y dibalik (TS_MAXY -> TS_MINY = 0 -> 480)
        int32_t x = map(p.x, TS_MINX, TS_MAXX, 0, 800);
        int32_t y = map(p.y, TS_MAXY, TS_MINY, 0, 480);

        x = constrain(x, 0, 799);
        y = constrain(y, 0, 479);

        data->state = LV_INDEV_STATE_PRESSED;
        data->point.x = x;
        data->point.y = y;

        Serial.printf("TOUCH: x=%ld, y=%ld (raw: %d, %d)\n", x, y, p.x, p.y);
    } else {
        data->state = LV_INDEV_STATE_RELEASED;
    }
}

static uint32_t my_tick_cb(void) {
    return millis();
}

/* =========================================================================
 * 5. EFEK VISUAL, HELPER CLICKABLE & NAVIGASI LAYAR
 * ========================================================================= */
static void make_container_clickable(lv_obj_t *obj) {
    if (!obj) return;
    lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    // Nonaktifkan tangkapan klik pada child agar sentuhan diteruskan ke tombol utama
    uint32_t count = lv_obj_get_child_count(obj);
    for (uint32_t i = 0; i < count; i++) {
        lv_obj_t *child = lv_obj_get_child(obj, i);
        if (child) {
            lv_obj_remove_flag(child, LV_OBJ_FLAG_CLICKABLE);
        }
    }

    lv_obj_set_style_opa(obj, LV_OPA_70, LV_STATE_PRESSED);
    lv_obj_set_style_transform_scale(obj, 245, LV_STATE_PRESSED);
}

static void switch_screen(lv_obj_t *target_scr) {
    if (!target_scr || lv_screen_active() == target_scr) return;
    lv_screen_load_anim(target_scr, LV_SCR_LOAD_ANIM_FADE_IN, 200, 0, false);
}

/* =========================================================================
 * 6. ON-SCREEN KEYBOARD UNTUK INPUT TEKS / ANGKA
 * ========================================================================= */
static void kb_event_cb(lv_event_t *e) {
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_READY) {
        if (active_target_lbl && kb_textarea) {
            const char *txt = lv_textarea_get_text(kb_textarea);
            lv_label_set_text(active_target_lbl, txt);

            // Sinkronkan lokasi ke layar Home jika diubah di Setup
            if (active_target_lbl == find_widget_recursive(scr_setup_dtloc, "lbl_input_location")) {
                lv_obj_t *home_loc = find_widget_recursive(scr_home, "lbl_lokasi");
                if (home_loc) lv_label_set_text(home_loc, txt);
            }
        }
        lv_obj_add_flag(kb_overlay, LV_OBJ_FLAG_HIDDEN);
    } else if (code == LV_EVENT_CANCEL) {
        lv_obj_add_flag(kb_overlay, LV_OBJ_FLAG_HIDDEN);
    }
}

static void open_keyboard_for_label(lv_obj_t *target_lbl, bool numeric_only, bool is_password) {
    if (!target_lbl || !kb_overlay) return;
    active_target_lbl = target_lbl;

    lv_textarea_set_password_mode(kb_textarea, is_password);
    lv_textarea_set_text(kb_textarea, lv_label_get_text(target_lbl));
    lv_keyboard_set_mode(kb_widget, numeric_only ? LV_KEYBOARD_MODE_NUMBER : LV_KEYBOARD_MODE_TEXT_LOWER);

    lv_obj_remove_flag(kb_overlay, LV_OBJ_FLAG_HIDDEN);
    lv_obj_move_foreground(kb_overlay);
}

static void create_keyboard_popup() {
    kb_overlay = lv_obj_create(lv_layer_top());
    lv_obj_set_size(kb_overlay, 800, 480);
    lv_obj_set_style_bg_color(kb_overlay, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(kb_overlay, LV_OPA_50, 0);
    lv_obj_set_style_border_width(kb_overlay, 0, 0);
    lv_obj_add_flag(kb_overlay, LV_OBJ_FLAG_HIDDEN);

    kb_textarea = lv_textarea_create(kb_overlay);
    lv_obj_set_size(kb_textarea, 520, 56);
    lv_obj_align(kb_textarea, LV_ALIGN_TOP_MID, 0, 45);
    lv_textarea_set_one_line(kb_textarea, true);
    lv_obj_set_style_text_font(kb_textarea, &lv_font_montserrat_16, 0);

    kb_widget = lv_keyboard_create(kb_overlay);
    lv_obj_set_size(kb_widget, 800, 270);
    lv_obj_align(kb_widget, LV_ALIGN_BOTTOM_MID, 0, 0);
    lv_keyboard_set_textarea(kb_widget, kb_textarea);
    lv_obj_add_event_cb(kb_widget, kb_event_cb, LV_EVENT_ALL, NULL);
}

/* =========================================================================
 * 7. PENDAFTARAN BINDING EVENT SELURUH TOMBOL & KABINET
 * ========================================================================= */
static void bind_button_nav(lv_obj_t *root, const char *name, lv_obj_t *dest_scr) {
    lv_obj_t *btn = find_widget_recursive(root, name);
    if (!btn) {
        Serial.printf("[WARN] Widget navigasi tidak ditemukan: %s\n", name);
        return;
    }
    make_container_clickable(btn);

    lv_obj_add_event_cb(btn, [](lv_event_t *e) {
        lv_obj_t *target = (lv_obj_t *)lv_event_get_user_data(e);
        Serial.println("[OK] Tombol diklik -> Pindah layar");
        switch_screen(target);
    }, LV_EVENT_CLICKED, dest_scr);
}

static void bind_input_field(lv_obj_t *root, const char *btn_name, const char *lbl_name, bool numeric, bool pass) {
    lv_obj_t *btn = find_widget_recursive(root, btn_name);
    lv_obj_t *lbl = find_widget_recursive(root, lbl_name);
    if (!btn || !lbl) {
        Serial.printf("[WARN] Field input tidak ditemukan: %s / %s\n", btn_name, lbl_name);
        return;
    }
    make_container_clickable(btn);

    struct InputCfg { lv_obj_t *lbl; bool num; bool pw; };
    InputCfg *cfg = new InputCfg{lbl, numeric, pass};

    lv_obj_add_event_cb(btn, [](lv_event_t *e) {
        InputCfg *c = (InputCfg *)lv_event_get_user_data(e);
        open_keyboard_for_label(c->lbl, c->num, c->pw);
    }, LV_EVENT_CLICKED, cfg);
}

static void setup_all_ui_events() {
    // --- A. LAYAR STANDBY ---
    bind_button_nav(scr_standby, "btn_standby_setup", scr_setup_wifi);
    bind_button_nav(scr_standby, "btn_nav_home",      scr_home);
    bind_button_nav(scr_standby, "btn_nav_list",      scr_edit);
    bind_button_nav(scr_standby, "btn_nav_lock",      scr_standby);

    // --- B. LAYAR HOME ---
    bind_button_nav(scr_home, "btn_home_home", scr_home);
    bind_button_nav(scr_home, "btn_home_list", scr_edit);
    bind_button_nav(scr_home, "btn_home_lock", scr_standby);
    
    // Cadangan nama alternatif tombol navigasi di layar Home
    bind_button_nav(scr_home, "btn_nav_home",  scr_home);
    bind_button_nav(scr_home, "btn_nav_list",  scr_edit);
    bind_button_nav(scr_home, "btn_nav_lock",  scr_standby);

    // Klik kartu Cabinet 1..6 langsung membuka layar Edit
    bind_button_nav(scr_home, "card_cab1", scr_edit);
    bind_button_nav(scr_home, "card_cab2", scr_edit);
    bind_button_nav(scr_home, "card_cab3", scr_edit);
    bind_button_nav(scr_home, "card_cab4", scr_edit);
    bind_button_nav(scr_home, "card_cab5", scr_edit);
    bind_button_nav(scr_home, "card_cab6", scr_edit);

    // --- C. LAYAR SETUP WIFI ---
    bind_button_nav(scr_setup_wifi, "btn_setup_next", scr_setup_dtloc);
    bind_button_nav(scr_setup_wifi, "btn_nav_home",   scr_home);
    bind_button_nav(scr_setup_wifi, "btn_nav_list",   scr_edit);
    bind_button_nav(scr_setup_wifi, "btn_nav_lock",   scr_standby);
    bind_input_field(scr_setup_wifi, "btn_input_ssid", "lbl_input_ssid", false, false);
    bind_input_field(scr_setup_wifi, "btn_input_pass", "lbl_input_pass", false, true);

    // --- D. LAYAR SETUP DATE / TIME / LOCATION ---
    bind_button_nav(scr_setup_dtloc, "btn_setup2_back", scr_setup_wifi);
    bind_button_nav(scr_setup_dtloc, "btn_setup2_home", scr_home);
    bind_button_nav(scr_setup_dtloc, "btn_setup2_list", scr_edit);
    bind_button_nav(scr_setup_dtloc, "btn_setup2_lock", scr_standby);
    
    // Cadangan nama alternatif tombol navigasi di Setup 2
    bind_button_nav(scr_setup_dtloc, "btn_home_home", scr_home);
    bind_button_nav(scr_setup_dtloc, "btn_home_list", scr_edit);
    bind_button_nav(scr_setup_dtloc, "btn_home_lock", scr_standby);

    bind_input_field(scr_setup_dtloc, "btn_input_month",    "lbl_input_month",    true,  false);
    bind_input_field(scr_setup_dtloc, "btn_input_day",      "lbl_input_day",      true,  false);
    bind_input_field(scr_setup_dtloc, "btn_input_year",     "lbl_input_year",     true,  false);
    bind_input_field(scr_setup_dtloc, "btn_input_hour",     "lbl_input_hour",     true,  false);
    bind_input_field(scr_setup_dtloc, "btn_input_minute",   "lbl_input_minute",   true,  false);
    bind_input_field(scr_setup_dtloc, "btn_input_location", "lbl_input_location", false, false);

    // --- E. LAYAR EDIT ---
    bind_button_nav(scr_edit, "btn_edit_simpan", scr_home);
    bind_button_nav(scr_edit, "btn_edit_home",   scr_home);
    bind_button_nav(scr_edit, "btn_edit_list",   scr_edit);
    bind_button_nav(scr_edit, "btn_edit_lock",   scr_standby);

    // Cadangan nama alternatif tombol navigasi di Edit
    bind_button_nav(scr_edit, "btn_nav_home", scr_home);
    bind_button_nav(scr_edit, "btn_nav_list", scr_edit);
    bind_button_nav(scr_edit, "btn_nav_lock", scr_standby);
}

/* =========================================================================
 * 8. FUNGSI HELPER UPDATE CUACA, SUHU & JAM DI LAYAR HOME
 * ========================================================================= */
enum WeatherType { WEATHER_CERAH, WEATHER_BERAWAN, WEATHER_GERIMIS, WEATHER_DERAS };

void update_home_weather(WeatherType type, float temp_c, int hum_pct) {
    lv_obj_t *icon  = find_widget_recursive(scr_home, "img_weather_icon");
    lv_obj_t *cuaca = find_widget_recursive(scr_home, "lbl_cuaca");
    lv_obj_t *suhu  = find_widget_recursive(scr_home, "lbl_suhu");
    lv_obj_t *hum   = find_widget_recursive(scr_home, "lbl_humidity");

    if (icon && cuaca) {
        switch (type) {
            case WEATHER_CERAH:
                lv_image_set_src(icon, img_weather_cerah);
                lv_label_set_text(cuaca, "Cerah");
                break;
            case WEATHER_BERAWAN:
                lv_image_set_src(icon, img_weather_berawan);
                lv_label_set_text(cuaca, "Berawan");
                break;
            case WEATHER_GERIMIS:
                lv_image_set_src(icon, img_weather_gerimis);
                lv_label_set_text(cuaca, "Gerimis");
                break;
            case WEATHER_DERAS:
                lv_image_set_src(icon, img_weather_deras);
                lv_label_set_text(cuaca, "Hujan Deras");
                break;
        }
    }

    if (suhu) {
        char buf_t[16];
        snprintf(buf_t, sizeof(buf_t), "%.1f °C", temp_c);
        lv_label_set_text(suhu, buf_t);
    }
    if (hum) {
        char buf_h[16];
        snprintf(buf_h, sizeof(buf_h), "%d %%", hum_pct);
        lv_label_set_text(hum, buf_h);
    }
}

void update_home_clock(int hour, int minute, const char *date_str) {
    lv_obj_t *lbl_jam = find_widget_recursive(scr_home, "lbl_jam");
    lv_obj_t *lbl_tgl = find_widget_recursive(scr_home, "lbl_tanggal");

    if (lbl_jam) {
        char buf_j[16];
        snprintf(buf_j, sizeof(buf_j), "%02d\n%02d", hour, minute);
        lv_label_set_text(lbl_jam, buf_j);
    }
    if (lbl_tgl && date_str) {
        lv_label_set_text(lbl_tgl, date_str);
    }
}

/* =========================================================================
 * 9. SETUP & LOOP UTAMA
 * ========================================================================= */
void setup() {
    Serial.begin(115200);
    delay(500);
    Serial.println("=== Memulai Display Meja ESP32-8048S043R ===");

    LittleFS.begin(true);

    pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);
    gfx->begin();
    gfx->fillScreen(BLACK);

    // Inisialisasi Touchscreen Resistif XPT2046
    touchSPI.begin(TOUCH_CLK, TOUCH_MISO, TOUCH_MOSI, TOUCH_CS);
    ts.begin(touchSPI);
    ts.setRotation(1);

    // Deteksi otomatis GT911 (opsional)
    Wire.begin(GT911_SDA, GT911_SCL);
    Wire.beginTransmission(0x5D);
    bool gt5d = (Wire.endTransmission() == 0);
    Wire.beginTransmission(0x14);
    bool gt14 = (Wire.endTransmission() == 0);
    if (gt5d || gt14) {
        use_gt911 = true;
        ts_cap.begin();
        ts_cap.setRotation(ROTATION_INVERTED);
        Serial.println("[TOUCH] Terdeteksi Kapasitif GT911!");
    } else {
        Serial.println("[TOUCH] Menggunakan Resistif XPT2046 (Sumbu Y Dibalik)!");
    }

    // Inisialisasi LVGL 9
    lv_init();
    lv_tick_set_cb(my_tick_cb);

    Serial.printf("[SYSTEM] Free Heap: %u bytes, Free PSRAM: %u bytes\n", ESP.getFreeHeap(), ESP.getFreePsram());

    // Alokasikan memory pool tambahan 2MB dari PSRAM ke LVGL agar tidak kehabisan RAM
    size_t psram_pool_size = 2 * 1024 * 1024;
    void *psram_pool = heap_caps_malloc(psram_pool_size, MALLOC_CAP_SPIRAM);
    if (psram_pool) {
        lv_mem_add_pool(psram_pool, psram_pool_size);
        Serial.printf("[LVGL] Berhasil menambahkan 2 MB PSRAM memory pool!\n");
    } else {
        Serial.println("[LVGL WARN] Gagal alokasi PSRAM memory pool!");
    }

    disp = lv_display_create(800, 480);
    lv_display_set_color_format(disp, LV_COLOR_FORMAT_RGB565);
    uint32_t buf_size = 800 * 80 * sizeof(lv_color_t);
    buf1 = (uint8_t *)heap_caps_malloc(buf_size, MALLOC_CAP_SPIRAM);
    buf2 = (uint8_t *)heap_caps_malloc(buf_size, MALLOC_CAP_SPIRAM);
    if (!buf1) {
        Serial.println("[LVGL WARN] Gagal alokasi PSRAM untuk buf1, mencoba internal RAM...");
        buf_size = 800 * 20 * sizeof(lv_color_t);
        buf1 = (uint8_t *)malloc(buf_size);
    }
    lv_display_set_buffers(disp, buf1, buf2, buf_size, LV_DISPLAY_RENDER_MODE_PARTIAL);
    lv_display_set_flush_cb(disp, my_disp_flush);

    lv_indev_t *indev = lv_indev_create();
    lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
    lv_indev_set_read_cb(indev, my_touchpad_read);

    // Inisialisasi Aset & Style dari LVGL Editor ("L:/" = LittleFS root)
    display_meja_init("L:/");

    // Buat ke-5 layar di memori
    scr_standby     = standby_create();
    scr_home        = home_create();
    scr_setup_wifi  = setup_wifi_create();
    scr_setup_dtloc = setup_datetimeloc_create();
    scr_edit        = edit_create();

    // Pasang Keyboard Pop-up & Event Navigasi Rekursif
    create_keyboard_popup();
    setup_all_ui_events();

    // Tampilkan layar STANDBY pertama kali saat menyala
    lv_screen_load(scr_standby);
    Serial.println("=== Sistem Siap ===");
}

void loop() {
    lv_timer_handler();
    delay(5);
}