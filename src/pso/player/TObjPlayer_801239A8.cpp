#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void update_claw_weapon_trails(void* p);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void update_claw_weapon_trails(void* p) { draw_weapon_at_joint(p, (void*)49); update_trail_slot__11TItemWeaponFPvi(p, (void*)0); update_trail_slot__11TItemWeaponFPvi(p, (void*)1); }

extern s32 lbl_804A1C38[];

void *TObjPlayer::set_vtable_mode1() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1C38;
    set_status_flags__10TObjPlayerFPvUi(this, 1);
    return this;
}

}
