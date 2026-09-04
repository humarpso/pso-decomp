#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrTagOccHeader.h"

TChCrTagOccHeader::~TChCrTagOccHeader() {}
#else
#if PSO_CLASS_PACKAGE == 0x802A2BD8
#include "types.h"

extern "C" {

int render__17TChCrTagOccHeaderFv(void* p);
int fn_802A2A00(void*);

int render__17TChCrTagOccHeaderFv(void* p) { return fn_802A2A00(p); }

}
#endif
#endif
