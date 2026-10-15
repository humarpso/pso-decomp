#include "types.h"

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void draw_selection_bar(void *, void *, s32);
extern s32 actor_frame_tick;
void fn_8027ACF8(u8 *arg0, u8 *arg1);
}

extern "C" {

void fn_8027ACF8(u8 *arg0, u8 *arg1) {
    s16 temp_r5;
    u16 *temp_r3;
    temp_r5 = *(s16 *)((s8 *)arg0 + 0x88);
    if ((temp_r5 >= 0) && !(actor_frame_tick & 0x10)) {
        temp_r3 = (u16 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, (s32) temp_r5));
        if (*temp_r3 & 1) {
            draw_selection_bar(arg1, temp_r3, 1);
        }
    }
}

}
