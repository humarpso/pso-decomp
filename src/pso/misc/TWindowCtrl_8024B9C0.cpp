#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8024B9C0(void *arg0);
void update_trade_window__11TWindowCtrlFPv(void *arg0);
void handle_controller__11TWindowCtrlFi(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_active__13TRaderMapCoreFv();
s32 has_player_active_menu__11TWindowCtrlFi(s32);
s32 TWindowCtrl__sub_8024B000(void *, s32);
s32 is_slot_visible__11TWindowCtrlFi(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, M2C_UNK *);
M2C_UNK request_close__19TWindowSubTradeMainFPv(u32);
s32 is_split_screen();
s32 fn_8002AE08(s32);
M2C_UNK advance_card_status__15TWindowCtrlMainFi(s32);
M2C_UNK window_request_show(u32);

extern s32 local_client_id;

void TWindowCtrl__sub_8024B9C0(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        if (is_slot_visible__11TWindowCtrlFi(local_client_id) != 0) {
            request_close__19TWindowSubTradeMainFPv(M2C_FIELD(arg0, u32 *, 0x30));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x30));
    }
}

extern s32 local_client_id;

void update_trade_window__11TWindowCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        if ((is_slot_visible__11TWindowCtrlFi(local_client_id) != 0) || (TWindowCtrl__sub_8024B000((void *)(arg0), (s32)(local_client_id)) != 0) || ((is_split_screen() != 0) && (is_active__13TRaderMapCoreFv() == 0))) {
            request_close__19TWindowSubTradeMainFPv(M2C_FIELD(arg0, u32 *, 0x34));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

extern u8 controller_input_state[];
extern s32 local_client_id;

void handle_controller__11TWindowCtrlFi(s32 arg0) {
    if ((get_global_state__14TOKeyMachine01Fv() == 0xF) && (is_slot_visible__11TWindowCtrlFi(local_client_id) == 0) && (TWindowCtrl__sub_8024B000((void *)(arg0), (s32)(local_client_id)) == 0) && (has_player_active_menu__11TWindowCtrlFi(local_client_id) == 0) && (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, fn_8002AE08(local_client_id), (M2C_UNK *)controller_input_state) != 0)) {
        advance_card_status__15TWindowCtrlMainFi(local_client_id);
    }
}

}
