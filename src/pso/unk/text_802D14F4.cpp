#include "types.h"
#include "pso/enemy/TObjEneBm9Mericarol_Bomb.h"
#include "pso/misc/TNowLoading.h"

struct VBase_18_64db54 { char pad[0x18]; };

struct VObj_18_64db54 : VBase_18_64db54 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14(void *, void *);
};

struct Vec_802D14F4 { f32 x, y, z; };

struct Rot_802D14F4 { s32 x, y, z; };

struct Hit_802D14F4 { u8 pad[4]; u8 *tri; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
Hit_802D14F4 *csnVecterUnder(void *, int);
u32 csnVector(void *, void *, int);
u32 spawn_particle_effect_with_rotation(void *, void *, int, int);
s32 enable__13TParticleCtrlFPv(void *);
void *find_entity_by_id(int);
s32 TObjEneBm9Mericarol__sub_802CED40(void *);
s32 vec3_add_to(void *, void *);
extern const f32 lbl_805DE75C;
extern const f32 lbl_805DE760;
extern const f32 lbl_805DE764;
extern const f32 lbl_805DE768;
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void TObjEneBm9Mericarol_Bomb::run_task() {
    u8 *arg0 = (u8 *)this;
    Vec_802D14F4 v;
    Rot_802D14F4 r1;
    Rot_802D14F4 r2;
    Hit_802D14F4 *hit;
    f32 d;
    switch (this->m_100) {
    case 0:
        (*(s32 *)((s8 *)arg0 + 0xFC))++;
        if ((f32) *(s32 *)((s8 *)arg0 + 0xFC) >= lbl_805DE75C) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        this->m_f8 -= lbl_805DE760;
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0xB4);
        vec3_add_to(&v, arg0 + 0xCC);
        v.y += this->m_f8 - lbl_805DE764;
        if (csnVector(arg0 + 0xB4, &v, 0x1EFF) != 0) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        this->m_b4 += *(f32 *)((s8 *)arg0 + 0xC0);
        *(f32 *)((s8 *)arg0 + 0xB8) += this->m_c4;
        this->m_bc += *(f32 *)((s8 *)arg0 + 0xC8);
        hit = csnVecterUnder(arg0 + 0xB4, 0x16EF);
        if (hit != NULL) {
            *(f32 *)((s8 *)arg0 + 0x3C) = *(f32 *)((s8 *)hit->tri + 4);
            VecCopy__FP3VecPC3Vec(arg0 + 0xD8, hit->tri + 0xC);
            *(s32 *)((s8 *)arg0 + 0x10C) = 1;
        } else {
            *(s32 *)((s8 *)arg0 + 0x10C) = 0;
        }
        *(f32 *)((s8 *)arg0 + 0x38) = this->m_b4;
        *(f32 *)((s8 *)arg0 + 0x40) = this->m_bc;
        d = *(f32 *)((s8 *)arg0 + 0xB8) - *(f32 *)((s8 *)arg0 + 0x3C);
        if (d > lbl_805DE768) {
            *(s32 *)((s8 *)(*(u8 * *)&this->m_a4) + 0x18) |= 4;
            *(s32 *)((s8 *)(*(u8 * *)&this->m_a4) + 0x18) &= ~2;
        } else {
            *(s32 *)((s8 *)(*(u8 * *)&this->m_a4) + 0x18) &= ~4;
            *(s32 *)((s8 *)(*(u8 * *)&this->m_a4) + 0x18) |= 2;
        }
        *(f32 *)((s8 *)(*(u8 * *)&this->m_a4) + 4) = d;
        if (((VObj_18_64db54 *)(arg0))->m14(arg0 + 0xE4, arg0 + 0xF0) != 0) {
            TObjEneBm9Mericarol__sub_802CED40(find_entity_by_id(*(u16 *)((s8 *)arg0 + 0xB0)));
            if (*(s32 *)((s8 *)arg0 + 0xF0) == 0 && this->m_108 != 0) {
                *(s32 *)((s8 *)arg0 + 0xF0) = 0x12;
                this->vfunc_16(arg0 + 0xE4, arg0 + 0xF0);
            }
            queue_destruction__7TObjectFv(arg0);
            return;
        }
    case 1:
    default:
        if (this->m_110 == NULL) {
            r1.x = 0;
            r1.y = this->m_ec + 0x4000;
            r1.z = 0;
            *(u32 *)&this->m_110 = spawn_particle_effect_with_rotation(arg0 + 0xB4, &r1, 0x207, 0x40);
            if (this->m_110 != NULL) {
                enable__13TParticleCtrlFPv(this->m_110);
            }
        } else {
            ((TNowLoading *)(this->m_110))->copy_pos(arg0 + 0xB4);
        }
        if (*(void * *)&this->unk_114 == NULL) {
            r2.x = 0;
            r2.y = this->m_ec + 0x4000;
            r2.z = 0;
            *(u32 *)&this->unk_114 = spawn_particle_effect_with_rotation(arg0 + 0xB4, &r2, *(s32 *)((s8 *)arg0 + 0x104), 0x40);
            if (*(void * *)&this->unk_114 != NULL) {
                enable__13TParticleCtrlFPv(*(void * *)&this->unk_114);
            }
        } else {
            ((TNowLoading *)(*(void * *)&this->unk_114))->copy_pos(arg0 + 0xB4);
        }
        break;
    }
}
#pragma pop

}
