#include "types.h"

extern "C" {

s32 set_flag_40__16TAdChrSelASlotGCFv(u32);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
u32 find_local_player_in_range__16TObjCityMainWarpFf(f32);
s32 TWindow__close(void *);
s32 request_active_window_close();
s32 clear_flag__11TWindowCtrlFv();
s32 begin_player_keyboard_hold(s32);
s32 end_player_keyboard_hold(s32);
s32 suppress_slot__11TWindowCtrlFv(s32);
s32 unsuppress_slot__11TWindowCtrlFv(s32);
s32 align_menu_entry_positions(u32);
s32 calc_window_size__17TWindowSubComCardFPv(u32);
s32 add_text_entry__19TWindowSubTradeMainFllll(u32, s32, s32, s32, s32);
u32 check_room_seq_4__16TAdChrSelASlotGCFl(s32, s32);
s32 get_window_layout_position(s32);
extern s32 local_client_id;

void update_challenge_warp_window(void *arg0) {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0xE0);
    switch (temp_r0) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0xE0) = 1;
        *(s32 *)((s8 *)arg0 + 0xD0) = 0;
        return;
    case 1:
        if (find_local_player_in_range__16TObjCityMainWarpFf(*(f32 *)((s8 *)arg0 + 0xAC)) != 0U) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0xB0) == 0U) {
                *(u32 *)((s8 *)arg0 + 0xB0) = check_room_seq_4__16TAdChrSelASlotGCFl(get_window_layout_position(0x35), 7);
                if ((u32) *(u32 *)((s8 *)arg0 + 0xB0) != 0U) {
                    add_text_entry__19TWindowSubTradeMainFllll(*(u32 *)((s8 *)arg0 + 0xB0), get_message_10__20TWindowSubStatusDispFl(0x40), 0, 0, -1);
                    set_flag_40__16TAdChrSelASlotGCFv(*(u32 *)((s8 *)arg0 + 0xB0));
                    calc_window_size__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0xB0));
                    align_menu_entry_positions(*(u32 *)((s8 *)arg0 + 0xB0));
                }
                begin_player_keyboard_hold(local_client_id);
                request_active_window_close();
                suppress_slot__11TWindowCtrlFv(local_client_id);
            }
        } else {
            if ((u32) *(u32 *)((s8 *)arg0 + 0xB0) != 0U) {
                TWindow__close(*(void **)((s8 *)arg0 + 0xB0));
                *(u32 *)((s8 *)arg0 + 0xB0) = 0U;
            }
            end_player_keyboard_hold(local_client_id);
            clear_flag__11TWindowCtrlFv();
            unsuppress_slot__11TWindowCtrlFv(local_client_id);
        }
        if ((s32) *(s32 *)((s8 *)arg0 + 0x15C) == 0) {
            *(s16 *)((s8 *)arg0 + 0xDC) = 0;
        }
        return;
    case -1:
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB0) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0xB0));
            *(u32 *)((s8 *)arg0 + 0xB0) = 0U;
        }
        end_player_keyboard_hold(local_client_id);
        clear_flag__11TWindowCtrlFv();
        unsuppress_slot__11TWindowCtrlFv(local_client_id);
        break;
    }
}

}
