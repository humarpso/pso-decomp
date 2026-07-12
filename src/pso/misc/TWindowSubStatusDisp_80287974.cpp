#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__20TWindowSubStatusDispFPvPv(void* p, void* a1);
void TWindowSubStatusDisp__sub_802879B0(void *arg0);
s32 TWindowSubStatusDisp__sub_802879C4(s32 arg0, s16 arg1);
int TWindowSubStatusDisp__sub_80287860(void*);
int TWindowSubStatusDisp__sub_802878B8(void*, void*);
M2C_UNK __dl__FPv();

void update__20TWindowSubStatusDispFPvPv(void* p, void* a1) { TWindowSubStatusDisp__sub_80287860(p); TWindowSubStatusDisp__sub_802878B8(p, a1); }

void TWindowSubStatusDisp__sub_802879B0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + M2C_FIELD(arg0, f32 *, 0x20));
}

s32 TWindowSubStatusDisp__sub_802879C4(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
