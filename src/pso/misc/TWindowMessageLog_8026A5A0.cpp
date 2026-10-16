#include "types.h"
#include "pso/misc/TWindowMessageLog.h"

extern "C" {

void update_scroll_animation__17TWindowMessageLogFv(void *arg0);
s32 clamp_scroll_offset__17TWindowMessageLogFv(f32);

extern const f32 lbl_805DD240;

void TWindowMessageLog::update_scroll_animation() {
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f1 = *(f32 *)((s8 *)this + 0x94);
    if (lbl_805DD240 != temp_f1) {
        *(f32 *)((s8 *)this + 0x84) = (f32) (*(f32 *)((s8 *)this + 0x84) + temp_f1);
        temp_f1_2 = *(f32 *)((s8 *)this + 0x6C);
        *(f32 *)((s8 *)this + 0x6C) = (f32) (temp_f1_2 + *(f32 *)((s8 *)this + 0x94));
        *(f32 *)((s8 *)this + 0x94) = (f32) (*(f32 *)((s8 *)this + 0x94) * lbl_805DD240);
        clamp_scroll_offset__17TWindowMessageLogFv(temp_f1_2);
    }
}

}
