#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv();

void fn_80327EC0(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U) {
        queue_destruction__7TObjectFv();
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r4 != 0) {
        temp_r0 = temp_r4 - 1;
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r0;
        if (temp_r0 == 0) {
            queue_destruction__7TObjectFv();
        }
    }
}

}
