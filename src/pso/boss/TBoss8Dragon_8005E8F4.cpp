#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss8Dragon__sub_8005E8F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TBoss8Dragon__sub_8005E868(s32, s32, s32);
s32 TBoss8Dragon__sub_8005E9E8(s32, s32, s32);

s32 TBoss8Dragon__sub_8005E8F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;

    temp_r31 = TBoss8Dragon__sub_8005E9E8(arg0, arg1, arg3);
    return temp_r31 * TBoss8Dragon__sub_8005E868(arg0, arg1, arg2);
}

}
