#include "types.h"

extern "C" {

f32 fn_801D2858(void* p);
s32 fn_801D2870(void* p);
s32 fn_801D2878(void* p);
int fn_801D2880(void* p);
int fn_801D29A8(void* p);
int fn_801D29D0(void* p);
int fn_801D29F8(void* p);
int fn_801D2A20(void* p);
int fn_801D2A50(void* p);
void fn_801D2A78(void* p, f32 v);
s32 fn_801D2A80(void* p);
f32 fn_801D2A98(void* p);
void fn_801D2AA0(void* p, f32 v);
void fn_801D2AA8(void* p, s32 v);
void fn_801D2AC4(void* p, f32 v);
int fn_801D2ACC(void* p);
f32 fn_801D2AF4(void* p);
int fn_801D2B08(void* p);
void fn_801D2C74(void* p, s32 v);
void fn_801D2C7C(void* p, u8 v);
int fn_801D2C84(void* p);
f32 fn_801D2CBC(void* p);
void fn_801D2CC4(void* p, f32 v);
void* fn_801D2CCC(void* p);
void fn_801D2CD4(void* p, u8 v);
f32 fn_801D2CDC(void* p);
void fn_801D2CE4(void* p, s16 v);
void* fn_801D2CEC(void* p);
int bswap_32__FPUl(void*);
int fn_8001BED8(void*, int);
int fn_8001BEE8(void*, int);
int fn_8001BEF8(void*, int);
int fn_801D7BF4(void*);

f32 fn_801D2858(void* p) { return *(f32*)((char*)p + 0x8); }
int fn_801D2860(void) { return 0; }
s32 fn_801D2870(void* p) { return *(s32*)((char*)p + 0x4); }
s32 fn_801D2878(void* p) { return *(s32*)((char*)p + 0xc); }
int fn_801D2880(void* p) { return bswap_32__FPUl(p); }
int fn_801D28A0(void) { return 0; }
int fn_801D28DC(void) { return 0; }
int fn_801D2910(void) { return 0; }
int fn_801D2964(void) { return 0; }
int fn_801D29A8(void* p) { return fn_8001BEE8((char*)p + 0x40, 62); }
int fn_801D29D0(void* p) { return fn_8001BEE8((char*)p + 0x40, 4); }
int fn_801D29F8(void* p) { return fn_8001BED8((char*)p + 0x40, 8); }
int fn_801D2A20(void* p) { return (fn_8001BEF8((char*)p + 0x40, 1)) == 0; }
int fn_801D2A50(void* p) { return fn_8001BEF8((char*)p + 0x40, 8); }
void fn_801D2A78(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }
s32 fn_801D2A80(void* p) { return *(s32*)((char*)p + 0x8); }
int fn_801D2A88(void) { return 0; }
f32 fn_801D2A98(void* p) { return *(f32*)((char*)p + 0xc); }
void fn_801D2AA0(void* p, f32 v) { *(f32*)((char*)p + 0xc) = v; }
void fn_801D2AA8(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
int fn_801D2AB0(void) { return 0; }
void fn_801D2AC4(void* p, f32 v) { *(f32*)((char*)p + 0x3c) = v; }
int fn_801D2ACC(void* p) { return fn_8001BED8((char*)p + 0x40, 4); }
f32 fn_801D2AF4(void* p) { return *(f32*)((char*)p + 0x10); }
int fn_801D2AFC(void) { return 0; }
int fn_801D2B08(void* p) { return fn_801D7BF4((char*)p + 0x24); }
int fn_801D2B2C(void) { return 0; }
int fn_801D2B84(void) { return 0; }
int fn_801D2BB8(void) { return 0; }
int fn_801D2C18(void) { return 0; }
void fn_801D2C74(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void fn_801D2C7C(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }
int fn_801D2C84(void* p) { return fn_8001BEF8((char*)p + 0x10, 2); }
int fn_801D2CAC(void) { return 0; }
f32 fn_801D2CBC(void* p) { return *(f32*)((char*)p + 0x14); }
void fn_801D2CC4(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void* fn_801D2CCC(void* p) { return (char*)p + 0x20; }
void fn_801D2CD4(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
f32 fn_801D2CDC(void* p) { return *(f32*)((char*)p + 0x4); }
void fn_801D2CE4(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void* fn_801D2CEC(void* p) { return (char*)p + 0xc; }

}
