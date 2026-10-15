#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
s32 spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, s32, s32);
s32 get_attack_stage__11TItemWeaponFv(s32);
void TItemWeapon__ct(void *);

extern s32 tl_05;

void TObjPlayer::spawn_cane(s32 arg0) {
    if ((get_slot_count__14TItemProShieldFv() < 4U) && (get_attack_stage__11TItemWeaponFv(arg0) == 0)) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 1, 2);
    }
}

extern s32 lbl_804A1478[];

void *TObjPlayer::set_vtable_804A1478() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1478;
    return this;
}

}
