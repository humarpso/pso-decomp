#include "types.h"

extern "C" {

void fn_801158F0(void* p);
void TItemMagSub__sub_80115914(void* p, u32 v);
int TItemMagGrowEff__sub_80115924(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
int fn_80113C98(void*, int);

void fn_801158F0(void* p) { TItemMagSub__sub_80115914(p, 64); }
void TItemMagSub__sub_80115914(void* p, u32 v) { *(u32*)((char*)p + 0x64) &= ~v; }
int TItemMagGrowEff__sub_80115924(void* p) { return fn_80113C98(p, 64); }
int fn_80115948(void* p) { return (*(u8*)((char*)p + 0x0) >> 7) & 0x1; }
int fn_80115954(void* p) { return (*(u8*)((char*)p + 0x0) >> 6) & 0x1; }

}
