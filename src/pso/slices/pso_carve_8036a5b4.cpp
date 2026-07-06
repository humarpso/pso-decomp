#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 *fn_8036A3CC(s32, s32 *);

u8 fn_8036A5B4(s32 arg0) {
    s32 sp8;
    s32 *temp_r3;

    if (arg0 < 0) {
        return 0U;
    }
    if (arg0 >= 0x31) {
        return 0U;
    }
    temp_r3 = fn_8036A3CC(arg0, &sp8);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return (u8) ((*temp_r3 & sp8) != 0);
}

}
