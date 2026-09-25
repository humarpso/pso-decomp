#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct B_800D758C { f32 f0; f32 f4; f32 f8; f32 fc; f32 f10; };

struct V_800D758C : B_800D758C {
    virtual void m0();
    virtual void m1(s32 x);
    f32 f18;
};

struct B_800D7524 { f32 f0; f32 f4; f32 f8; f32 fc; f32 f10; };

struct V_800D7524 : B_800D7524 {
    virtual void m0();
    virtual void m1(s32 x);
    f32 f18;
};

extern "C" {
extern const f32 lbl_805DA360;
extern const f32 lbl_805DA350;
extern const f32 lbl_805DA348;
void TObjEneMe3SinowZoa__sub_800D758C(V_800D758C *self);
extern const f32 lbl_805DA35C;
extern const f32 lbl_805DA34C;
extern const f32 lbl_805DA354;
extern const f32 lbl_805DA348;
void TObjEneMe3SinowZoa__sub_800D7524(V_800D7524 *self);
}

extern "C" {

void set_speed_scale__18TObjEneMe3SinowZoaFPvi(void *arg0, s32 arg1);

extern const f64 lbl_8043C6F8;
extern const f32 lbl_805DA34C;

void set_speed_scale__18TObjEneMe3SinowZoaFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (lbl_805DA34C / (f32) arg1);
}

#pragma push
#pragma fp_contract on
void TObjEneMe3SinowZoa__sub_800D7524(V_800D7524 *self) {
    self->m1(10);
    self->f18 = lbl_805DA35C * self->f10 + lbl_805DA34C;
    self->f0 = lbl_805DA354;
    self->f4 = lbl_805DA348;
    self->f8 = lbl_805DA348;
    self->fc = lbl_805DA348;
}
#pragma pop

void TObjEneMe3SinowZoa__sub_800D758C(V_800D758C *self) {
    self->m1(10);
    self->f18 = -(lbl_805DA360 * self->f10);
    self->f0 = lbl_805DA350;
    self->f4 = lbl_805DA348;
    self->f8 = lbl_805DA348;
    self->fc = lbl_805DA348;
}

}
