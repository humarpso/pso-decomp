#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_lobby_warp_menu__6TLobbyFv(void);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B0;
extern s32 lbl_805D55E0;

void open_lobby_warp_menu__6TLobbyFv(void) {
    M2C_UNK temp_r3;
    TLobby__sub_8013990C(3);
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB4);
    if ((s32) TLobby__data_805D55B0 < 0xD) {
        lbl_805D55E0 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x35), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x36), 6, 1);
    } else {
        lbl_805D55E0 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 3);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x35), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x36), 6, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x47), 6, 3);
    }
    TWindowSubComCard__sub_80265F60(lbl_805D55E0);
    TWindowSubComCard__sub_80265C30(lbl_805D55E0);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E0);
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D5594 = 3;
}

}
