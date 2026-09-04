#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss8DragonDemo.h"

TBoss8DragonDemo::~TBoss8DragonDemo() {}
#else
#if PSO_CLASS_PACKAGE == 0x802F2C90
#include "types.h"

extern "C" {

int copy_position__16TBoss8DragonDemoFPv(void* p);
f32 TBoss8DragonDemo__sub_802F2CB4(void* p);
f32 TBoss8DragonDemo__sub_802F2CBC(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int copy_position__16TBoss8DragonDemoFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x78); }
f32 TBoss8DragonDemo__sub_802F2CB4(void* p) { return *(f32*)((char*)p + 0x5c); }
f32 TBoss8DragonDemo__sub_802F2CBC(void* p) { return *(f32*)((char*)p + 0x54); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F2CDC
#include "types.h"

extern "C" {

void render__16TBoss8DragonDemoFv(void);

void render__16TBoss8DragonDemoFv(void) {  }

}
#endif
#endif
