#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80249920(u32, s32, s32);
s32 TWindowSubComCard__sub_80265BF8();

void TWindowSubComCard__sub_8027239C(u32 arg0, u32 arg1, s32 *arg2, s32 arg3) {
    s32 temp_r3;

    if ((arg0 != 0U) && (arg1 != 0U)) {
        temp_r3 = TWindowSubComCard__sub_80265BF8();
        if (temp_r3 != (s32) *arg2) {
            *arg2 = temp_r3;
            fn_80249920(arg1, temp_r3, arg3);
        }
    }
}

}
