#include "types.h"
#include "pso/items/TItemWeapon.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void*TObjPlayer::get_state_ptr() { return (char*)this + 0x30; }

}
