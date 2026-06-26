#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80223150(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0);
    temp_r0 = M2C_FIELD(arg1, u8 *, 0);
    if (temp_r5 > temp_r0) {
        return 1;
    }
    if ((temp_r5 == temp_r0) && ((u8) M2C_FIELD(arg0, u8 *, 1) > (u8) M2C_FIELD(arg1, u8 *, 1))) {
        return 1;
    }
    return 0;
}

}
