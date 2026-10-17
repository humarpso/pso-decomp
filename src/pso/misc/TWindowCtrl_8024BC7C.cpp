#include "types.h"
#include "pso/misc/TWindowSubShortMail_80246CB8.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/TObject.h"

extern "C" {
void queue_destruction__7TObjectFv(void *arg0);
u32 __nw__7TObjectFUl(int);
s32 TWindowCtrl__sub_8024701C(int);
s32 has_player_active_menu__11TWindowCtrlFv(void *);
s32 is_slot_visible__11TWindowCtrlFv(void *);
u32 TWindowGetComCard__ct(int, void *);
extern s32 local_client_id;
void TWindowCtrl::update_com_card_window() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 var_r0;
    temp_r3 = this->m_3c;
    if ((temp_r3 != 0U) && (((TObject *)temp_r3)->all_parents_unqueued_for_destruction() == 0)) {
        this->m_3c = 0U;
    }
    if ((is_guild_card_receive_active() == 0) || (has_player_active_menu__11TWindowCtrlFv((void *)local_client_id) != 0) || (is_slot_visible__11TWindowCtrlFv((void *)local_client_id) != 0) || (TWindowCtrl::get_flag_bit5() != 0) || ((u32) this->m_40 != 0U) || ((temp_r3_2 = this->m_38, ((temp_r3_2 == 0U) == 0)) && (TWindowCtrl__sub_8024701C((int)temp_r3_2) != 0))) {
        temp_r3_3 = this->m_3c;
        if (temp_r3_3 != 0U) {
            queue_destruction__7TObjectFv((void *)temp_r3_3);
            this->m_3c = 0U;
        }
    } else if ((u32) this->m_3c == 0U) {
        temp_r3_4 = __nw__7TObjectFUl(0x2C);
        var_r0 = temp_r3_4;
        if (var_r0 != 0U) {
            var_r0 = TWindowGetComCard__ct(temp_r3_4, arg0);
        }
        this->m_3c = var_r0;
    }
}

}
