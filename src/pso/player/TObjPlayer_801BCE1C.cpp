#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_from_source__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
s32 TObjPlayer__sub_801C2114();
M2C_UNK set_action_provider_variant__10TObjPlayerFPvs(void *, s16);
M2C_UNK bind_saved_inventory_equipment__10TObjPlayerFPvPvi(void *, void *, s32);
M2C_UNK create_inventory__10TObjPlayerFPv();

u16 obj_getField1c(void *);
extern s32 player_shared_buffer_base;

void init_from_source__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xD00) = 0;
    create_inventory__10TObjPlayerFPv();
    set_action_provider_variant__10TObjPlayerFPvs(arg0, (s16) TObjPlayer__sub_801C2114());
    bind_saved_inventory_equipment__10TObjPlayerFPvPvi(arg0, arg1 + 0x140, M2C_FIELD(arg1, s32 *, 0x13C));
    M2C_FIELD(arg0, s32 *, 0xDB4) = (s32) (player_shared_buffer_base + (obj_getField1c(arg0) * 0x600));
}

}
