#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8007EBB4(void*);
extern u32 lbl_805D5F9C;

s32 fn_802014BC(void) {
    if ((u32) lbl_805D5F9C != 0U) {
        fn_8007EBB4((void*)lbl_805D5F9C);
        lbl_805D5F9C = 0U;
        return 1;
    }
    return 0;
}

}
