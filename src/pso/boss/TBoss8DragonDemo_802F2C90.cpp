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
