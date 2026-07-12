#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void __dl__FPv(void*);
M2C_UNK TObjPlayer__sub_8029F694(void*);
extern u32 lbl_805D4EE8;

void fn_80083360(void) {
    if ((u32) lbl_805D4EE8 != 0U) {
        TObjPlayer__sub_8029F694((void*)lbl_805D4EE8);
    }
    if ((u32) lbl_805D4EE8 != 0U) {
        __dl__FPv((void*)lbl_805D4EE8);
        lbl_805D4EE8 = 0U;
    }
}

}
