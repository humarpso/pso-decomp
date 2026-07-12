#include "types.h"

extern "C" {

void* TObjPlayer__sub_801C2058(void* p);
void TObjPlayer__sub_801C2060(void* p, s32 v);
void TObjPlayer__sub_801C2098(void* p);

void* TObjPlayer__sub_801C2058(void* p) { return (char*)p + 0x8; }
void TObjPlayer__sub_801C2060(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void* init_c2098_return_self__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801C2098(p); return p; }
void TObjPlayer__sub_801C2098(void* p) { *(s32*)((char*)p + 0x0) = 0; }

}
