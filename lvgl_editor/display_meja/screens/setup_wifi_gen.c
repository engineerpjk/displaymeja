/**
 * @file setup_wifi_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "setup_wifi_gen.h"
#include "../display_meja.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * setup_wifi_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "setup_wifi_#");
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0xECEAEA), 0);
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_add_style(lv_obj_0, &style_screen_base_global, 0);
        lv_obj_t * card_0 = card_create(lv_obj_0);
        lv_obj_set_x(card_0, 15);
        lv_obj_set_y(card_0, 15);
        lv_obj_set_width(card_0, 693);
        lv_obj_set_height(card_0, 450);
        lv_obj_set_flag(card_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_0, 0, 0);
        lv_obj_set_style_bg_color(card_0, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_0, 5, 0);
        lv_obj_set_style_shadow_width(card_0, 4, 0);
        lv_obj_set_style_shadow_offset_y(card_0, 4, 0);
        lv_obj_set_style_shadow_color(card_0, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(card_0, 64, 0);
        lv_obj_t * label_0 = label_create(card_0);
        lv_obj_set_x(label_0, 0);
        lv_obj_set_y(label_0, 20);
        lv_obj_set_width(label_0, 693);
        lv_obj_set_height(label_0, 26);
        lv_label_set_text(label_0, "Setup");
        lv_obj_set_style_text_font(label_0, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(label_0, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_0, 118, 0);
        lv_obj_set_style_text_align(label_0, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_0 = container_create(card_0);
        lv_obj_set_x(container_0, 191);
        lv_obj_set_y(container_0, 75);
        lv_obj_set_width(container_0, 310);
        lv_obj_set_height(container_0, 150);
        lv_obj_set_flag(container_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_0, 0, 0);
        lv_obj_t * label_1 = label_create(container_0);
        lv_obj_set_x(label_1, 0);
        lv_obj_set_y(label_1, 10);
        lv_obj_set_width(label_1, 125);
        lv_obj_set_height(label_1, 24);
        lv_label_set_text(label_1, "Wifi ID:");
        lv_obj_set_style_text_font(label_1, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(label_1, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_1, 118, 0);

        lv_obj_t * btn_input_ssid = card_create(container_0);
        lv_obj_set_name(btn_input_ssid, "btn_input_ssid");
        lv_obj_set_x(btn_input_ssid, 140);
        lv_obj_set_y(btn_input_ssid, 0);
        lv_obj_set_width(btn_input_ssid, 170);
        lv_obj_set_height(btn_input_ssid, 40);
        lv_obj_set_flag(btn_input_ssid, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_input_ssid, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_input_ssid, 0, 0);
        lv_obj_set_style_bg_color(btn_input_ssid, lv_color_hex(0xFAFAFA), 0);
        lv_obj_set_style_radius(btn_input_ssid, 3, 0);
        lv_obj_t * lbl_input_ssid = label_create(btn_input_ssid);
        lv_obj_set_name(lbl_input_ssid, "lbl_input_ssid");
        lv_obj_set_x(lbl_input_ssid, 0);
        lv_obj_set_y(lbl_input_ssid, 10);
        lv_obj_set_width(lbl_input_ssid, 170);
        lv_obj_set_height(lbl_input_ssid, 24);
        lv_label_set_text(lbl_input_ssid, "SSID");
        lv_obj_set_style_text_font(lbl_input_ssid, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(lbl_input_ssid, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_input_ssid, 118, 0);
        lv_obj_set_style_text_align(lbl_input_ssid, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lbl_input_ssid, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * label_2 = label_create(container_0);
        lv_obj_set_x(label_2, 0);
        lv_obj_set_y(label_2, 60);
        lv_obj_set_width(label_2, 135);
        lv_obj_set_height(label_2, 24);
        lv_label_set_text(label_2, "Password:");
        lv_obj_set_style_text_font(label_2, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(label_2, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_2, 118, 0);

        lv_obj_t * btn_input_pass = card_create(container_0);
        lv_obj_set_name(btn_input_pass, "btn_input_pass");
        lv_obj_set_x(btn_input_pass, 140);
        lv_obj_set_y(btn_input_pass, 50);
        lv_obj_set_width(btn_input_pass, 170);
        lv_obj_set_height(btn_input_pass, 40);
        lv_obj_set_flag(btn_input_pass, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_input_pass, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_input_pass, 0, 0);
        lv_obj_set_style_bg_color(btn_input_pass, lv_color_hex(0xFAFAFA), 0);
        lv_obj_set_style_radius(btn_input_pass, 3, 0);
        lv_obj_t * lbl_input_pass = label_create(btn_input_pass);
        lv_obj_set_name(lbl_input_pass, "lbl_input_pass");
        lv_obj_set_x(lbl_input_pass, 0);
        lv_obj_set_y(lbl_input_pass, 10);
        lv_obj_set_width(lbl_input_pass, 170);
        lv_obj_set_height(lbl_input_pass, 24);
        lv_label_set_text(lbl_input_pass, "PW");
        lv_obj_set_style_text_font(lbl_input_pass, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(lbl_input_pass, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_input_pass, 118, 0);
        lv_obj_set_style_text_align(lbl_input_pass, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lbl_input_pass, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * label_3 = label_create(container_0);
        lv_obj_set_x(label_3, 0);
        lv_obj_set_y(label_3, 112);
        lv_obj_set_width(label_3, 135);
        lv_obj_set_height(label_3, 24);
        lv_label_set_text(label_3, "Status:");
        lv_obj_set_style_text_font(label_3, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(label_3, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_3, 118, 0);

        lv_obj_t * lbl_wifi_status = label_create(container_0);
        lv_obj_set_name(lbl_wifi_status, "lbl_wifi_status");
        lv_obj_set_x(lbl_wifi_status, 140);
        lv_obj_set_y(lbl_wifi_status, 112);
        lv_obj_set_width(lbl_wifi_status, 170);
        lv_obj_set_height(lbl_wifi_status, 24);
        lv_label_set_text(lbl_wifi_status, "Connected");
        lv_obj_set_style_text_font(lbl_wifi_status, font_inter_italic_16, 0);
        lv_obj_set_style_text_color(lbl_wifi_status, lv_color_hex(0x3377B6), 0);
        lv_obj_set_style_text_align(lbl_wifi_status, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * btn_setup_next = card_create(lv_obj_0);
        lv_obj_set_name(btn_setup_next, "btn_setup_next");
        lv_obj_set_x(btn_setup_next, 723);
        lv_obj_set_y(btn_setup_next, 15);
        lv_obj_set_width(btn_setup_next, 62);
        lv_obj_set_height(btn_setup_next, 216);
        lv_obj_set_flag(btn_setup_next, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_setup_next, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_setup_next, 0, 0);
        lv_obj_set_style_bg_color(btn_setup_next, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(btn_setup_next, 5, 0);
        lv_obj_set_style_shadow_width(btn_setup_next, 4, 0);
        lv_obj_set_style_shadow_offset_y(btn_setup_next, 4, 0);
        lv_obj_set_style_shadow_color(btn_setup_next, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(btn_setup_next, 64, 0);
        lv_obj_t * arrow_up_right_0 = arrow_up_right_create(btn_setup_next);
        lv_obj_set_x(arrow_up_right_0, 19);
        lv_obj_set_y(arrow_up_right_0, 84);

        lv_obj_t * label_4 = label_create(btn_setup_next);
        lv_obj_set_x(label_4, 0);
        lv_obj_set_y(label_4, 108);
        lv_obj_set_width(label_4, 62);
        lv_obj_set_height(label_4, 16);
        lv_label_set_text(label_4, "Setup");
        lv_obj_set_style_text_font(label_4, font_inter_regular_12_204611778259277, 0);
        lv_obj_set_style_text_color(label_4, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_4, 118, 0);
        lv_obj_set_style_text_align(label_4, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * card_1 = card_create(lv_obj_0);
        lv_obj_set_x(card_1, 723);
        lv_obj_set_y(card_1, 248);
        lv_obj_set_width(card_1, 62);
        lv_obj_set_height(card_1, 216);
        lv_obj_set_flag(card_1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_1, 0, 0);
        lv_obj_set_style_bg_color(card_1, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_1, 5, 0);
        lv_obj_set_style_shadow_width(card_1, 4, 0);
        lv_obj_set_style_shadow_offset_y(card_1, 4, 0);
        lv_obj_set_style_shadow_color(card_1, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(card_1, 64, 0);
        lv_obj_t * btn_nav_home = home_b_create(card_1);
        lv_obj_set_name(btn_nav_home, "btn_nav_home");
        lv_obj_set_x(btn_nav_home, 11);
        lv_obj_set_y(btn_nav_home, 21);
        lv_obj_set_width(btn_nav_home, 40);
        lv_obj_set_height(btn_nav_home, 40);
        lv_obj_set_flag(btn_nav_home, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_nav_list = list_create(card_1);
        lv_obj_set_name(btn_nav_list, "btn_nav_list");
        lv_obj_set_x(btn_nav_list, 11);
        lv_obj_set_y(btn_nav_list, 88);
        lv_obj_set_width(btn_nav_list, 40);
        lv_obj_set_height(btn_nav_list, 40);
        lv_obj_set_flag(btn_nav_list, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_nav_lock = lock_create(card_1);
        lv_obj_set_name(btn_nav_lock, "btn_nav_lock");
        lv_obj_set_x(btn_nav_lock, 11);
        lv_obj_set_y(btn_nav_lock, 155);
        lv_obj_set_width(btn_nav_lock, 40);
        lv_obj_set_height(btn_nav_lock, 40);
        lv_obj_set_flag(btn_nav_lock, LV_OBJ_FLAG_CLICKABLE, true);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

