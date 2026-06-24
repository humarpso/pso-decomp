#include "types.h"

extern "C" {

void fn_801D4730(void* p);
void fn_801D47D8(void* p, void* q);

int fn_801D45B0(void) { return 0; }
int fn_801D4678(void) { return 0; }
int fn_801D46D4(void) { return 0; }
void fn_801D4730(void* p) { *(s32*)((char*)p + 0x0) = -1; *(s32*)((char*)p + 0x4) = 0; }
int fn_801D4744(void) { return 0; }
void fn_801D47D8(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
int fn_801D47EC(void) { return 0; }

}
