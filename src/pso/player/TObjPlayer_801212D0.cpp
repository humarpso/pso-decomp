#include "types.h"

extern "C" {

void *init_vtable__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);

extern s32 lbl_804A07C0[];
extern s32 spawn_weapon_impact_effect[];

void *init_vtable__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A07C0;
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
