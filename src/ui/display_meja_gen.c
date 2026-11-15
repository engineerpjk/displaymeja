/*
 * @file display_meja_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "display_meja_gen.h"

#if defined(LV_USE_XML) && LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void check_font(lv_font_t ** font, const char * name);

/**********************
 *  STATIC VARIABLES
 **********************/

static uint32_t display_meja_target = DISPLAY_MEJA_TARGET_ALL;

/*----------------
 * Translations
 *----------------*/

#ifndef LV_EDITOR_PREVIEW
    static const char * translation_languages[] = {"en", "de", NULL};
    static const char * translation_tags[] = {"dog", "cat", "house", NULL};
    static const char * translation_texts[] = {
        "This is a dog", "Das ist ein Hund", /* dog */
        "A curious little cat", "Eine neugierige kleine Katze", /* cat */
        "The house is cozy and warm", "Das Haus ist gemütlich und warm", /* house */
    };
#endif

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * font_inter_reg_12b;
lv_font_t * font_inter_reg_9;
lv_font_t * font_inter_reg_12a;
lv_font_t * font_lato_bold_60;
lv_font_t * font_lato_semibold_36;
lv_font_t * font_lato_semibold_18;
lv_font_t * font_lato_regular_36;
lv_font_t * font_lato_bold_16;
lv_font_t * font_lato_bold_36;
lv_font_t * font_inter_semi_bold_12;
lv_font_t * font_inter_bold_8;
lv_font_t * font_inter_regular_8;
lv_font_t * font_inter_semi_bold_30;
lv_font_t * font_inter_regular_30;
lv_font_t * font_inter_bold_60;
lv_font_t * font_inter_regular_16;
lv_font_t * font_inter_italic_16;

/*----------------
 * Images
 *----------------*/

/* Targets: any */
const void * image_logo_blush_b_final_1 = NULL;
extern const void * image_logo_blush_b_final_1_data;
const void * image_vec_1_105 = NULL;
extern const void * image_vec_1_105_data;
const void * image_vec_1_106 = NULL;
extern const void * image_vec_1_106_data;
const void * image_vec_28_203 = NULL;
extern const void * image_vec_28_203_data;
const void * image_vec_28_204 = NULL;
extern const void * image_vec_28_204_data;
const void * image_vec_28_205 = NULL;
extern const void * image_vec_28_205_data;
const void * image_line = NULL;
extern const void * image_line_data;
const void * image_arrow_up_right_31877 = NULL;
extern const void * image_arrow_up_right_31877_data;
const void * image_check_29517 = NULL;
extern const void * image_check_29517_data;
const void * image_plus_30659 = NULL;
extern const void * image_plus_30659_data;
const void * image_size_48_171640 = NULL;
extern const void * image_size_48_171640_data;
const void * image_size_48_171655 = NULL;
extern const void * image_size_48_171655_data;
const void * image_home_171664 = NULL;
extern const void * image_home_171664_data;
const void * image_vec_30_574 = NULL;
extern const void * image_vec_30_574_data;
const void * image_vec_32_584 = NULL;
extern const void * image_vec_32_584_data;
const void * image_vec_32_586 = NULL;
extern const void * image_vec_32_586_data;
const void * image_vec_32_585 = NULL;
extern const void * image_vec_32_585_data;
const void * image_vec_32_631 = NULL;
extern const void * image_vec_32_631_data;
const void * image_vec_32_640 = NULL;
extern const void * image_vec_32_640_data;
const void * image_vec_32_646 = NULL;
extern const void * image_vec_32_646_data;
const void * image_vec_32_650 = NULL;
extern const void * image_vec_32_650_data;
const void * image_vec_32_654 = NULL;
extern const void * image_vec_32_654_data;
const void * image_vec_32_658 = NULL;
extern const void * image_vec_32_658_data;
const void * image_vec_32_659 = NULL;
extern const void * image_vec_32_659_data;
const void * image_vec_32_660 = NULL;
extern const void * image_vec_32_660_data;
const void * image_vec_29_547 = NULL;
extern const void * image_vec_29_547_data;
const void * image_vec_31_724 = NULL;
extern const void * image_vec_31_724_data;
const void * image_vec_31_727 = NULL;
extern const void * image_vec_31_727_data;
const void * image_vec_31_730 = NULL;
extern const void * image_vec_31_730_data;
const void * image_vec_31_733 = NULL;
extern const void * image_vec_31_733_data;
const void * image_vec_32_589 = NULL;
extern const void * image_vec_32_589_data;
const void * image_vec_32_590 = NULL;
extern const void * image_vec_32_590_data;
const void * image_vec_32_591 = NULL;
extern const void * image_vec_32_591_data;
const void * image_vec_32_596 = NULL;
extern const void * image_vec_32_596_data;
const void * image_vec_32_605 = NULL;
extern const void * image_vec_32_605_data;
const void * image_vec_32_611 = NULL;
extern const void * image_vec_32_611_data;
const void * image_vec_32_615 = NULL;
extern const void * image_vec_32_615_data;
const void * image_vec_32_619 = NULL;
extern const void * image_vec_32_619_data;
const void * image_vec_32_623 = NULL;
extern const void * image_vec_32_623_data;
const void * image_vec_32_624 = NULL;
extern const void * image_vec_32_624_data;
const void * image_vec_32_625 = NULL;
extern const void * image_vec_32_625_data;
const void * img_weather_cerah = NULL;
extern const void * img_weather_cerah_data;
const void * img_weather_berawan = NULL;
extern const void * img_weather_berawan_data;
const void * img_weather_gerimis = NULL;
extern const void * img_weather_gerimis_data;
const void * img_weather_deras = NULL;
extern const void * img_weather_deras_data;

