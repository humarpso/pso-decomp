#include "types.h"

extern "C" {

s32 fn_800F5DD8(void* p);
void fn_800F5DE0(void* p, s32 v);
int fn_800F5DE8(void* p);
int fn_8003F0E8(void*);

int fn_800F5D80(void) { return 0; }
s32 fn_800F5DD8(void* p) { return *(s32*)((char*)p + 0x370); }
void fn_800F5DE0(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }
int fn_800F5DE8(void* p) { return fn_8003F0E8(p); }

}
