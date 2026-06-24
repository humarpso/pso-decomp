#include "types.h"

extern "C" {

void fn_802E0008(void* p);
s32 fn_802E0014(void* p);
void fn_802E001C(void* p, s32 v);

void fn_802E0008(void* p) { *(s32*)((char*)p + 0x4fc) = 1; }
s32 fn_802E0014(void* p) { return *(s32*)((char*)p + 0x4ec); }
void fn_802E001C(void* p, s32 v) { *(s32*)((char*)p + 0x4f8) = v; }

}
