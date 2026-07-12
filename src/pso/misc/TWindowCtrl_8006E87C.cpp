#include "types.h"

extern "C" {

int is_player_flag_4000_set__11TWindowCtrlFPv(void* p);
s32 is_map_visible__11TWindowCtrlFv(void);
s32 TAdSinglePlyChrSelectGC__sub_801FC1A4();
s32 THunterGuildWarning__sub_802116EC();
s32 TLobby__sub_8030A770();
s32 TLobby__sub_8030A7B0();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024AF74(u16);
s32 TWindowCtrl__sub_8024B054(u16);
int check_flag__10TObjPlayerFPvi(void*, int);
u32 get_card_window__17TWindowSubComCardFUi(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 obj_getField1c();

int is_player_flag_4000_set__11TWindowCtrlFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 16384); }
s32 is_map_visible__11TWindowCtrlFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
        return 1;
    }
    if (TLobby__sub_8030A7B0() != 1) {
        return 1;
    }
    return TLobby__sub_8030A770() != 0 ? 1 : 0;
}

}
