#include "types.h"
#include "pso/player/TUnk_804A3B20.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void srank_marker_noop(void);
s32 get_attack_stage__11TItemWeaponFv();
void construct_srank_weapon(void *);

void srank_marker_noop(void) {  }

extern s32 tl_05;

void TObjPlayer::spawn_cane_effects_if_ready(s32 arg0) {
    if (get_attack_stage__11TItemWeaponFv() == 0) {
        ((TObjPlayer *)tl_05)->spawn_cane_effects((TItem*)arg0, (s32)1, (s32)2);
    }
}

extern s32 lbl_804A3B20[];

void *TUnk_804A3B20::init_state_vtable() {
    construct_srank_weapon(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A3B20;
    return this;
}

}
