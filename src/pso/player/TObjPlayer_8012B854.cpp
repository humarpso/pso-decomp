#include "types.h"

extern "C" {

void *init_vtable_and_clear_field1f8__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);

extern s32 imperial_pick_weapon_vtable[];

void *init_vtable_and_clear_field1f8__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = imperial_pick_weapon_vtable;
    *(u32 *)((s8 *)arg0 + 0x1F8) = 0;
    return arg0;
}

}
