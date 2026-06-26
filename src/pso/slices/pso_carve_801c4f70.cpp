#include "types.h"

extern "C" {

s32 fn_801C4F70(void* p);
void fn_801C4F78(void* p, s32 v);

s32 fn_801C4F70(void* p) { return *(s32*)((char*)p + 0x0); }
void fn_801C4F78(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }

}