/*----------------
 * Global styles
 *----------------*/

lv_style_t style_screen_base_global;
lv_style_t style_list_16_global;
lv_style_t style_list_20_global;
lv_style_t style_list_24_global;
lv_style_t style_list_32_global;
lv_style_t style_list_40_global;
lv_style_t style_list_48_global;
lv_style_t style_lock_16_global;
lv_style_t style_lock_20_global;
lv_style_t style_lock_24_global;
lv_style_t style_lock_32_global;
lv_style_t style_lock_40_global;
lv_style_t style_lock_48_global;

/*----------------
 * Subjects
 *----------------*/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void display_meja_init_gen(const char * asset_path)
{
    char buf[256];

    /* When running from the editor the theme set from the XML should overwrite this */
#if !defined(LV_EDITOR_PREVIEW)
#if LV_USE_THEME_SIMPLE
    lv_display_t * disp = lv_display_get_default();
    lv_theme_t * th = lv_theme_simple_init(disp);
    lv_display_set_theme(disp, th);
#else
    LV_LOG_WARN("Simple theme is selected in project.xml but LV_USE_THEME_SIMPLE is disabled");
#endif
#endif /*LV_EDITOR_PREVIEW*/


    /*----------------
     * Fonts
     *----------------*/

    /* Targets: any */

    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        if (!font_inter_reg_12b) {
            /* font_inter_reg_12b */
            /* create bin font 'font_inter_reg_12b' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_regular_12b.bin");
            font_inter_reg_12b = lv_binfont_create(buf);

        }
        if (!font_lato_bold_60) {
            /* font_lato_bold_60 */
            /* create bin font 'font_lato_bold_60' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_lato_bold_60.bin");
            font_lato_bold_60 = lv_binfont_create(buf);

        }
        if (!font_lato_semibold_36) {
            /* font_lato_semibold_36 */
            /* create bin font 'font_lato_semibold_36' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_lato_semibold_36.bin");
            font_lato_semibold_36 = lv_binfont_create(buf);

        }
        if (!font_lato_semibold_18) {
            /* font_lato_semibold_18 */
            /* create bin font 'font_lato_semibold_18' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_lato_semibold_18.bin");
            font_lato_semibold_18 = lv_binfont_create(buf);

        }
        if (!font_lato_regular_36) {
            /* font_lato_regular_36 */
            /* create bin font 'font_lato_regular_36' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_lato_regular_36.bin");
            font_lato_regular_36 = lv_binfont_create(buf);

        }
        if (!font_lato_bold_16) {
            /* font_lato_bold_16 */
            /* create bin font 'font_lato_bold_16' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_lato_bold_16.bin");
            font_lato_bold_16 = lv_binfont_create(buf);

        }
        if (!font_inter_reg_9) {
            /* font_inter_reg_9 */
            /* create bin font 'font_inter_reg_9' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_regular_9.bin");
            font_inter_reg_9 = lv_binfont_create(buf);

        }
        if (!font_lato_bold_36) {
            /* font_lato_bold_36 */
            /* create bin font 'font_lato_bold_36' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_lato_bold_36.bin");
            font_lato_bold_36 = lv_binfont_create(buf);

        }
        if (!font_inter_semi_bold_12) {
            /* font_inter_semi_bold_12 */
            /* create bin font 'font_inter_semi_bold_12' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_semi_bold_12.bin");
            font_inter_semi_bold_12 = lv_binfont_create(buf);

        }
        if (!font_inter_bold_8) {
            /* font_inter_bold_8 */
            /* create bin font 'font_inter_bold_8' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_bold_8.bin");
            font_inter_bold_8 = lv_binfont_create(buf);

        }
        if (!font_inter_reg_12a) {
            /* font_inter_reg_12a */
            /* create bin font 'font_inter_reg_12a' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_regular_12a.bin");
            font_inter_reg_12a = lv_binfont_create(buf);

        }
        if (!font_inter_regular_8) {
            /* font_inter_regular_8 */
            /* create bin font 'font_inter_regular_8' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_regular_8.bin");
            font_inter_regular_8 = lv_binfont_create(buf);

        }
        if (!font_inter_semi_bold_30) {
            /* font_inter_semi_bold_30 */
            /* create bin font 'font_inter_semi_bold_30' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_semi_bold_30.bin");
            font_inter_semi_bold_30 = lv_binfont_create(buf);

        }
        if (!font_inter_regular_30) {
            /* font_inter_regular_30 */
            /* create bin font 'font_inter_regular_30' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_regular_30.bin");
            font_inter_regular_30 = lv_binfont_create(buf);

        }
        if (!font_inter_bold_60) {
            /* font_inter_bold_60 */
            /* create bin font 'font_inter_bold_60' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_bold_60.bin");
            font_inter_bold_60 = lv_binfont_create(buf);

        }
        if (!font_inter_regular_16) {
            /* font_inter_regular_16 */
            /* create bin font 'font_inter_regular_16' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_regular_16.bin");
            font_inter_regular_16 = lv_binfont_create(buf);

        }
        if (!font_inter_italic_16) {
            /* font_inter_italic_16 */
            /* create bin font 'font_inter_italic_16' from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/font_inter_italic_16.bin");
            font_inter_italic_16 = lv_binfont_create(buf);

        }
    }
    #endif

    /*----------------
     * Images
     *----------------*/

    /* Targets: any */
    #if DISPLAY_MEJA_CHECK_COMPILE_TARGET(DISPLAY_MEJA_TARGET_ALL)
    if (display_meja_check_target(DISPLAY_MEJA_TARGET_ALL)) {
        /* image_logo_blush_b_final_1 */
        if (!image_logo_blush_b_final_1) {
            image_logo_blush_b_final_1 = &image_logo_blush_b_final_1_data;
        }
        /* image_vec_1_105 */
        if (!image_vec_1_105) {
            image_vec_1_105 = &image_vec_1_105_data;
        }
        /* image_vec_1_106 */
        if (!image_vec_1_106) {
            image_vec_1_106 = &image_vec_1_106_data;
        }
        /* image_vec_28_203 */
        if (!image_vec_28_203) {
            image_vec_28_203 = &image_vec_28_203_data;
        }
        /* image_vec_28_204 */
        if (!image_vec_28_204) {
            image_vec_28_204 = &image_vec_28_204_data;
        }
        /* image_vec_28_205 */
        if (!image_vec_28_205) {
            image_vec_28_205 = &image_vec_28_205_data;
        }
        /* image_line */
        if (!image_line) {
            image_line = &image_line_data;
        }
        /* image_arrow_up_right_31877 */
        if (!image_arrow_up_right_31877) {
            image_arrow_up_right_31877 = &image_arrow_up_right_31877_data;
        }
        /* image_check_29517 */
        if (!image_check_29517) {
            image_check_29517 = &image_check_29517_data;
        }
        /* image_plus_30659 */
        if (!image_plus_30659) {
            image_plus_30659 = &image_plus_30659_data;
        }
        /* image_size_48_171640 */
        if (!image_size_48_171640) {
            image_size_48_171640 = &image_size_48_171640_data;
        }
        /* image_size_48_171655 */
        if (!image_size_48_171655) {
            image_size_48_171655 = &image_size_48_171655_data;
        }
        /* image_home_171664 */
        if (!image_home_171664) {
            image_home_171664 = &image_home_171664_data;
        }
        /* image_vec_30_574 */
        if (!image_vec_30_574) {
            image_vec_30_574 = &image_vec_30_574_data;
        }
        /* image_vec_32_584 */
        if (!image_vec_32_584) {
            image_vec_32_584 = &image_vec_32_584_data;
        }
        /* image_vec_32_586 */
        if (!image_vec_32_586) {
            image_vec_32_586 = &image_vec_32_586_data;
        }
        /* image_vec_32_585 */
        if (!image_vec_32_585) {
            image_vec_32_585 = &image_vec_32_585_data;
        }
        /* image_vec_32_631 */
        if (!image_vec_32_631) {
            image_vec_32_631 = &image_vec_32_631_data;
        }
        /* image_vec_32_640 */
        if (!image_vec_32_640) {
            image_vec_32_640 = &image_vec_32_640_data;
        }
        /* image_vec_32_646 */
        if (!image_vec_32_646) {
            image_vec_32_646 = &image_vec_32_646_data;
        }
        /* image_vec_32_650 */
        if (!image_vec_32_650) {
            image_vec_32_650 = &image_vec_32_650_data;
        }
        /* image_vec_32_654 */
        if (!image_vec_32_654) {
            image_vec_32_654 = &image_vec_32_654_data;
        }
        /* image_vec_32_658 */
        if (!image_vec_32_658) {
            image_vec_32_658 = &image_vec_32_658_data;
        }
        /* image_vec_32_659 */
        if (!image_vec_32_659) {
            image_vec_32_659 = &image_vec_32_659_data;
        }
        /* image_vec_32_660 */
        if (!image_vec_32_660) {
            image_vec_32_660 = &image_vec_32_660_data;
        }
        /* image_vec_29_547 */
        if (!image_vec_29_547) {
            image_vec_29_547 = &image_vec_29_547_data;
        }
        /* image_vec_31_724 */
        if (!image_vec_31_724) {
            image_vec_31_724 = &image_vec_31_724_data;
        }
        /* image_vec_31_727 */
        if (!image_vec_31_727) {
            image_vec_31_727 = &image_vec_31_727_data;
        }
        /* image_vec_31_730 */
        if (!image_vec_31_730) {
            image_vec_31_730 = &image_vec_31_730_data;
        }
        /* image_vec_31_733 */
        if (!image_vec_31_733) {
            image_vec_31_733 = &image_vec_31_733_data;
        }
        /* image_vec_32_589 */
        if (!image_vec_32_589) {
            image_vec_32_589 = &image_vec_32_589_data;
        }
        /* image_vec_32_590 */
        if (!image_vec_32_590) {
            image_vec_32_590 = &image_vec_32_590_data;
        }
        /* image_vec_32_591 */
        if (!image_vec_32_591) {
            image_vec_32_591 = &image_vec_32_591_data;
        }
        /* image_vec_32_596 */
        if (!image_vec_32_596) {
            image_vec_32_596 = &image_vec_32_596_data;
        }
        /* image_vec_32_605 */
        if (!image_vec_32_605) {
            image_vec_32_605 = &image_vec_32_605_data;
        }
        /* image_vec_32_611 */
        if (!image_vec_32_611) {
            image_vec_32_611 = &image_vec_32_611_data;
        }
        /* image_vec_32_615 */
        if (!image_vec_32_615) {
            image_vec_32_615 = &image_vec_32_615_data;
        }
        /* image_vec_32_619 */
        if (!image_vec_32_619) {
            image_vec_32_619 = &image_vec_32_619_data;
        }
        /* image_vec_32_623 */
        if (!image_vec_32_623) {
            image_vec_32_623 = &image_vec_32_623_data;
        }
        /* image_vec_32_624 */
        if (!image_vec_32_624) {
            image_vec_32_624 = &image_vec_32_624_data;
        }
        /* image_vec_32_625 */
        if (!image_vec_32_625) {
            image_vec_32_625 = &image_vec_32_625_data;
        }
        /* img_weather_cerah */
        if (!img_weather_cerah) {
            img_weather_cerah = &img_weather_cerah_data;
        }
        /* img_weather_berawan */
        if (!img_weather_berawan) {
            img_weather_berawan = &img_weather_berawan_data;
        }
        /* img_weather_gerimis */
        if (!img_weather_gerimis) {
            img_weather_gerimis = &img_weather_gerimis_data;
        }
        /* img_weather_deras */
        if (!img_weather_deras) {
            img_weather_deras = &img_weather_deras_data;
        }
    }
    #endif

    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&style_screen_base_global);
        lv_style_init(&style_list_16_global);
        lv_style_init(&style_list_20_global);
        lv_style_init(&style_list_24_global);
        lv_style_init(&style_list_32_global);
        lv_style_init(&style_list_40_global);
        lv_style_init(&style_list_48_global);
        lv_style_init(&style_lock_16_global);
        lv_style_init(&style_lock_20_global);
        lv_style_init(&style_lock_24_global);
        lv_style_init(&style_lock_32_global);
        lv_style_init(&style_lock_40_global);
        lv_style_init(&style_lock_48_global);

        lv_style_set_border_width(&style_screen_base_global, 0);
        lv_style_set_radius(&style_screen_base_global, 0);
        lv_style_set_shadow_width(&style_screen_base_global, 0);
        lv_style_set_shadow_opa(&style_screen_base_global, 0);
        lv_style_set_width(&style_list_16_global, 16);
        lv_style_set_height(&style_list_16_global, 16);
        lv_style_set_width(&style_list_20_global, 20);
        lv_style_set_height(&style_list_20_global, 20);
        lv_style_set_width(&style_list_24_global, 24);
        lv_style_set_height(&style_list_24_global, 24);
        lv_style_set_width(&style_list_32_global, 32);
        lv_style_set_height(&style_list_32_global, 32);
        lv_style_set_width(&style_list_40_global, 40);
        lv_style_set_height(&style_list_40_global, 40);
        lv_style_set_width(&style_list_48_global, 48);
        lv_style_set_height(&style_list_48_global, 48);
        lv_style_set_width(&style_lock_16_global, 16);
        lv_style_set_height(&style_lock_16_global, 16);
        lv_style_set_width(&style_lock_20_global, 20);
        lv_style_set_height(&style_lock_20_global, 20);
        lv_style_set_width(&style_lock_24_global, 24);
        lv_style_set_height(&style_lock_24_global, 24);
        lv_style_set_width(&style_lock_32_global, 32);
        lv_style_set_height(&style_lock_32_global, 32);
        lv_style_set_width(&style_lock_40_global, 40);
        lv_style_set_height(&style_lock_40_global, 40);
        lv_style_set_width(&style_lock_48_global, 48);
        lv_style_set_height(&style_lock_48_global, 48);

        style_inited = true;
    }

    /*----------------
     * Subjects
     *----------------*/
    /*----------------
     * Translations
     *----------------*/

    #ifndef LV_EDITOR_PREVIEW
        lv_translation_add_static(translation_languages, translation_tags, translation_texts);
        lv_translation_set_language(translation_languages[0]);
    #endif

