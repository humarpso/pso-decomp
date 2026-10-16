#include "types.h"

extern "C" {

void *guld_milla_ct(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);

extern s32 lbl_804A0EA8[];
extern s32 spawn_weapon_impact_effect[];

void *guld_milla_ct(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0EA8;
    set_status_flags__10TObjPlayerFUl(arg0, 515);
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
