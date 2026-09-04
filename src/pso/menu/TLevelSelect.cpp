#ifndef PSO_CLASS_PACKAGE
#include "pso/TLevelSelect.h"

TLevelSelect::~TLevelSelect() {}
#else
#if PSO_CLASS_PACKAGE == 0x80132F98
#include "types.h"

extern "C" {

void render__12TLevelSelectFv(void);

void render__12TLevelSelectFv(void) {  }

}
#endif
#endif
