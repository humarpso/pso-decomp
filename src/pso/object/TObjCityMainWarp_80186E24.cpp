#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
u32 find_local_player_in_range__16TObjCityMainWarpFif(f32);
M2C_UNK TWindow__close(void *);
M2C_UNK request_active_window_close();
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK begin_player_keyboard_hold(s32);
M2C_UNK end_player_keyboard_hold(s32);
M2C_UNK suppress_slot__11TWindowCtrlFi(s32);
M2C_UNK unsuppress_slot__11TWindowCtrlFi(s32);
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(u32);
M2C_UNK add_text_entry__19TWindowSubTradeMainFPviiii(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK get_window_layout_position(M2C_UNK);
extern s32 local_client_id;

void update_challenge_warp_window(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
        return;
    case 1:
        if (find_local_player_in_range__16TObjCityMainWarpFif(M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
                M2C_FIELD(arg0, u32 *, 0xB0) = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x35), 7);
                if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
                    add_text_entry__19TWindowSubTradeMainFPviiii(M2C_FIELD(arg0, u32 *, 0xB0), get_message_10__20TWindowSubStatusDispFPv(0x40), 0, 0, -1);
                    set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
                    calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0xB0));
                    align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0xB0));
                }
                begin_player_keyboard_hold(local_client_id);
                request_active_window_close();
                suppress_slot__11TWindowCtrlFi(local_client_id);
            }
        } else {
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
                M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
            }
            end_player_keyboard_hold(local_client_id);
            clear_flag__11TWindowCtrlFv();
            unsuppress_slot__11TWindowCtrlFi(local_client_id);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x15C) == 0) {
            M2C_FIELD(arg0, s16 *, 0xDC) = 0;
        }
        return;
    case -1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
            M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
        }
        end_player_keyboard_hold(local_client_id);
        clear_flag__11TWindowCtrlFv();
        unsuppress_slot__11TWindowCtrlFi(local_client_id);
        break;
    }
}

}
