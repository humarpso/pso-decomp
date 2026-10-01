#include "types.h"
struct Vec_802C0CAC { f32 x, y, z; };

struct Entry_802C0CAC { s32 a; s32 b; s32 c; f32 d; s32 e; };

struct Obj_802C0CAC {
    u8 pad0[0xA8];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C0CAC vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_802C0CAC *, Vec_802C0CAC *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void TBoss1Dragon__sub_8014220C(Vec_802C0CAC *, s32 *, s32 *);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *, s32, s32, Vec_802C0CAC *, f32);
f32 TBoss6Type1__sub_803D9370(Vec_802C0CAC *, Vec_802C0CAC *);
extern Entry_802C0CAC lbl_80471914[];
extern const f64 lbl_80471960[];
extern const f32 lbl_805DE4F8;
s32 TObjPlayer__sub_802C0CAC(Obj_802C0CAC *self);
}

extern "C" {

s32 TObjPlayer__sub_802C0CAC(Obj_802C0CAC *self) {
    Vec_802C0CAC a;
    Vec_802C0CAC b;
    Vec_802C0CAC d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    VecCopy__FP3VecPC3Vec(&self->vAC, &a);
    r = clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &b, lbl_80471914[self->fC8].d);
    VecCopy__FP3VecPC3Vec(&d, &b);
    TBoss6Type1__sub_803D9370(&d, &a);
    TBoss1Dragon__sub_8014220C(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

}
