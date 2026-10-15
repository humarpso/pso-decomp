#include "types.h"

extern "C" {

void assign_id_and_init__5TItemFPvii(void *arg0, s32 arg1, s32 arg2);
void send_field_state__5TItemFisi(s32 arg0, s16 arg1, s32 arg2);
void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2);
s32 set_mode__5TItemFPvc(s32, s32);
s32 send_drop_item_6x5D__5TItemFPviPv(void *, s32, s32);
s32 send_field_state_if_active__10TObjPlayerFii(s32, s32);
u32 pickup_item__10TObjPlayerFv(u32, s32);
s32 get_current_floor();
s32 spawn_particle_effect(s32, s32);
s32 get_field_d8__10TObjPlayerFPv();
s32 TLobby__sub_8011AA44(s32, s32);
s32 advance_item_id_counter(s32);
s32 set_flag8__6TLobbyFPv(s32);

void assign_id_and_init__5TItemFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0xC) == -1) {
        *(s32 *)((s8 *)arg0 + 0xC) = advance_item_id_counter(arg1);
    }
    send_drop_item_6x5D__5TItemFPviPv(arg0, arg1, arg2);
}

void send_field_state__5TItemFisi(s32 arg0, s16 arg1, s32 arg2) {
    if (arg1 == get_current_floor()) {
        spawn_particle_effect(arg0 + 0x38, 0x9B);
        send_field_state_if_active__10TObjPlayerFii(arg2, 0x52802);
    }
}

void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2) {
    TLobby__sub_8011AA44(arg1, get_field_d8__10TObjPlayerFPv());
    if ((arg2 != 0U) && (pickup_item__10TObjPlayerFv(arg2, arg0) != 0U)) {
        set_mode__5TItemFPvc(arg0, 1);
        set_flag8__6TLobbyFPv(arg0);
    }
}

}
