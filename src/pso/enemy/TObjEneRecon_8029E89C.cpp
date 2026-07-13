#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneRecon__sub_8029E89C(u16 arg0, s32 arg1);
s32 TObjEneRecon__sub_8029EA4C(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D8F74(M2C_UNK, M2C_UNK *);
M2C_UNK TObjPlayer__sub_803D9B2C();
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 is_state_active__14TOKeyMachine01Fv();
s32 fn_8029E7BC(s32, M2C_UNK *);

extern u16 lbl_805D65F8;

s32 TObjEneRecon__sub_8029E89C(u16 arg0, s32 arg1) {
    M2C_UNK sp8[8];
    s32 var_r3;
    u32 temp_r3;

    if (is_state_active__14TOKeyMachine01Fv() == 0) {
        return 0;
    }
    if ((u16) lbl_805D65F8 == 0) {
        return 1;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp_r3 == 0U) {
        return 0;
    }
    if (fn_8029E7BC(temp_r3 + 0x2FC, sp8) == 0) {
        return 0;
    }
    if (arg1 != 0) {
        var_r3 = TObjEneRecon__sub_8029EA4C(sp8, 1);
    } else {
        var_r3 = 1;
    }
    if (var_r3 != 0) {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D8F74(0, sp8);
    }
    return var_r3;
}

}
