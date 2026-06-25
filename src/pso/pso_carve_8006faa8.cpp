#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8006FAE4();

s32 fn_8006FAA8(u16 arg0) {
    s32 temp_r3;

    temp_r3 = fn_8006FAE4();
    return (temp_r3 << 0x10) | (temp_r3 ^ arg0);
}

}
