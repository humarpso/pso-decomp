#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_800A04F0 { f32 v0, v4, v8, vc; f32 rate; };

struct Obj_800A04F0 : Base_800A04F0 {
    virtual void m0();
    virtual void m1(s32);
    f32 f18;
};

struct Base_800A0554 { f32 v0, v4, v8, vc; f32 rate; };

struct Obj_800A0554 : Base_800A0554 {
    virtual void m0();
    virtual void m1(s32);
    f32 f18;
};

extern "C" {
extern const f32 lbl_805D995C;
extern const f32 lbl_805D9960;
extern const f32 lbl_805D9968;
void TObjPlayer__sub_800A04F0(Obj_800A04F0 *self);
extern const f32 lbl_805D9958;
extern const f32 lbl_805D996C;
void TObjPlayer__sub_800A0554(Obj_800A0554 *self);
}

extern "C" {

void set_field10_reciprocal__10TObjPlayerFPvi(void *arg0, s32 arg1);

extern const f64 lbl_8043A468;
extern const f32 lbl_805D995C;

void set_field10_reciprocal__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (lbl_805D995C / (f32) arg1);
}
#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800A04F0(Obj_800A04F0 *self) {
    self->m1(10);
    self->f18 = lbl_805D9968 * self->rate + lbl_805D995C;
    self->v0 = lbl_805D9960;
    self->v4 = lbl_805D9960;
    self->v8 = lbl_805D9960;
    self->vc = lbl_805D9960;
}
#pragma pop

void TObjPlayer__sub_800A0554(Obj_800A0554 *self) {
    self->m1(10);
    self->f18 = -(lbl_805D996C * self->rate);
    self->v0 = lbl_805D9958;
    self->v4 = lbl_805D9958;
    self->v8 = lbl_805D9958;
    self->vc = lbl_805D9958;
}

}
