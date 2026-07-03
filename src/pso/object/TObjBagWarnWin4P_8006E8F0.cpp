#include "types.h"

extern "C" {

s32 fn_8030A770();
s32 fn_8030A7B0();
s32 TRaderMapCore__sub_8030A808();
s32 obj_getField1c();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_801FC1A4();
u32 TWindowSubComCard__sub_80202990(s32);
s32 fn_802116EC();
s32 TWindowCtrl__sub_8024AF74(u16);
s32 TWindowCtrl__sub_8024B054(u16);
int fn_8006E87C(void* p);
int TObjPlayer__sub_800495E0(void*, int);

s32 TObjBagWarnWin4P__sub_8006E8F0(void) {
    s32 var_r31;
    s32 var_r30;

    for (var_r31 = 0; var_r31 < 4; var_r31++) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) && (TWindowCtrl__sub_8024AF74(obj_getField1c()) != 0)) {
            return 0;
        }
    }
    for (var_r31 = 0; var_r31 < 4; var_r31++) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) && (TWindowCtrl__sub_8024B054(obj_getField1c()) != 0)) {
            return 0;
        }
    }
    if (fn_802116EC() != 0) {
        return 0;
    }
    var_r31 = 0;
    var_r30 = 0;
    do {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U) && (TWindowSubComCard__sub_80202990(var_r30) != 0U) && (fn_801FC1A4() != 0)) {
            var_r31 = 1;
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

}
