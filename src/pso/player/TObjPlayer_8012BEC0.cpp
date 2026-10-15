#include "types.h"

extern "C" {

void *ct_variant__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);

extern s32 rabbit_wand_weapon_vtable[];

void *ct_variant__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = rabbit_wand_weapon_vtable;
    return arg0;
}

}
