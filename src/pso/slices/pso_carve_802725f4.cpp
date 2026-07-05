#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80244D2C(f32);
s32 fn_80269D24(M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);
extern M2C_UNK lbl_8044F6CC[];
extern f32 lbl_805DD4FC;

s32 TWindowSubComCard__sub_802725F4(void) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = fn_8026CBB8(0x98);
    temp_r31 = fn_80269D24(temp_r3, lbl_8044F6CC, 1);
    fn_80244D2C(lbl_805DD4FC);
    return temp_r31;
}

}
