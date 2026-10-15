#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int roll_technique__11TItemWeaponFv(void*);

void TObjPlayer::update_twice() { roll_technique__11TItemWeaponFv(this); roll_technique__11TItemWeaponFv(this); }

}
