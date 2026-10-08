#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int close_all_windows__6TLobbyFPv(void* p);
void open_warp_menu__6TLobbyFv(void);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(s32);
M2C_UNK get_window_layout_position(M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
int close_all_windows__6TLobbyFv(void*);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);

extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void open_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv(lbl_805D55E0);
    temp_r3 = get_window_layout_position(0xB5);
    lbl_805D55E4 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x3E), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x3F), 6, 1);
    calc_window_size__17TWindowSubComCardFPv(lbl_805D55E4);
    align_menu_entry_positions(lbl_805D55E4);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E4);
    TLobby__data_805D5594 = 5;
}

int close_all_windows__6TLobbyFPv(void* p) { return close_all_windows__6TLobbyFv(p); }

}
