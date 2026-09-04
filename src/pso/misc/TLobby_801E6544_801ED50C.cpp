#include "types.h"
#include "pso/boss/TBoss1Dragon.h"

extern "C" {

void TLobby__sub_801ED50C(void* p);

void TLobby__sub_801ED50C(void* p) { TBoss1Dragon::clearControlOverride(); }

}
