#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800495E0(s32, s32);
s32 fn_80102DD4(void *, u16);
int fn_80102BD0(void);
int fn_80102BD8(void);
int fn_80102BE0(void* p, u32 m);
void fn_80102BEC(void* p, u32 v);
void fn_80102BFC(void* p, u32 v);
int fn_80102C0C(void* p);
u16 TItemProArmor__sub_80102C3C(void* p);
u8 TOSwitchItem__sub_80102C44(void* p);
int TItemMag__sub_80102C4C(void* p);
void fn_80102C58(void* p);
void fn_80102C68(void* p);
void fn_80102C78(void* p, s16 v);
s16 fn_80102C80(void* p);
s16 fn_80102C88(void* p);
int fn_80102C90(void* p);
f32 fn_80102CD8(void* p);
int fn_801C675C(void*);

int fn_80102BD0(void) { return 0; }
int fn_80102BD8(void) { return 0; }
int fn_80102BE0(void* p, u32 m) { return *(u32*)((char*)p + 0xdc) & m; }
void fn_80102BEC(void* p, u32 v) { *(u32*)((char*)p + 0xdc) &= ~v; }
void fn_80102BFC(void* p, u32 v) { *(u32*)((char*)p + 0xdc) |= v; }
int fn_80102C0C(void* p) { return fn_80102BE0(p, 128); }
int fn_80102C30(void) { return 0; }
u16 TItemProArmor__sub_80102C3C(void* p) { return *(u16*)((char*)p + 0xe4); }
u8 TOSwitchItem__sub_80102C44(void* p) { return *(u8*)((char*)p + 0xec); }
int TItemMag__sub_80102C4C(void* p) { return *(u32*)((char*)p + 0xdc) & 0x40; }
void fn_80102C58(void* p) { *(u32*)((char*)p + 0xdc) |= 0x40; }
void fn_80102C68(void* p) { *(u32*)((char*)p + 0xdc) &= 0xffffffbf; }
void fn_80102C78(void* p, s16 v) { *(s16*)((char*)p + 0x32e) = v; }
s16 fn_80102C80(void* p) { return *(s16*)((char*)p + 0x2be); }
s16 fn_80102C88(void* p) { return *(s16*)((char*)p + 0x2bc); }
int fn_80102C90(void* p) { return fn_801C675C((char*)p + 0xd04); }
void fn_80102CB4(void) {
    s32 uninit;
    TObjPlayer__sub_800495E0(uninit, 0x20000);
}
f32 fn_80102CD8(void* p) { return *(f32*)((char*)p + 0x1c); }
int fn_80102CE0(void) { return 0; }
int fn_80102D14(void) { return 0; }
void fn_8001960C(void* p);
void bswap_32__FPUl(u32* p);
void fn_80102D48(void* p) {
    fn_8001960C(p);
    bswap_32__FPUl((u32*)((char*)p + 4));
    bswap_32__FPUl((u32*)((char*)p + 8));
}
int fn_80102D84(void) { return 0; }
u8 fn_80102DA8(void *arg0) {
    return (u8) (fn_80102DD4(arg0, M2C_FIELD(arg0, u16 *, 2)) == 0);
}

}
