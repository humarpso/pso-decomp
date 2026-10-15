#include "types.h"

extern "C" {
s32 setup_window_draw_context(void *, void *);
s32 draw_visible_window_entries(void *, void *, int);
void draw_window_frame(void *arg0, s32 arg1);
extern s32 __vt__15TWindowQuantity[];
void fn_80246CE8(s32 arg0);
}

extern "C" {

void fn_80246CE8(s32 arg0) {
    s32 temp_r3;
    temp_r3 = setup_window_draw_context((void *)(arg0), (void *) (arg0 + 0x60));
    draw_window_frame((void *)((void *) (arg0)), (s32)((int) (temp_r3)));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

}
