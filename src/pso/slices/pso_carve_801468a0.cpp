#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801469B8();
M2C_UNK fn_80147284();
void xfree__FPv(void*);
M2C_UNK fn_80421620();
extern s32 lbl_805D56F8;
extern u32 lbl_805D5700;
extern s32 lbl_805D5704;

void fn_801468A0(void) {
    if ((s32) lbl_805D5704 != 0) {
        fn_801469B8();
    } else {
        fn_80147284();
    }
    if (lbl_805D56F8 & 8) {
        fn_80421620();
        lbl_805D56F8 &= 0xFFFFFFF7;
    }
    if ((u32) lbl_805D5700 != 0U) {
        xfree__FPv((void*)lbl_805D5700);
        lbl_805D5700 = 0U;
    }
}

}
