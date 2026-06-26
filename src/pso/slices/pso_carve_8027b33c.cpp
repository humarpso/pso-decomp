#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80255850(s32, s32);
s32 fn_80266E0C(s32);

void TWindowSubMag__sub_8027B33C(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80266E0C(M2C_FIELD(arg0, s32 *, 0x34));
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
        fn_80255850(M2C_FIELD(arg0, s32 *, 0x40), temp_r3);
    }
}

}
