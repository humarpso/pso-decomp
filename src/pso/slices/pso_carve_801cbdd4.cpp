#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80312F5C(u32, s32, s32);
extern u32 lbl_805D5D68;

void fn_801CBDD4(s32 arg0, s32 arg1) {
    if ((u32) lbl_805D5D68 != 0U) {
        fn_80312F5C(lbl_805D5D68, arg0, arg1);
    }
}

}
