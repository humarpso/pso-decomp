#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

s32 TLobby__sub_8030A770();
s32 get_game_play_mode();
u32 get_player_by_client_id(s32);
s32 has_player_active_menu__11TWindowCtrlFv(u16);
s32 is_slot_visible__11TWindowCtrlFv(u16);
int check_flag__10TObjPlayerFl(void*, int);
u32 get_character_save_record(s32);
s32 is_active__19THunterGuildWarningFv();
s32 is_level_capped__23TAdSinglePlyChrSelectGCFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 obj_getField1c();

extern void *TWindowCtrl__active_window;

s32 TWindowCtrl::get_flag_bit3() {
    if ((void *) TWindowCtrl__active_window == NULL) {
        return 0;
    }
    return ((u16) *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) >> 3U) & 1;
}

int TWindowCtrl::is_player_flag_4000_set() { return check_flag__10TObjPlayerFl(this, 16384); }
s32 TWindowCtrl::is_map_visible() {
    if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
        return 1;
    }
    if (get_game_play_mode() != 1) {
        return 1;
    }
    return TLobby__sub_8030A770() != 0 ? 1 : 0;
}

}
