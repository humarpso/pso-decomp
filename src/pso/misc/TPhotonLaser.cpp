#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Vec_801AC36C { f32 x, y, z; } Vec_801AC36C;

struct Params_801AC36C {
    Vec_801AC36C pos;
    u8 padC[0x18 - 0xC];
    Vec_801AC36C dir;
    f32 f24;
    f32 scale;
    f32 f2C;
};

struct Laser_801AC36C {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt18;
    u8 pad1C[0x334 - 0x1C];
    Vec_801AC36C f334;
    Vec_801AC36C f340;
    Vec_801AC36C f34C;
    f32 f358;
    f32 f35C;
    u8 pad360[4];
    s32 f364;
    u8 pad368[4];
    s32 f36C;
    s16 f370;
};

typedef s32 M2C_UNK;
struct Laser_801AC17C {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt18;
    u8 pad1C[0x334 - 0x1C];
    Vec_801AC36C f334;
    Vec_801AC36C f340;
    Vec_801AC36C f34C;
    f32 f358;
    f32 f35C;
    u8 pad360[4];
    void *f364;
    f32 f368;
    u32 f36C;
    u16 f370;
};

extern "C" {
void TObjPlayer__sub_80019038(void *, void *);
Vec_801AC36C *VecCopy__FP3VecPC3Vec(Vec_801AC36C *, const Vec_801AC36C *);
s32 create_particle_emitter(Vec_801AC36C *, s32);
extern M2C_UNK __vt__12TPhotonLaser[];
extern s32 lbl_805D34F0;
Laser_801AC36C *TPhotonLaser__ct(Laser_801AC36C *self, Params_801AC36C *p, void *parent, s16 arg3);
M2C_UNK queue_destruction__7TObjectFv(void *);
void spawn_particle_effect(void *, s32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void *find_entity_by_id(u16);
void vec3_add_to(void *, void *);
void rotate_vector_by_matrix(int, void *, void *);
void rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
void pop_matrices(int);
extern u8 lbl_8058D490[];
extern const f32 lbl_805DC1B0;
extern const f32 lbl_805DC1B4;
extern const f32 lbl_805DC1B8;
extern const f32 lbl_805DC1BC;
void run_task__12TPhotonLaserFv(Laser_801AC17C *o);
}

extern "C" {

void TObjPlayer__sub_801AC43C(void);
void TObjPlayer__sub_801AC440(void);
void TObjPlayer__sub_801AC444(void* a0);
void *__dt__12TPhotonLaserFv(void *arg0, s16 arg1);
void render__12TPhotonLaserFv(void);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
int begin_effect_render__13TParticleCtrlFv(void);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
int end_effect_render__13TParticleCtrlFv(void);
M2C_UNK queue_destruction__7TObjectFv(void *);

void render__12TPhotonLaserFv(void) { begin_effect_render__13TParticleCtrlFv(); end_effect_render__13TParticleCtrlFv(); }

extern M2C_UNK __vt__12TPhotonLaser[];

void run_task__12TPhotonLaserFv(Laser_801AC17C *o) {
    Vec_801AC36C in;
    Vec_801AC36C out;
    void *owner;
    o->f368 += lbl_805DC1B0;
    in.y = in.x = lbl_805DC1B4;
    in.z = lbl_805DC1B8;
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, (s32)(lbl_805DC1BC * (f32)o->f36C));
    rotate_vector_by_matrix(0, &in, &out);
    pop_matrices(1);
    vec3_add_to(&o->f340, &out);
    o->f36C += 0x24;
    vec3_add_to(&o->f340, &o->f34C);
    if (o->f364 != 0) {
        copy_pos__11TNowLoadingFPvPv(o->f364, &o->f340);
    }
    owner = find_entity_by_id(o->f370);
    if (owner == 0) {
        if (o->f364 != 0) {
            queue_destruction__7TObjectFv(o->f364);
            o->f364 = 0;
        }
        o->f34C.x = lbl_805DC1B4;
        o->f34C.y = lbl_805DC1B4;
        o->f34C.z = lbl_805DC1B4;
    } else if (o->f340.y < *(f32 *)((u8 *)owner + 0x3C)) {
        if (o->f364 != 0) {
            queue_destruction__7TObjectFv(o->f364);
            o->f364 = 0;
        }
        o->f34C.x = lbl_805DC1B4;
        o->f34C.y = lbl_805DC1B4;
        o->f34C.z = lbl_805DC1B4;
        spawn_particle_effect(&o->f340, 0x13D);
        queue_destruction__7TObjectFv(o);
    }
}

void *__dt__12TPhotonLaserFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TPhotonLaser;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x364) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x364));
            M2C_FIELD(arg0, u32 *, 0x364) = 0U;
        }
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Laser_801AC36C *TPhotonLaser__ct(Laser_801AC36C *self, Params_801AC36C *p, void *parent, s16 arg3) {
    TObjPlayer__sub_80019038(self, parent);
    self->vt18 = ((s32 *)&__vt__12TPhotonLaser);
    self->f0 = lbl_805D34F0;
    VecCopy__FP3VecPC3Vec(&self->f334, VecCopy__FP3VecPC3Vec(&self->f340, &p->pos));
    self->f370 = arg3;
    VecCopy__FP3VecPC3Vec(&self->f34C, &p->dir);
    self->f34C.x *= p->scale;
    self->f34C.y *= p->scale;
    self->f34C.z *= p->scale;
    self->f358 = p->f24;
    self->f35C = p->f2C;
    self->f364 = create_particle_emitter(&self->f340, 0x134);
    self->f36C = 0;
    return self;
}

void TObjPlayer__sub_801AC43C(void) {  }
void TObjPlayer__sub_801AC440(void) {  }

    extern const float lbl_805DC1C0;
void TObjPlayer__sub_801AC444(void* a0) { *(float*)((char*)a0 + 0x180) = lbl_805DC1C0; *(float*)((char*)a0 + 0x184) = lbl_805DC1C0; *(float*)((char*)a0 + 0x188) = lbl_805DC1C0; *(float*)((char*)a0 + 0x18c) = lbl_805DC1C0; }

}
