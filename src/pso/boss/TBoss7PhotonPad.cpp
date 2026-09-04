#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss7PhotonPad.h"

TBoss7PhotonPad::~TBoss7PhotonPad() {}
#else
#if PSO_CLASS_PACKAGE == 0x802EF600
#include "types.h"

extern "C" {

void render__15TBoss7PhotonPadFv(void);

void render__15TBoss7PhotonPadFv(void) {  }

}
#endif
#endif
