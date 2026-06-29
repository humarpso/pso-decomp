#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK fn_803DE778(s32, s32 *, M2C_UNK);
extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void fn_8020970C(s32 *arg0) {
    s32 sp8;

    if ((u32) lbl_805D60C4 != 0U) {
        sp8 = *arg0;
        bswap_32__FPUl(&sp8);
        fn_803DE778(lbl_805D60C4 + lbl_805D60C8, &sp8, 4);
        lbl_805D60C8 += 4;
    }
}

}
