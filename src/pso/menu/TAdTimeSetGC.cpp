#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdTimeSetGC.h"

void TAdTimeSetGC::run_task() {}

TAdTimeSetGC::~TAdTimeSetGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x802E34A4
#include "types.h"

extern "C" {

void TAdTimeSetGC__sub_802E34A4(void);
void TAdTimeSetGC__sub_802E34A8(void);

void TAdTimeSetGC__sub_802E34A4(void) {  }
void TAdTimeSetGC__sub_802E34A8(void) {  }

}
#endif
#endif
