#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_player_in_range__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0);
s32 TBoss3Volopt__sub_8003F108();
f32 TObjPlayer__sub_80141CF8(s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

s32 is_player_in_range__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r30;

    var_r30 = 0;
loop_1:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r30);
    if ((temp_r3 != 0) && ((temp_r3_2 = TBoss3Volopt__sub_8003F108(), ((temp_r3_2 == 0) != 0)) || (temp_r3_2 == 0x12)) && (TObjPlayer__sub_80141CF8(arg1, temp_r3 + 0x38) < farg0)) {
        return 1;
    }
    var_r30 += 1;
    if (var_r30 >= 4) {
        return 0;
    }
    goto loop_1;
}

}
