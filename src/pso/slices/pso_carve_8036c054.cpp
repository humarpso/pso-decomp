#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneHoldEffect__sub_8036CDA8();

s32 fn_8036C054(void *arg0) {
    s16 temp_r3;

    if (TObjEneHoldEffect__sub_8036CDA8() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return 1;
}

}
