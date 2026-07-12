#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK update_fade__17TWindowSubComCardFPv();
M2C_UNK TWindowMessageLog__sub_8026A434(void *);
extern f32 lbl_805DD240;

void fn_8026A52C(void *arg0) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = M2C_FIELD(arg0, f32 *, 0x4C);
    update_fade__17TWindowSubComCardFPv();
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - temp_f31;
    if (lbl_805DD240 != temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(arg0, f32 *, 0x84) - temp_f1);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) - temp_f1);
        TWindowMessageLog__sub_8026A434(arg0);
    }
}

}
