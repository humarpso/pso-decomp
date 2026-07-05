#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80293080();
s32 fn_80299E44();
M2C_UNK fn_8029A6A4(void*);
extern u32 lbl_805D6580;

void fn_80291F14(void) {
    if ((fn_80293080() != 0) && (fn_80299E44() != 0) && ((u32) lbl_805D6580 != 0U)) {
        fn_8029A6A4((void*)lbl_805D6580);
    }
}

}
