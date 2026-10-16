#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 get_attack_stage__11TItemWeaponFv();

extern s32 tl_05;

void TObjPlayer::spawn_cane_effect_if_ready(s32 arg0) {
    if (get_attack_stage__11TItemWeaponFv() == 0) {
        ((TObjPlayer *)tl_05)->spawn_cane_effect((TItem*)arg0, (s32)1);
    }
}

}
