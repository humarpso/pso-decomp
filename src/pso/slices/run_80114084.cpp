#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemMag__sub_80114084(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
    if (M2C_FIELD(arg0, s16 *, 2) < 0) {
        M2C_FIELD(arg0, s16 *, 2) = 0;
    }
    if (M2C_FIELD(arg0, s16 *, 2) > 0x78) {
        M2C_FIELD(arg0, s16 *, 2) = 0x78;
    }
}

void fn_801140BC(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
    if (*arg0 < 0) {
        *arg0 = 0;
    }
    if (*arg0 > 0xC8) {
        *arg0 = 0xC8;
    }
}

}
