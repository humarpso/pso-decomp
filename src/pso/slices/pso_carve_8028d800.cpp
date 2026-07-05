#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007EBB4(void*);
extern u32 lbl_805D6518;
extern u32 lbl_805D651C;

void fn_8028D800(void) {
    if (((u32) lbl_805D6518 != 0U) && ((u32) lbl_805D651C != 0U)) {
        fn_8007EBB4((void*)lbl_805D651C);
        lbl_805D651C = 0U;
    }
}

}
