#include "types.h"

extern "C" {

void update_window_visibility__11TWindowCtrlFPv(u8 *arg0);
u32 get_player_by_client_id(s32);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
s32 apply_default_vec__11TWindowCtrlFii(void *, s32);
s32 is_slot_visible__11TWindowCtrlFi(s32);
s32 get_display_flag__11TWindowCtrlFv();
s32 chat_accept_submission(void *);
s32 get_current_target_id__10TObjPlayerFv();
s32 update__11TWindowChatFPv(u32);
s32 open_input__11TWindowChatFv(u32);
s32 TWindowChat__sub_80247DFC(u32);
s32 is_visible__11TWindowChatFPv(u32);
s32 TWindowChat__sub_80247E50(u32);
s32 is_mode_bit4__11TWindowChatFPv(u32);

extern s32 local_client_id;

void update_window_visibility__11TWindowCtrlFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r31;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
        temp_r3 = *(s16 *)((s8 *)arg0 + 0x22);
        if (temp_r3 > 0) {
            *(s16 *)((s8 *)arg0 + 0x22) = (s16) (temp_r3 - 1);
        }
        if (get_player_by_client_id(local_client_id) == 0U) {
            update__11TWindowChatFPv(*(u32 *)((s8 *)arg0 + 0x38));
            return;
        }
        temp_r31 = get_current_target_id__10TObjPlayerFv();
        if ((get_display_flag__11TWindowCtrlFv() != 0) || (has_player_active_menu__11TWindowCtrlFi(local_client_id) != 0) || (is_slot_visible__11TWindowCtrlFi(local_client_id) != 0) || (apply_default_vec__11TWindowCtrlFii(arg0, local_client_id) != 0) || (((u16)temp_r31 != 0xffffU) && ((s32)(u16)temp_r31 != (s32) local_client_id))) {
            update__11TWindowChatFPv(*(u32 *)((s8 *)arg0 + 0x38));
            return;
        }
        open_input__11TWindowChatFv(*(u32 *)((s8 *)arg0 + 0x38));
        if ((is_mode_bit4__11TWindowChatFPv(*(u32 *)((s8 *)arg0 + 0x38)) != 0) && (chat_accept_submission(arg0 + 0x94) != 0)) {
            TWindowChat__sub_80247E50(*(u32 *)((s8 *)arg0 + 0x38));
        }
        if (is_visible__11TWindowChatFPv(*(u32 *)((s8 *)arg0 + 0x38)) != 0) {
            TWindowChat__sub_80247DFC(*(u32 *)((s8 *)arg0 + 0x38));
        }
    }
}

}
