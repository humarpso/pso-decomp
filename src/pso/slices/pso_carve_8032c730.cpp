#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void xfree__FPv(void*);
extern u32 lbl_805D6CC0;
extern s32 lbl_805D6CC8;

void fn_8032C730(void) {
    if ((u32) lbl_805D6CC0 != 0U) {
        xfree__FPv((void*)lbl_805D6CC0);
        lbl_805D6CC0 = 0U;
    }
    lbl_805D6CC8 = 0;
}

}
