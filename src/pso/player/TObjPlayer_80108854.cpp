#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TObjPlayer::test_flags_1b8(u32 m) { return *(u32*)((char*)this + 0x1b8) & m; }

}
