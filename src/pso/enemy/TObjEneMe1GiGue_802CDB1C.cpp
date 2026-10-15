#include "types.h"

struct E_802CDAEC { s32 a; s32 b; s32 c; s32 d; };

struct G_802CDAEC { u8 pad[0x42c]; E_802CDAEC *e; };

struct O_802CDAEC { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct G_802CDAC4 { u8 pad[0x18]; s32 v[1]; };

struct Vec_802CDEB4 { f32 x, y, z; };

struct Ang_802CDEB4 { s32 x; s32 y; s32 z; };

struct Rot_802CDEB4 { s32 a; s32 b; };

struct Vec_802CDB1C { f32 x, y, z; };

struct Hit_802CDB1C { s32 kind; f32 power; };

struct VBase_802CDB1C { u8 pad[0x18]; };

struct VEnt_802CDB1C : VBase_802CDB1C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *src, Hit_802CDB1C *hit, s32 a, s32 b, s32 c);
};

struct Shot_802CDB1C {
    u8 pad0[0xAC];
    Vec_802CDB1C pos;
    Vec_802CDB1C prev;
    Vec_802CDB1C vel;
    u8 padD0[0xEC - 0xD0];
    s32 timer;
    Vec_802CDB1C *start;
    f32 speed;
    void *ptcl0;
    void *ptcl1;
    s32 state;
    s32 f104;
    u16 target_id;
    u16 src_id;
};

extern "C" {
extern s32 TObjEneMe1GiGue__param_table;
f32 get_gigue_float_parameter(s32 arg0, s32 arg1);
extern G_802CDAEC *TObjEneMe1GiGue__data_805D6838;
void load_params_from_table__15TObjEneMe1GiGueFPvi(O_802CDAEC *self, s32 i);
extern s32 TObjEneMe1GiGue__param_table;
s32 get_gigue_int_parameter(void *self, s32 i);
f64 atan2_float(f32, f32);
s32 spawn_particle_effect_with_rotation(Vec_802CDEB4 *, Ang_802CDEB4 *, int, int);
f32 horizontal_distance__10TObjPlayerFPvPv(Vec_802CDEB4 *, Vec_802CDEB4 *);
f32 xz_distance_squared(Vec_802CDEB4 *, Vec_802CDEB4 *);
u8 *find_entity_by_id(s16);
s32 construct_collider_proxy__10TObjPlayerFPv(void *, s32);
s32 matrix_mult_vec(void *, Vec_802CDEB4 *, void *);
s32 rotate_matrix_y(void *, s32);
s32 rotate_matrix_x(void *, s32);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern Vec_802CDEB4 lbl_804722A8;
extern const f64 lbl_804722C8[];
extern s32 lbl_804E14E8[];
extern u8 identity_matrix[];
extern s32 tl_04;
extern f32 lbl_805D6844;
extern f32 lbl_805D6848;
extern const f32 lbl_805DE6C0;
extern const f32 lbl_805DE6C4;
extern const f32 lbl_805DE6C8;
u8 *TObjPlayer__sub_802CDEB4(u8 *arg0, Vec_802CDEB4 *arg1, s16 arg2, Rot_802CDEB4 *arg3, s32 arg4, s32 arg5, s16 arg6);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
u32 csnVector(void *, void *, s32);
s32 spawn_particle_effect(void *, s32);
s32 copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 enable__13TParticleCtrlFPv(void *);
VEnt_802CDB1C *find_active_entity_by_id(u16);
s32 scale_velocity__19TObjGyaranzoMissileFPvf(void *, f32);
f32 xyz_distance_squared(void *, void *);
u8 *find_entity_by_id(s16);
s32 get_global_state__14TOKeyMachine01Fv();
s32 play_sound_effect(s32, void *, s32, s32);
s32 apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *, void *);
s32 vec3_add_to(void *, void *);
s32 subtract_vector(void *, void *);
extern Hit_802CDB1C lbl_804722B4[];
extern s32 local_client_id;
extern f32 lbl_805D6844;
extern const f32 lbl_805D684C;
extern s32 lbl_805D6854;
void TObjPlayer__sub_802CDB1C(u8 *arg0);
}

