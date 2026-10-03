#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_set_state_12__6TLobbyFv(void);
void open_keyboard_window__6TLobbyFv(void);
void send_room_change__6TLobbyFi(s32 arg0);
s32 TKeyBoardControl__ct(s32, s32, s32, s32, s32, s32);
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK TWindow__close(u32);
s32 __nw__7TObjectFUl(M2C_UNK);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(s32, M2C_UNK);
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK fn_80131B18(s32, s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK *get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK send_room_change__9TProtocolFi(s32, s32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);

extern s32 TLobby__data_805D5580;
extern s32 TLobby__data_805D5588;
extern s32 TLobby__data_805D5594;

void send_room_change__6TLobbyFi(s32 arg0) {
    TLobby__data_805D5588 = 1;
    init_player_window_effect__6TLobbyFv();
    send_room_change__9TProtocolFi(TLobby__data_805D5580, arg0);
    TLobby__data_805D5594 = 0x13;
}

extern s32 TLobby__data_805D5594;

void close_and_set_state_12__6TLobbyFv(void) {
    close_all_windows__6TLobbyFv();
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D5594 = 0x12;
}

extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55D8;
extern u32 lbl_805D55F0;
extern s32 lbl_805D55F4;
extern s32 TLobby__data_805D5604;
extern M2C_UNK *lbl_805D5614;
extern u8 lbl_805D5618;
extern M2C_UNK lbl_805DB0B4;

void open_keyboard_window__6TLobbyFv(void) {
    s32 var_r0;
    s32 tmp_r3;

    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close(TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0U;
    }
    if ((u32) lbl_805D55F0 == 0U) {
        if ((s8) lbl_805D5618 == 0) {
            lbl_805D5614 = &lbl_805DB0B4;
            lbl_805D5618 = 1;
        }
        tmp_r3 = get_window_layout_position(0xC3);
        lbl_805D55F0 = check_room_seq_4__16TAdChrSelASlotGCFii(tmp_r3, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55F0, get_seq_phase__6TLobbyFPv(0x44), 2, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55F0, lbl_805D5614, 2, 1);
        TWindowSubComCard__sub_80265F60(lbl_805D55F0);
        align_menu_entry_positions(lbl_805D55F0);
        set_flag_40__16TAdChrSelASlotGCFPv(lbl_805D55F0);
    }
    var_r0 = __nw__7TObjectFUl(0x2C);
    if (var_r0 != 0) {
        var_r0 = TKeyBoardControl__ct(var_r0, TLobby__data_805D5604, 0x10, 0, 0, lbl_805D53A0);
    }
    lbl_805D55F4 = var_r0;
    set_sub_position__15TWindowMakeTeamFPvPv(lbl_805D55F4, get_window_layout_position(0xC4));
    fn_80131B18(lbl_805D55F4, get_window_layout_position(0xC5));
    TLobby__data_805D5594 = 9;
}

}
