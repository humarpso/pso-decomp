#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss6DPB.h"

TBoss6DPB::~TBoss6DPB() {}
#else
#if PSO_CLASS_PACKAGE == 0x8035DA74
#include "types.h"

extern "C" {

void render__9TBoss6DPBFv(void);

void render__9TBoss6DPBFv(void) {  }

}
#endif
#endif
