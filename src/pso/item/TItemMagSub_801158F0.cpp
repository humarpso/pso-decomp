#include "types.h"

extern "C" {

void TItemMagSub__sub_801158F0(void* p);
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v);
int TItemMagGrowEff__sub_80115924(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
int set_flags64__8TItemMagFPvUi(void*, int);

void TItemMagSub__sub_801158F0(void* p) { clear_flags64__11TItemMagSubFPvUi(p, 64); }
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x64) &= ~v; }

}
