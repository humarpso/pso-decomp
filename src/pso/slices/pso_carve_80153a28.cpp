#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjFogCollision__vt11();

void TObjFogCollisionSwitch__vt11(void *arg0) {
    s32 temp_r0;

    TObjFogCollision__vt11();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        return;
    }
    if (temp_r0 > 0xFF) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0xFF;
    }
}

}
