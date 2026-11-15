/**
 * @file home_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_gen.h"
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

lv_obj_t * home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "home_#");
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0xECEAEA), 0);
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_add_style(lv_obj_0, &style_screen_base_global, 0);
        lv_obj_t * card_0 = card_create(lv_obj_0);
        lv_obj_set_x(card_0, 15);
        lv_obj_set_y(card_0, 15);
        lv_obj_set_width(card_0, 450);
        lv_obj_set_height(card_0, 450);
        lv_obj_set_flag(card_0, LV_OBJ_FLAG_SCROLLABLE, true);
        lv_obj_set_style_pad_all(card_0, 0, 0);
        lv_obj_set_style_bg_color(card_0, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_0, 5, 0);
        lv_obj_set_style_shadow_width(card_0, 4, 0);
        lv_obj_set_style_shadow_offset_y(card_0, 4, 0);
        lv_obj_set_style_shadow_color(card_0, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(card_0, 64, 0);
        lv_obj_t * container_0 = container_create(card_0);
        lv_obj_set_x(container_0, 15);
        lv_obj_set_y(container_0, 15);
        lv_obj_set_width(container_0, 7);
        lv_obj_set_height(container_0, 432);
        lv_obj_set_flag(container_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_0, 0, 0);
        lv_obj_t * image_0 = image_create(container_0);
        lv_obj_set_x(image_0, 0);
        lv_obj_set_y(image_0, 0);
        lv_obj_set_width(image_0, 7);
        lv_obj_set_height(image_0, 17);
        lv_image_set_src(image_0, image_vec_28_203);
        lv_obj_set_style_radius(image_0, 20, 0);

        lv_obj_t * image_1 = image_create(container_0);
        lv_obj_set_x(image_1, 0);
        lv_obj_set_y(image_1, 25);
        lv_obj_set_width(image_1, 7);
        lv_obj_set_height(image_1, 395);
        lv_image_set_src(image_1, image_vec_28_204);
        lv_obj_set_style_radius(image_1, 20, 0);

        lv_obj_t * image_2 = image_create(container_0);
        lv_obj_set_x(image_2, 0);
        lv_obj_set_y(image_2, 22);
        lv_obj_set_width(image_2, 2);
        lv_obj_set_height(image_2, 7);
        lv_image_set_src(image_2, image_vec_28_205);
        lv_obj_set_style_radius(image_2, 20, 0);
        lv_obj_set_style_transform_rotation(image_2, -900, 0);
        lv_obj_set_style_transform_pivot_x(image_2, 1, 0);
        lv_obj_set_style_transform_pivot_y(image_2, 4, 0);

        lv_obj_t * card_cab1 = container_create(card_0);
        lv_obj_set_name(card_cab1, "card_cab1");
        lv_obj_set_x(card_cab1, 34);
        lv_obj_set_y(card_cab1, 15);
        lv_obj_set_width(card_cab1, 191);
        lv_obj_set_height(card_cab1, 160);
        lv_obj_set_flag(card_cab1, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(card_cab1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_cab1, 0, 0);
        lv_obj_t * card_1 = card_create(card_cab1);
        lv_obj_set_x(card_1, 0);
        lv_obj_set_y(card_1, 0);
        lv_obj_set_width(card_1, 191);
        lv_obj_set_height(card_1, 160);
        lv_obj_set_style_bg_color(card_1, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_1, 5, 0);

        lv_obj_t * card_2 = card_create(card_cab1);
        lv_obj_set_x(card_2, 0);
        lv_obj_set_y(card_2, 0);
        lv_obj_set_width(card_2, 191);
        lv_obj_set_height(card_2, 20);
        lv_obj_set_style_bg_color(card_2, lv_color_hex(0xC6C6C6), 0);
        lv_obj_set_style_radius(card_2, 5, 0);

        lv_obj_t * lbl_cab1_title = label_create(card_cab1);
        lv_obj_set_name(lbl_cab1_title, "lbl_cab1_title");
        lv_obj_set_x(lbl_cab1_title, 6);
        lv_obj_set_y(lbl_cab1_title, 2);
        lv_obj_set_width(lbl_cab1_title, 175);
        lv_obj_set_height(lbl_cab1_title, 15);
        lv_label_set_text(lbl_cab1_title, "Cabinet 1");
        lv_obj_set_style_text_font(lbl_cab1_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_cab1_title, lv_color_hex(0x000000), 0);

        lv_obj_t * card_cab2 = container_create(card_0);
        lv_obj_set_name(card_cab2, "card_cab2");
        lv_obj_set_x(card_cab2, 243);
        lv_obj_set_y(card_cab2, 15);
        lv_obj_set_width(card_cab2, 192);
        lv_obj_set_height(card_cab2, 160);
        lv_obj_set_flag(card_cab2, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(card_cab2, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_cab2, 0, 0);
        lv_obj_t * card_3 = card_create(card_cab2);
        lv_obj_set_x(card_3, 0);
        lv_obj_set_y(card_3, 0);
        lv_obj_set_width(card_3, 192);
        lv_obj_set_height(card_3, 160);
        lv_obj_set_style_bg_color(card_3, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_3, 5, 0);

        lv_obj_t * card_4 = card_create(card_cab2);
        lv_obj_set_x(card_4, 0);
        lv_obj_set_y(card_4, 0);
        lv_obj_set_width(card_4, 192);
        lv_obj_set_height(card_4, 20);
        lv_obj_set_style_bg_color(card_4, lv_color_hex(0xC6C6C6), 0);
        lv_obj_set_style_radius(card_4, 5, 0);

        lv_obj_t * lbl_cab2_title = label_create(card_cab2);
        lv_obj_set_name(lbl_cab2_title, "lbl_cab2_title");
        lv_obj_set_x(lbl_cab2_title, 6);
        lv_obj_set_y(lbl_cab2_title, 2);
        lv_obj_set_width(lbl_cab2_title, 175);
        lv_obj_set_height(lbl_cab2_title, 15);
        lv_label_set_text(lbl_cab2_title, "Cabinet 2");
        lv_obj_set_style_text_font(lbl_cab2_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_cab2_title, lv_color_hex(0x000000), 0);

        lv_obj_t * card_cab3 = container_create(card_0);
        lv_obj_set_name(card_cab3, "card_cab3");
        lv_obj_set_x(card_cab3, 34);
        lv_obj_set_y(card_cab3, 184);
        lv_obj_set_width(card_cab3, 191);
        lv_obj_set_height(card_cab3, 160);
        lv_obj_set_flag(card_cab3, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(card_cab3, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_cab3, 0, 0);
        lv_obj_t * card_5 = card_create(card_cab3);
        lv_obj_set_x(card_5, 0);
        lv_obj_set_y(card_5, 0);
        lv_obj_set_width(card_5, 191);
        lv_obj_set_height(card_5, 160);
        lv_obj_set_style_bg_color(card_5, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_5, 5, 0);

        lv_obj_t * card_6 = card_create(card_cab3);
        lv_obj_set_x(card_6, 0);
        lv_obj_set_y(card_6, 0);
        lv_obj_set_width(card_6, 191);
        lv_obj_set_height(card_6, 20);
        lv_obj_set_style_bg_color(card_6, lv_color_hex(0xC6C6C6), 0);
        lv_obj_set_style_radius(card_6, 5, 0);

        lv_obj_t * lbl_cab3_title = label_create(card_cab3);
        lv_obj_set_name(lbl_cab3_title, "lbl_cab3_title");
        lv_obj_set_x(lbl_cab3_title, 6);
        lv_obj_set_y(lbl_cab3_title, 2);
        lv_obj_set_width(lbl_cab3_title, 175);
        lv_obj_set_height(lbl_cab3_title, 15);
        lv_label_set_text(lbl_cab3_title, "Cabinet 3");
        lv_obj_set_style_text_font(lbl_cab3_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_cab3_title, lv_color_hex(0x000000), 0);

        lv_obj_t * card_cab4 = container_create(card_0);
        lv_obj_set_name(card_cab4, "card_cab4");
        lv_obj_set_x(card_cab4, 243);
        lv_obj_set_y(card_cab4, 184);
        lv_obj_set_width(card_cab4, 192);
        lv_obj_set_height(card_cab4, 160);
        lv_obj_set_flag(card_cab4, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(card_cab4, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_cab4, 0, 0);
        lv_obj_t * card_7 = card_create(card_cab4);
        lv_obj_set_x(card_7, 0);
        lv_obj_set_y(card_7, 0);
        lv_obj_set_width(card_7, 192);
        lv_obj_set_height(card_7, 160);
        lv_obj_set_style_bg_color(card_7, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_7, 5, 0);

        lv_obj_t * card_8 = card_create(card_cab4);
        lv_obj_set_x(card_8, 0);
        lv_obj_set_y(card_8, 0);
        lv_obj_set_width(card_8, 192);
        lv_obj_set_height(card_8, 20);
        lv_obj_set_style_bg_color(card_8, lv_color_hex(0xC6C6C6), 0);
        lv_obj_set_style_radius(card_8, 5, 0);

        lv_obj_t * lbl_cab4_title = label_create(card_cab4);
        lv_obj_set_name(lbl_cab4_title, "lbl_cab4_title");
        lv_obj_set_x(lbl_cab4_title, 6);
        lv_obj_set_y(lbl_cab4_title, 2);
        lv_obj_set_width(lbl_cab4_title, 175);
        lv_obj_set_height(lbl_cab4_title, 15);
        lv_label_set_text(lbl_cab4_title, "Cabinet 4");
        lv_obj_set_style_text_font(lbl_cab4_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_cab4_title, lv_color_hex(0x000000), 0);

        lv_obj_t * card_cab5 = container_create(card_0);
        lv_obj_set_name(card_cab5, "card_cab5");
        lv_obj_set_x(card_cab5, 34);
        lv_obj_set_y(card_cab5, 353);
        lv_obj_set_width(card_cab5, 191);
        lv_obj_set_height(card_cab5, 160);
        lv_obj_set_flag(card_cab5, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(card_cab5, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_cab5, 0, 0);
        lv_obj_t * card_9 = card_create(card_cab5);
        lv_obj_set_x(card_9, 0);
        lv_obj_set_y(card_9, 0);
        lv_obj_set_width(card_9, 191);
        lv_obj_set_height(card_9, 160);
        lv_obj_set_style_bg_color(card_9, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_9, 5, 0);

        lv_obj_t * card_10 = card_create(card_cab5);
        lv_obj_set_x(card_10, 0);
        lv_obj_set_y(card_10, 0);
        lv_obj_set_width(card_10, 191);
        lv_obj_set_height(card_10, 20);
        lv_obj_set_style_bg_color(card_10, lv_color_hex(0xC6C6C6), 0);
        lv_obj_set_style_radius(card_10, 5, 0);

        lv_obj_t * lbl_cab5_title = label_create(card_cab5);
        lv_obj_set_name(lbl_cab5_title, "lbl_cab5_title");
        lv_obj_set_x(lbl_cab5_title, 6);
        lv_obj_set_y(lbl_cab5_title, 2);
        lv_obj_set_width(lbl_cab5_title, 175);
        lv_obj_set_height(lbl_cab5_title, 15);
        lv_label_set_text(lbl_cab5_title, "Cabinet 5");
        lv_obj_set_style_text_font(lbl_cab5_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_cab5_title, lv_color_hex(0x000000), 0);

        lv_obj_t * card_cab6 = container_create(card_0);
        lv_obj_set_name(card_cab6, "card_cab6");
        lv_obj_set_x(card_cab6, 243);
        lv_obj_set_y(card_cab6, 353);
        lv_obj_set_width(card_cab6, 192);
        lv_obj_set_height(card_cab6, 160);
        lv_obj_set_flag(card_cab6, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(card_cab6, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_cab6, 0, 0);
        lv_obj_t * card_11 = card_create(card_cab6);
        lv_obj_set_x(card_11, 0);
        lv_obj_set_y(card_11, 0);
        lv_obj_set_width(card_11, 192);
        lv_obj_set_height(card_11, 160);
        lv_obj_set_style_bg_color(card_11, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_11, 5, 0);

        lv_obj_t * card_12 = card_create(card_cab6);
        lv_obj_set_x(card_12, 0);
        lv_obj_set_y(card_12, 0);
        lv_obj_set_width(card_12, 192);
        lv_obj_set_height(card_12, 20);
        lv_obj_set_style_bg_color(card_12, lv_color_hex(0xC6C6C6), 0);
        lv_obj_set_style_radius(card_12, 5, 0);

        lv_obj_t * lbl_cab6_title = label_create(card_cab6);
        lv_obj_set_name(lbl_cab6_title, "lbl_cab6_title");
        lv_obj_set_x(lbl_cab6_title, 6);
        lv_obj_set_y(lbl_cab6_title, 2);
        lv_obj_set_width(lbl_cab6_title, 175);
        lv_obj_set_height(lbl_cab6_title, 15);
        lv_label_set_text(lbl_cab6_title, "Cabinet 6");
        lv_obj_set_style_text_font(lbl_cab6_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_cab6_title, lv_color_hex(0x000000), 0);

        lv_obj_t * card_13 = card_create(lv_obj_0);
        lv_obj_set_x(card_13, 481);
        lv_obj_set_y(card_13, 15);
        lv_obj_set_width(card_13, 304);
        lv_obj_set_height(card_13, 217);
        lv_obj_set_flag(card_13, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_13, 0, 0);
        lv_obj_set_style_bg_color(card_13, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_border_color(card_13, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_border_opa(card_13, 6, 0);
        lv_obj_set_style_border_width(card_13, 1, 0);
        lv_obj_set_style_radius(card_13, 5, 0);
        lv_obj_set_style_shadow_width(card_13, 4, 0);
        lv_obj_set_style_shadow_offset_y(card_13, 4, 0);
        lv_obj_set_style_shadow_color(card_13, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(card_13, 64, 0);
        lv_obj_t * image_3 = image_create(card_13);
        lv_obj_set_x(image_3, 149);
        lv_obj_set_y(image_3, 15);
        lv_obj_set_width(image_3, 6);
        lv_obj_set_height(image_3, 188);
        lv_image_set_src(image_3, image_line);
        lv_obj_set_style_radius(image_3, 20, 0);

        lv_obj_t * img_weather_icon = image_create(card_13);
        lv_obj_set_name(img_weather_icon, "img_weather_icon");
        lv_obj_set_x(img_weather_icon, 33);
        lv_obj_set_y(img_weather_icon, 24);
        lv_obj_set_width(img_weather_icon, 84);
        lv_obj_set_height(img_weather_icon, 84);
        lv_image_set_src(img_weather_icon, img_weather_cerah);
        lv_obj_set_flag(img_weather_icon, LV_OBJ_FLAG_SCROLLABLE, false);

        lv_obj_t * lbl_lokasi = label_create(card_13);
        lv_obj_set_name(lbl_lokasi, "lbl_lokasi");
        lv_obj_set_x(lbl_lokasi, 0);
        lv_obj_set_y(lbl_lokasi, 135);
        lv_obj_set_width(lbl_lokasi, 149);
        lv_obj_set_height(lbl_lokasi, 22);
        lv_label_set_text(lbl_lokasi, "Jakarta");
        lv_obj_set_style_text_font(lbl_lokasi, font_lato_bold_16, 0);
        lv_obj_set_style_text_color(lbl_lokasi, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_align(lbl_lokasi, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lbl_cuaca = label_create(card_13);
        lv_obj_set_name(lbl_cuaca, "lbl_cuaca");
        lv_obj_set_x(lbl_cuaca, 0);
        lv_obj_set_y(lbl_cuaca, 158);
        lv_obj_set_width(lbl_cuaca, 149);
        lv_obj_set_height(lbl_cuaca, 16);
        lv_label_set_text(lbl_cuaca, "Cerah");
        lv_obj_set_style_text_font(lbl_cuaca, font_inter_reg_12b.bin, 0);
        lv_obj_set_style_text_color(lbl_cuaca, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_cuaca, 118, 0);
        lv_obj_set_style_text_align(lbl_cuaca, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * label_0 = label_create(card_13);
        lv_obj_set_x(label_0, 155);
        lv_obj_set_y(label_0, 26);
        lv_obj_set_width(label_0, 149);
        lv_obj_set_height(label_0, 16);
        lv_label_set_text(label_0, "Temperature");
        lv_obj_set_style_text_font(label_0, font_inter_reg_12b.bin, 0);
        lv_obj_set_style_text_color(label_0, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_0, 118, 0);
        lv_obj_set_style_text_align(label_0, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lbl_suhu = label_create(card_13);
        lv_obj_set_name(lbl_suhu, "lbl_suhu");
        lv_obj_set_x(lbl_suhu, 155);
        lv_obj_set_y(lbl_suhu, 48);
        lv_obj_set_width(lbl_suhu, 149);
        lv_obj_set_height(lbl_suhu, 36);
        lv_label_set_text(lbl_suhu, "18.9 °C");
        lv_obj_set_style_text_font(lbl_suhu, font_inter_semi_bold_30, 0);
        lv_obj_set_style_text_color(lbl_suhu, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_align(lbl_suhu, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * label_1 = label_create(card_13);
        lv_obj_set_x(label_1, 155);
        lv_obj_set_y(label_1, 115);
        lv_obj_set_width(label_1, 149);
        lv_obj_set_height(label_1, 16);
        lv_label_set_text(label_1, "Humidity");
        lv_obj_set_style_text_font(label_1, font_inter_reg_12b.bin, 0);
        lv_obj_set_style_text_color(label_1, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_1, 118, 0);
        lv_obj_set_style_text_align(label_1, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lbl_humidity = label_create(card_13);
        lv_obj_set_name(lbl_humidity, "lbl_humidity");
        lv_obj_set_x(lbl_humidity, 155);
        lv_obj_set_y(lbl_humidity, 137);
        lv_obj_set_width(lbl_humidity, 149);
        lv_obj_set_height(lbl_humidity, 36);
        lv_label_set_text(lbl_humidity, "18 %");
        lv_obj_set_style_text_font(lbl_humidity, font_inter_semi_bold_30, 0);
        lv_obj_set_style_text_color(lbl_humidity, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_align(lbl_humidity, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * card_14 = card_create(lv_obj_0);
        lv_obj_set_x(card_14, 481);
        lv_obj_set_y(card_14, 248);
        lv_obj_set_width(card_14, 227);
        lv_obj_set_height(card_14, 217);
        lv_obj_set_flag(card_14, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_14, 0, 0);
        lv_obj_set_style_bg_color(card_14, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_border_color(card_14, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_border_opa(card_14, 6, 0);
        lv_obj_set_style_border_width(card_14, 1, 0);
        lv_obj_set_style_radius(card_14, 5, 0);
        lv_obj_set_style_shadow_width(card_14, 4, 0);
        lv_obj_set_style_shadow_offset_y(card_14, 4, 0);
        lv_obj_set_style_shadow_color(card_14, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(card_14, 64, 0);
        lv_obj_t * lbl_jam = label_create(card_14);
        lv_obj_set_name(lbl_jam, "lbl_jam");
        lv_obj_set_align(lbl_jam, LV_ALIGN_TOP_MID);
        lv_obj_set_x(lbl_jam, 0);
        lv_obj_set_y(lbl_jam, 16);
        lv_obj_set_width(lbl_jam, 180);
        lv_obj_set_height(lbl_jam, 140);
        lv_label_set_text(lbl_jam, "24\n00");
        lv_obj_set_style_text_font(lbl_jam, font_inter_bold_60, 0);
        lv_obj_set_style_text_line_space(lbl_jam, -6, 0);
        lv_obj_set_style_text_color(lbl_jam, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_align(lbl_jam, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lbl_tanggal = label_create(card_14);
        lv_obj_set_name(lbl_tanggal, "lbl_tanggal");
        lv_obj_set_align(lbl_tanggal, LV_ALIGN_BOTTOM_MID);
        lv_obj_set_x(lbl_tanggal, 0);
        lv_obj_set_y(lbl_tanggal, -14);
        lv_obj_set_width(lbl_tanggal, 210);
        lv_obj_set_height(lbl_tanggal, 32);
        lv_label_set_text(lbl_tanggal, "Thursday, \n12 November 2026");
        lv_obj_set_style_text_font(lbl_tanggal, font_inter_reg_12b.bin, 0);
        lv_obj_set_style_text_line_space(lbl_tanggal, 2, 0);
        lv_obj_set_style_text_color(lbl_tanggal, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_tanggal, 118, 0);
        lv_obj_set_style_text_align(lbl_tanggal, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * card_15 = card_create(lv_obj_0);
        lv_obj_set_x(card_15, 723);
        lv_obj_set_y(card_15, 248);
        lv_obj_set_width(card_15, 62);
        lv_obj_set_height(card_15, 216);
        lv_obj_set_flag(card_15, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_15, 0, 0);
        lv_obj_set_style_bg_color(card_15, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_15, 5, 0);
        lv_obj_set_style_shadow_width(card_15, 4, 0);
        lv_obj_set_style_shadow_offset_y(card_15, 4, 0);
        lv_obj_set_style_shadow_color(card_15, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(card_15, 64, 0);
        lv_obj_t * btn_home_home = home_b_create(card_15);
        lv_obj_set_name(btn_home_home, "btn_home_home");
        lv_obj_set_x(btn_home_home, 11);
        lv_obj_set_y(btn_home_home, 21);
        lv_obj_set_width(btn_home_home, 40);
        lv_obj_set_height(btn_home_home, 40);
        lv_obj_set_flag(btn_home_home, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_home_list = list_create(card_15);
        lv_obj_set_name(btn_home_list, "btn_home_list");
        lv_obj_set_x(btn_home_list, 11);
        lv_obj_set_y(btn_home_list, 88);
        lv_obj_set_width(btn_home_list, 40);
        lv_obj_set_height(btn_home_list, 40);
        lv_obj_set_flag(btn_home_list, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_home_lock = lock_create(card_15);
        lv_obj_set_name(btn_home_lock, "btn_home_lock");
        lv_obj_set_x(btn_home_lock, 11);
        lv_obj_set_y(btn_home_lock, 155);
        lv_obj_set_width(btn_home_lock, 40);
        lv_obj_set_height(btn_home_lock, 40);
        lv_obj_set_flag(btn_home_lock, LV_OBJ_FLAG_CLICKABLE, true);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

