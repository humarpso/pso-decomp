#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80153F3C();

void fn_80153A28(void *arg0) {
    s32 temp_r0;

    fn_80153F3C();
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
