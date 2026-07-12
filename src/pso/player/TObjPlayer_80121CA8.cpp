#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80121CA8(void* p);
void TObjPlayer__sub_80121CB0(void* p, s32 v);

s32 TObjPlayer__sub_80121CA8(void* p) { return *(s32*)((char*)p + 0x1c0); }
void TObjPlayer__sub_80121CB0(void* p, s32 v) { *(s32*)((char*)p + 0x1c4) = v; }

}
