#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TObjPlayer::test_flags_1b8(u32 m) { return this->m_1b8 & m; }

}
