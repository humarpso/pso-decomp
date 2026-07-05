#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void xfree__FPv(void*);
extern u32 lbl_805D66A8;
extern u32 lbl_805D66B0;

void TEffIndirectCtrl__sub_802A942C(void) {
    if ((u32) lbl_805D66A8 != 0U) {
        xfree__FPv((void*)lbl_805D66A8);
        lbl_805D66A8 = 0U;
    }
    if ((u32) lbl_805D66B0 != 0U) {
        xfree__FPv((void*)lbl_805D66B0);
        lbl_805D66B0 = 0U;
    }
}

}
