#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80105984(M2C_UNK *);
M2C_UNK fn_8010D614(s32, M2C_UNK *);
s32 fn_801143E8(M2C_UNK *, s32);

s32 TWindowSubMag__sub_8027B388(void *arg0) {
    M2C_UNK sp8;
    s32 var_r31;

    fn_80105984(&sp8);
    fn_8010D614(M2C_FIELD(arg0, s32 *, 0x2C), &sp8);
    var_r31 = 0;
loop_1:
    if (fn_801143E8(&sp8, var_r31) == -1) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 3) {
        return var_r31;
    }
    goto loop_1;
}

}
