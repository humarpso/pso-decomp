#include "types.h"

extern "C" {

void update_scroll_animation__17TWindowMessageLogFPv(void *arg0);
s32 clamp_scroll_offset__17TWindowMessageLogFPv(f32);

extern const f32 lbl_805DD240;

void update_scroll_animation__17TWindowMessageLogFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f1 = *(f32 *)((s8 *)arg0 + 0x94);
    if (lbl_805DD240 != temp_f1) {
        *(f32 *)((s8 *)arg0 + 0x84) = (f32) (*(f32 *)((s8 *)arg0 + 0x84) + temp_f1);
        temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x6C);
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) (temp_f1_2 + *(f32 *)((s8 *)arg0 + 0x94));
        *(f32 *)((s8 *)arg0 + 0x94) = (f32) (*(f32 *)((s8 *)arg0 + 0x94) * lbl_805DD240);
        clamp_scroll_offset__17TWindowMessageLogFPv(temp_f1_2);
    }
}

}
