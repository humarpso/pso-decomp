#include "types.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"

struct Vec_80316690 { f32 x, y, z; };

struct Hit_80316690 { s32 flags; u8 *obj; };

extern "C" {
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 TObjEneMe3SinowZoa__data_805DF2FC;
extern const f32 lbl_805DF300;
void TObjEneMe3SinowZoa__sub_80316840(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void attach_particle_model(void *, s32, s32, s32, s32, f32);
Hit_80316690 *csnVectorUnder(void *, void *, s32);
s32 get_particle_model__13TParticleCtrlFl(s32);
int get_instance__13TParticleCtrlFv(void);
void spawn_particle_effect(void *, int);
void TObjEneGibbles__sub_800D8988(void *);
extern const f32 TObjEneMe3SinowZoa__data_805DF2F0;
extern const f32 TObjEneMe3SinowZoa__data_805DF2F4;
}

extern "C" {

void spawn_particle_effect(void *, int);

struct VOff_803167FC_arg0 { char pad_0[0x38]; char f_38[1]; };

#define DELL ((void *(*)(void *, int))spawn_particle_effect)
s32 TObjEneMe3SinowZoa::check_floor_contact(void *arg1) {
    u8 *arg0 = (u8 *)this;
    Vec_80316690 v;
    u8 pad[16];
    Hit_80316690 *hit;
    void *p;
    VecCopy__FP3VecPC3Vec(&v, arg1);
    v.y += TObjEneMe3SinowZoa__data_805DF2F0;
    hit = csnVectorUnder(&v, arg0 + 0x120, 0x4007);
    if (hit != NULL) {
        *(s32 *)(arg0 + 0x3D0) = *(s32 *)(hit->obj + 0x18);
        if (*(s32 *)(arg0 + 0x3D0) & 0x4000) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3D4, hit->obj);
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3D4, arg0 + 0x38);
        }
        if (hit->flags & 4) {
            TObjEneGibbles__sub_800D8988(arg0 + 0x38);
            p = DELL(hit->obj + 0x38, 0x49);
            if (p != 0) {
                attach_particle_model(p, get_particle_model__13TParticleCtrlFl(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneMe3SinowZoa__data_805DF2F4);
            }
            spawn_particle_effect(hit->obj + 0x38, 0xA4);
            return 1;
        }
        if (hit->flags & 2) {
            TObjEneGibbles__sub_800D8988(arg0 + 0x38);
            p = DELL(hit->obj + 0x54, 0x49);
            if (p != 0) {
                attach_particle_model(p, get_particle_model__13TParticleCtrlFl(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneMe3SinowZoa__data_805DF2F4);
            }
            spawn_particle_effect(hit->obj + 0x54, 0xA4);
            return 1;
        }
    }
    return 0;
}

void TObjEneMe3SinowZoa::check_and_notify() {
    s32 x;
    struct VOff_803167FC_arg0 *self = (struct VOff_803167FC_arg0 *)this;
    x = check_floor_contact((void *)(self->f_38));
    if (x == 0) {
        spawn_particle_effect(self->f_38, 243);
    }
}
void TObjEneMe3SinowZoa__sub_80316840(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneMe3SinowZoa__data_805DF2FC) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805DF300) != 0)) {
        ((TObjEneMe3SinowZoa *)arg0)->check_floor_contact((void *)((void *) (arg0 + 0x38)));
    }
}

}
