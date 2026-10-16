#include "types.h"
#include "pso/player/TUnk_804A1C38.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void TUnk_804A1C38::reserved_53() { draw_weapon_at_joint(this, (void*)49); update_trail_slot__11TItemWeaponFPvi(this, (void*)0); update_trail_slot__11TItemWeaponFPvi(this, (void*)1); }

extern s32 lbl_804A1C38[];

void *TUnk_804A1C38::set_vtable_mode1() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1C38;
    set_status_flags__10TObjPlayerFPvUi(this, 1);
    return this;
}

}
