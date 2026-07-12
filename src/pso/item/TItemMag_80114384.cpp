#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_pb_registered__8TItemMagFiUc(s32 arg0, u8 arg1);
s32 TItemMag__sub_801143E8(s32, s32);

s32 is_pb_registered__8TItemMagFiUc(s32 arg0, u8 arg1) {
    s32 var_r30;

    if (arg1 < 6U) {
        var_r30 = 0;
loop_2:
        if ((s32) arg1 == TItemMag__sub_801143E8(arg0, var_r30)) {
            return 1;
        }
        var_r30 += 1;
        if (var_r30 == 3) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return 0;
}

}
