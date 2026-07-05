#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001FE7C(s32, M2C_UNK);
M2C_UNK fn_8007EBB4(u32);
M2C_UNK fn_803DA16C(void*);
extern s32 lbl_805D5B28;
extern u32 lbl_805D5B2C;

void fn_801819FC(void) {
    if ((u32) lbl_805D5B2C != 0U) {
        fn_803DA16C((void*)lbl_805D5B2C);
        fn_8007EBB4(lbl_805D5B2C);
        lbl_805D5B2C = 0U;
    }
    fn_8001FE7C(lbl_805D5B28, 1);
    lbl_805D5B28 = 0;
}

}
