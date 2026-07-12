#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801AE48C(void);
M2C_UNK fn_800F5C8C(void*, M2C_UNK);

extern u32 lbl_805D5D58;

void TObjPlayer__sub_801AE48C(void) {
    if ((u32) lbl_805D5D58 != 0U) {
        fn_800F5C8C((void*)lbl_805D5D58, 1);
    }
    lbl_805D5D58 = 0U;
}

}
