#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_32__FPUl(s32 *, s32);
M2C_UNK memcpy(s32 *, s32, M2C_UNK);
extern s32 lbl_805D6078;
extern s32 lbl_805D607C;

s32 fn_8020876C(void) {
    s32 sp8;
    s32 temp_r4;

    memcpy(&sp8, lbl_805D6078 + lbl_805D607C, 4);
    temp_r4 = lbl_805D607C;
    lbl_805D607C = temp_r4 + 4;
    bswap_32__FPUl(&sp8, temp_r4);
    return sp8;
}

}
