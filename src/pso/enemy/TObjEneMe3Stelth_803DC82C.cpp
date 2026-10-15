#include "types.h"

extern "C" {

void set_ginja_draw_list_mask(s32 arg0);

extern s32 ginja_draw_list_mask;

void set_ginja_draw_list_mask(s32 arg0) {
    ginja_draw_list_mask = arg0;
}

}
