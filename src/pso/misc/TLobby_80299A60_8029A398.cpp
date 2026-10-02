#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 obj_testFlags30(s32, M2C_UNK);
u32 get_player_by_client_id(s32);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TWindowCtrlMain__sub_8024CE58();
M2C_UNK open_message_window__6TLobbyFPv(void *);
M2C_UNK send_giveup_to_all_players__6TLobbyFv(void *);
M2C_UNK close_giveup_window__6TLobbyFPv(void *);
M2C_UNK play_effect_all_players__6TLobbyFPv(void *);
void TLobby__sub_8029A414(void *arg0);
}

extern "C" {

void update_challenge_4p_retry__6TLobbyFPv(void *arg0);
M2C_UNK send_giveup_to_all_players__6TLobbyFv(void *);
M2C_UNK close_giveup_window__6TLobbyFPv(void *);
M2C_UNK play_all_players_effect__6TLobbyFPv();
u32 get_player_by_client_id(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();

extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void update_challenge_4p_retry__6TLobbyFPv(void *arg0) {
    play_all_players_effect__6TLobbyFPv();
    if ((get_player_by_client_id(lbl_805D53A0) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        send_giveup_to_all_players__6TLobbyFv(arg0);
        close_giveup_window__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}
void TLobby__sub_8029A414(void *arg0) {
    s32 flag;
    s32 i;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
    case 0x12:
        if (TWindowCtrlMain__sub_8024CE58() != 0) {
            break;
        }
        return;
    default:
        return;
    }
    play_effect_all_players__6TLobbyFPv(arg0);
    flag = 1;
    for (i = 0; i < 4; i++) {
        u32 ctrl = get_player_by_client_id(i);
        if (ctrl != 0U && obj_testFlags30(ctrl, 0x02000000) != 0) {
            flag = 0;
            break;
        }
    }
    if (flag != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            send_giveup_to_all_players__6TLobbyFv(arg0);
            close_giveup_window__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        } else {
            send_giveup_to_all_players__6TLobbyFv(arg0);
            play_effect_all_players__6TLobbyFPv(arg0);
            open_message_window__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}
