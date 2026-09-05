#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
void TBoss6Zanzo__sub_803205A0(s32 *arg0, s32 *arg1);
}

extern "C" {

int TBoss6Type1__sub_803204B8(void);
int TBoss6Zanzo__sub_80320534(void);
s32 fn_803204B0(void* p);
void render__11TBoss6ZanzoFv(void* p);
int TBoss6Zanzo__sub_803205C4(void*);
int fn_80141A30(void);
int set_depth_buffer_settings_1__Fv(void*);

s32 fn_803204B0(void* p) { return *(s32*)((char*)p + 0x4); }
int TBoss6Type1__sub_803204B8(void) { return 0; }
int TBoss6Zanzo__sub_80320534(void) { return 0; }

void TBoss6Zanzo__sub_803205A0(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}

void render__11TBoss6ZanzoFv(void* p) { set_depth_buffer_settings_1__Fv(p); TBoss6Zanzo__sub_803205C4(p); fn_80141A30(); }

}
