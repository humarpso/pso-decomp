#include "types.h"

extern "C" {

void spawn_cane_effect_active__10TObjPlayerFi(s32 arg0);
s32 spawn_cane_effect__10TObjPlayerFiUii(s32, s32, s32);
s32 get_attack_stage__11TItemWeaponFPv();

extern s32 tl_05;

void spawn_cane_effect_active__10TObjPlayerFi(s32 arg0) {
    if (get_attack_stage__11TItemWeaponFPv() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 1);
    }
}

}
