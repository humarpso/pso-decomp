#include "types.h"

extern "C" {

void TItemMagSub__sub_801158F0(void* p);
void TItemMagSub__sub_80115914(void* p, u32 v);
int TItemMagGrowEff__sub_80115924(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
int TItemMag__sub_80113C98(void*, int);

void TItemMagSub__sub_801158F0(void* p) { TItemMagSub__sub_80115914(p, 64); }
void TItemMagSub__sub_80115914(void* p, u32 v) { *(u32*)((char*)p + 0x64) &= ~v; }

}
