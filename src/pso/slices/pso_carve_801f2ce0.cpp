#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_16__FPUs(u16 *, s32);
M2C_UNK memcpy(u16 *, s32, M2C_UNK);
extern s32 lbl_805D5E70;
extern s32 lbl_805D5E90;

u16 fn_801F2CE0(void) {
    u16 sp8;
    s32 temp_r4;

    memcpy(&sp8, lbl_805D5E70 + lbl_805D5E90, 2);
    temp_r4 = lbl_805D5E90;
    lbl_805D5E90 = temp_r4 + 2;
    bswap_16__FPUs(&sp8, temp_r4);
    return sp8;
}

}
