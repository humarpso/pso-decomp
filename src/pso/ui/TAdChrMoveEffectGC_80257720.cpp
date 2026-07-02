#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdChrMoveEffectGC__sub_80257720(void* p, void* q);
void fn_80257744(void *arg0);
s32 fn_80256C00();

void TAdChrMoveEffectGC__sub_80257720(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)p + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)p + 0x3) = *(u8*)((char*)q + 0x3); }
void fn_80257744(void *arg0) {
    fn_80256C00();
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, f32 *, 0x24);
}

}
