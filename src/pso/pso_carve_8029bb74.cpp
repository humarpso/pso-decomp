#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_8029BB74(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 >= 0xE) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 + 1);
}

}
