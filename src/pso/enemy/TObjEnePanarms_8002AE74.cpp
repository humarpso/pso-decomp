#include "types.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneMe3ShinowaReal.h"
#include "pso/misc/TWindowKeyBoardHard.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TLobby__send_and_handle_60(void*);
f64 floor();

void TObjEnePanarms::set_field_b8(s16 v) { this->m_b8 = v; }

}
