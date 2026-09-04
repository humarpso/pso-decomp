#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_active_battle__6TLobbyFv(void);
void reset_battle_camera__6TLobbyFv(void);
void sync_battle_ctrl_4p__6TLobbyFv(void);
void update_local_player__6TLobbyFv(void);
M2C_UNK TCameraCtrl__sub_8006A410(M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801B3FD8();
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK forward_1BF500_at_63c__10TObjPlayerFPv(s32);
M2C_UNK player_flag_1__6TLobbyFPv();
M2C_UNK reset_battle_camera__11TCameraCtrlFPv();
M2C_UNK stop_battle__10TObjPlayerFPv();

extern s32 lbl_805D53A0;

void handle_active_battle__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(lbl_805D53A0)) != 0U) {
        stop_battle__10TObjPlayerFPv();
    }
}

extern s32 lbl_805D53A0;

void sync_battle_ctrl_4p__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(lbl_805D53A0)) != 0U) {
        player_flag_1__6TLobbyFPv();
    }
}

extern s32 lbl_805D53A0;

void reset_battle_camera__6TLobbyFv(void) {
    u32 temp_r3;
    reset_battle_camera__11TCameraCtrlFPv();
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(lbl_805D53A0));
    if (temp_r3 != 0U) {
        TCameraCtrl__sub_8006A410(temp_r3, 0);
    }
}

extern s32 lbl_805D53A0;

void update_local_player__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(lbl_805D53A0));
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B3FD8();
        forward_1BF500_at_63c__10TObjPlayerFPv(temp_r3);
    }
}

}
