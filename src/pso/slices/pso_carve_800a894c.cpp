#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_800D8FDC(void *, s16, f32);
extern const f32 lbl_805D9ADC;

void fn_800A894C(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r3 & 0x04000000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3 | 0x04000000);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFF7FFFFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
        TObjPlayer__sub_800D8FDC(arg0 + 0x2FC, M2C_FIELD(arg0, s16 *, 0x33C), lbl_805D9ADC);
    }
}

}
