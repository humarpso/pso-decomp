#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void assign_id_and_init__5TItemFPvii(void *arg0, s32 arg1, s32 arg2);
void send_field_state__5TItemFisi(s32 arg0, s16 arg1, s32 arg2);
void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2);
M2C_UNK set_mode__5TItemFPvc(s32, M2C_UNK);
M2C_UNK send_drop_item_6x5D__5TItemFPviPv(void *, s32, s32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(s32, M2C_UNK);
u32 pickup_item__10TObjPlayerFv(u32, s32);
s32 get_current_floor();
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
s32 get_field_d8__10TObjPlayerFPv();
M2C_UNK TLobby__sub_8011AA44(s32, s32);
s32 advance_item_id_counter(s32);
M2C_UNK set_flag8__6TLobbyFPv(s32);

void assign_id_and_init__5TItemFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        M2C_FIELD(arg0, s32 *, 0xC) = advance_item_id_counter(arg1);
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
