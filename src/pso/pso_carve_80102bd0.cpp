#include "types.h"

extern "C" {

int fn_80102BD0(void);
int fn_80102BD8(void);
int fn_80102BE0(void* p, u32 m);
void fn_80102BEC(void* p, u32 v);
void fn_80102BFC(void* p, u32 v);
int fn_80102C0C(void* p);
u16 fn_80102C3C(void* p);
u8 fn_80102C44(void* p);
int fn_80102C4C(void* p);
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
u16 fn_80102C3C(void* p) { return *(u16*)((char*)p + 0xe4); }
u8 fn_80102C44(void* p) { return *(u8*)((char*)p + 0xec); }
int fn_80102C4C(void* p) { return *(u32*)((char*)p + 0xdc) & 0x40; }
void fn_80102C58(void* p) { *(u32*)((char*)p + 0xdc) |= 0x40; }
void fn_80102C68(void* p) { *(u32*)((char*)p + 0xdc) &= 0xffffffbf; }
void fn_80102C78(void* p, s16 v) { *(s16*)((char*)p + 0x32e) = v; }
s16 fn_80102C80(void* p) { return *(s16*)((char*)p + 0x2be); }
s16 fn_80102C88(void* p) { return *(s16*)((char*)p + 0x2bc); }
int fn_80102C90(void* p) { return fn_801C675C((char*)p + 0xd04); }
int fn_80102CB4(void) { return 0; }
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
int fn_80102DA8(void) { return 0; }

}
