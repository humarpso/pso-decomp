#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrEffTagStr.h"

TChCrEffTagStr::~TChCrEffTagStr() {}
#else
#if PSO_CLASS_PACKAGE == 0x8029AED0
#include "types.h"

extern "C" {

void TChCrEffTagStr__sub_8029AED0(void* p);

void TChCrEffTagStr__sub_8029AED0(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
#endif
#endif
