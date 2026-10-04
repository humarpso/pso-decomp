#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
Hit_802D14F4 *csnVecterUnder(void *, int);
u32 csnVector(void *, void *, int);
u32 spawn_particle_effect_with_rotation(void *, void *, int, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);
void *find_entity_by_id(int);
M2C_UNK TObjEneBm9Mericarol__sub_802CED40(void *);
M2C_UNK vec3_add_to(void *, void *);
extern const f32 lbl_805DE75C;
extern const f32 lbl_805DE760;
extern const f32 lbl_805DE764;
extern const f32 lbl_805DE768;
void fn_802D14F4(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void fn_802D14F4(u8 *arg0) {
    Vec_802D14F4 v;
    Rot_802D14F4 r1;
    Rot_802D14F4 r2;
    Hit_802D14F4 *hit;
    f32 d;
    switch (M2C_FIELD(arg0, s32 *, 0x100)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xFC)++;
        if ((f32) M2C_FIELD(arg0, s32 *, 0xFC) >= lbl_805DE75C) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD(arg0, f32 *, 0xF8) -= lbl_805DE760;
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0xB4);
        vec3_add_to(&v, arg0 + 0xCC);
        v.y += M2C_FIELD(arg0, f32 *, 0xF8) - lbl_805DE764;
        if (csnVector(arg0 + 0xB4, &v, 0x1EFF) != 0) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD(arg0, f32 *, 0xB4) += M2C_FIELD(arg0, f32 *, 0xC0);
        M2C_FIELD(arg0, f32 *, 0xB8) += M2C_FIELD(arg0, f32 *, 0xC4);
        M2C_FIELD(arg0, f32 *, 0xBC) += M2C_FIELD(arg0, f32 *, 0xC8);
        hit = csnVecterUnder(arg0 + 0xB4, 0x16EF);
        if (hit != NULL) {
            M2C_FIELD(arg0, f32 *, 0x3C) = M2C_FIELD(hit->tri, f32 *, 4);
            VecCopy__FP3VecPC3Vec(arg0 + 0xD8, hit->tri + 0xC);
            M2C_FIELD(arg0, s32 *, 0x10C) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x10C) = 0;
        }
        M2C_FIELD(arg0, f32 *, 0x38) = M2C_FIELD(arg0, f32 *, 0xB4);
        M2C_FIELD(arg0, f32 *, 0x40) = M2C_FIELD(arg0, f32 *, 0xBC);
        d = M2C_FIELD(arg0, f32 *, 0xB8) - M2C_FIELD(arg0, f32 *, 0x3C);
        if (d > lbl_805DE768) {
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) |= 4;
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) &= ~2;
        } else {
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) &= ~4;
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) |= 2;
        }
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 4) = d;
        if (((VObj_18_64db54 *)(arg0))->m14(arg0 + 0xE4, arg0 + 0xF0) != 0) {
            TObjEneBm9Mericarol__sub_802CED40(find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xB0)));
            if (M2C_FIELD(arg0, s32 *, 0xF0) == 0 && M2C_FIELD(arg0, s32 *, 0x108) != 0) {
                M2C_FIELD(arg0, s32 *, 0xF0) = 0x12;
                ((VObj_18_64db54 *)(arg0))->m14(arg0 + 0xE4, arg0 + 0xF0);
            }
            queue_destruction__7TObjectFv(arg0);
            return;
        }
    case 1:
    default:
        if (M2C_FIELD(arg0, void **, 0x110) == NULL) {
            r1.x = 0;
            r1.y = M2C_FIELD(arg0, s32 *, 0xEC) + 0x4000;
            r1.z = 0;
            M2C_FIELD(arg0, u32 *, 0x110) = spawn_particle_effect_with_rotation(arg0 + 0xB4, &r1, 0x207, 0x40);
            if (M2C_FIELD(arg0, void **, 0x110) != NULL) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x110));
            }
        } else {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x110), arg0 + 0xB4);
        }
        if (M2C_FIELD(arg0, void **, 0x114) == NULL) {
            r2.x = 0;
            r2.y = M2C_FIELD(arg0, s32 *, 0xEC) + 0x4000;
            r2.z = 0;
            M2C_FIELD(arg0, u32 *, 0x114) = spawn_particle_effect_with_rotation(arg0 + 0xB4, &r2, M2C_FIELD(arg0, s32 *, 0x104), 0x40);
            if (M2C_FIELD(arg0, void **, 0x114) != NULL) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x114));
            }
        } else {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x114), arg0 + 0xB4);
        }
        break;
    }
}
#pragma pop

}
