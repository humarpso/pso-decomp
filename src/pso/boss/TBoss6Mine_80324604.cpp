#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Mine__vt1(void *arg0);

void TBoss6Mine__vt1(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x38C) + 1;
    M2C_FIELD(arg0, s32 *, 0x38C) = temp_r4;
    if (temp_r4 > (s32) M2C_FIELD(arg0, s32 *, 0x3A0)) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 2;
    }
}

}
