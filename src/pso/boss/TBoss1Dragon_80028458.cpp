#include "types.h"

extern "C" {

void TBoss1Dragon__sub_80028458(void* p);
void TBoss1Dragon__sub_8002846C(void* p);
void TBoss1Dragon__sub_800284A0(void* p);

void TBoss1Dragon__sub_80028458(void* p) { *(f32*)((char*)p + 0x690) = *(f32*)((char*)p + 0x394); *(f32*)((char*)p + 0x694) = *(f32*)((char*)p + 0x39c); }
void TBoss1Dragon__sub_8002846C(void* p) { *(f32*)((char*)p + 0x38) = *(f32*)((char*)p + 0x698); *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x69c); }

}
