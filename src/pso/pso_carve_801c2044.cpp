#include "types.h"

extern "C" {

void* fn_801C2058(void* p);
void fn_801C2060(void* p, s32 v);
void fn_801C2098(void* p);

int fn_801C2044(void) { return 0; }
void* fn_801C2058(void* p) { return (char*)p + 0x8; }
void fn_801C2060(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
int fn_801C2068(void) { return 0; }
void fn_801C2098(void* p) { *(s32*)((char*)p + 0x0) = 0; }

}
