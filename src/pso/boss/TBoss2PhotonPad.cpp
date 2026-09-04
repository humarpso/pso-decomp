#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss2PhotonPad.h"

TBoss2PhotonPad::~TBoss2PhotonPad() {}
#else
#if PSO_CLASS_PACKAGE == 0x8003913C
#include "types.h"

extern "C" {

void render__15TBoss2PhotonPadFv(void);

void render__15TBoss2PhotonPadFv(void) {  }

}
#endif
#endif
