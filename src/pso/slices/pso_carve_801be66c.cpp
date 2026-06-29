#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801AF288();
s32 fn_801BE934(s32);
void fn_801BE9F0(void *arg0);
void fn_801BEA14(void *arg0);
int fn_801C0228(void*);
int TObjPlayer__sub_801BE690(void* p);
int fn_801BE6E4(void* p);
int fn_801BE704(void* p);
int fn_801BE728(void* p);
void TObjPlayer__sub_801BE74C(void* p, s32 v);
s32 TObjPlayer__sub_801BE754(void* p);
int fn_801BE75C(void* p);
void TObjPlayer__sub_801BE768(void* p);
int fn_801BE778(void* p);
void fn_801BE784(void* p, u8 v);
u8 fn_801BE78C(void* p);
void fn_801BE794(void* p, u8 v);
u8 fn_801BE79C(void* p);
void fn_801BE7A4(void* p, u8 v);
u8 fn_801BE7AC(void* p);
void fn_801BE7B4(void* p, u8 v);
int fn_801BE7BC(void* p);
void fn_801BE7E0(void* p, u8 v);
int fn_801BE7E8(void* p);
void fn_801BE80C(void* p, u8 v);
int fn_801BE814(void* p);
void fn_801BE838(void* p, u8 v);
int fn_801BE840(void* p);
void fn_801BE864(void* p, u8 v);
int fn_801BE86C(void* p);
void fn_801BE8E4(void* p, s32 v);
void fn_801BE8EC(void* p, s32 v);
void fn_801BEA4C(void* p);
int fn_801BEA80(void* p);
int fn_801BEAA4(void* p);
int fn_801BEAB0(void* p);
int fn_801BEABC(void* p);
int fn_801BEADC(void* p);
void fn_801BEAFC(void* p, s32 v);
void fn_801BEB04(void* p, s32 v);
s32 fn_801BEB0C(void* p);
int fn_801BEB14(void* p);
void fn_801BEB34(void* p, s32 v);
u8 fn_801BEB3C(void* p);
u8 fn_801BEB44(void* p);
u8 fn_801BEB4C(void* p);
void fn_801BEB54(void* p, s32 v);
void fn_801BEB5C(void* p);
int fn_801BEB68(void* p);
u8 fn_801BEB8C(void* p);
int fn_801BEB94(void* p);
u8 fn_801BEBB8(void* p);
int fn_801BEBC0(void* p);
u8 fn_801BEBE4(void* p);
int fn_801BEBEC(void* p);
u8 fn_801BEC10(void* p);
int fn_801BEC18(void* p);
u8 fn_801BEC3C(void* p);
int TPlyPhotonChair__sub_801BEC44(void* p);
int TObjPlayer__sub_800495E0(void*, int);
int fn_8011E204(void*, int);
int fn_8011E238(void*, int);
int fn_80154A00(void*);
int fn_801BA458(void*);
int fn_801BA5CC(void*);
int fn_801BED70(void*);
int fn_801BED78(void*);
int fn_801BED80(void*);
int fn_801BED88(void*);
int fn_801BED90(void*);
int fn_801BED98(void*);
int fn_801BEDA0(void*);
int fn_801BEDA8(void*);
int fn_801BEDB0(void*);
int fn_801BEDB8(void*);

