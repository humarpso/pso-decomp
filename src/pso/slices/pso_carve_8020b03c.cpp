#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8007EBB4(void*);
extern u32 lbl_805D60F0;
extern s32 lbl_805D60F4;

void fn_8020B03C(void) {
    if ((u32) lbl_805D60F0 != 0U) {
        fn_8007EBB4((void*)lbl_805D60F0);
        lbl_805D60F0 = 0U;
        lbl_805D60F4 = 0;
    }
}

}
