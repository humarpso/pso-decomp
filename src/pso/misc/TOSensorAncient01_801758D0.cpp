#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOSensorAncient01__vt15(void *arg0);
M2C_UNK TOSensorAncient01__sub_8017585C(s32);

void TOSensorAncient01__vt15(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (temp_r4 + 0x28F);
    TOSensorAncient01__sub_8017585C((s32) arg0);
}

}
