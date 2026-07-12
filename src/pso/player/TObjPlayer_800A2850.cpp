#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800A2850(s32 arg0);
M2C_UNK TObjEneMe1GiGue__sub_80040B3C(s32, M2C_UNK);
f32 fn_8013157C(s32, s32);

extern f32 lbl_805D9988;

void TObjPlayer__sub_800A2850(s32 arg0) {
    M2C_UNK var_r4;

    if (fn_8013157C(arg0 + 0x38, arg0 + 0x50) > lbl_805D9988) {
        var_r4 = 8;
    } else {
        var_r4 = 0;
    }
    TObjEneMe1GiGue__sub_80040B3C(arg0, var_r4);
}

}
