#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrTagOccupation.h"

TChCrTagOccupation::~TChCrTagOccupation() {}
#else
#if PSO_CLASS_PACKAGE == 0x802A2F58
#include "types.h"

extern "C" {

int render__18TChCrTagOccupationFv(void* p);
int fn_802A2DF4(void*);

int render__18TChCrTagOccupationFv(void* p) { return fn_802A2DF4(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A30FC
#include "types.h"

extern "C" {

void create_all__18TChCrTagOccupationFv(void);
int create__18TChCrTagOccupationFPv(void*);

void create_all__18TChCrTagOccupationFv(void) { { int i; for (i = 0; i < 3; i++) { create__18TChCrTagOccupationFPv((void*)i); } } }

}
#endif
#endif
