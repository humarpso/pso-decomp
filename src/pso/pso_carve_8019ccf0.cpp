#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8019D880(s32);
s32 fn_801B5680();
u32 fn_801BA74C(s32);
s32 fn_8030A808();

s32 fn_8019CCF0(s32 arg0) {
    s32 var_r31;

    if (fn_8030A808() == 1) {
        var_r31 = 0;
loop_2:
        if ((fn_801BA74C(var_r31) != 0U) && (fn_801B5680() != 0)) {
            return 0;
        }
        var_r31 += 1;
        if (var_r31 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return fn_8019D880(arg0);
}

}
