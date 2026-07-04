#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8034C1D0(u32, s32);
extern s32 lbl_805D6E98;
extern u32 lbl_805D6E9C;

void fn_8034C18C(s32 arg0) {
    if (!(lbl_805D6E98 & 2) && (lbl_805D6E9C != 0U)) {
        lbl_805D6E98 |= 2;
        fn_8034C1D0(lbl_805D6E9C, arg0);
    }
}

}
