#include "types.h"

extern "C" {

int fn_80080750(void*);
int fn_800DED30(void*, void*);
void fn_800DE270(void* p);
void fn_800DE360(void* p);
void fn_800DE2B0(void* p);
void fn_800DE2C0(void* p);

void fn_800DE270(void* p) { if (fn_80080750(p) == 0) { fn_800DED30(p, (void*)1); } }
void fn_800DE2B0(void* p) { *(s32*)((char*)p + 0x3e0) = 1; *(s32*)((char*)p + 0x3dc) = 1; }
void fn_800DE2C0(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }
int fn_800DE2D0(void) { return 0; }
void fn_800DE360(void* p) { if (*(int*)((char*)p + 0x374) != 4) { fn_800DED30(p, (void*)4); } }
int fn_800DE390(void) { return 0; }

}
