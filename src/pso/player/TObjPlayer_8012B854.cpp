#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_and_clear_field1f8__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);

extern M2C_UNK imperial_pick_weapon_vtable[];

void *init_vtable_and_clear_field1f8__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = imperial_pick_weapon_vtable;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
