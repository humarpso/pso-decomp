#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_801668cc { char pad[0x18]; };
struct V_A_801668cc : Base_A_801668cc {
    virtual void f0();
    virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(); virtual void f5(); virtual void f6();
    virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12();
    virtual void f13();
    virtual void m14();
};

extern "C" {

void update__18TOExplosiveMachineFPv(void *arg0);
M2C_UNK TOExplosiveMachine__sub_80166778(void *);
M2C_UNK TOExplosiveMachine__sub_80166814(void *);
s32 check_demo_mode__10TObjPlayerFv();

extern const f32 lbl_805DB608;

void update__18TOExplosiveMachineFPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((V_A_801668cc *)arg0)->m14();
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        TOExplosiveMachine__sub_80166778(arg0);
        break;
    case 1:
        TOExplosiveMachine__sub_80166814(arg0);
        break;
    }
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + lbl_805DB608);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (temp_f0 - temp_f1);
    }
}

}
