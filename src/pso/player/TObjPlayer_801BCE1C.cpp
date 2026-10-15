#include "types.h"

extern "C" {

void init_from_source__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
s32 TObjPlayer__sub_801C2114();
s32 set_action_provider_variant__10TObjPlayerFPvs(void *, s16);
s32 bind_saved_inventory_equipment__10TObjPlayerFPvPvi(void *, void *, s32);
s32 create_inventory__10TObjPlayerFPv();

u16 obj_getField1c(void *);
extern s32 player_shared_buffer_base;

void init_from_source__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    *(s32 *)((s8 *)arg0 + 0xD00) = 0;
    create_inventory__10TObjPlayerFPv();
    set_action_provider_variant__10TObjPlayerFPvs(arg0, (s16) TObjPlayer__sub_801C2114());
    bind_saved_inventory_equipment__10TObjPlayerFPvPvi(arg0, arg1 + 0x140, *(s32 *)((s8 *)arg1 + 0x13C));
    *(s32 *)((s8 *)arg0 + 0xDB4) = (s32) (player_shared_buffer_base + (obj_getField1c(arg0) * 0x600));
}

}
