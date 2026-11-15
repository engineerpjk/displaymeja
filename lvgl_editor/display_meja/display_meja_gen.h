/**
 * @file display_meja_gen.h
 */

#ifndef LVGL_PRO_DISPLAY_MEJA_GEN_H
#define LVGL_PRO_DISPLAY_MEJA_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#if defined(LV_USE_XML) && LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/* Prototypes for target functions, needed by responsive const definitions */

void display_meja_set_target(uint32_t target);
uint32_t display_meja_get_target(void);
bool display_meja_check_target(uint32_t target);

/*********************
 *      DEFINES
 *********************/

#define DISPLAY_MEJA_TARGET_UNDEFINED  (0 << 1)
#define DISPLAY_MEJA_TARGET_TARGET1    (1 << 1)
#define DISPLAY_MEJA_TARGET_ALL        0x0FFFFFFF

/* By default compile for all targets, allowing to switch to any targets at runtime */
#ifndef DISPLAY_MEJA_COMPILE_TARGET
#define DISPLAY_MEJA_COMPILE_TARGET DISPLAY_MEJA_TARGET_ALL
#endif

#define DISPLAY_MEJA_CHECK_COMPILE_TARGET(target) (DISPLAY_MEJA_COMPILE_TARGET & (target) ? 1 : 0)

#define CONST_BASELIB_ACCENT_GLOBAL lv_color_hex(0x70609C)
#define CONST_BASELIB_ACCENT_TEXT_GLOBAL lv_color_hex(0xFFFFFF)
#define CONST_BASELIB_UNIT_SM_GLOBAL 4


#ifndef LV_XML_EVAL_STRING_BUF_SIZE
    #define LV_XML_EVAL_STRING_BUF_SIZE 256
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

extern lv_style_t style_screen_base_global;
extern lv_style_t style_list_16_global;
extern lv_style_t style_list_20_global;
extern lv_style_t style_list_24_global;
extern lv_style_t style_list_32_global;
extern lv_style_t style_list_40_global;
extern lv_style_t style_list_48_global;
extern lv_style_t style_lock_16_global;
extern lv_style_t style_lock_20_global;
extern lv_style_t style_lock_24_global;
extern lv_style_t style_lock_32_global;
extern lv_style_t style_lock_40_global;
extern lv_style_t style_lock_48_global;

/*----------------
 * Fonts
 *----------------*/

/* Targets: any */
extern lv_font_t * font_inter_regular_12_204611778259277;
extern lv_font_t * font_lato_bold_60;
extern lv_font_t * font_lato_semibold_36;
extern lv_font_t * font_lato_semibold_18;
extern lv_font_t * font_lato_regular_36;
extern lv_font_t * font_lato_bold_16;
extern lv_font_t * font_inter_regular_9_204611778259277;
extern lv_font_t * font_lato_bold_36;
extern lv_font_t * font_inter_semi_bold_12;
extern lv_font_t * font_inter_bold_8;
extern lv_font_t * font_inter_regular_12_062697410583496;
extern lv_font_t * font_inter_regular_8;
extern lv_font_t * font_inter_semi_bold_30;
extern lv_font_t * font_inter_regular_30;
extern lv_font_t * font_inter_bold_60;
extern lv_font_t * font_inter_regular_16;
extern lv_font_t * font_inter_italic_16;


/*----------------
 * Images
 *----------------*/

/* Targets: any */
extern const void * image_logo_blush_b_final_1;
extern const void * image_vec_1_105;
extern const void * image_vec_1_106;
extern const void * image_vec_28_203;
extern const void * image_vec_28_204;
extern const void * image_vec_28_205;
extern const void * image_line;
extern const void * image_arrow_up_right_31877;
extern const void * image_check_29517;
extern const void * image_plus_30659;
extern const void * image_size_48_171640;
extern const void * image_size_48_171655;
extern const void * image_home_171664;
extern const void * image_vec_30_574;
extern const void * image_vec_32_584;
extern const void * image_vec_32_586;
extern const void * image_vec_32_585;
extern const void * image_vec_32_631;
extern const void * image_vec_32_640;
extern const void * image_vec_32_646;
extern const void * image_vec_32_650;
extern const void * image_vec_32_654;
extern const void * image_vec_32_658;
extern const void * image_vec_32_659;
extern const void * image_vec_32_660;
extern const void * image_vec_29_547;
extern const void * image_vec_31_724;
extern const void * image_vec_31_727;
extern const void * image_vec_31_730;
extern const void * image_vec_31_733;
extern const void * image_vec_32_589;
extern const void * image_vec_32_590;
extern const void * image_vec_32_591;
extern const void * image_vec_32_596;
extern const void * image_vec_32_605;
extern const void * image_vec_32_611;
extern const void * image_vec_32_615;
extern const void * image_vec_32_619;
extern const void * image_vec_32_623;
extern const void * image_vec_32_624;
extern const void * image_vec_32_625;
extern const void * img_weather_cerah;
extern const void * img_weather_berawan;
extern const void * img_weather_gerimis;
extern const void * img_weather_deras;

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void display_meja_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "components/arrow_up_right/arrow_up_right_gen.h"
#include "components/base/card/card_gen.h"
#include "components/base/container/container_gen.h"
#include "components/base/image/image_gen.h"
#include "components/base/label/label_gen.h"
#include "components/base/panel/panel_gen.h"
#include "components/base/spangroup/spangroup_gen.h"
#include "components/c/c_gen.h"
#include "components/check/check_gen.h"
#include "components/home_b/home_b_gen.h"
#include "components/list/list_gen.h"
#include "components/lock/lock_gen.h"
#include "components/n_01_sunny_color/n_01_sunny_color_gen.h"
#include "components/n_18_9/n_18_9_gen.h"
#include "components/plus/plus_gen.h"
#include "screens/edit_gen.h"
#include "screens/home_gen.h"
#include "screens/setup_datetimeloc_gen.h"
#include "screens/setup_wifi_gen.h"
#include "screens/standby_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_PRO_DISPLAY_MEJA_GEN_H*/