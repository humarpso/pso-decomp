#include "types.h"
#include "pso/player/TUnk_804A1478.h"
#include "pso/player/TObjPlayer.h"
#include "pso/items/TItemWeapon.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
void TItemWeapon__ct(void *);

extern s32 tl_05;

void TObjPlayer::spawn_cane(s32 arg0) {
    if ((get_slot_count__14TItemProShieldFv() < 4U) && (((TItemWeapon *)arg0)->get_attack_stage() == 0)) {
        ((TObjPlayer *)tl_05)->spawn_cane_effects((TItem*)arg0, (s32)1, (s32)2);
    }
}

extern s32 lbl_804A1478[];

void *TUnk_804A1478::set_vtable_804A1478() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1478;
    return this;
}

}
