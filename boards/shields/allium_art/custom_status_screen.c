#include <lvgl.h>

LV_IMG_DECLARE(allium_art);

lv_obj_t *zmk_display_status_screen(void) {
    lv_obj_t *screen = lv_obj_create(NULL);
    lv_obj_t *image = lv_img_create(screen);

    lv_img_set_src(image, &allium_art);
    lv_obj_align(image, LV_ALIGN_CENTER, 0, 0);

    return screen;
}
