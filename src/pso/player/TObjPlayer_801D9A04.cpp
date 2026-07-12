#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjPlayer__sub_801D9A04(s16 arg0);
u8 TObjPlayer__sub_801D9A28(u8 arg0);
s32 check_technique_level__10TObjPlayerFiiUc(s32 arg0, s32 arg1, u8 arg2);
u8 TObjPlayer__sub_801C010C(s32, s32);
s32 TObjPlayer__sub_801D9988(u8);
u8 TObjPlayer__sub_801D9BE8(s32, s32);

u8 TObjPlayer__sub_801D9A04(s16 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((arg0 >= 0) && (arg0 < 0x13)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

u8 TObjPlayer__sub_801D9A28(u8 arg0) {
    return (u8) (arg0 <= 0xFU);
}

s32 check_technique_level__10TObjPlayerFiiUc(s32 arg0, s32 arg1, u8 arg2) {
    if (TObjPlayer__sub_801D9988(arg2) != 0) {
        return 1;
    }
    if (arg2 > TObjPlayer__sub_801C010C(arg0, arg1)) {
        return 0;
    }
    return arg2 <= TObjPlayer__sub_801D9BE8(arg0, arg1) ? 1 : 0;
}

}
