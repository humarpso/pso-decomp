#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TObjPlayer__sub_801C2114();
s32 set_action_provider_variant__10TObjPlayerFPvs(void *, s16);
s32 bind_saved_inventory_equipment__10TObjPlayerFPvPvi(void *, void *, s32);
s32 create_inventory__10TObjPlayerFv();

u16 obj_getField1c(void *);
extern s32 player_shared_buffer_base;

void TObjPlayer::init_from_source(u8 *arg1) {
    *(s32 *)&this->inventory_objects = 0;
    create_inventory__10TObjPlayerFv();
    set_action_provider_variant__10TObjPlayerFPvs(((u8 *)this), (s16) TObjPlayer__sub_801C2114());
    bind_saved_inventory_equipment__10TObjPlayerFPvPvi(((u8 *)this), arg1 + 0x140, *(s32 *)((s8 *)arg1 + 0x13C));
    *(s32 *)((s8 *)((u8 *)this) + 0xDB4) = (s32) (player_shared_buffer_base + (obj_getField1c(((u8 *)this)) * 0x600));
}

}
