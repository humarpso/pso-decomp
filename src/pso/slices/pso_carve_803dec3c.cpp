#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_803DEC3C(u8 *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 2);
    if ((s8) temp_r0 > 0x59) {
        M2C_FIELD(arg0, s8 *, 2) = 0x59;
    } else if ((s8) temp_r0 < -0x59) {
        M2C_FIELD(arg0, s8 *, 2) = -0x59;
    }
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 3);
    if ((s8) temp_r0_2 > 0x59) {
        M2C_FIELD(arg0, s8 *, 3) = 0x59;
        return;
    }
    if ((s8) temp_r0_2 < -0x59) {
        M2C_FIELD(arg0, s8 *, 3) = -0x59;
    }
}

}
