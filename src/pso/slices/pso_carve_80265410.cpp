#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8028783C(s32 a0 = 0, s32 a1 = 0);
void fn_80265410(void* p);
int TWindowSubComCard__sub_8026543C(void* p);
int fn_80247D2C(void*);

void fn_80265410(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) fn_80247D2C(m); }
int TWindowSubComCard__sub_8026543C(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }
void TWindowSubComCard__sub_80265448(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        fn_8028783C(M2C_FIELD(arg0, s32 *, 0x78), 1);
    }
}

}
