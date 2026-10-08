#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade_offset__17TWindowMessageLogFPv(void *arg0);
M2C_UNK clamp_scroll_offset__17TWindowMessageLogFPv(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv();

extern f32 lbl_805DD240;

void update_fade_offset__17TWindowMessageLogFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = M2C_FIELD(arg0, f32 *, 0x4C);
    update_fade__17TWindowSubComCardFPv();
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - temp_f31;
    if (lbl_805DD240 != temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(arg0, f32 *, 0x84) - temp_f1);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) - temp_f1);
        clamp_scroll_offset__17TWindowMessageLogFPv(arg0);
    }
}

}
