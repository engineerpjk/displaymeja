/**
 * @file setup_datetimeloc_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "setup_datetimeloc_gen.h"
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

lv_obj_t * setup_datetimeloc_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "setup_datetimeloc_#");
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
        lv_obj_set_x(container_0, 146);
        lv_obj_set_y(container_0, 75);
        lv_obj_set_width(container_0, 400);
        lv_obj_set_height(container_0, 150);
        lv_obj_set_flag(container_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_0, 0, 0);
        lv_obj_t * label_1 = label_create(container_0);
        lv_obj_set_x(label_1, 0);
        lv_obj_set_y(label_1, 10);
        lv_obj_set_width(label_1, 125);
        lv_obj_set_height(label_1, 24);
        lv_label_set_text(label_1, "Date:");
        lv_obj_set_style_text_font(label_1, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(label_1, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_1, 118, 0);

        lv_obj_t * btn_input_month = card_create(container_0);
        lv_obj_set_name(btn_input_month, "btn_input_month");
        lv_obj_set_x(btn_input_month, 140);
        lv_obj_set_y(btn_input_month, 0);
        lv_obj_set_width(btn_input_month, 80);
        lv_obj_set_height(btn_input_month, 40);
        lv_obj_set_flag(btn_input_month, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_input_month, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_input_month, 0, 0);
        lv_obj_set_style_bg_color(btn_input_month, lv_color_hex(0xFAFAFA), 0);
        lv_obj_set_style_radius(btn_input_month, 3, 0);
        lv_obj_t * lbl_input_month = label_create(btn_input_month);
        lv_obj_set_name(lbl_input_month, "lbl_input_month");
        lv_obj_set_x(lbl_input_month, 0);
        lv_obj_set_y(lbl_input_month, 10);
        lv_obj_set_width(lbl_input_month, 80);
        lv_obj_set_height(lbl_input_month, 24);
        lv_label_set_text(lbl_input_month, "06");
        lv_obj_set_style_text_font(lbl_input_month, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(lbl_input_month, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_input_month, 118, 0);
        lv_obj_set_style_text_align(lbl_input_month, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lbl_input_month, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * btn_input_day = card_create(container_0);
        lv_obj_set_name(btn_input_day, "btn_input_day");
        lv_obj_set_x(btn_input_day, 230);
        lv_obj_set_y(btn_input_day, 0);
        lv_obj_set_width(btn_input_day, 80);
        lv_obj_set_height(btn_input_day, 40);
        lv_obj_set_flag(btn_input_day, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_input_day, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_input_day, 0, 0);
        lv_obj_set_style_bg_color(btn_input_day, lv_color_hex(0xFAFAFA), 0);
        lv_obj_set_style_radius(btn_input_day, 3, 0);
        lv_obj_t * lbl_input_day = label_create(btn_input_day);
        lv_obj_set_name(lbl_input_day, "lbl_input_day");
        lv_obj_set_x(lbl_input_day, 0);
        lv_obj_set_y(lbl_input_day, 10);
        lv_obj_set_width(lbl_input_day, 80);
        lv_obj_set_height(lbl_input_day, 24);
        lv_label_set_text(lbl_input_day, "17");
        lv_obj_set_style_text_font(lbl_input_day, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(lbl_input_day, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_input_day, 118, 0);
        lv_obj_set_style_text_align(lbl_input_day, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lbl_input_day, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * btn_input_year = card_create(container_0);
        lv_obj_set_name(btn_input_year, "btn_input_year");
        lv_obj_set_x(btn_input_year, 320);
        lv_obj_set_y(btn_input_year, 0);
        lv_obj_set_width(btn_input_year, 80);
        lv_obj_set_height(btn_input_year, 40);
        lv_obj_set_flag(btn_input_year, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_input_year, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_input_year, 0, 0);
        lv_obj_set_style_bg_color(btn_input_year, lv_color_hex(0xFAFAFA), 0);
        lv_obj_set_style_radius(btn_input_year, 3, 0);
        lv_obj_t * lbl_input_year = label_create(btn_input_year);
        lv_obj_set_name(lbl_input_year, "lbl_input_year");
        lv_obj_set_x(lbl_input_year, 0);
        lv_obj_set_y(lbl_input_year, 10);
        lv_obj_set_width(lbl_input_year, 80);
        lv_obj_set_height(lbl_input_year, 24);
        lv_label_set_text(lbl_input_year, "2026");
        lv_obj_set_style_text_font(lbl_input_year, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(lbl_input_year, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_input_year, 118, 0);
        lv_obj_set_style_text_align(lbl_input_year, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lbl_input_year, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * label_2 = label_create(container_0);
        lv_obj_set_x(label_2, 0);
        lv_obj_set_y(label_2, 60);
        lv_obj_set_width(label_2, 135);
        lv_obj_set_height(label_2, 24);
        lv_label_set_text(label_2, "Time(24hr):");
        lv_obj_set_style_text_font(label_2, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(label_2, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_2, 118, 0);

        lv_obj_t * btn_input_hour = card_create(container_0);
        lv_obj_set_name(btn_input_hour, "btn_input_hour");
        lv_obj_set_x(btn_input_hour, 140);
        lv_obj_set_y(btn_input_hour, 50);
        lv_obj_set_width(btn_input_hour, 80);
        lv_obj_set_height(btn_input_hour, 40);
        lv_obj_set_flag(btn_input_hour, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_input_hour, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_input_hour, 0, 0);
        lv_obj_set_style_bg_color(btn_input_hour, lv_color_hex(0xFAFAFA), 0);
        lv_obj_set_style_radius(btn_input_hour, 3, 0);
        lv_obj_t * lbl_input_hour = label_create(btn_input_hour);
        lv_obj_set_name(lbl_input_hour, "lbl_input_hour");
        lv_obj_set_x(lbl_input_hour, 0);
        lv_obj_set_y(lbl_input_hour, 10);
        lv_obj_set_width(lbl_input_hour, 80);
        lv_obj_set_height(lbl_input_hour, 24);
        lv_label_set_text(lbl_input_hour, "15");
        lv_obj_set_style_text_font(lbl_input_hour, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(lbl_input_hour, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_input_hour, 118, 0);
        lv_obj_set_style_text_align(lbl_input_hour, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lbl_input_hour, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * btn_input_minute = card_create(container_0);
        lv_obj_set_name(btn_input_minute, "btn_input_minute");
        lv_obj_set_x(btn_input_minute, 230);
        lv_obj_set_y(btn_input_minute, 50);
        lv_obj_set_width(btn_input_minute, 80);
        lv_obj_set_height(btn_input_minute, 40);
        lv_obj_set_flag(btn_input_minute, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_input_minute, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_input_minute, 0, 0);
        lv_obj_set_style_bg_color(btn_input_minute, lv_color_hex(0xFAFAFA), 0);
        lv_obj_set_style_radius(btn_input_minute, 3, 0);
        lv_obj_t * lbl_input_minute = label_create(btn_input_minute);
        lv_obj_set_name(lbl_input_minute, "lbl_input_minute");
        lv_obj_set_x(lbl_input_minute, 0);
        lv_obj_set_y(lbl_input_minute, 10);
        lv_obj_set_width(lbl_input_minute, 80);
        lv_obj_set_height(lbl_input_minute, 24);
        lv_label_set_text(lbl_input_minute, "25");
        lv_obj_set_style_text_font(lbl_input_minute, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(lbl_input_minute, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_input_minute, 118, 0);
        lv_obj_set_style_text_align(lbl_input_minute, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lbl_input_minute, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * label_3 = label_create(container_0);
        lv_obj_set_x(label_3, 0);
        lv_obj_set_y(label_3, 112);
        lv_obj_set_width(label_3, 135);
        lv_obj_set_height(label_3, 24);
        lv_label_set_text(label_3, "Location:");
        lv_obj_set_style_text_font(label_3, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(label_3, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_3, 118, 0);

        lv_obj_t * btn_input_location = card_create(container_0);
        lv_obj_set_name(btn_input_location, "btn_input_location");
        lv_obj_set_x(btn_input_location, 140);
        lv_obj_set_y(btn_input_location, 105);
        lv_obj_set_width(btn_input_location, 170);
        lv_obj_set_height(btn_input_location, 40);
        lv_obj_set_flag(btn_input_location, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_input_location, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_input_location, 0, 0);
        lv_obj_set_style_bg_color(btn_input_location, lv_color_hex(0xFAFAFA), 0);
        lv_obj_set_style_radius(btn_input_location, 3, 0);
        lv_obj_t * lbl_input_location = label_create(btn_input_location);
        lv_obj_set_name(lbl_input_location, "lbl_input_location");
        lv_obj_set_x(lbl_input_location, 0);
        lv_obj_set_y(lbl_input_location, 10);
        lv_obj_set_width(lbl_input_location, 170);
        lv_obj_set_height(lbl_input_location, 24);
        lv_label_set_text(lbl_input_location, "Jakarta");
        lv_obj_set_style_text_font(lbl_input_location, font_inter_regular_16, 0);
        lv_obj_set_style_text_color(lbl_input_location, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(lbl_input_location, 118, 0);
        lv_obj_set_style_text_align(lbl_input_location, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(lbl_input_location, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * btn_setup2_back = card_create(lv_obj_0);
        lv_obj_set_name(btn_setup2_back, "btn_setup2_back");
        lv_obj_set_x(btn_setup2_back, 723);
        lv_obj_set_y(btn_setup2_back, 15);
        lv_obj_set_width(btn_setup2_back, 62);
        lv_obj_set_height(btn_setup2_back, 216);
        lv_obj_set_flag(btn_setup2_back, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_setup2_back, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_setup2_back, 0, 0);
        lv_obj_set_style_bg_color(btn_setup2_back, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(btn_setup2_back, 5, 0);
        lv_obj_set_style_shadow_width(btn_setup2_back, 4, 0);
        lv_obj_set_style_shadow_offset_y(btn_setup2_back, 4, 0);
        lv_obj_set_style_shadow_color(btn_setup2_back, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(btn_setup2_back, 64, 0);
        lv_obj_t * arrow_up_right_0 = arrow_up_right_create(btn_setup2_back);
        lv_obj_set_x(arrow_up_right_0, 19);
        lv_obj_set_y(arrow_up_right_0, 84);

        lv_obj_t * label_4 = label_create(btn_setup2_back);
        lv_obj_set_x(label_4, 0);
        lv_obj_set_y(label_4, 108);
        lv_obj_set_width(label_4, 62);
        lv_obj_set_height(label_4, 16);
        lv_label_set_text(label_4, "Setup");
        lv_obj_set_style_text_font(label_4, font_inter_reg_12b.bin, 0);
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
        lv_obj_t * btn_setup2_home = home_b_create(card_1);
        lv_obj_set_name(btn_setup2_home, "btn_setup2_home");
        lv_obj_set_x(btn_setup2_home, 11);
        lv_obj_set_y(btn_setup2_home, 21);
        lv_obj_set_width(btn_setup2_home, 40);
        lv_obj_set_height(btn_setup2_home, 40);
        lv_obj_set_flag(btn_setup2_home, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_setup2_list = list_create(card_1);
        lv_obj_set_name(btn_setup2_list, "btn_setup2_list");
        lv_obj_set_x(btn_setup2_list, 11);
        lv_obj_set_y(btn_setup2_list, 88);
        lv_obj_set_width(btn_setup2_list, 40);
        lv_obj_set_height(btn_setup2_list, 40);
        lv_obj_set_flag(btn_setup2_list, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_setup2_lock = lock_create(card_1);
        lv_obj_set_name(btn_setup2_lock, "btn_setup2_lock");
        lv_obj_set_x(btn_setup2_lock, 11);
        lv_obj_set_y(btn_setup2_lock, 155);
        lv_obj_set_width(btn_setup2_lock, 40);
        lv_obj_set_height(btn_setup2_lock, 40);
        lv_obj_set_flag(btn_setup2_lock, LV_OBJ_FLAG_CLICKABLE, true);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

