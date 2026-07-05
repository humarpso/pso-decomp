#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *lbl_805D63F8;

void TWindowCtrl__sub_8024B15C(s8 *arg0) {
    s8 temp_r4;

    if ((void *) lbl_805D63F8 != NULL) {
        temp_r4 = *arg0;
        if ((temp_r4 >= 0) && (temp_r4 < 4)) {
            M2C_FIELD(lbl_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(lbl_805D63F8, u16 *, 0x1C) & ~(0x40 << temp_r4));
            *arg0 = -1;
        }
    }
}

}
