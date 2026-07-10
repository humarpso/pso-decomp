#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4Type2__sub_80141FA8(s32);
void TObjEneMorfos__vt59(void);

s32 approach_value__13TObjEneMorfosFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    temp_r3 = TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60));
    if (temp_r3 > arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + arg2);
    } else if (temp_r3 < (s32) -arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - arg2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
        var_r31 = 1;
    }
    return var_r31;
}

}
