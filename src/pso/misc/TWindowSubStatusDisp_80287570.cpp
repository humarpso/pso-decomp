#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TWindowSubStatusDisp__sub_80287570(void *arg0);
void TWindowSubStatusDisp__sub_802879B0(void *arg0);
u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0);
s32 deleting_destructor__20TWindowSubStatusDispFis(s32 arg0, s16 arg1);
f32 get_base_y__20TWindowSubStatusDispFf(f32 farg0);
void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1);
void update__20TWindowSubStatusDispFPvPv(void* p, void* a1);
M2C_UNK TWindowSubStatusDisp__sub_802877C8();
int TWindowSubStatusDisp__sub_80287860(void*);
int TWindowSubStatusDisp__sub_802878B8(void*, void*);
M2C_UNK __dl__FPv();

extern f32 lbl_805DD840;

f32 TWindowSubStatusDisp__sub_80287570(void *arg0) {
    return lbl_805DD840 + M2C_FIELD(arg0, f32 *, 0xC);
}

extern f32 lbl_805DD840;

f32 get_base_y__20TWindowSubStatusDispFf(f32 farg0) {
    return lbl_805DD840 + farg0;
}

void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x18) = arg1;
    TWindowSubStatusDisp__sub_802877C8();
}

void update__20TWindowSubStatusDispFPvPv(void* p, void* a1) { TWindowSubStatusDisp__sub_80287860(p); TWindowSubStatusDisp__sub_802878B8(p, a1); }

void TWindowSubStatusDisp__sub_802879B0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + M2C_FIELD(arg0, f32 *, 0x20));
}

s32 deleting_destructor__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0) {
    return (u8) ((u32) __cntlzw(M2C_FIELD(arg0, u8 *, 0x19) & 1) >> 5);
}

}
