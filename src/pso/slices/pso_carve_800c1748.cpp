#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001E5C8();
void fn_8001FE7C(void*, int);
M2C_UNK fn_8007EBB4(u32);
M2C_UNK fn_803DA16C(void*);
extern u32 lbl_805D5164;
extern u32 lbl_805D516C;

void fn_800C1748(void) {
    if (fn_8001E5C8() == 0) {
        if ((u32) lbl_805D516C != 0U) {
            fn_803DA16C((void*)lbl_805D516C);
            fn_8007EBB4(lbl_805D516C);
            lbl_805D516C = 0U;
        }
    } else {
        lbl_805D516C = 0U;
    }
    if ((u32) lbl_805D5164 != 0U) {
        fn_8001FE7C((void*)lbl_805D5164, 1);
        lbl_805D5164 = 0U;
    }
}

}
