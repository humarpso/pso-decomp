#include "types.h"

extern "C" {

void load_character_state__10TObjPlayerFPvPv(void *arg0, u8 *arg1);
s32 is_lobby_floor_15__15TFontSmallLobbyFv();
s32 TObjPlayer__sub_801C2114();
s32 get_ptr_4__10TObjPlayerFPv(u8 *);
s32 set_action_provider_variant__10TObjPlayerFPvs(void *, s16);
s32 assign_inventory_item_ids(void *, s32, u8);
s32 bind_saved_inventory_equipment__10TObjPlayerFPvPvi(void *, s32, u8);
s32 create_inventory__10TObjPlayerFPv(void *);

s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
extern s32 player_shared_buffer_base;
extern s32 shared_state_flags;

void load_character_state__10TObjPlayerFPvPv(void *arg0, u8 *arg1) {
    u8 temp_r31;
    s32 temp_r30;

    temp_r31 = *arg1;
    temp_r30 = get_ptr_4__10TObjPlayerFPv(arg1);
    create_inventory__10TObjPlayerFPv(arg0);
    set_action_provider_variant__10TObjPlayerFPvs(arg0, (s16) TObjPlayer__sub_801C2114());
    if ((obj_isState2_324(arg0) == 0) || (is_lobby_floor_15__15TFontSmallLobbyFv() == 0)) {
        if (!(shared_state_flags & 1)) {
            assign_inventory_item_ids(arg0, temp_r30, temp_r31);
        }
        bind_saved_inventory_equipment__10TObjPlayerFPvPvi(arg0, temp_r30, temp_r31);
    }
    *(s32 *)((s8 *)arg0 + 0xDB4) = (s32) (player_shared_buffer_base + (obj_getField1c(arg0) * 0x600));
}

}
