#include "types.h"
struct Q_802C2958 { s32 a; s32 b; s32 c; s32 d; };

struct Obj_802C2958 { u8 pad[0x430]; s32 f430; };

struct Vec_802C2C48 { f32 x, y, z; };

struct Entry_802C2C48 { s32 a; s32 b; s32 c; f32 d; s32 e; };

struct Obj_802C2C48 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C2C48 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

struct Obj_802C2A10 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    f32 fA4;
    u8 padA8[0x4];
    Vec_802C2C48 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

extern "C" {
extern u8 lbl_80471838[];
extern u8 lbl_804719B8[];
extern u8 lbl_804E07C4[];
extern Obj_802C2958 *lbl_805D6798;
extern s32 lbl_805D679C;
extern const f32 lbl_805DE51C;
extern const f32 lbl_805DE520;
Obj_802C2958 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
Obj_802C2958 *load_resource_from_descriptor(Obj_802C2958 *, s32, void *, s32, s32, s32);
s32 load_gvm_texture_file(void *);
s32 get_bml_model(void *, s32, s32, s32, s32, void *);
void spawn_npc_enemy__6TLobbyFsiiiff(s32, s32, s32, void *, f32, f32);
void TObjPlayer__sub_802C2958(void);
void VecCopy__FP3VecPC3Vec(Vec_802C2C48 *, Vec_802C2C48 *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void direction_to_rotation_xz(Vec_802C2C48 *, s32 *, s32 *);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *, s32, s32, Vec_802C2C48 *, f32);
f32 subtract_vector(Vec_802C2C48 *, Vec_802C2C48 *);
extern Entry_802C2C48 lbl_804717D4[];
extern const f64 lbl_80471960[];
extern const f32 lbl_805DE4F8;
s32 TObjPlayer__sub_802C2C48(Obj_802C2C48 *self);
void VecCopy__FP3VecPC3Vec(Vec_802C2C48 *, Vec_802C2C48 *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void direction_to_rotation_xz(Vec_802C2C48 *, s32 *, s32 *);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *, s32, s32, Vec_802C2C48 *, f32);
f32 subtract_vector(Vec_802C2C48 *, Vec_802C2C48 *);
s32 approach_angle_limited(s32, s32, s32);
s32 angle_diff_s16(s32, s32);
extern Entry_802C2C48 lbl_804717D4[];
extern const f64 lbl_80471960[];
s32 TObjPlayer__sub_802C2A10(Obj_802C2A10 *self);
}

extern "C" {

void TObjPlayer__sub_802C2958(void) {
    Obj_802C2958 *o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != 0) {
        o = load_resource_from_descriptor(o, 5, lbl_804E07C4, 0, 0, 0);
    }
    lbl_805D6798 = o;
    lbl_805D679C = load_gvm_texture_file(lbl_804719B8);
    Q_802C2958 q = *(Q_802C2958 *)lbl_80471838;
    q.a = lbl_805D6798->f430;
    spawn_npc_enemy__6TLobbyFsiiiff(0x40, get_bml_model(lbl_805D6798, 0, ((Q_802C2958 *)lbl_80471838)->c, ((Q_802C2958 *)lbl_80471838)->b, ((Q_802C2958 *)lbl_80471838)->a, lbl_80471838), lbl_805D679C, &q, lbl_805DE51C, lbl_805DE520);
}

s32 TObjPlayer__sub_802C2A10(Obj_802C2A10 *self) {
    Vec_802C2C48 a;
    Vec_802C2C48 b;
    Vec_802C2C48 d;
    s32 tmp;
    s32 tmp2;
    s32 r;
    s32 old;
    s32 diff;
    clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &a, self->fA4);
    VecCopy__FP3VecPC3Vec(&self->vAC, &a);
    r = clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &b, self->fA4 + lbl_804717D4[self->fC8].d);
    VecCopy__FP3VecPC3Vec(&d, &b);
    subtract_vector(&d, &a);
    direction_to_rotation_xz(&d, &tmp, &tmp2);
    self->fBC = approach_angle_limited(self->fBC, tmp, lbl_804717D4[self->fC8].e);
    old = self->fB8;
    tmp = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    self->fB8 = approach_angle_limited(old, tmp, lbl_804717D4[self->fC8].e);
    diff = angle_diff_s16(old, tmp);
    if (diff > 0x30) {
        if (self->fC4 > 0) {
            self->fC4 = 0;
        }
        self->fC4 -= 0x40;
        if (self->fC4 < -0x200) {
            self->fC4 = -0x200;
        }
        self->fC0 += self->fC4;
        if (self->fC0 < -0x2000) {
            self->fC0 = -0x2000;
        }
    } else if (diff < -0x30) {
        if (self->fC4 < 0) {
            self->fC4 = 0;
        }
        self->fC4 += 0x40;
        if (self->fC4 > 0x200) {
            self->fC4 = 0x200;
        }
        self->fC0 += self->fC4;
        if (self->fC0 > 0x2000) {
            self->fC0 = 0x2000;
        }
    } else {
        self->fC4 = 0;
        if (self->fC0 > 0x100) {
            self->fC0 -= 0x100;
        } else if (self->fC0 < -0x100) {
            self->fC0 += 0x100;
        } else {
            self->fC0 = 0;
        }
    }
    return r;
}

s32 TObjPlayer__sub_802C2C48(Obj_802C2C48 *self) {
    Vec_802C2C48 a;
    Vec_802C2C48 b;
    Vec_802C2C48 d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    VecCopy__FP3VecPC3Vec(&self->vAC, &a);
    r = clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &b, lbl_804717D4[self->fC8].d);
    VecCopy__FP3VecPC3Vec(&d, &b);
    subtract_vector(&d, &a);
    direction_to_rotation_xz(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

}
