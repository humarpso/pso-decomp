#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_switch_id__5TOKeyFPv(void *arg0);
void init_key__5TOKeyFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void init_switch_id__5TOKeyFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
        M2C_FIELD(arg0, s32 *, 0xC8) = -1;
        M2C_FIELD(arg0, s32 *, 0xD0) = 2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
}

struct Base0_8016ab58 { char pad[0x18]; };
struct VObj0_8016ab58 : Base0_8016ab58 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); };

void init_key__5TOKeyFPv(u8 *arg0) {
    ((VObj0_8016ab58*)arg0)->m5();
    init_switch_id__5TOKeyFPv((void *)(arg0));
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x20) = 2;
}

}
