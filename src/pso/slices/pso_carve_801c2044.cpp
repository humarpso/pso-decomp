#include "types.h"

extern "C" {

void* TObjPlayer__sub_801C2058(void* p);
void TObjPlayer__sub_801C2060(void* p, s32 v);
void TObjPlayer__sub_801C2098(void* p);

int TObjPlayer__sub_801C2044(void) { return 0; }
void* TObjPlayer__sub_801C2058(void* p) { return (char*)p + 0x8; }
void TObjPlayer__sub_801C2060(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void* TObjPlayer__sub_801C2068(void* p) { TObjPlayer__sub_801C2098(p); return p; }
void TObjPlayer__sub_801C2098(void* p) { *(s32*)((char*)p + 0x0) = 0; }

}
