#include "types.h"

extern "C" {

s32 TLobby__sub_8030A770();
s32 TLobby__sub_8030A7B0();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 obj_getField1c();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FC1A4();
u32 get_card_window__17TWindowSubComCardFUi(s32);
s32 THunterGuildWarning__sub_802116EC();
s32 TWindowCtrl__sub_8024AF74(u16);
s32 TWindowCtrl__sub_8024B054(u16);
int is_player_flag_4000_set__11TWindowCtrlFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);

s32 check_can_open__16TObjBagWarnWin4PFv(void) {
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
    if (THunterGuildWarning__sub_802116EC() != 0) {
        return 0;
    }
    var_r31 = 0;
    var_r30 = 0;
    do {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U) && (get_card_window__17TWindowSubComCardFUi(var_r30) != 0U) && (TAdSinglePlyChrSelectGC__sub_801FC1A4() != 0)) {
            var_r31 = 1;
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

}
