/**
 * @file n_18_9_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "n_18_9_gen.h"
#include "../../display_meja.h"

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

lv_obj_t * n_18_9_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_span_1;
    static lv_style_t style_span_2;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&style_span_1);
        lv_style_init(&style_span_2);

        lv_style_set_text_color(&style_span_1, lv_color_hex(0x000000));
        lv_style_set_text_font(&style_span_1, font_inter_semi_bold_30);
        lv_style_set_text_color(&style_span_2, lv_color_hex(0x000000));
        lv_style_set_text_font(&style_span_2, font_inter_regular_30);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        lv_obj_t * spangroup_0 = spangroup_create(parent);
        lv_obj_set_name_static(spangroup_0, "n_18_9_#");
        lv_obj_set_width(spangroup_0, LV_SIZE_CONTENT);
        lv_obj_set_height(spangroup_0, LV_SIZE_CONTENT);

        lv_span_t * lv_spangroup_span_0 = lv_spangroup_add_span(spangroup_0);
        lv_spangroup_set_span_text(spangroup_0, lv_spangroup_span_0, "18.9 ");
        lv_spangroup_set_span_style(spangroup_0, lv_spangroup_span_0, &style_span_1);
        lv_span_t * lv_spangroup_span_1 = lv_spangroup_add_span(spangroup_0);
        lv_spangroup_set_span_text(spangroup_0, lv_spangroup_span_1, "°");
        lv_spangroup_set_span_style(spangroup_0, lv_spangroup_span_1, &style_span_2);
        lv_span_t * lv_spangroup_span_2 = lv_spangroup_add_span(spangroup_0);
        lv_spangroup_set_span_text(spangroup_0, lv_spangroup_span_2, "C");
        lv_spangroup_set_span_style(spangroup_0, lv_spangroup_span_2, &style_span_1);

        the_root = spangroup_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

