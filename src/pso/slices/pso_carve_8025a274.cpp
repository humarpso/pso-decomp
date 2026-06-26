#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8025A2D4(void *, s32);

void fn_8025A274(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0 == arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        return;
    }
    if (temp_r0 > arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFF77E8FF;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFFDD8C41;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1E;
    fn_8025A2D4(arg0, arg1);
}

}
