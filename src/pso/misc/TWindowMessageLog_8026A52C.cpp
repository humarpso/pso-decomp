#include "types.h"
#include "pso/misc/TWindowMessageLog.h"

extern "C" {

s32 update_fade__13TUnk_804CE018Fv();

extern f32 lbl_805DD240;

void TWindowMessageLog::update_fade_offset() {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = *(f32 *)((s8 *)this + 0x4C);
    update_fade__13TUnk_804CE018Fv();
    temp_f1 = *(f32 *)((s8 *)this + 0x4C) - temp_f31;
    if (lbl_805DD240 != temp_f1) {
        *(f32 *)((s8 *)this + 0x84) = (f32) (*(f32 *)((s8 *)this + 0x84) - temp_f1);
        *(f32 *)((s8 *)this + 0x6C) = (f32) (*(f32 *)((s8 *)this + 0x6C) - temp_f1);
        clamp_scroll_offset();
    }
}

}
