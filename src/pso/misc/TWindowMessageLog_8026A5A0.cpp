#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll_animation__17TWindowMessageLogFPv(void *arg0);
M2C_UNK TWindowMessageLog__sub_8026A434(f32);

extern const f32 lbl_805DD240;

void update_scroll_animation__17TWindowMessageLogFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
    if (lbl_805DD240 != temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(arg0, f32 *, 0x84) + temp_f1);
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x6C);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1_2 + M2C_FIELD(arg0, f32 *, 0x94));
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) * lbl_805DD240);
        TWindowMessageLog__sub_8026A434(temp_f1_2);
    }
}

}
