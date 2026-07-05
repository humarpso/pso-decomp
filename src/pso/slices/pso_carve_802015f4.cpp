#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_8007EBFC(s32);
M2C_UNK memset(M2C_UNK, s32, s32);
extern s32 lbl_805D5F84;
extern u32 lbl_805D5F94;

s32 fn_802015F4(void) {
    s32 temp_r31;

    if ((u32) lbl_805D5F94 == 0U) {
        temp_r31 = lbl_805D5F84 << 0xD;
        lbl_805D5F94 = fn_8007EBFC(temp_r31);
        memset(lbl_805D5F94, 0, temp_r31);
        return 1;
    }
    return 0;
}

}
