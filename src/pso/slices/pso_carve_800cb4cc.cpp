#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800B98D8();
s32 TPhotonMylla__sub_80154CB4(u16);
void fn_800CB4CC(void* p);
void fn_800CB4F0(void* p);
void fn_800CB500(void* p);
void TObjEneMe1Gee__sub_800CB510(void* p);
void TObjEneMe1Gee__vt115(void);
int fn_800CB628(void* p);
int TObjEneMe1Gee__vt107(void);
int TObjEneMe1Gee__vt114(void);

void fn_800CB4CC(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x40; }
int fn_800CB4DC(void) { return 0; }
void fn_800CB4F0(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x8; }
void fn_800CB500(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x4; }
void TObjEneMe1Gee__sub_800CB510(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x2; }
void fn_800CB520(void *arg0, s32 arg1, s32 arg2) {
    fn_800B98D8();
    M2C_FIELD(arg0, s32 *, 0x404) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 1);
}
int fn_800CB560(void* a0 = 0) { return 0; }
int TObjEneMe1Gee__vt114(void) { return 1; }
void TObjEneMe1Gee__vt115(void) {  }
int fn_800CB584(void) { return 0; }
int fn_800CB5A0(void) { return 0; }
int fn_800CB5B8(void) { return 0; }
int fn_800CB5D4(void) { return 0; }
int fn_800CB5F0(void) { return 0; }
int fn_800CB60C(void) { return 0; }
int fn_800CB628(void* p) { return (*(u32*)((char*)p + 0x3c8) >> 15) & 0x1; }
void fn_800CB634(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 3) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x48C));
        fn_800CB560((void*)(M2C_FIELD(arg0, s32 *, 0x3C0)));
    }
}
int TObjEneMe1Gee__vt107(void) { return 1; }

}
