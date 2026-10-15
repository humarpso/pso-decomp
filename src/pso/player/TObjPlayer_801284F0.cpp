#include "types.h"

extern "C" {

void TObjPlayer__sub_801284F0(void* p);
void *TObjPlayer__sub_80128538(void *arg0);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

void TObjPlayer__sub_801284F0(void* p) { draw_weapon_at_joint(p, (void*)49); update_trail_slot__11TItemWeaponFPvi(p, (void*)0); update_trail_slot__11TItemWeaponFPvi(p, (void*)1); }

extern s32 lbl_804A3C20[];

void *TObjPlayer__sub_80128538(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3C20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}

}
