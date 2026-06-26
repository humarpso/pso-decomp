#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8036CDA8();

s32 fn_8036C8E0(void *arg0) {
    s32 temp_r0;

    if (fn_8036CDA8() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r0 < 0) || (temp_r0 >= 0xD)) {
        return 0;
    }
    return 1;
}

}
