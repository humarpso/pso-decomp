#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TObjPlayer__sub_801D95B8(void *arg0);
s16 TObjPlayer__sub_801D95DC(void *arg0);
void split_capped_value__10TObjPlayerFUcPvPv(u8 arg0, u8 *arg1, s8 *arg2);
u8 get_valid_technique__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_801C011C(void *, M2C_UNK);
s32 TObjPlayer__sub_801D9988();
s32 TObjPlayer__sub_801D9A04(s16);
s32 TObjPlayer__sub_801D9A28(u8);

s16 TObjPlayer__sub_801D95B8(void *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r4 < 0) || (temp_r4 > 0xA)) {
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
    return M2C_FIELD(arg0, s16 *, 6);
}

s16 TObjPlayer__sub_801D95DC(void *arg0) {
    if (TObjPlayer__sub_801D9A04(M2C_FIELD(arg0, s16 *, 4)) == 0) {
        TObjPlayer__sub_801C011C(arg0, 0);
    }
    return M2C_FIELD(arg0, s16 *, 4);
}

void split_capped_value__10TObjPlayerFUcPvPv(u8 arg0, u8 *arg1, s8 *arg2) {
    if ((TObjPlayer__sub_801D9988() != 0) || (arg0 <= 0xEU)) {
        *arg1 = arg0;
        *arg2 = 0;
        return;
    }
    *arg1 = 0xE;
    *arg2 = arg0 - 0xE;
}

u8 get_valid_technique__10TObjPlayerFPv(void *arg0) {
    u8 var_r31;

    var_r31 = M2C_FIELD(arg0, u8 *, 1);
    if (TObjPlayer__sub_801D9A28(var_r31) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}

}
