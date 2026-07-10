#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__sub_80310B4C(void *arg0, s32 arg1, s32 arg2);
s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TObjPlayer__sub_801B5200();
M2C_UNK fn_8024A054();
M2C_UNK fn_8024AD30(u16);
M2C_UNK TWindowCtrl__sub_8024AEF0(u16);

void TPlayerBattleCtrl4P__sub_80310B4C(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_r31;
    s32 temp_r30;

    temp_r31 = (u16)arg1;
    temp_r30 = arg2;
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(temp_r31)) != 0U) {
        TObjPlayer__sub_801B5200();
    }
    if (temp_r30 != 0) {
        fn_8024AD30(temp_r31);
        fn_8024A054();
        TWindowCtrl__sub_8024AEF0(temp_r31);
    }
}

s32 obj_testFlags30(u32, s32);

s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    u32 var_r3;

    var_r31 = 0;
loop_1:
    var_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31));
    if ((var_r3 != 0U) && (obj_testFlags30(var_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_1;
}

}
