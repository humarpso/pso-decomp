#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_player_count__10TObjPlayerFv();
s32 is_flag_set__6TLobbyFv();
s32 TLobby__sub_80293080();
s32 get_game_play_mode(void);
}

extern "C" {

s32 is_online_ready__6TLobbyFv(void);
s32 is_camera_ctrl_active__6TLobbyFv(void);
s32 is_ready__6TLobbyFv(void);
s32 TLobby__sub_8030A770(void);
s32 get_instance__11TCameraCtrlFv();
s32 TCameraCtrl__sub_8006B368();
s32 get_instance__6TLobbyFv();
s32 get_online_ready_flag__6TLobbyFv();
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 lbl_805D5550;

s32 is_online_ready__6TLobbyFv(void) {
    if (((s32) lbl_805D5550 == 3) && (get_instance__6TLobbyFv() == 0)) {
        return 1;
    }
    if (get_online_ready_flag__6TLobbyFv() != 0) {
        return 1;
    }
    return 0;
}

s32 is_camera_ctrl_active__6TLobbyFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return get_instance__11TCameraCtrlFv();
    }
    return 1;
}

s32 is_ready__6TLobbyFv(void) {
    if ((get_game_play_mode() == 2) && (TCameraCtrl__sub_8006B368() == 1)) {
        return 1;
    }
    return 0;
}

s32 TLobby__sub_8030A770(void) {
    if ((get_game_play_mode() == 1) && (TCameraCtrl__sub_8006B368() == 1)) {
        return 1;
    }
    return 0;
}
s32 get_game_play_mode(void) {
    s32 n;
    s32 r;
    if (is_flag_set__6TLobbyFv() == 1) {
        return 1;
    }
    if (TLobby__sub_80293080() == 1) {
        return 1;
    }
    n = get_player_count__10TObjPlayerFv();
    r = 0;
    if (n > 0) {
        r = 2;
    }
    return r;
}

}
