#include "types.h"

extern "C" {

void TObjPlayer__sub_800AAFF0(void* p, f32 v);

void TObjPlayer__sub_800AAFF0(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }

}
