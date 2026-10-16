#include "types.h"
#include "pso/player/TUnk_804A3C20.h"

extern "C" {

void reserved_53__13TUnk_804A3C20Fv(void* p);
void *TObjPlayer__sub_80128538(void *arg0);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

void TUnk_804A3C20::reserved_53() { draw_weapon_at_joint(this, (void*)49); update_trail_slot__11TItemWeaponFPvi(this, (void*)0); update_trail_slot__11TItemWeaponFPvi(this, (void*)1); }

extern s32 lbl_804A3C20[];

void *TObjPlayer__sub_80128538(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3C20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}

}
