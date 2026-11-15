/**
 * @file n_01_sunny_color_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "n_01_sunny_color_gen.h"
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

lv_obj_t * n_01_sunny_color_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        lv_obj_t * container_0 = container_create(parent);
        lv_obj_set_name_static(container_0, "n_01_sunny_color_#");
        lv_obj_set_width(container_0, 64);
        lv_obj_set_height(container_0, 64);

        lv_obj_t * container_1 = container_create(container_0);
        lv_obj_set_align(container_1, LV_ALIGN_CENTER);
        lv_obj_set_x(container_1, 0);
        lv_obj_set_y(container_1, 0);
        lv_obj_set_width(container_1, 64);
        lv_obj_set_height(container_1, 64);

        lv_obj_t * image_0 = image_create(container_0);
        lv_obj_set_x(image_0, 14);
        lv_obj_set_y(image_0, 14);
        lv_obj_set_width(image_0, 36);
        lv_obj_set_height(image_0, 36);
        lv_image_set_src(image_0, image_vec_1_105);

        lv_obj_t * image_1 = image_create(container_0);
        lv_obj_set_x(image_1, 2);
        lv_obj_set_y(image_1, 2);
        lv_obj_set_width(image_1, 60);
        lv_obj_set_height(image_1, 60);
        lv_image_set_src(image_1, image_vec_1_106);

        the_root = container_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

