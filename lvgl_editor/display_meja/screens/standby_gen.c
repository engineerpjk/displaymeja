/**
 * @file standby_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "standby_gen.h"
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

lv_obj_t * standby_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "standby_#");
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0xECEAEA), 0);
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_add_style(lv_obj_0, &style_screen_base_global, 0);
        lv_obj_t * img_logo_standby = image_create(lv_obj_0);
        lv_obj_set_name(img_logo_standby, "img_logo_standby");
        lv_obj_set_x(img_logo_standby, 245);
        lv_obj_set_y(img_logo_standby, 181);
        lv_obj_set_width(img_logo_standby, 310);
        lv_obj_set_height(img_logo_standby, 117);
        lv_image_set_src(img_logo_standby, image_logo_blush_b_final_1);

        lv_obj_t * btn_standby_setup = card_create(lv_obj_0);
        lv_obj_set_name(btn_standby_setup, "btn_standby_setup");
        lv_obj_set_x(btn_standby_setup, 723);
        lv_obj_set_y(btn_standby_setup, 15);
        lv_obj_set_width(btn_standby_setup, 62);
        lv_obj_set_height(btn_standby_setup, 216);
        lv_obj_set_flag(btn_standby_setup, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_standby_setup, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_standby_setup, 0, 0);
        lv_obj_set_style_bg_color(btn_standby_setup, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(btn_standby_setup, 5, 0);
        lv_obj_set_style_shadow_width(btn_standby_setup, 4, 0);
        lv_obj_set_style_shadow_offset_y(btn_standby_setup, 4, 0);
        lv_obj_set_style_shadow_color(btn_standby_setup, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(btn_standby_setup, 64, 0);
        lv_obj_t * arrow_up_right_0 = arrow_up_right_create(btn_standby_setup);
        lv_obj_set_x(arrow_up_right_0, 19);
        lv_obj_set_y(arrow_up_right_0, 84);

        lv_obj_t * label_0 = label_create(btn_standby_setup);
        lv_obj_set_x(label_0, 0);
        lv_obj_set_y(label_0, 108);
        lv_obj_set_width(label_0, 62);
        lv_obj_set_height(label_0, 16);
        lv_label_set_text(label_0, "Setup");
        lv_obj_set_style_text_font(label_0, font_inter_regular_12_204611778259277, 0);
        lv_obj_set_style_text_color(label_0, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_0, 118, 0);
        lv_obj_set_style_text_align(label_0, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * card_0 = card_create(lv_obj_0);
        lv_obj_set_x(card_0, 723);
        lv_obj_set_y(card_0, 248);
        lv_obj_set_width(card_0, 62);
        lv_obj_set_height(card_0, 216);
        lv_obj_set_flag(card_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_0, 0, 0);
        lv_obj_set_style_bg_color(card_0, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_0, 5, 0);
        lv_obj_set_style_shadow_width(card_0, 4, 0);
        lv_obj_set_style_shadow_offset_y(card_0, 4, 0);
        lv_obj_set_style_shadow_color(card_0, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(card_0, 64, 0);
        lv_obj_t * btn_nav_home = home_b_create(card_0);
        lv_obj_set_name(btn_nav_home, "btn_nav_home");
        lv_obj_set_x(btn_nav_home, 11);
        lv_obj_set_y(btn_nav_home, 21);
        lv_obj_set_width(btn_nav_home, 40);
        lv_obj_set_height(btn_nav_home, 40);
        lv_obj_set_flag(btn_nav_home, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_nav_list = list_create(card_0);
        lv_obj_set_name(btn_nav_list, "btn_nav_list");
        lv_obj_set_x(btn_nav_list, 11);
        lv_obj_set_y(btn_nav_list, 88);
        lv_obj_set_width(btn_nav_list, 40);
        lv_obj_set_height(btn_nav_list, 40);
        lv_obj_set_flag(btn_nav_list, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_nav_lock = lock_create(card_0);
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

