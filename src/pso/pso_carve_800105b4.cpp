#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 fn_800105B4(void *arg0) {
    s16 temp_r0;
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32C);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x32C) = 0;
    } else {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x2B8);
        if (temp_r0 < temp_r4) {
            M2C_FIELD(arg0, s16 *, 0x32C) = temp_r0;
        }
    }
    return M2C_FIELD(arg0, s16 *, 0x32C);
}

}
