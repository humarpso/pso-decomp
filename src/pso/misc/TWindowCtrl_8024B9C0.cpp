#include "types.h"
#include "pso/misc/TWindowLockOn.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/misc/TWindowCtrlMain.h"
#include "pso/misc/TWindowSubTradeMain.h"

extern "C" {

void TWindowCtrl__sub_8024B9C0(void *arg0);
s32 has_player_active_menu__11TWindowCtrlFv(s32);
s32 TWindowCtrl__sub_8024B000(void *, s32);
s32 is_slot_visible__11TWindowCtrlFv(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32 *);
s32 is_split_screen();
s32 fn_8002AE08(s32);
s32 window_request_show(u32);

extern s32 local_client_id;

void TWindowCtrl__sub_8024B9C0(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
        if (is_slot_visible__11TWindowCtrlFv(local_client_id) != 0) {
            ((TWindowLockOn *)(*(u32 *)((s8 *)arg0 + 0x30)))->request_close();
            return;
        }
        window_request_show(*(u32 *)((s8 *)arg0 + 0x30));
    }
}

extern s32 local_client_id;

void TWindowCtrl::update_trade_window() {
    if ((u32) *(u32 *)((s8 *)this + 0x34) != 0U) {
        if ((is_slot_visible__11TWindowCtrlFv(local_client_id) != 0) || (TWindowCtrl__sub_8024B000((void *)(this), (s32)(local_client_id)) != 0) || ((is_split_screen() != 0) && (TRaderMapCore::is_active() == 0))) {
            ((TWindowLockOn *)(*(u32 *)((s8 *)this + 0x34)))->request_close();
            return;
        }
        window_request_show(*(u32 *)((s8 *)this + 0x34));
    }
}

extern u8 controller_input_state[];
extern s32 local_client_id;

void TWindowCtrl::handle_controller() {
    s32 arg0 = (s32)this;
    if ((TOKeyMachine01::get_global_state() == 0xF) && (is_slot_visible__11TWindowCtrlFv(local_client_id) == 0) && (TWindowCtrl__sub_8024B000((void *)(arg0), (s32)(local_client_id)) == 0) && (has_player_active_menu__11TWindowCtrlFv(local_client_id) == 0) && (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, fn_8002AE08(local_client_id), (s32 *)controller_input_state) != 0)) {
        TWindowCtrlMain::advance_card_status(local_client_id);
    }
}

}