#if defined(LV_USE_XML) && LV_USE_XML
    /* Register widgets */

    /* Check all fonts / default if needed. This prevents fonts that are used in one target but
       defined in another from causing assertion failures during rendering of the Preview. */
    check_font(&font_inter_reg_12b, "font_inter_reg_12b");
    check_font(&font_lato_bold_60, "font_lato_bold_60");
    check_font(&font_lato_semibold_36, "font_lato_semibold_36");
    check_font(&font_lato_semibold_18, "font_lato_semibold_18");
    check_font(&font_lato_regular_36, "font_lato_regular_36");
    check_font(&font_lato_bold_16, "font_lato_bold_16");
    check_font(&font_inter_reg_9, "font_inter_reg_9");
    check_font(&font_lato_bold_36, "font_lato_bold_36");
    check_font(&font_inter_semi_bold_12, "font_inter_semi_bold_12");
    check_font(&font_inter_bold_8, "font_inter_bold_8");
    check_font(&font_inter_reg_12a, "font_inter_reg_12a");
    check_font(&font_inter_regular_8, "font_inter_regular_8");
    check_font(&font_inter_semi_bold_30, "font_inter_semi_bold_30");
    check_font(&font_inter_regular_30, "font_inter_regular_30");
    check_font(&font_inter_bold_60, "font_inter_bold_60");
    check_font(&font_inter_regular_16, "font_inter_regular_16");
    check_font(&font_inter_italic_16, "font_inter_italic_16");

    /* Register fonts */
    lv_xml_register_font(NULL, "font_inter_reg_12b", font_inter_reg_12b);
    lv_xml_register_font(NULL, "font_lato_bold_60", font_lato_bold_60);
    lv_xml_register_font(NULL, "font_lato_semibold_36", font_lato_semibold_36);
    lv_xml_register_font(NULL, "font_lato_semibold_18", font_lato_semibold_18);
    lv_xml_register_font(NULL, "font_lato_regular_36", font_lato_regular_36);
    lv_xml_register_font(NULL, "font_lato_bold_16", font_lato_bold_16);
    lv_xml_register_font(NULL, "font_inter_reg_9", font_inter_reg_9);
    lv_xml_register_font(NULL, "font_lato_bold_36", font_lato_bold_36);
    lv_xml_register_font(NULL, "font_inter_semi_bold_12", font_inter_semi_bold_12);
    lv_xml_register_font(NULL, "font_inter_bold_8", font_inter_bold_8);
    lv_xml_register_font(NULL, "font_inter_reg_12a", font_inter_reg_12a);
    lv_xml_register_font(NULL, "font_inter_regular_8", font_inter_regular_8);
    lv_xml_register_font(NULL, "font_inter_semi_bold_30", font_inter_semi_bold_30);
    lv_xml_register_font(NULL, "font_inter_regular_30", font_inter_regular_30);
    lv_xml_register_font(NULL, "font_inter_bold_60", font_inter_bold_60);
    lv_xml_register_font(NULL, "font_inter_regular_16", font_inter_regular_16);
    lv_xml_register_font(NULL, "font_inter_italic_16", font_inter_italic_16);

    /* Register subjects */

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if defined(LV_USE_XML) && LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "image_logo_blush_b_final_1", image_logo_blush_b_final_1);
    lv_xml_register_image(NULL, "image_vec_1_105", image_vec_1_105);
    lv_xml_register_image(NULL, "image_vec_1_106", image_vec_1_106);
    lv_xml_register_image(NULL, "image_vec_28_203", image_vec_28_203);
    lv_xml_register_image(NULL, "image_vec_28_204", image_vec_28_204);
    lv_xml_register_image(NULL, "image_vec_28_205", image_vec_28_205);
    lv_xml_register_image(NULL, "image_line", image_line);
    lv_xml_register_image(NULL, "image_arrow_up_right_31877", image_arrow_up_right_31877);
    lv_xml_register_image(NULL, "image_check_29517", image_check_29517);
    lv_xml_register_image(NULL, "image_plus_30659", image_plus_30659);
    lv_xml_register_image(NULL, "image_size_48_171640", image_size_48_171640);
    lv_xml_register_image(NULL, "image_size_48_171655", image_size_48_171655);
    lv_xml_register_image(NULL, "image_home_171664", image_home_171664);
    lv_xml_register_image(NULL, "image_vec_30_574", image_vec_30_574);
    lv_xml_register_image(NULL, "image_vec_32_584", image_vec_32_584);
    lv_xml_register_image(NULL, "image_vec_32_586", image_vec_32_586);
    lv_xml_register_image(NULL, "image_vec_32_585", image_vec_32_585);
    lv_xml_register_image(NULL, "image_vec_32_631", image_vec_32_631);
    lv_xml_register_image(NULL, "image_vec_32_640", image_vec_32_640);
    lv_xml_register_image(NULL, "image_vec_32_646", image_vec_32_646);
    lv_xml_register_image(NULL, "image_vec_32_650", image_vec_32_650);
    lv_xml_register_image(NULL, "image_vec_32_654", image_vec_32_654);
    lv_xml_register_image(NULL, "image_vec_32_658", image_vec_32_658);
    lv_xml_register_image(NULL, "image_vec_32_659", image_vec_32_659);
    lv_xml_register_image(NULL, "image_vec_32_660", image_vec_32_660);
    lv_xml_register_image(NULL, "image_vec_29_547", image_vec_29_547);
    lv_xml_register_image(NULL, "image_vec_31_724", image_vec_31_724);
    lv_xml_register_image(NULL, "image_vec_31_727", image_vec_31_727);
    lv_xml_register_image(NULL, "image_vec_31_730", image_vec_31_730);
    lv_xml_register_image(NULL, "image_vec_31_733", image_vec_31_733);
    lv_xml_register_image(NULL, "image_vec_32_589", image_vec_32_589);
    lv_xml_register_image(NULL, "image_vec_32_590", image_vec_32_590);
    lv_xml_register_image(NULL, "image_vec_32_591", image_vec_32_591);
    lv_xml_register_image(NULL, "image_vec_32_596", image_vec_32_596);
    lv_xml_register_image(NULL, "image_vec_32_605", image_vec_32_605);
    lv_xml_register_image(NULL, "image_vec_32_611", image_vec_32_611);
    lv_xml_register_image(NULL, "image_vec_32_615", image_vec_32_615);
    lv_xml_register_image(NULL, "image_vec_32_619", image_vec_32_619);
    lv_xml_register_image(NULL, "image_vec_32_623", image_vec_32_623);
    lv_xml_register_image(NULL, "image_vec_32_624", image_vec_32_624);
    lv_xml_register_image(NULL, "image_vec_32_625", image_vec_32_625);
    lv_xml_register_image(NULL, "img_weather_cerah", img_weather_cerah);
    lv_xml_register_image(NULL, "img_weather_berawan", img_weather_berawan);
    lv_xml_register_image(NULL, "img_weather_gerimis", img_weather_gerimis);
    lv_xml_register_image(NULL, "img_weather_deras", img_weather_deras);
#endif

#if !defined(LV_USE_XML) || LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manually from XML using lv_xml_create() */
#endif
}

void display_meja_set_target(uint32_t target)
{
    display_meja_target = target;
}

uint32_t display_meja_get_target(void)
{
    return display_meja_target;
}

bool display_meja_check_target(uint32_t target)
{
    return (display_meja_target & target) ? true : false;
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void check_font(lv_font_t ** font, const char * name)
{
    if (!(*font)) {
        *font = (lv_font_t *)LV_FONT_DEFAULT;
        LV_LOG_WARN("font `%s` was not set. Using `LV_FONT_DEFAULT` instead", name);
    }
}