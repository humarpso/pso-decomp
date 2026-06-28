#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800B98D8(void *);
s32 TPhotonMylla__sub_80154CB4(u16);
void TObjEneMe1CanadinLeader__sub_8009E238(void* p);
void TObjEneMe1CanadinLeader__sub_8009E248(void* p);
void TObjEneMe1CanadinLeader__sub_8009E26C(void* p);
void fn_8009E27C(void* p);
void fn_8009E28C(void* p);
void TObjEneMe1Canadin__vt115(void);
int TObjEneMe1CanadinLeader__sub_8009E36C(void* p);
int TObjEneMe1Canadin__vt107(void);
int TObjEneMe1Canadin__vt114(void);

void TObjEneMe1CanadinLeader__sub_8009E238(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x40; }
void TObjEneMe1CanadinLeader__sub_8009E248(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x20; }
int fn_8009E258(void) { return 0; }
void TObjEneMe1CanadinLeader__sub_8009E26C(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x8; }
void fn_8009E27C(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x4; }
void fn_8009E28C(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x2; }
void fn_8009E29C(void *arg0, s32 arg1, s32 arg2) {
    fn_800B98D8(arg0);
    M2C_FIELD(arg0, s32 *, 0x400) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 1);
}
int fn_8009E2DC(void* a0 = 0) { return 0; }
int TObjEneMe1Canadin__vt114(void) { return 1; }
void TObjEneMe1Canadin__vt115(void) {  }
int fn_8009E300(void) { return 0; }
int fn_8009E31C(void) { return 0; }
int fn_8009E334(void) { return 0; }
int fn_8009E350(void) { return 0; }
int TObjEneMe1CanadinLeader__sub_8009E36C(void* p) { return (*(u32*)((char*)p + 0x3c8) >> 15) & 0x1; }
void fn_8009E378(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 2) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x4C8));
        fn_8009E2DC((void*)(M2C_FIELD(arg0, s32 *, 0x3C0)));
    }
}
int TObjEneMe1Canadin__vt107(void) { return 1; }

}
