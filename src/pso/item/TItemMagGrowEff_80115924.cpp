#include "types.h"

extern "C" {

int TItemMagGrowEff__sub_80115924(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
void TItemMagSub__sub_801158F0(void* p);
void TItemMagSub__sub_80115914(void* p, u32 v);
int TItemMag__sub_80113C98(void*, int);

int TItemMagGrowEff__sub_80115924(void* p) { return TItemMag__sub_80113C98(p, 64); }
int fn_80115948(void* p) { return (*(u8*)((char*)p + 0x0) >> 7) & 0x1; }
int fn_80115954(void* p) { return (*(u8*)((char*)p + 0x0) >> 6) & 0x1; }

}
