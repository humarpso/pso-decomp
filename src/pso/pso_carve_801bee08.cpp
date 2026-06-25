#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
void fn_801BEE08(void* p, f32 a, f32 b, f32 c);
void fn_801BEE24(void* p, s16 v);
void fn_801BEE2C(void* p, s16 v);
void fn_801BEEE0(void* p, void* q);
void fn_801BEF30(void* p, void* q);
void fn_801BEF44(void* p, void* q);
void fn_801BEF60(void* p, s32 v);
int fn_801BF014(void* p, int a1);
int fn_801BF060(void* p, int a1);
void* fn_801BF1D4(void* p);
int fn_801BF204(void* p, int a1);
int fn_801BF2F8(void* p, int a1);
void* fn_801BF31C(void* p);
int fn_801BF3A0(void* p);
int fn_801BF3C4(void* p);
int fn_801BF3E8(void* p);
void fn_801BF40C(void* p, u8 v);
int VecCopy__FP3VecPC3Vec(void*);
int fn_8001BEF8(void*, int);
int fn_8030A1E4(void*, int, int);
int fn_8030A264(void*, int, int);
int fn_8030A2CC(void*, int, int);

void fn_801BEE08(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x38) = a; *(f32*)((char*)p + 0x3c) = b; *(f32*)((char*)p + 0x40) = c; }
int fn_801BEE18(void) { return 0; }
void fn_801BEE24(void* p, s16 v) { *(s16*)((char*)p + 0x2be) = v; }
void fn_801BEE2C(void* p, s16 v) { *(s16*)((char*)p + 0x2bc) = v; }
void fn_801BEE34(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }
int fn_801BEE68(void) { return 0; }
int fn_801BEEAC(void) { return 0; }
void fn_801BEEE0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
int fn_801BEEEC(void) { return 0; }
void fn_801BEF30(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void fn_801BEF44(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); }
void fn_801BEF60(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
int fn_801BEF68(void) { return 0; }
int fn_801BEF8C(void) { return 0; }
int fn_801BEFEC(void) { return 0; }
int fn_801BF014(void* p, int a1) { return fn_8030A1E4(p, a1, 508); }
int fn_801BF038(void) { return 0; }
int fn_801BF060(void* p, int a1) { return fn_8030A264(p, a1, 508); }
int fn_801BF084(void) { return 0; }
int fn_801BF0A8(void) { return 0; }
int fn_801BF110(void) { return 0; }
int fn_801BF134(void) { return 0; }
int fn_801BF19C(void) { return 0; }
void* fn_801BF1D4(void* p) { return (char*)p + 0x24; }
int fn_801BF1DC(void) { return 0; }
int fn_801BF204(void* p, int a1) { return fn_8030A264(p, a1, 276); }
int fn_801BF228(void) { return 0; }
int fn_801BF250(void) { return 0; }
int fn_801BF288(void) { return 0; }
int fn_801BF2C0(void) { return 0; }
int fn_801BF2F8(void* p, int a1) { return fn_8030A2CC(p, a1, 570); }
void* fn_801BF31C(void* p) { return (char*)p + 0x18; }
int fn_801BF324(void) { return 0; }
int fn_801BF34C(void) { return 0; }
int fn_801BF3A0(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x24); }
int fn_801BF3C4(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x18); }
int fn_801BF3E8(void* p) { return fn_8001BEF8(p, 4); }
void fn_801BF40C(void* p, u8 v) { *(u8*)((char*)p + 0x1c) = v; }

}
