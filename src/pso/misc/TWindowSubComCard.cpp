#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubComCard__sub_802183BC(void *arg0);
s32 fn_802183B4(void* p);
void fn_802183F8(void* p, void* a1);
void fn_80218430(void);
int fn_80073DC4(void*, void*);
u32 fn_800FA8A4();
s32 fn_800FA8C4();
s32 fn_8028783C(s32 a0 = 0, s32 a1 = 0);

s32 fn_802183B4(void* p) { return *(s32*)((char*)p + 0x68); }
void TWindowSubComCard__sub_802183BC(void *arg0) {
    u32 temp;
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    temp = (u32) M2C_FIELD(arg0, u32 *, 0x88);
    if (temp != 0U) {
        fn_8028783C(temp, 1);
    }
}
void fn_802183F8(void* p, void* a1) { fn_80073DC4(p, (void*)20); *(void**)((char*)p + 0x23b4) = a1; }
void fn_80218430(void) {
    if (fn_800FA8A4() == 0U) {
        fn_800FA8C4();
    }
}

}
