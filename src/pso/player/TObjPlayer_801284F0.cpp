#include "types.h"
#include "pso/player/TObjPlayer_801284F0.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804A3C20.h"

extern "C" {

int update_trail_slot__11TItemWeaponFPvi(void*, void*);
void draw_weapon_at_joint(s32 arg0, s8 arg1);
void construct_srank_weapon(void *);

void TUnk_804A3C20::reserved_53() { draw_weapon_at_joint((s32)this, (s8)((void*)49)); update_trail_slot__11TItemWeaponFPvi(this, (void*)0); update_trail_slot__11TItemWeaponFPvi(this, (void*)1); }

extern s32 lbl_804A3C20[];

void *TObjPlayer__sub_80128538(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3C20;
    ((TObjPlayer *)arg0)->set_status_flags(1);
    return arg0;
}

}
