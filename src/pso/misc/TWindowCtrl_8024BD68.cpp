#include "types.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowChat.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *get_player_by_client_id(s32 i);
s32 has_player_active_menu__11TWindowCtrlFv(s32);
s32 apply_default_vec__11TWindowCtrlFll(void *, s32);
s32 is_slot_visible__11TWindowCtrlFv(s32);
s32 chat_accept_submission(s32 arg0);
void TWindowChat__sub_80247DFC(u8 *arg0);
void TWindowChat__sub_80247E50(u8 *arg0);

extern s32 local_client_id;

void TWindowCtrl::update_window_visibility() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    s32 current_target_id;

    if ((u32) this->m_38 != 0U) {
        temp_r3 = *(s16 *)&this->m_22;
        if (temp_r3 > 0) {
            *(s16 *)&this->m_22 = (s16) (temp_r3 - 1);
        }
        if (get_player_by_client_id(local_client_id) == 0U) {
            ((TWindowChat *)(this->m_38))->update();
            return;
        }
        current_target_id = TObjPlayer::get_current_target_id();
        if ((TWindowCtrl::get_display_flag() != 0) || (has_player_active_menu__11TWindowCtrlFv(local_client_id) != 0) || (is_slot_visible__11TWindowCtrlFv(local_client_id) != 0) || (apply_default_vec__11TWindowCtrlFll(arg0, local_client_id) != 0) || (((u16)current_target_id != 0xffffU) && ((s32)(u16)current_target_id != (s32) local_client_id))) {
            ((TWindowChat *)(this->m_38))->update();
            return;
        }
        ((TWindowChat *)(this->m_38))->open_input();
        if ((((TWindowChat *)(this->m_38))->is_mode_bit4() != 0) && (chat_accept_submission((s32)&this->m_94) != 0)) {
            TWindowChat__sub_80247E50((u8 *)this->m_38);
        }
        if (((TWindowChat *)(this->m_38))->is_visible() != 0) {
            TWindowChat__sub_80247DFC((u8 *)this->m_38);
        }
    }
}

}
