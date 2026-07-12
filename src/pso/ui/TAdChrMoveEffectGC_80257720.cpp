#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy4__18TAdChrMoveEffectGCFPvPv(void* p, void* q);
void TWindowSubStatusDisp__sub_80257744(void *arg0);
s32 TWindowSubStatusDisp__sub_80256C00();

void copy4__18TAdChrMoveEffectGCFPvPv(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)p + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)p + 0x3) = *(u8*)((char*)q + 0x3); }
void TWindowSubStatusDisp__sub_80257744(void *arg0) {
    TWindowSubStatusDisp__sub_80256C00();
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, f32 *, 0x24);
}

}
