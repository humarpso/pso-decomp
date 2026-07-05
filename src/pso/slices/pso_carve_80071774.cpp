#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800717B0(s32);
u32 TWindowSubComCard__sub_80202990(u16);

s32 fn_80071774(int arg0) {
    u32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80202990(arg0);
    if (temp_r3 == 0U) {
        return -1;
    }
    return fn_800717B0(temp_r3 + 0x21C4);
}

}
