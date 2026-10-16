#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_lobby_floor_15__15TFontSmallLobbyFv();
s32 TObjPlayer__sub_801C2114();
s32 get_ptr_4__10TObjPlayerFv(u8 *);
s32 set_action_provider_variant__10TObjPlayerFPvs(void *, s16);
s32 assign_inventory_item_ids(void *, s32, u8);
s32 bind_saved_inventory_equipment__10TObjPlayerFPvPvi(void *, s32, u8);

s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
extern s32 player_shared_buffer_base;
extern s32 shared_state_flags;

void TObjPlayer::load_character_state(u8 *arg1) {
    u8 temp_r31;
    s32 temp_r30;

    temp_r31 = *arg1;
    temp_r30 = get_ptr_4__10TObjPlayerFv(arg1);
    create_inventory();
    set_action_provider_variant__10TObjPlayerFPvs(this, (s16) TObjPlayer__sub_801C2114());
    if ((obj_isState2_324(this) == 0) || (is_lobby_floor_15__15TFontSmallLobbyFv() == 0)) {
        if (!(shared_state_flags & 1)) {
            assign_inventory_item_ids(this, temp_r30, temp_r31);
        }
        bind_saved_inventory_equipment__10TObjPlayerFPvPvi(this, temp_r30, temp_r31);
    }
    *(s32 *)((s8 *)this + 0xDB4) = (s32) (player_shared_buffer_base + (obj_getField1c(this) * 0x600));
}

}
