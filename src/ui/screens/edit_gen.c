/**
 * @file edit_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "edit_gen.h"
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

lv_obj_t * edit_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "edit_#");
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0xECEAEA), 0);
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_add_style(lv_obj_0, &style_screen_base_global, 0);
        lv_obj_t * btn_edit_simpan = card_create(lv_obj_0);
        lv_obj_set_name(btn_edit_simpan, "btn_edit_simpan");
        lv_obj_set_x(btn_edit_simpan, 723);
        lv_obj_set_y(btn_edit_simpan, 15);
        lv_obj_set_width(btn_edit_simpan, 62);
        lv_obj_set_height(btn_edit_simpan, 216);
        lv_obj_set_flag(btn_edit_simpan, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_edit_simpan, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_edit_simpan, 0, 0);
        lv_obj_set_style_bg_color(btn_edit_simpan, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(btn_edit_simpan, 5, 0);
        lv_obj_set_style_shadow_width(btn_edit_simpan, 4, 0);
        lv_obj_set_style_shadow_offset_y(btn_edit_simpan, 4, 0);
        lv_obj_set_style_shadow_color(btn_edit_simpan, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(btn_edit_simpan, 64, 0);
        lv_obj_t * check_0 = check_create(btn_edit_simpan);
        lv_obj_set_x(check_0, 19);
        lv_obj_set_y(check_0, 84);

        lv_obj_t * label_0 = label_create(btn_edit_simpan);
        lv_obj_set_x(label_0, 0);
        lv_obj_set_y(label_0, 108);
        lv_obj_set_width(label_0, 62);
        lv_obj_set_height(label_0, 16);
        lv_label_set_text(label_0, "Simpan");
        lv_obj_set_style_text_font(label_0, &lv_font_montserrat_12, 0);
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
        lv_obj_t * btn_edit_home = home_b_create(card_0);
        lv_obj_set_name(btn_edit_home, "btn_edit_home");
        lv_obj_set_x(btn_edit_home, 11);
        lv_obj_set_y(btn_edit_home, 21);
        lv_obj_set_width(btn_edit_home, 40);
        lv_obj_set_height(btn_edit_home, 40);
        lv_obj_set_flag(btn_edit_home, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_edit_list = list_create(card_0);
        lv_obj_set_name(btn_edit_list, "btn_edit_list");
        lv_obj_set_x(btn_edit_list, 11);
        lv_obj_set_y(btn_edit_list, 88);
        lv_obj_set_width(btn_edit_list, 40);
        lv_obj_set_height(btn_edit_list, 40);
        lv_obj_set_flag(btn_edit_list, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * btn_edit_lock = lock_create(card_0);
        lv_obj_set_name(btn_edit_lock, "btn_edit_lock");
        lv_obj_set_x(btn_edit_lock, 11);
        lv_obj_set_y(btn_edit_lock, 155);
        lv_obj_set_width(btn_edit_lock, 40);
        lv_obj_set_height(btn_edit_lock, 40);
        lv_obj_set_flag(btn_edit_lock, LV_OBJ_FLAG_CLICKABLE, true);

        lv_obj_t * card_1 = card_create(lv_obj_0);
        lv_obj_set_x(card_1, 15);
        lv_obj_set_y(card_1, 15);
        lv_obj_set_width(card_1, 693);
        lv_obj_set_height(card_1, 450);
        lv_obj_set_flag(card_1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_1, 0, 0);
        lv_obj_set_style_bg_color(card_1, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_1, 5, 0);
        lv_obj_set_style_shadow_width(card_1, 4, 0);
        lv_obj_set_style_shadow_offset_y(card_1, 4, 0);
        lv_obj_set_style_shadow_color(card_1, lv_color_hex(0x000000), 0);
        lv_obj_set_style_shadow_opa(card_1, 64, 0);
        lv_obj_t * btn_add_cabinet = card_create(card_1);
        lv_obj_set_name(btn_add_cabinet, "btn_add_cabinet");
        lv_obj_set_x(btn_add_cabinet, 573);
        lv_obj_set_y(btn_add_cabinet, 15);
        lv_obj_set_width(btn_add_cabinet, 105);
        lv_obj_set_height(btn_add_cabinet, 219);
        lv_obj_set_flag(btn_add_cabinet, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_add_cabinet, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_add_cabinet, 0, 0);
        lv_obj_set_style_bg_color(btn_add_cabinet, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_border_color(btn_add_cabinet, lv_color_hex(0x000000), 0);
        lv_obj_set_style_border_opa(btn_add_cabinet, 118, 0);
        lv_obj_set_style_border_width(btn_add_cabinet, 1, 0);
        lv_obj_set_style_radius(btn_add_cabinet, 5, 0);
        lv_obj_t * plus_0 = plus_create(btn_add_cabinet);
        lv_obj_set_x(plus_0, 44);
        lv_obj_set_y(plus_0, 88);

        lv_obj_t * label_1 = label_create(btn_add_cabinet);
        lv_obj_set_x(label_1, 0);
        lv_obj_set_y(label_1, 110);
        lv_obj_set_width(label_1, 105);
        lv_obj_set_height(label_1, 16);
        lv_label_set_text(label_1, "Tambah");
        lv_obj_set_style_text_font(label_1, &lv_font_montserrat_14, 0);
        lv_obj_set_style_text_color(label_1, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_1, 118, 0);
        lv_obj_set_style_text_align(label_1, LV_TEXT_ALIGN_CENTER, 0);
        lv_label_set_long_mode(label_1, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * container_0 = container_create(card_1);
        lv_obj_set_x(container_0, 16);
        lv_obj_set_y(container_0, 242);
        lv_obj_set_width(container_0, 543);
        lv_obj_set_height(container_0, 7);
        lv_obj_set_flag(container_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_0, 0, 0);
        lv_obj_t * image_0 = image_create(container_0);
        lv_obj_set_x(image_0, 0);
        lv_obj_set_y(image_0, 0);
        lv_obj_set_width(image_0, 17);
        lv_obj_set_height(image_0, 7);
        lv_image_set_src(image_0, image_vec_32_584);
        lv_obj_set_style_radius(image_0, 20, 0);

        lv_obj_t * image_1 = image_create(container_0);
        lv_obj_set_x(image_1, 20);
        lv_obj_set_y(image_1, 0);
        lv_obj_set_width(image_1, 2);
        lv_obj_set_height(image_1, 7);
        lv_image_set_src(image_1, image_vec_32_586);
        lv_obj_set_style_radius(image_1, 20, 0);

        lv_obj_t * image_2 = image_create(container_0);
        lv_obj_set_x(image_2, 25);
        lv_obj_set_y(image_2, 0);
        lv_obj_set_width(image_2, 518);
        lv_obj_set_height(image_2, 7);
        lv_image_set_src(image_2, image_vec_32_585);
        lv_obj_set_style_radius(image_2, 20, 0);

        lv_obj_t * container_1 = container_create(card_1);
        lv_obj_set_x(container_1, 16);
        lv_obj_set_y(container_1, 15);
        lv_obj_set_width(container_1, 543);
        lv_obj_set_height(container_1, 220);
        lv_obj_set_flag(container_1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_1, 0, 0);
        lv_obj_t * card_edit_cab1 = container_create(container_1);
        lv_obj_set_name(card_edit_cab1, "card_edit_cab1");
        lv_obj_set_x(card_edit_cab1, 0);
        lv_obj_set_y(card_edit_cab1, 0);
        lv_obj_set_width(card_edit_cab1, 171);
        lv_obj_set_height(card_edit_cab1, 219);
        lv_obj_set_flag(card_edit_cab1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_edit_cab1, 0, 0);
        lv_obj_t * card_2 = card_create(card_edit_cab1);
        lv_obj_set_x(card_2, 0);
        lv_obj_set_y(card_2, 0);
        lv_obj_set_width(card_2, 171);
        lv_obj_set_height(card_2, 219);
        lv_obj_set_style_bg_color(card_2, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_2, 5, 0);

        lv_obj_t * container_2 = container_create(card_edit_cab1);
        lv_obj_set_x(container_2, 0);
        lv_obj_set_y(container_2, 0);
        lv_obj_set_width(container_2, 171);
        lv_obj_set_height(container_2, 20);
        lv_obj_set_flag(container_2, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_2, 0, 0);
        lv_obj_t * image_3 = image_create(container_2);
        lv_obj_set_x(image_3, 0);
        lv_obj_set_y(image_3, 0);
        lv_obj_set_width(image_3, 150);
        lv_obj_set_height(image_3, 20);
        lv_image_set_src(image_3, image_vec_32_596);
        lv_obj_set_style_radius(image_3, 5, 0);

        lv_obj_t * lbl_edit_cab1_title = label_create(container_2);
        lv_obj_set_name(lbl_edit_cab1_title, "lbl_edit_cab1_title");
        lv_obj_set_x(lbl_edit_cab1_title, 6);
        lv_obj_set_y(lbl_edit_cab1_title, 2);
        lv_obj_set_width(lbl_edit_cab1_title, 138);
        lv_obj_set_height(lbl_edit_cab1_title, 15);
        lv_label_set_text(lbl_edit_cab1_title, "Cabinet 1");
        lv_obj_set_style_text_font(lbl_edit_cab1_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_edit_cab1_title, lv_color_hex(0x000000), 0);

        lv_obj_t * btn_del_cab1 = label_create(container_2);
        lv_obj_set_name(btn_del_cab1, "btn_del_cab1");
        lv_obj_set_x(btn_del_cab1, 150);
        lv_obj_set_y(btn_del_cab1, 2);
        lv_obj_set_width(btn_del_cab1, 21);
        lv_obj_set_height(btn_del_cab1, 18);
        lv_obj_set_flag(btn_del_cab1, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(btn_del_cab1, "x");
        lv_obj_set_style_text_font(btn_del_cab1, font_inter_bold_8, 0);
        lv_obj_set_style_text_color(btn_del_cab1, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(btn_del_cab1, 118, 0);
        lv_obj_set_style_text_align(btn_del_cab1, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_3 = container_create(card_edit_cab1);
        lv_obj_set_x(container_3, 3);
        lv_obj_set_y(container_3, 25);
        lv_obj_set_width(container_3, 7);
        lv_obj_set_height(container_3, 153);
        lv_obj_set_flag(container_3, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_3, 0, 0);
        lv_obj_t * image_4 = image_create(container_3);
        lv_obj_set_x(image_4, 0);
        lv_obj_set_y(image_4, 0);
        lv_obj_set_width(image_4, 7);
        lv_obj_set_height(image_4, 17);
        lv_image_set_src(image_4, image_vec_32_623);
        lv_obj_set_style_radius(image_4, 20, 0);

        lv_obj_t * image_5 = image_create(container_3);
        lv_obj_set_x(image_5, 0);
        lv_obj_set_y(image_5, 25);
        lv_obj_set_width(image_5, 7);
        lv_obj_set_height(image_5, 128);
        lv_image_set_src(image_5, image_vec_32_624);
        lv_obj_set_style_radius(image_5, 20, 0);

        lv_obj_t * container_4 = container_create(card_edit_cab1);
        lv_obj_set_x(container_4, 15);
        lv_obj_set_y(container_4, 25);
        lv_obj_set_width(container_4, 156);
        lv_obj_set_height(container_4, 95);
        lv_obj_set_flag(container_4, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_4, 0, 0);
        lv_obj_t * container_5 = container_create(container_4);
        lv_obj_set_x(container_5, 0);
        lv_obj_set_y(container_5, 0);
        lv_obj_set_width(container_5, 156);
        lv_obj_set_height(container_5, 20);
        lv_obj_set_flag(container_5, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_5, 0, 0);
        lv_obj_t * card_3 = card_create(container_5);
        lv_obj_set_x(card_3, 0);
        lv_obj_set_y(card_3, 0);
        lv_obj_set_width(card_3, 90);
        lv_obj_set_height(card_3, 20);
        lv_obj_set_style_bg_color(card_3, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_3, 5, 0);

        lv_obj_t * image_6 = image_create(container_5);
        lv_obj_set_x(image_6, 95);
        lv_obj_set_y(image_6, 0);
        lv_obj_set_width(image_6, 40);
        lv_obj_set_height(image_6, 20);
        lv_image_set_src(image_6, image_vec_32_605);
        lv_obj_set_style_radius(image_6, 5, 0);

        lv_obj_t * label_2 = label_create(container_5);
        lv_obj_set_x(label_2, 5);
        lv_obj_set_y(label_2, 6);
        lv_obj_set_width(label_2, 80);
        lv_obj_set_height(label_2, 14);
        lv_label_set_text(label_2, "Gelas Ukur");
        lv_obj_set_style_text_font(label_2, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_2, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_2, 118, 0);
        lv_label_set_long_mode(label_2, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * label_3 = label_create(container_5);
        lv_obj_set_x(label_3, 99);
        lv_obj_set_y(label_3, 6);
        lv_obj_set_width(label_3, 32);
        lv_obj_set_height(label_3, 14);
        lv_label_set_text(label_3, "10");
        lv_obj_set_style_text_font(label_3, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_3, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_3, 118, 0);
        lv_obj_set_style_text_align(label_3, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * label_4 = label_create(container_5);
        lv_obj_set_x(label_4, 135);
        lv_obj_set_y(label_4, 4);
        lv_obj_set_width(label_4, 21);
        lv_obj_set_height(label_4, 14);
        lv_obj_set_flag(label_4, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_4, "x");
        lv_obj_set_style_text_font(label_4, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_4, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_4, 118, 0);
        lv_obj_set_style_text_align(label_4, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_6 = container_create(container_4);
        lv_obj_set_x(container_6, 0);
        lv_obj_set_y(container_6, 25);
        lv_obj_set_width(container_6, 156);
        lv_obj_set_height(container_6, 20);
        lv_obj_set_flag(container_6, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_6, 0, 0);
        lv_obj_t * card_4 = card_create(container_6);
        lv_obj_set_x(card_4, 0);
        lv_obj_set_y(card_4, 0);
        lv_obj_set_width(card_4, 90);
        lv_obj_set_height(card_4, 20);
        lv_obj_set_style_bg_color(card_4, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_4, 5, 0);

        lv_obj_t * image_7 = image_create(container_6);
        lv_obj_set_x(image_7, 95);
        lv_obj_set_y(image_7, 0);
        lv_obj_set_width(image_7, 40);
        lv_obj_set_height(image_7, 20);
        lv_image_set_src(image_7, image_vec_32_611);
        lv_obj_set_style_radius(image_7, 5, 0);

        lv_obj_t * label_5 = label_create(container_6);
        lv_obj_set_x(label_5, 135);
        lv_obj_set_y(label_5, 4);
        lv_obj_set_width(label_5, 21);
        lv_obj_set_height(label_5, 14);
        lv_obj_set_flag(label_5, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_5, "x");
        lv_obj_set_style_text_font(label_5, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_5, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_5, 118, 0);
        lv_obj_set_style_text_align(label_5, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_7 = container_create(container_4);
        lv_obj_set_x(container_7, 0);
        lv_obj_set_y(container_7, 50);
        lv_obj_set_width(container_7, 156);
        lv_obj_set_height(container_7, 20);
        lv_obj_set_flag(container_7, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_7, 0, 0);
        lv_obj_t * card_5 = card_create(container_7);
        lv_obj_set_x(card_5, 0);
        lv_obj_set_y(card_5, 0);
        lv_obj_set_width(card_5, 90);
        lv_obj_set_height(card_5, 20);
        lv_obj_set_style_bg_color(card_5, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_5, 5, 0);

        lv_obj_t * image_8 = image_create(container_7);
        lv_obj_set_x(image_8, 95);
        lv_obj_set_y(image_8, 0);
        lv_obj_set_width(image_8, 40);
        lv_obj_set_height(image_8, 20);
        lv_image_set_src(image_8, image_vec_32_615);
        lv_obj_set_style_radius(image_8, 5, 0);

        lv_obj_t * label_6 = label_create(container_7);
        lv_obj_set_x(label_6, 135);
        lv_obj_set_y(label_6, 4);
        lv_obj_set_width(label_6, 21);
        lv_obj_set_height(label_6, 14);
        lv_obj_set_flag(label_6, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_6, "x");
        lv_obj_set_style_text_font(label_6, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_6, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_6, 118, 0);
        lv_obj_set_style_text_align(label_6, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_8 = container_create(container_4);
        lv_obj_set_x(container_8, 0);
        lv_obj_set_y(container_8, 75);
        lv_obj_set_width(container_8, 156);
        lv_obj_set_height(container_8, 20);
        lv_obj_set_flag(container_8, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_8, 0, 0);
        lv_obj_t * card_6 = card_create(container_8);
        lv_obj_set_x(card_6, 0);
        lv_obj_set_y(card_6, 0);
        lv_obj_set_width(card_6, 90);
        lv_obj_set_height(card_6, 20);
        lv_obj_set_style_bg_color(card_6, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_6, 5, 0);

        lv_obj_t * image_9 = image_create(container_8);
        lv_obj_set_x(image_9, 95);
        lv_obj_set_y(image_9, 0);
        lv_obj_set_width(image_9, 40);
        lv_obj_set_height(image_9, 20);
        lv_image_set_src(image_9, image_vec_32_619);
        lv_obj_set_style_radius(image_9, 5, 0);

        lv_obj_t * label_7 = label_create(container_8);
        lv_obj_set_x(label_7, 135);
        lv_obj_set_y(label_7, 4);
        lv_obj_set_width(label_7, 21);
        lv_obj_set_height(label_7, 14);
        lv_obj_set_flag(label_7, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_7, "x");
        lv_obj_set_style_text_font(label_7, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_7, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_7, 118, 0);
        lv_obj_set_style_text_align(label_7, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * btn_add_item_cab1 = card_create(card_edit_cab1);
        lv_obj_set_name(btn_add_item_cab1, "btn_add_item_cab1");
        lv_obj_set_x(btn_add_item_cab1, 0);
        lv_obj_set_y(btn_add_item_cab1, 183);
        lv_obj_set_width(btn_add_item_cab1, 171);
        lv_obj_set_height(btn_add_item_cab1, 36);
        lv_obj_set_flag(btn_add_item_cab1, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_add_item_cab1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_add_item_cab1, 0, 0);
        lv_obj_set_style_bg_color(btn_add_item_cab1, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_border_color(btn_add_item_cab1, lv_color_hex(0x000000), 0);
        lv_obj_set_style_border_opa(btn_add_item_cab1, 118, 0);
        lv_obj_set_style_border_width(btn_add_item_cab1, 1, 0);
        lv_obj_set_style_radius(btn_add_item_cab1, 5, 0);
        lv_obj_t * plus_1 = plus_create(btn_add_item_cab1);
        lv_obj_set_x(plus_1, 46);
        lv_obj_set_y(plus_1, 10);

        lv_obj_t * label_8 = label_create(btn_add_item_cab1);
        lv_obj_set_x(label_8, 66);
        lv_obj_set_y(label_8, 11);
        lv_obj_set_width(label_8, 60);
        lv_obj_set_height(label_8, 15);
        lv_label_set_text(label_8, "Tambah");
        lv_obj_set_style_text_font(label_8, &lv_font_montserrat_12, 0);
        lv_obj_set_style_text_color(label_8, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_8, 118, 0);

        lv_obj_t * card_edit_cab2 = container_create(container_1);
        lv_obj_set_name(card_edit_cab2, "card_edit_cab2");
        lv_obj_set_x(card_edit_cab2, 186);
        lv_obj_set_y(card_edit_cab2, 0);
        lv_obj_set_width(card_edit_cab2, 171);
        lv_obj_set_height(card_edit_cab2, 219);
        lv_obj_set_flag(card_edit_cab2, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_edit_cab2, 0, 0);
        lv_obj_t * card_7 = card_create(card_edit_cab2);
        lv_obj_set_x(card_7, 0);
        lv_obj_set_y(card_7, 0);
        lv_obj_set_width(card_7, 171);
        lv_obj_set_height(card_7, 219);
        lv_obj_set_style_bg_color(card_7, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_7, 5, 0);

        lv_obj_t * container_9 = container_create(card_edit_cab2);
        lv_obj_set_x(container_9, 0);
        lv_obj_set_y(container_9, 0);
        lv_obj_set_width(container_9, 171);
        lv_obj_set_height(container_9, 20);
        lv_obj_set_flag(container_9, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_9, 0, 0);
        lv_obj_t * image_10 = image_create(container_9);
        lv_obj_set_x(image_10, 0);
        lv_obj_set_y(image_10, 0);
        lv_obj_set_width(image_10, 150);
        lv_obj_set_height(image_10, 20);
        lv_image_set_src(image_10, image_vec_29_547);
        lv_obj_set_style_radius(image_10, 5, 0);

        lv_obj_t * lbl_edit_cab2_title = label_create(container_9);
        lv_obj_set_name(lbl_edit_cab2_title, "lbl_edit_cab2_title");
        lv_obj_set_x(lbl_edit_cab2_title, 6);
        lv_obj_set_y(lbl_edit_cab2_title, 2);
        lv_obj_set_width(lbl_edit_cab2_title, 138);
        lv_obj_set_height(lbl_edit_cab2_title, 15);
        lv_label_set_text(lbl_edit_cab2_title, "Cabinet 2");
        lv_obj_set_style_text_font(lbl_edit_cab2_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_edit_cab2_title, lv_color_hex(0x000000), 0);

        lv_obj_t * btn_del_cab2 = label_create(container_9);
        lv_obj_set_name(btn_del_cab2, "btn_del_cab2");
        lv_obj_set_x(btn_del_cab2, 150);
        lv_obj_set_y(btn_del_cab2, 2);
        lv_obj_set_width(btn_del_cab2, 21);
        lv_obj_set_height(btn_del_cab2, 18);
        lv_obj_set_flag(btn_del_cab2, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(btn_del_cab2, "x");
        lv_obj_set_style_text_font(btn_del_cab2, font_inter_bold_8, 0);
        lv_obj_set_style_text_color(btn_del_cab2, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(btn_del_cab2, 118, 0);
        lv_obj_set_style_text_align(btn_del_cab2, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_10 = container_create(card_edit_cab2);
        lv_obj_set_x(container_10, 3);
        lv_obj_set_y(container_10, 25);
        lv_obj_set_width(container_10, 7);
        lv_obj_set_height(container_10, 153);
        lv_obj_set_flag(container_10, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_10, 0, 0);
        lv_obj_t * image_11 = image_create(container_10);
        lv_obj_set_x(image_11, 0);
        lv_obj_set_y(image_11, 0);
        lv_obj_set_width(image_11, 7);
        lv_obj_set_height(image_11, 17);
        lv_image_set_src(image_11, image_vec_32_589);
        lv_obj_set_style_radius(image_11, 20, 0);

        lv_obj_t * image_12 = image_create(container_10);
        lv_obj_set_x(image_12, 0);
        lv_obj_set_y(image_12, 25);
        lv_obj_set_width(image_12, 7);
        lv_obj_set_height(image_12, 128);
        lv_image_set_src(image_12, image_vec_32_590);
        lv_obj_set_style_radius(image_12, 20, 0);

        lv_obj_t * container_11 = container_create(card_edit_cab2);
        lv_obj_set_x(container_11, 15);
        lv_obj_set_y(container_11, 25);
        lv_obj_set_width(container_11, 156);
        lv_obj_set_height(container_11, 95);
        lv_obj_set_flag(container_11, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_11, 0, 0);
        lv_obj_t * container_12 = container_create(container_11);
        lv_obj_set_x(container_12, 0);
        lv_obj_set_y(container_12, 0);
        lv_obj_set_width(container_12, 156);
        lv_obj_set_height(container_12, 20);
        lv_obj_set_flag(container_12, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_12, 0, 0);
        lv_obj_t * card_8 = card_create(container_12);
        lv_obj_set_x(card_8, 0);
        lv_obj_set_y(card_8, 0);
        lv_obj_set_width(card_8, 90);
        lv_obj_set_height(card_8, 20);
        lv_obj_set_style_bg_color(card_8, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_8, 5, 0);

        lv_obj_t * image_13 = image_create(container_12);
        lv_obj_set_x(image_13, 95);
        lv_obj_set_y(image_13, 0);
        lv_obj_set_width(image_13, 40);
        lv_obj_set_height(image_13, 20);
        lv_image_set_src(image_13, image_vec_31_724);
        lv_obj_set_style_radius(image_13, 5, 0);

        lv_obj_t * label_9 = label_create(container_12);
        lv_obj_set_x(label_9, 5);
        lv_obj_set_y(label_9, 6);
        lv_obj_set_width(label_9, 80);
        lv_obj_set_height(label_9, 14);
        lv_label_set_text(label_9, "Gelas Ukur");
        lv_obj_set_style_text_font(label_9, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_9, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_9, 118, 0);
        lv_label_set_long_mode(label_9, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * label_10 = label_create(container_12);
        lv_obj_set_x(label_10, 99);
        lv_obj_set_y(label_10, 6);
        lv_obj_set_width(label_10, 32);
        lv_obj_set_height(label_10, 14);
        lv_label_set_text(label_10, "10");
        lv_obj_set_style_text_font(label_10, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_10, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_10, 118, 0);
        lv_obj_set_style_text_align(label_10, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * label_11 = label_create(container_12);
        lv_obj_set_x(label_11, 135);
        lv_obj_set_y(label_11, 4);
        lv_obj_set_width(label_11, 21);
        lv_obj_set_height(label_11, 14);
        lv_obj_set_flag(label_11, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_11, "x");
        lv_obj_set_style_text_font(label_11, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_11, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_11, 118, 0);
        lv_obj_set_style_text_align(label_11, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_13 = container_create(container_11);
        lv_obj_set_x(container_13, 0);
        lv_obj_set_y(container_13, 25);
        lv_obj_set_width(container_13, 156);
        lv_obj_set_height(container_13, 20);
        lv_obj_set_flag(container_13, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_13, 0, 0);
        lv_obj_t * card_9 = card_create(container_13);
        lv_obj_set_x(card_9, 0);
        lv_obj_set_y(card_9, 0);
        lv_obj_set_width(card_9, 90);
        lv_obj_set_height(card_9, 20);
        lv_obj_set_style_bg_color(card_9, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_9, 5, 0);

        lv_obj_t * image_14 = image_create(container_13);
        lv_obj_set_x(image_14, 95);
        lv_obj_set_y(image_14, 0);
        lv_obj_set_width(image_14, 40);
        lv_obj_set_height(image_14, 20);
        lv_image_set_src(image_14, image_vec_31_727);
        lv_obj_set_style_radius(image_14, 5, 0);

        lv_obj_t * label_12 = label_create(container_13);
        lv_obj_set_x(label_12, 135);
        lv_obj_set_y(label_12, 4);
        lv_obj_set_width(label_12, 21);
        lv_obj_set_height(label_12, 14);
        lv_obj_set_flag(label_12, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_12, "x");
        lv_obj_set_style_text_font(label_12, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_12, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_12, 118, 0);
        lv_obj_set_style_text_align(label_12, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_14 = container_create(container_11);
        lv_obj_set_x(container_14, 0);
        lv_obj_set_y(container_14, 50);
        lv_obj_set_width(container_14, 156);
        lv_obj_set_height(container_14, 20);
        lv_obj_set_flag(container_14, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_14, 0, 0);
        lv_obj_t * card_10 = card_create(container_14);
        lv_obj_set_x(card_10, 0);
        lv_obj_set_y(card_10, 0);
        lv_obj_set_width(card_10, 90);
        lv_obj_set_height(card_10, 20);
        lv_obj_set_style_bg_color(card_10, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_10, 5, 0);

        lv_obj_t * image_15 = image_create(container_14);
        lv_obj_set_x(image_15, 95);
        lv_obj_set_y(image_15, 0);
        lv_obj_set_width(image_15, 40);
        lv_obj_set_height(image_15, 20);
        lv_image_set_src(image_15, image_vec_31_730);
        lv_obj_set_style_radius(image_15, 5, 0);

        lv_obj_t * label_13 = label_create(container_14);
        lv_obj_set_x(label_13, 135);
        lv_obj_set_y(label_13, 4);
        lv_obj_set_width(label_13, 21);
        lv_obj_set_height(label_13, 14);
        lv_obj_set_flag(label_13, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_13, "x");
        lv_obj_set_style_text_font(label_13, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_13, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_13, 118, 0);
        lv_obj_set_style_text_align(label_13, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_15 = container_create(container_11);
        lv_obj_set_x(container_15, 0);
        lv_obj_set_y(container_15, 75);
        lv_obj_set_width(container_15, 156);
        lv_obj_set_height(container_15, 20);
        lv_obj_set_flag(container_15, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_15, 0, 0);
        lv_obj_t * card_11 = card_create(container_15);
        lv_obj_set_x(card_11, 0);
        lv_obj_set_y(card_11, 0);
        lv_obj_set_width(card_11, 90);
        lv_obj_set_height(card_11, 20);
        lv_obj_set_style_bg_color(card_11, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_11, 5, 0);

        lv_obj_t * image_16 = image_create(container_15);
        lv_obj_set_x(image_16, 95);
        lv_obj_set_y(image_16, 0);
        lv_obj_set_width(image_16, 40);
        lv_obj_set_height(image_16, 20);
        lv_image_set_src(image_16, image_vec_31_733);
        lv_obj_set_style_radius(image_16, 5, 0);

        lv_obj_t * label_14 = label_create(container_15);
        lv_obj_set_x(label_14, 135);
        lv_obj_set_y(label_14, 4);
        lv_obj_set_width(label_14, 21);
        lv_obj_set_height(label_14, 14);
        lv_obj_set_flag(label_14, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_14, "x");
        lv_obj_set_style_text_font(label_14, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_14, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_14, 118, 0);
        lv_obj_set_style_text_align(label_14, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * btn_add_item_cab2 = card_create(card_edit_cab2);
        lv_obj_set_name(btn_add_item_cab2, "btn_add_item_cab2");
        lv_obj_set_x(btn_add_item_cab2, 0);
        lv_obj_set_y(btn_add_item_cab2, 183);
        lv_obj_set_width(btn_add_item_cab2, 171);
        lv_obj_set_height(btn_add_item_cab2, 36);
        lv_obj_set_flag(btn_add_item_cab2, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_add_item_cab2, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_add_item_cab2, 0, 0);
        lv_obj_set_style_bg_color(btn_add_item_cab2, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_border_color(btn_add_item_cab2, lv_color_hex(0x000000), 0);
        lv_obj_set_style_border_opa(btn_add_item_cab2, 118, 0);
        lv_obj_set_style_border_width(btn_add_item_cab2, 1, 0);
        lv_obj_set_style_radius(btn_add_item_cab2, 5, 0);
        lv_obj_t * plus_2 = plus_create(btn_add_item_cab2);
        lv_obj_set_x(plus_2, 46);
        lv_obj_set_y(plus_2, 10);

        lv_obj_t * label_15 = label_create(btn_add_item_cab2);
        lv_obj_set_x(label_15, 66);
        lv_obj_set_y(label_15, 11);
        lv_obj_set_width(label_15, 60);
        lv_obj_set_height(label_15, 15);
        lv_label_set_text(label_15, "Tambah");
        lv_obj_set_style_text_font(label_15,  &lv_font_montserrat_14, 0);
        lv_obj_set_style_text_color(label_15, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_15, 118, 0);

        lv_obj_t * card_edit_cab3 = container_create(container_1);
        lv_obj_set_name(card_edit_cab3, "card_edit_cab3");
        lv_obj_set_x(card_edit_cab3, 372);
        lv_obj_set_y(card_edit_cab3, 0);
        lv_obj_set_width(card_edit_cab3, 171);
        lv_obj_set_height(card_edit_cab3, 219);
        lv_obj_set_flag(card_edit_cab3, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(card_edit_cab3, 0, 0);
        lv_obj_t * card_12 = card_create(card_edit_cab3);
        lv_obj_set_x(card_12, 0);
        lv_obj_set_y(card_12, 0);
        lv_obj_set_width(card_12, 171);
        lv_obj_set_height(card_12, 219);
        lv_obj_set_style_bg_color(card_12, lv_color_hex(0xF8F6F6), 0);
        lv_obj_set_style_radius(card_12, 5, 0);

        lv_obj_t * container_16 = container_create(card_edit_cab3);
        lv_obj_set_x(container_16, 0);
        lv_obj_set_y(container_16, 0);
        lv_obj_set_width(container_16, 171);
        lv_obj_set_height(container_16, 20);
        lv_obj_set_flag(container_16, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_16, 0, 0);
        lv_obj_t * image_17 = image_create(container_16);
        lv_obj_set_x(image_17, 0);
        lv_obj_set_y(image_17, 0);
        lv_obj_set_width(image_17, 150);
        lv_obj_set_height(image_17, 20);
        lv_image_set_src(image_17, image_vec_32_631);
        lv_obj_set_style_radius(image_17, 5, 0);

        lv_obj_t * lbl_edit_cab3_title = label_create(container_16);
        lv_obj_set_name(lbl_edit_cab3_title, "lbl_edit_cab3_title");
        lv_obj_set_x(lbl_edit_cab3_title, 6);
        lv_obj_set_y(lbl_edit_cab3_title, 2);
        lv_obj_set_width(lbl_edit_cab3_title, 138);
        lv_obj_set_height(lbl_edit_cab3_title, 15);
        lv_label_set_text(lbl_edit_cab3_title, "Cabinet 3");
        lv_obj_set_style_text_font(lbl_edit_cab3_title, font_inter_semi_bold_12, 0);
        lv_obj_set_style_text_color(lbl_edit_cab3_title, lv_color_hex(0x000000), 0);

        lv_obj_t * btn_del_cab3 = label_create(container_16);
        lv_obj_set_name(btn_del_cab3, "btn_del_cab3");
        lv_obj_set_x(btn_del_cab3, 150);
        lv_obj_set_y(btn_del_cab3, 2);
        lv_obj_set_width(btn_del_cab3, 21);
        lv_obj_set_height(btn_del_cab3, 18);
        lv_obj_set_flag(btn_del_cab3, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(btn_del_cab3, "x");
        lv_obj_set_style_text_font(btn_del_cab3, font_inter_bold_8, 0);
        lv_obj_set_style_text_color(btn_del_cab3, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(btn_del_cab3, 118, 0);
        lv_obj_set_style_text_align(btn_del_cab3, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_17 = container_create(card_edit_cab3);
        lv_obj_set_x(container_17, 3);
        lv_obj_set_y(container_17, 25);
        lv_obj_set_width(container_17, 7);
        lv_obj_set_height(container_17, 153);
        lv_obj_set_flag(container_17, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_17, 0, 0);
        lv_obj_t * image_18 = image_create(container_17);
        lv_obj_set_x(image_18, 0);
        lv_obj_set_y(image_18, 0);
        lv_obj_set_width(image_18, 7);
        lv_obj_set_height(image_18, 17);
        lv_image_set_src(image_18, image_vec_32_658);
        lv_obj_set_style_radius(image_18, 20, 0);

        lv_obj_t * image_19 = image_create(container_17);
        lv_obj_set_x(image_19, 0);
        lv_obj_set_y(image_19, 25);
        lv_obj_set_width(image_19, 7);
        lv_obj_set_height(image_19, 128);
        lv_image_set_src(image_19, image_vec_32_659);
        lv_obj_set_style_radius(image_19, 20, 0);

        lv_obj_t * container_18 = container_create(card_edit_cab3);
        lv_obj_set_x(container_18, 15);
        lv_obj_set_y(container_18, 25);
        lv_obj_set_width(container_18, 156);
        lv_obj_set_height(container_18, 95);
        lv_obj_set_flag(container_18, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_18, 0, 0);
        lv_obj_t * container_19 = container_create(container_18);
        lv_obj_set_x(container_19, 0);
        lv_obj_set_y(container_19, 0);
        lv_obj_set_width(container_19, 156);
        lv_obj_set_height(container_19, 20);
        lv_obj_set_flag(container_19, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_19, 0, 0);
        lv_obj_t * card_13 = card_create(container_19);
        lv_obj_set_x(card_13, 0);
        lv_obj_set_y(card_13, 0);
        lv_obj_set_width(card_13, 90);
        lv_obj_set_height(card_13, 20);
        lv_obj_set_style_bg_color(card_13, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_13, 5, 0);

        lv_obj_t * image_20 = image_create(container_19);
        lv_obj_set_x(image_20, 95);
        lv_obj_set_y(image_20, 0);
        lv_obj_set_width(image_20, 40);
        lv_obj_set_height(image_20, 20);
        lv_image_set_src(image_20, image_vec_32_640);
        lv_obj_set_style_radius(image_20, 5, 0);

        lv_obj_t * label_16 = label_create(container_19);
        lv_obj_set_x(label_16, 5);
        lv_obj_set_y(label_16, 6);
        lv_obj_set_width(label_16, 80);
        lv_obj_set_height(label_16, 14);
        lv_label_set_text(label_16, "Gelas Ukur");
        lv_obj_set_style_text_font(label_16, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_16, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_16, 118, 0);
        lv_label_set_long_mode(label_16, LV_LABEL_LONG_MODE_CLIP);

        lv_obj_t * label_17 = label_create(container_19);
        lv_obj_set_x(label_17, 99);
        lv_obj_set_y(label_17, 6);
        lv_obj_set_width(label_17, 32);
        lv_obj_set_height(label_17, 14);
        lv_label_set_text(label_17, "10");
        lv_obj_set_style_text_font(label_17, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_17, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_17, 118, 0);
        lv_obj_set_style_text_align(label_17, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * label_18 = label_create(container_19);
        lv_obj_set_x(label_18, 135);
        lv_obj_set_y(label_18, 4);
        lv_obj_set_width(label_18, 21);
        lv_obj_set_height(label_18, 14);
        lv_obj_set_flag(label_18, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_18, "x");
        lv_obj_set_style_text_font(label_18, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_18, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_18, 118, 0);
        lv_obj_set_style_text_align(label_18, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_20 = container_create(container_18);
        lv_obj_set_x(container_20, 0);
        lv_obj_set_y(container_20, 25);
        lv_obj_set_width(container_20, 156);
        lv_obj_set_height(container_20, 20);
        lv_obj_set_flag(container_20, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_20, 0, 0);
        lv_obj_t * card_14 = card_create(container_20);
        lv_obj_set_x(card_14, 0);
        lv_obj_set_y(card_14, 0);
        lv_obj_set_width(card_14, 90);
        lv_obj_set_height(card_14, 20);
        lv_obj_set_style_bg_color(card_14, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_14, 5, 0);

        lv_obj_t * image_21 = image_create(container_20);
        lv_obj_set_x(image_21, 95);
        lv_obj_set_y(image_21, 0);
        lv_obj_set_width(image_21, 40);
        lv_obj_set_height(image_21, 20);
        lv_image_set_src(image_21, image_vec_32_646);
        lv_obj_set_style_radius(image_21, 5, 0);

        lv_obj_t * label_19 = label_create(container_20);
        lv_obj_set_x(label_19, 135);
        lv_obj_set_y(label_19, 4);
        lv_obj_set_width(label_19, 21);
        lv_obj_set_height(label_19, 14);
        lv_obj_set_flag(label_19, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_19, "x");
        lv_obj_set_style_text_font(label_19, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_19, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_19, 118, 0);
        lv_obj_set_style_text_align(label_19, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_21 = container_create(container_18);
        lv_obj_set_x(container_21, 0);
        lv_obj_set_y(container_21, 50);
        lv_obj_set_width(container_21, 156);
        lv_obj_set_height(container_21, 20);
        lv_obj_set_flag(container_21, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_21, 0, 0);
        lv_obj_t * card_15 = card_create(container_21);
        lv_obj_set_x(card_15, 0);
        lv_obj_set_y(card_15, 0);
        lv_obj_set_width(card_15, 90);
        lv_obj_set_height(card_15, 20);
        lv_obj_set_style_bg_color(card_15, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_15, 5, 0);

        lv_obj_t * image_22 = image_create(container_21);
        lv_obj_set_x(image_22, 95);
        lv_obj_set_y(image_22, 0);
        lv_obj_set_width(image_22, 40);
        lv_obj_set_height(image_22, 20);
        lv_image_set_src(image_22, image_vec_32_650);
        lv_obj_set_style_radius(image_22, 5, 0);

        lv_obj_t * label_20 = label_create(container_21);
        lv_obj_set_x(label_20, 135);
        lv_obj_set_y(label_20, 4);
        lv_obj_set_width(label_20, 21);
        lv_obj_set_height(label_20, 14);
        lv_obj_set_flag(label_20, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_20, "x");
        lv_obj_set_style_text_font(label_20, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_20, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_20, 118, 0);
        lv_obj_set_style_text_align(label_20, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * container_22 = container_create(container_18);
        lv_obj_set_x(container_22, 0);
        lv_obj_set_y(container_22, 75);
        lv_obj_set_width(container_22, 156);
        lv_obj_set_height(container_22, 20);
        lv_obj_set_flag(container_22, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(container_22, 0, 0);
        lv_obj_t * card_16 = card_create(container_22);
        lv_obj_set_x(card_16, 0);
        lv_obj_set_y(card_16, 0);
        lv_obj_set_width(card_16, 90);
        lv_obj_set_height(card_16, 20);
        lv_obj_set_style_bg_color(card_16, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_radius(card_16, 5, 0);

        lv_obj_t * image_23 = image_create(container_22);
        lv_obj_set_x(image_23, 95);
        lv_obj_set_y(image_23, 0);
        lv_obj_set_width(image_23, 40);
        lv_obj_set_height(image_23, 20);
        lv_image_set_src(image_23, image_vec_32_654);
        lv_obj_set_style_radius(image_23, 5, 0);

        lv_obj_t * label_21 = label_create(container_22);
        lv_obj_set_x(label_21, 135);
        lv_obj_set_y(label_21, 4);
        lv_obj_set_width(label_21, 21);
        lv_obj_set_height(label_21, 14);
        lv_obj_set_flag(label_21, LV_OBJ_FLAG_CLICKABLE, true);
        lv_label_set_text(label_21, "x");
        lv_obj_set_style_text_font(label_21, font_inter_regular_8, 0);
        lv_obj_set_style_text_color(label_21, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_21, 118, 0);
        lv_obj_set_style_text_align(label_21, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * btn_add_item_cab3 = card_create(card_edit_cab3);
        lv_obj_set_name(btn_add_item_cab3, "btn_add_item_cab3");
        lv_obj_set_x(btn_add_item_cab3, 0);
        lv_obj_set_y(btn_add_item_cab3, 183);
        lv_obj_set_width(btn_add_item_cab3, 171);
        lv_obj_set_height(btn_add_item_cab3, 36);
        lv_obj_set_flag(btn_add_item_cab3, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_set_flag(btn_add_item_cab3, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_pad_all(btn_add_item_cab3, 0, 0);
        lv_obj_set_style_bg_color(btn_add_item_cab3, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_border_color(btn_add_item_cab3, lv_color_hex(0x000000), 0);
        lv_obj_set_style_border_opa(btn_add_item_cab3, 118, 0);
        lv_obj_set_style_border_width(btn_add_item_cab3, 1, 0);
        lv_obj_set_style_radius(btn_add_item_cab3, 5, 0);
        lv_obj_t * plus_3 = plus_create(btn_add_item_cab3);
        lv_obj_set_x(plus_3, 46);
        lv_obj_set_y(plus_3, 10);

        lv_obj_t * label_22 = label_create(btn_add_item_cab3);
        lv_obj_set_x(label_22, 66);
        lv_obj_set_y(label_22, 11);
        lv_obj_set_width(label_22, 60);
        lv_obj_set_height(label_22, 15);
        lv_label_set_text(label_22, "Tambah");
        lv_obj_set_style_text_font(label_22, &lv_font_montserrat_12, 0);
        lv_obj_set_style_text_color(label_22, lv_color_hex(0x000000), 0);
        lv_obj_set_style_text_opa(label_22, 118, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

