#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_run_effect_m7__18TObjEneMe3SinowZoaFPv(u8 *arg0);
s32 try_run_effect_m6__18TObjEneMe3SinowZoaFPv(u8 *arg0);

struct VObj8031A598_Base { char pad[0x14]; };
struct VObj8031A598 : VObj8031A598_Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

s32 try_run_effect_m7__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    u8 *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        temp_r3 = arg0 + 0x414;
        ((VObj8031A598*)temp_r3)->m7();
        return 1;
    }
    return 0;
}

struct VObj8031A5E0_Base { char pad[0x14]; };
struct VObj8031A5E0 : VObj8031A5E0_Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

s32 try_run_effect_m6__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    u8 *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        temp_r3 = arg0 + 0x414;
        ((VObj8031A5E0*)temp_r3)->m6();
        return 1;
    }
    return 0;
}

}
