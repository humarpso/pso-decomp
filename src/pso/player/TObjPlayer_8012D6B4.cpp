#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s16 TObjPlayer::get_kill_count() { return *(s16*)((char*)this + 0x11a); }

}
