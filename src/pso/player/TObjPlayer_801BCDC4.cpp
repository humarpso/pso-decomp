#include "types.h"

extern "C" {

void init_data_table_ptr__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_801C2114();
s32 set_action_provider_variant__10TObjPlayerFPvs(void *, s16);
s32 create_inventory__10TObjPlayerFPv();

u16 obj_getField1c(void *);
extern s32 player_shared_buffer_base;

void init_data_table_ptr__10TObjPlayerFPv(void *arg0) {
    create_inventory__10TObjPlayerFPv();
    set_action_provider_variant__10TObjPlayerFPvs(arg0, TObjPlayer__sub_801C2114());
    *(s32 *)((s8 *)arg0 + 0xDB4) = (s32) (player_shared_buffer_base + (obj_getField1c(arg0) * 0x600));
}

}
