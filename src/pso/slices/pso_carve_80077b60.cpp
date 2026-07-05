#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void __dl__FPv(void*);
extern u32 lbl_805D4E58;
extern u32 lbl_805D4E5C;

void fn_80077B60(void) {
    if ((u32) lbl_805D4E5C != 0U) {
        __dl__FPv((void*)lbl_805D4E5C);
        lbl_805D4E5C = 0U;
    }
    if ((u32) lbl_805D4E58 != 0U) {
        __dl__FPv((void*)lbl_805D4E58);
        lbl_805D4E58 = 0U;
    }
}

}
