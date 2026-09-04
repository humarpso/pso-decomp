#include "pso/TBoss8DragonDemo.h"

TBoss8DragonDemo::~TBoss8DragonDemo() {}

#include "types.h"

extern "C" {

f32 TBoss8DragonDemo__sub_802F2CB4(void* p);
f32 TBoss8DragonDemo__sub_802F2CBC(void* p);
int copy_position__16TBoss8DragonDemoFPv(void* p);
void render__16TBoss8DragonDemoFv(void);
int run_task__16TBoss8DragonDemoFv(void);
int VecCopy__FP3VecPC3Vec(void*);

int copy_position__16TBoss8DragonDemoFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x78); }
f32 TBoss8DragonDemo__sub_802F2CB4(void* p) { return *(f32*)((char*)p + 0x5c); }
f32 TBoss8DragonDemo__sub_802F2CBC(void* p) { return *(f32*)((char*)p + 0x54); }

void render__16TBoss8DragonDemoFv(void) {  }

int run_task__16TBoss8DragonDemoFv(void) { return 0; }

}
