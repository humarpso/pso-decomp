#include "types.h"

extern "C" {

f32 TItemMag__sub_80113F08(void* p);
s32 TItemMag__sub_80113F00(void* p);
int check_state_flag_1__8TItemMagFPv(void* p);
void TItemMag__sub_80113F38(void* p, u32 v);
void TItemMag__sub_80113F48(void* p, u32 v);
int TItemMag__sub_80113F58(void* p, u32 m);
int TObjPlayer__sub_8001BEF8(void*, int);

s32 TItemMag__sub_80113F00(void* p) { return *(s32*)((char*)p + 0x0); }
f32 TItemMag__sub_80113F08(void* p) { return *(f32*)((char*)p + 0x8); }
int check_state_flag_1__8TItemMagFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x4, 1); }
void TItemMag__sub_80113F38(void* p, u32 v) { *(u32*)((char*)p + 0x4) &= ~v; }
void TItemMag__sub_80113F48(void* p, u32 v) { *(u32*)((char*)p + 0x4) |= v; }
int TItemMag__sub_80113F58(void* p, u32 m) { return *(u32*)((char*)p + 0x4) & m; }

}
