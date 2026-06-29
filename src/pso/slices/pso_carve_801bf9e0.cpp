#include "types.h"

extern "C" {

void TObjPlayer__sub_801BF9E0(void* p, s16 v);
void TObjPlayer__sub_801BF9E8(void* p, f32 v);

void TObjPlayer__sub_801BF9E0(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801BF9E8(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }

}
