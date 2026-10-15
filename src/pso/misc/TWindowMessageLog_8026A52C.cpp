#include "types.h"

extern "C" {

void update_fade_offset__17TWindowMessageLogFPv(void *arg0);
s32 clamp_scroll_offset__17TWindowMessageLogFPv(void *);
s32 update_fade__17TWindowSubComCardFv();

extern f32 lbl_805DD240;

void update_fade_offset__17TWindowMessageLogFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = *(f32 *)((s8 *)arg0 + 0x4C);
    update_fade__17TWindowSubComCardFv();
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x4C) - temp_f31;
    if (lbl_805DD240 != temp_f1) {
        *(f32 *)((s8 *)arg0 + 0x84) = (f32) (*(f32 *)((s8 *)arg0 + 0x84) - temp_f1);
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) (*(f32 *)((s8 *)arg0 + 0x6C) - temp_f1);
        clamp_scroll_offset__17TWindowMessageLogFPv(arg0);
    }
}

}
