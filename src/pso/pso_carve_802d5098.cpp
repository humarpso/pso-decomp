#include "types.h"

extern "C" {

void fn_802D5098(void* p, s32 v);
s32 fn_802D50A0(void* p);
void fn_802D50A8(void* p, s32 v);
void fn_802D50B0(void* p, s32 v);

void fn_802D5098(void* p, s32 v) { *(s32*)((char*)p + 0x700) = v; }
s32 fn_802D50A0(void* p) { return *(s32*)((char*)p + 0x24); }
void fn_802D50A8(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void fn_802D50B0(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }
int fn_802D50B8(void) { return 0; }
int fn_802D5108(void) { return 0; }

}