void fn_801BE66C(s32 arg0) {
    fn_8011E204((void*)(arg0), 0x200000);
}
int TObjPlayer__sub_801BE690(void* p) { return TObjPlayer__sub_800495E0(p, 4); }
void* fn_801BE6B4(void* p) { fn_801C0228(p); return p; }
int fn_801BE6E4(void* p) { return fn_801BE704(p); }
int fn_801BE704(void* p) { return fn_8011E204(p, 16384); }
int fn_801BE728(void* p) { return fn_8011E238(p, 16384); }
void TObjPlayer__sub_801BE74C(void* p, s32 v) { *(s32*)((char*)p + 0x3b4) = v; }
s32 TObjPlayer__sub_801BE754(void* p) { return *(s32*)((char*)p + 0x3b4); }
int fn_801BE75C(void* p) { return (*(u32*)((char*)p + 0x334) >> 30) & 0x1; }
void TObjPlayer__sub_801BE768(void* p) { *(u32*)((char*)p + 0x334) &= 0xfffffffd; }
int fn_801BE778(void* p) { return (*(u32*)((char*)p + 0x334) >> 1) & 0x1; }
void fn_801BE784(void* p, u8 v) { *(u8*)((char*)p + 0x2e7) = v; }
u8 fn_801BE78C(void* p) { return *(u8*)((char*)p + 0x33a); }
void fn_801BE794(void* p, u8 v) { *(u8*)((char*)p + 0x2cb) = v; }
u8 fn_801BE79C(void* p) { return *(u8*)((char*)p + 0x339); }
void fn_801BE7A4(void* p, u8 v) { *(u8*)((char*)p + 0x2af) = v; }
u8 fn_801BE7AC(void* p) { return *(u8*)((char*)p + 0x338); }
void fn_801BE7B4(void* p, u8 v) { *(u8*)((char*)p + 0x293) = v; }
int fn_801BE7BC(void* p) { return fn_801BED70((char*)p + 0x374); }
void fn_801BE7E0(void* p, u8 v) { *(u8*)((char*)p + 0x277) = v; }
int fn_801BE7E8(void* p) { return fn_801BED78((char*)p + 0x374); }
void fn_801BE80C(void* p, u8 v) { *(u8*)((char*)p + 0x25b) = v; }
int fn_801BE814(void* p) { return fn_801BED80((char*)p + 0x374); }
void fn_801BE838(void* p, u8 v) { *(u8*)((char*)p + 0x23f) = v; }
int fn_801BE840(void* p) { return fn_801BED88((char*)p + 0x374); }
void fn_801BE864(void* p, u8 v) { *(u8*)((char*)p + 0x223) = v; }
int fn_801BE86C(void* p) { return fn_801BED90((char*)p + 0x374); }
int fn_801BE890(void) { return 0; }
void fn_801BE8E4(void* p, s32 v) { *(s32*)((char*)p + 0x3dc) = v; }
void fn_801BE8EC(void* p, s32 v) { *(s32*)((char*)p + 0x3d8) = v; }
int fn_801BE8F4(void) { return 0; }
void* fn_801BE918(void* a0, int a1, void* a2, void* a3) { *(float*)((char*)a2 + 0x0) = *(float*)((char*)a0 + a1 * 8 + 0x6b0); *(float*)((char*)a3 + 0x0) = *(float*)((char*)a0 + a1 * 8 + 0x6b4); return (char*)a0 + a1 * 8; }
s32 fn_801BE934(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0;
    if (var_r31 < 0) {
        var_r31 = 0;
    } else if (var_r31 > fn_801AF288()) {
        var_r31 = fn_801AF288();
    }
    return var_r31;
}
void fn_801BE980(void *arg0) {
    fn_801BE934(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x18));
}
void fn_801BE9A8(s32 arg0) {
    fn_8011E204((void*)(arg0), 0x20000);
}
void fn_801BE9CC(s32 arg0) {
    fn_8011E238((void*)(arg0), 0x20000);
}
void fn_801BE9F0(void *arg0) {
    fn_8011E204(arg0, 0x02000000);
}
void fn_801BEA14(void *arg0) {
    TObjPlayer__sub_800495E0(arg0, 0x02000000);
}
int fn_801BEA38(void) { return 0; }
void fn_801BEA4C(void* p) { *(u32*)((char*)p + 0x334) |= 0x2; }
void fn_801BEA5C(s32 arg0) {
    fn_8011E238((void*)(arg0), 0x400000);
}
int fn_801BEA80(void* p) { return TObjPlayer__sub_800495E0(p, 48); }
int fn_801BEAA4(void* p) { return *(u32*)((char*)p + 0x30) & 0x10000; }
int fn_801BEAB0(void* p) { return *(u32*)((char*)p + 0x30) & 0x200; }
int fn_801BEABC(void* p) { return fn_801BA458(p); }
int fn_801BEADC(void* p) { return fn_801BA5CC(p); }
void fn_801BEAFC(void* p, s32 v) { *(s32*)((char*)p + 0x3e4) = v; }
void fn_801BEB04(void* p, s32 v) { *(s32*)((char*)p + 0x3e0) = v; }
s32 fn_801BEB0C(void* p) { return *(s32*)((char*)p + 0x334); }
int fn_801BEB14(void* p) { return fn_80154A00(p); }
void fn_801BEB34(void* p, s32 v) { *(s32*)((char*)p + 0x3e8) = v; }
u8 fn_801BEB3C(void* p) { return *(u8*)((char*)p + 0x2e7); }
u8 fn_801BEB44(void* p) { return *(u8*)((char*)p + 0x2cb); }
u8 fn_801BEB4C(void* p) { return *(u8*)((char*)p + 0x2af); }
void fn_801BEB54(void* p, s32 v) { *(s32*)((char*)p + 0x3bc) = v; }
void fn_801BEB5C(void* p) { *(s32*)((char*)p + 0x3c8) = -1; }
int fn_801BEB68(void* p) { return fn_801BED98((char*)p + 0x374); }
u8 fn_801BEB8C(void* p) { return *(u8*)((char*)p + 0x293); }
int fn_801BEB94(void* p) { return fn_801BEDA0((char*)p + 0x374); }
u8 fn_801BEBB8(void* p) { return *(u8*)((char*)p + 0x277); }
int fn_801BEBC0(void* p) { return fn_801BEDA8((char*)p + 0x374); }
u8 fn_801BEBE4(void* p) { return *(u8*)((char*)p + 0x25b); }
int fn_801BEBEC(void* p) { return fn_801BEDB0((char*)p + 0x374); }
u8 fn_801BEC10(void* p) { return *(u8*)((char*)p + 0x23f); }
int fn_801BEC18(void* p) { return fn_801BEDB8((char*)p + 0x374); }
u8 fn_801BEC3C(void* p) { return *(u8*)((char*)p + 0x223); }
int TPlyPhotonChair__sub_801BEC44(void* p) { return (*(u32*)((char*)p + 0x334) >> 26) & 0x1; }

}
