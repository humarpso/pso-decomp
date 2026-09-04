#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemEffNeedle.h"

TItemEffNeedle::~TItemEffNeedle() {}
#else
#if PSO_CLASS_PACKAGE == 0x80109AE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemEffNeedle__vt4(u8 *arg0);
u8 *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

s32 TItemEffNeedle__vt4(u8 *arg0) {
    s32 temp_r5;
    u8 *temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x50));
    if (temp_r3 == NULL) {
        queue_destruction__7TObjectFv(arg0);
        return 0;
    }
    temp_r5 = M2C_FIELD(temp_r3, s32 *, 0xA4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x30, temp_r5 + (s32)(M2C_FIELD(arg0, s32 *, 0x54) * 0x2C) + 0x1C, temp_r5);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + M2C_FIELD(temp_r3, s32 *, 0x60));
    return 1;
}

}
#endif
#endif
