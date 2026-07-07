#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Mine__vt4(u8 *arg0);
M2C_UNK fn_8022675C(int, void *, int, int);

void TBoss6Mine__vt4(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x38C) + 1;
    M2C_FIELD(arg0, s32 *, 0x38C) = temp_r3;
    if (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x3A8)) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 5;
        fn_8022675C(0x4003B51D, arg0 + 0x38, 0, 0);
    }
}

}
