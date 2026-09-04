#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss2Fin.h"

TBoss2Fin::~TBoss2Fin() {}
#else
#if PSO_CLASS_PACKAGE == 0x800367C0
#include "types.h"

extern "C" {

void TBoss2Fin__sub_800367C0(void);

void TBoss2Fin__sub_800367C0(void) {  }

}
#endif
#endif
