#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

s32 has_player_active_menu__11TWindowCtrlFv(s32);
s32 is_slot_visible__11TWindowCtrlFv(s32);
void *TWindowTradeRequest__ct(void *, void *);
void *__nw__7TObjectFUl(s32);
s32 is_trade_active();
s32 TWindowCtrl__sub_8024701C(void *);
s32 queue_destruction__7TObjectFv(void *);

extern s32 local_client_id;

void TWindowCtrl::update_trade_request_window() {
    void *var_r0;

    if ((is_trade_active() == 0) || (has_player_active_menu__11TWindowCtrlFv(local_client_id) != 0) || (is_slot_visible__11TWindowCtrlFv(local_client_id) != 0) || ((u32) this->m_3c != 0U) || (((u32) *(void * *)&this->m_38 != 0U) && (TWindowCtrl__sub_8024701C(*(void * *)&this->m_38) != 0))) {
        if ((u32) this->m_40 != 0U) {
            queue_destruction__7TObjectFv(*(void * *)&this->m_40);
            this->m_40 = 0U;
        }
    } else if ((u32) this->m_40 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x24);
        if (var_r0 != NULL) {
            var_r0 = TWindowTradeRequest__ct(var_r0, this);
        }
        *(void * *)&this->m_40 = var_r0;
    }
}

}
