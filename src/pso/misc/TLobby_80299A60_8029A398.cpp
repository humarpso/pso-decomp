#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_challenge_4p_retry__6TLobbyFPv(void *arg0);
M2C_UNK send_giveup_to_all_players__6TLobbyFv(void *);
M2C_UNK close_giveup_window__6TLobbyFPv(void *);
M2C_UNK play_all_players_effect__6TLobbyFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();

extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void update_challenge_4p_retry__6TLobbyFPv(void *arg0) {
    play_all_players_effect__6TLobbyFPv();
    if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        send_giveup_to_all_players__6TLobbyFv(arg0);
        close_giveup_window__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

}
