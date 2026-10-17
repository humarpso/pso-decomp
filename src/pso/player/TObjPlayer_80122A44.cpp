#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TUnk_804A1288.h"

extern "C" {

s32 get_attack_stage__11TItemWeaponFv();

extern s32 tl_05;

void TUnk_804A1288::emit_marker_effects() {
    s32 arg0 = (s32)this;
    if (get_attack_stage__11TItemWeaponFv() == 0) {
        ((TObjPlayer *)tl_05)->spawn_cane_effect((TItem*)arg0, 1);
    }
}

}