extern "C" {

void TObjEneMe1GiGue__sub_802CDAB4(void);
void TObjEneMe1GiGue__sub_802CDAB8(void);
void TObjEneMe1GiGue__sub_802CDABC(void);
void TObjEneMe1GiGue__sub_802CDAC0(void);
void TObjEneMe1GiGue__sub_802CDAE8(void);
void *TObjPlayer__sub_802CDE28(void *arg0, s16 arg1);
void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *arg0, s16 arg1);
void free_collision_body_parts(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

#pragma push
#pragma opt_common_subs off
#define self ((Shot_802CDB1C *)arg0)
void TObjPlayer__sub_802CDB1C(u8 *arg0) {
    u8 *src;
    VEnt_802CDB1C *tgt;
    Vec_802CDB1C v;
    src = ((u8 *(*)(u16))find_entity_by_id)(self->src_id);
    if (src == NULL) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    tgt = find_active_entity_by_id(self->target_id);
    switch (self->state) {
    case 0:
        self->timer--;
        if (self->timer <= 0) {
            self->timer = 0;
            VecCopy__FP3VecPC3Vec(&self->pos, self->start);
            self->state = 1;
            if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
                play_sound_effect(0x4003A313, &self->pos, 0, 0);
                return;
            }
            play_sound_effect(0x3A820, &self->pos, 0, 0);
            return;
        }
        if (self->ptcl0 != NULL) {
            enable__13TParticleCtrlFPv(self->ptcl0);
        }
        if (self->ptcl1 != NULL) {
            enable__13TParticleCtrlFPv(self->ptcl1);
        }
        return;
    case 1:
        self->timer++;
        if (self->timer >= 0x5A) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (tgt != NULL) {
            VecCopy__FP3VecPC3Vec(&v, (u8 *)tgt + 0x2FC);
            subtract_vector(&v, &self->pos);
            scale_velocity__19TObjGyaranzoMissileFPvf(&v, self->speed);
            self->speed += lbl_805D684C;
            vec3_add_to(&self->vel, &v);
            scale_velocity__19TObjGyaranzoMissileFPvf(&self->vel, lbl_805D6844);
        }
        VecCopy__FP3VecPC3Vec(&self->prev, &self->pos);
        vec3_add_to(&self->pos, &self->vel);
        if (self->ptcl0 != NULL) {
            copy_pos__11TNowLoadingFPvPv(self->ptcl0, &self->pos);
        }
        if (self->ptcl1 != NULL) {
            copy_pos__11TNowLoadingFPvPv(self->ptcl1, &self->pos);
        }
        if (csnVector(&self->prev, &self->pos, -1) != 0) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (tgt != NULL && !(*(s32 *)((s8 *)tgt + 0x30) & 0x04000A00) &&
            xyz_distance_squared(&self->pos, (u8 *)tgt + 0x2FC) <= lbl_805D6844 * lbl_805D6844) {
            Hit_802CDB1C h = lbl_804722B4[0];
            h.power = (f32)lbl_805D6854;
            {
                Hit_802CDB1C h1 = h;
                tgt->m21(src, &h1, 0, -1, -1);
            }
            if (self->f104 == 1) {
                h.kind = 0x12;
                Hit_802CDB1C h2 = h;
                tgt->m21(src, &h2, 0, -1, -1);
            }
            spawn_particle_effect((u8 *)tgt + 0x2FC, 0x8E);
            if (local_client_id == self->target_id) {
                apply_hit_shake__15TObjEneMe1GiGueFPvUi(src, tgt);
            }
            queue_destruction__7TObjectFv(self);
        }
        break;
    }
}
#undef self
#pragma pop

void *TObjPlayer__sub_802CDE28(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E14E8;
        if (*(void **)((s8 *)arg0 + 0xF8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xF8)); *(s32 *)((s8 *)arg0 + 0xF8) = 0; }
        if (*(void **)((s8 *)arg0 + 0xFC) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xFC)); *(s32 *)((s8 *)arg0 + 0xFC) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjPlayer__sub_802CDEB4(u8 *arg0, Vec_802CDEB4 *arg1, s16 arg2, Rot_802CDEB4 *arg3, s32 arg4, s32 arg5, s16 arg6) {
    Vec_802CDEB4 *pos;
    construct_collider_proxy__10TObjPlayerFPv(arg0, tl_04);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E14E8;
    *(s16 *)((s8 *)arg0 + 0x108) = arg2;
    *(s16 *)((s8 *)arg0 + 0x10A) = arg6;
    *(s32 *)((s8 *)arg0 + 0x104) = arg5;
    *(Vec_802CDEB4 **)((s8 *)arg0 + 0xF0) = arg1;
    *(f32 *)((s8 *)arg0 + 0xE8) = lbl_805DE6C0;
    push_matrix_from(identity_matrix);
    {
        Vec_802CDEB4 v = lbl_804722A8;
        v.z = lbl_805D6844;
        rotate_matrix_y(0, arg3->b);
        rotate_matrix_x(0, arg3->a);
        matrix_mult_vec(0, &v, arg0 + 0xC4);
    }
    pop_matrix();
    *(s32 *)((s8 *)arg0 + 0xEC) = arg4;
    pos = (Vec_802CDEB4 *)(find_entity_by_id(arg2) + 0x2FC);
    {
    Ang_802CDEB4 ang;
    ang.x = 0;
    ang.y = (s32)(lbl_804722C8[0] * atan2_float(pos->x - arg1->x, pos->z - arg1->z)) + 0x4000;
    ang.z = 0x4000 - (s32)(lbl_804722C8[0] * atan2_float(pos->y - arg1->y, horizontal_distance__10TObjPlayerFPvPv(pos, arg1)));
    *(s32 *)((s8 *)arg0 + 0xF8) = spawn_particle_effect_with_rotation(arg1, &ang, 0x201, 2);
    *(s32 *)((s8 *)arg0 + 0xFC) = spawn_particle_effect_with_rotation(arg1, &ang, 0x202, 2);
    }
    *(f32 *)((s8 *)arg0 + 0xF4) = lbl_805D6848;
    if (xz_distance_squared(pos, arg1) < lbl_805DE6C4) {
        *(f32 *)((s8 *)arg0 + 0xF4) *= lbl_805DE6C8;
    }
    *(s32 *)((s8 *)arg0 + 0x100) = 0;
    return arg0;
}

}
