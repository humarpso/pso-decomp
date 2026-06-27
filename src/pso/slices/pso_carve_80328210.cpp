#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv();
s32 fn_803284F8(void *);

void fn_80328210(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        return;
    case 2:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
        if (temp_r0_2 < 0x10) {
            if (temp_r0_2 == 0) {
                goto block_11;
            }
            goto block_12;
        }
        if (temp_r0_2 < 0x12) {
block_11:
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
block_12:
        if (fn_803284F8(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

}
