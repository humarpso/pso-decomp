#include "types.h"

extern "C" {

void TObjPlayer__sub_800822D0(void);
void TObjPlayer__sub_800822D4(void* p, f32 a, f32 b);
f32 TObjPlayer__sub_800822E0(void* p);
s32 TObjPlayer__sub_80082300(void* p);

s32 TObjPlayer__sub_80082300(void* p) { return *(s32*)((char*)p + 0xc); }

}
