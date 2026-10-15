#include "types.h"

extern "C" {

void update_trade_request_window__11TWindowCtrlFPv(void *arg0);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
s32 is_slot_visible__11TWindowCtrlFi(s32);
void *TWindowTradeRequest__ct(void *, void *);
void *__nw__7TObjectFUl(s32);
s32 is_trade_active();
s32 TWindowCtrl__sub_8024701C(void *);
s32 queue_destruction__7TObjectFv(void *);

extern s32 local_client_id;

void update_trade_request_window__11TWindowCtrlFPv(void *arg0) {
    void *var_r0;

    if ((is_trade_active() == 0) || (has_player_active_menu__11TWindowCtrlFi(local_client_id) != 0) || (is_slot_visible__11TWindowCtrlFi(local_client_id) != 0) || ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) || (((u32) *(void **)((s8 *)arg0 + 0x38) != 0U) && (TWindowCtrl__sub_8024701C(*(void **)((s8 *)arg0 + 0x38)) != 0))) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x40));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
    } else if ((u32) *(u32 *)((s8 *)arg0 + 0x40) == 0U) {
        var_r0 = __nw__7TObjectFUl(0x24);
        if (var_r0 != NULL) {
            var_r0 = TWindowTradeRequest__ct(var_r0, arg0);
        }
        *(void **)((s8 *)arg0 + 0x40) = var_r0;
    }
}

}
