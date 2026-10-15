#include "types.h"

extern "C" {

void update_claw_weapon_trails(void* p);
void *set_vtable_mode1__10TObjPlayerFPv(void *arg0);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void update_claw_weapon_trails(void* p) { draw_weapon_at_joint(p, (void*)49); update_trail_slot__11TItemWeaponFPvi(p, (void*)0); update_trail_slot__11TItemWeaponFPvi(p, (void*)1); }

extern s32 lbl_804A1C38[];

void *set_vtable_mode1__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1C38;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}

}
