#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_menu_window__6TLobbyFv(void);
M2C_UNK show_seq_phase_message__6TLobbyFi(M2C_UNK);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(s32, M2C_UNK);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, s32);
M2C_UNK get_window_layout_position(M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(u32);

extern s32 TLobby__data_805D5594;
extern u32 lbl_805D55E4;
extern s32 lbl_805D55E8;

void open_menu_window__6TLobbyFv(void) {
    u32 tmp_e4 = lbl_805D55E4;
    if (tmp_e4 != 0U) {
        open__17TWindowOptionCtrlFPv(tmp_e4);
    }
    show_seq_phase_message__6TLobbyFi(0x11);
    lbl_805D55E8 = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0xB6), 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E8, get_seq_phase__6TLobbyFPv(0x45), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E8, get_seq_phase__6TLobbyFPv(0x46), 6, 1);
    calc_window_size__17TWindowSubComCardFPv(lbl_805D55E8);
    align_menu_entry_positions(lbl_805D55E8);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E8);
    set_selected_index__17TWindowSubComCardFPvs(lbl_805D55E8, 0);
    TLobby__data_805D5594 = 0x18;
}

}
