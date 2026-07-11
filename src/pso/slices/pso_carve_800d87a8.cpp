#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_80040B28();
s32 fn_8023611C();

void *fn_800D87A8(void) {
    void *temp_r31;

    temp_r31 = fn_80040B28();
    if (fn_8023611C() != 0) {
        return temp_r31;
    }
    return 0;
}

}
