#include "types.h"

extern "C" {

int TObjPlayer__sub_801D9E08(void);
void TObjPlayer__sub_801D9E10(void* p, s16 v);
void TObjPlayer__sub_801D9E40(void* p, f32 v);
void TObjPlayer__sub_801D9E48(void* p, f32 v);

void TObjPlayer__sub_801D9E40(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }
void TObjPlayer__sub_801D9E48(void* p, f32 v) { *(f32*)((char*)p + 0x18) = v; }

}
