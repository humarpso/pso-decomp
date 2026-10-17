#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/item/TItem.h"

extern "C" {

void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2);
s32 send_drop_item_6x5D__5TItemFPviPv(void *, s32, s32);
void send_field_state_if_active__10TObjPlayerFii(s32 arg0, s32 arg1);
u32 pickup_item__10TObjPlayerFv(u32, s32);
s32 get_current_floor();
void *spawn_particle_effect(void *pos, s32 id);
s32 get_field_d8__5TItemFv();
s32 TLobby__sub_8011AA44(s32, s32);
u32 advance_item_id_counter(s32 client);

void TItem::assign_id_and_init(s32 arg1, s32 pos) {
    if ((s32) *(s32 *)&this->m_next == -1) {
        *(s32 *)&this->m_next = advance_item_id_counter(arg1);
    }
    send_drop_item_6x5D__5TItemFPviPv(this, arg1, pos);
}

void TItem::send_field_state(s16 arg1, s32 arg2) {
    s32 arg0 = (s32)this;
    if (arg1 == get_current_floor()) {
        spawn_particle_effect((void *)(arg0 + 0x38), 0x9B);
        send_field_state_if_active__10TObjPlayerFii(arg2, 0x52802);
    }
}

void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2) {
    TLobby__sub_8011AA44(arg1, get_field_d8__5TItemFv());
    if ((arg2 != 0U) && (pickup_item__10TObjPlayerFv(arg2, arg0) != 0U)) {
        ((TItem *)arg0)->set_mode(1);
        ((TUnk_804AF8A0 *)arg0)->set_flag8();
    }
}

}
