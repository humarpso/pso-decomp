#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdSelectCurGC.h"

TAdSelectCurGC::~TAdSelectCurGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x802AEA38
#include "types.h"

extern "C" {

void render__14TAdSelectCurGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int fn_802AE978(void*);

void render__14TAdSelectCurGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); fn_802AE978(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AF274
#include "types.h"

extern "C" {

void TAdSelectCurGC__sub_802AF274(void* p, f32 v);

void TAdSelectCurGC__sub_802AF274(void* p, f32 v) { *(f32*)((char*)p + 0x704) = v; }

}
#endif
#endif
