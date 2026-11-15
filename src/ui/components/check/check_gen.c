/**
 * @file check_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "check_gen.h"
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

lv_obj_t * check_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        lv_obj_t * image_0 = image_create(parent);
        lv_obj_set_name_static(image_0, "check_#");
        lv_obj_set_width(image_0, 24);
        lv_obj_set_height(image_0, 24);
        lv_image_set_src(image_0, image_check_29517);
        lv_obj_set_flag(image_0, LV_OBJ_FLAG_SCROLLABLE, false);

        the_root = image_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

