#include "types.h"

extern "C" {

int fn_80080750(void*);
int TObjEnePanarms__sub_800DED30(void*, void*);
void TObjEnePanarms__sub_800DE270(void* p);
void TObjEnePanarms__sub_800DE360(void* p);
void TObjEnePanarms__sub_800DE2B0(void* p);
void TObjEnePanarms__sub_800DE2C0(void* p);

void TObjEnePanarms__sub_800DE270(void* p) { if (fn_80080750(p) == 0) { TObjEnePanarms__sub_800DED30(p, (void*)1); } }
void TObjEnePanarms__sub_800DE2B0(void* p) { *(s32*)((char*)p + 0x3e0) = 1; *(s32*)((char*)p + 0x3dc) = 1; }
void TObjEnePanarms__sub_800DE2C0(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

}
