#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8017E978 { char pad[0x18]; };
struct VObj_8017E978 : Base_8017E978 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

struct Vec_8017EA74 { f32 x, y, z; };

struct Butterfly_8017EA74 {
    u8 pad0[0x38];
    Vec_8017EA74 pos;
    u8 pad44[0x60 - 0x44];
    s32 rotY;
    u8 pad64[0x94 - 0x64];
    f32 baseY;
    u8 pad98[0x9C - 0x98];
    Vec_8017EA74 vel;
    f32 phase;
    f32 phaseSpeed;
    f32 lift;
    s16 timer;
    s16 angle;
    u8 state;
    u8 flag;
    u8 dir;
};

extern "C" {
s32 rand();
f32 sin_table_lookup(s16);
void vec3_add_to(Vec_8017EA74 *, Vec_8017EA74 *);
void rotate_vector_by_matrix(void *, Vec_8017EA74 *, Vec_8017EA74 *);
void rotate_matrix_y(void *, s32);
s32 push_matrix_from(void *);
s32 pop_matrices(s32);
extern u8 lbl_8058D490[];
void run_task__10TButterflyFv(Butterfly_8017EA74 *self);
}

extern "C" {

void *__dt__10TButterflyFv(void *arg0, s16 arg1);
void init_motion__10TButterflyFPv(u8 *arg0);
void render__10TButterflyFv(void *arg0);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK draw_model__10TButterflyFPv(void *);
s32 rand();
M2C_UNK set_global_param__8TObjFishFi();

extern M2C_UNK lbl_80443970;

void init_motion__10TButterflyFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x90, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) ((0.5f) * ((3.0517578e-05f) * (f32) rand()));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (0.0f);
    M2C_FIELD(arg0, s8 *, 0xB8) = 0;
    M2C_FIELD(arg0, s8 *, 0xB9) = 0;
    M2C_FIELD(arg0, s16 *, 0xB4) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xB6) = 0;
}

extern s32 lbl_805D5B10;

void render__10TButterflyFv(void *arg0) {
    if (((VObj_8017E978*)arg0)->m8((4e+02f), (2e+01f)) != 0) {
        TObjFish__sub_8001EDB0(lbl_805D5B10, 0);
        set_global_param__8TObjFishFi();
        draw_model__10TButterflyFPv(arg0);
    }
}

extern M2C_UNK __vt__10TButterfly[];

#pragma push
#pragma fp_contract on
void run_task__10TButterflyFv(Butterfly_8017EA74 *self) {
    f32 target;
    f32 lift;
    target = 3.2f * sin_table_lookup(self->angle) + self->baseY;
    if (self->flag == 0) {
        self->lift = 5.0f * (target - self->pos.y);
        lift = self->lift;
        if (lift < 0.1f) {
            self->lift = 0.1f;
        } else if (lift > 4.0f) {
            self->lift = 4.0f;
        }
        self->phaseSpeed = 2.0f * (0.01f * self->lift) + 0.3f;
        self->vel.y = 0.1f * (0.027f * self->lift) + self->vel.y;
        self->vel.y = self->vel.y - 0.027f;
        self->phase = self->phase + self->phaseSpeed;
        if (self->phase > 5.0f) {
            self->phase = 0.0f;
        }
    } else {
        self->lift = -7.0f * (target - self->pos.y);
        lift = self->lift;
        if (lift < 0.1f) {
            self->lift = 0.1f;
        } else if (lift > 4.0f) {
            self->lift = 4.0f;
        }
        self->phaseSpeed = 2.0f * (0.1f * self->lift) + 0.32f;
        self->vel.y = self->vel.y - 0.5f * (0.027f * self->lift);
        self->vel.y = self->vel.y - 0.027f;
        self->phase = self->phase + self->phaseSpeed;
        if (self->phase > 5.0f) {
            self->phase = 0.0f;
            self->flag = 0;
        }
    }
    switch (self->state) {
    case 0:
        self->vel.x *= (0.8f);
        self->vel.z *= (0.8f);
        break;
    case 1:
        if (self->flag == 0) {
            Vec_8017EA74 dir;
            Vec_8017EA74 out;
            dir.x = 2.0f * (0.0015f * (2.0f * (3.0517578125e-05f * (f32)rand()) - 1.0f));
            dir.y = 0.0f;
            dir.z = 2.0f * (0.0015f * (3.0517578125e-05f * (f32)rand())) + 0.05f;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(NULL, self->rotY);
            rotate_vector_by_matrix(NULL, &dir, &out);
            pop_matrices(1);
            self->vel.x = self->vel.x + out.x;
            self->vel.z = self->vel.z + out.z;
            self->vel.x *= (0.72f);
            self->vel.z *= (0.72f);
        } else {
            self->vel.x *= (0.85f);
            self->vel.z *= (0.85f);
        }
        break;
    case 2:
        if (self->dir == 0) {
            self->rotY = (f32)self->rotY + (200.0f * (3.0517578125e-05f * (f32)rand()) + 200.0f);
        } else {
            self->rotY = (f32)self->rotY - (200.0f * (3.0517578125e-05f * (f32)rand()) + 200.0f);
        }
        if (self->flag == 0) {
            Vec_8017EA74 dir;
            Vec_8017EA74 out;
            dir.x = 2.0f * (0.025f * (2.0f * (3.0517578125e-05f * (f32)rand()) - 1.0f));
            dir.y = 0.0f;
            dir.z = 2.0f * (0.025f * (3.0517578125e-05f * (f32)rand())) + 0.05f;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(NULL, self->rotY);
            rotate_vector_by_matrix(NULL, &dir, &out);
            pop_matrices(1);
            self->vel.x = self->vel.x + out.x;
            self->vel.z = self->vel.z + out.z;
            self->vel.x *= (0.85f);
            self->vel.z *= (0.85f);
        } else {
            self->vel.x *= (0.75f);
            self->vel.z *= (0.75f);
        }
        break;
    }
    vec3_add_to(&self->pos, &self->vel);
    if (self->pos.y > 12.0f + target) {
        self->pos.y = 12.0f + target;
    } else if (self->pos.y < target - 6.0f) {
        self->pos.y = target - 6.0f;
    }
    if (self->timer != 0) {
        self->timer--;
    } else {
        switch (self->state) {
        case 0:
            self->state = 1;
            self->timer = 2.0f * (20.0f * (3.0517578125e-05f * (f32)rand())) + 20.0f;
            break;
        case 1:
            if (3.0517578125e-05f * (f32)rand() < 0.5f) {
                self->state = 2;
                self->timer = 50.0f * (3.0517578125e-05f * (f32)rand()) + 50.0f;
                if (3.0517578125e-05f * (f32)rand() < 0.5f) {
                    self->dir = 0;
                } else {
                    self->dir = 1;
                }
            } else {
                self->state = 0;
                self->timer = 30.0f * (3.0517578125e-05f * (f32)rand()) + 30.0f;
            }
            break;
        case 2:
            if (3.0517578125e-05f * (f32)rand() < 0.4f) {
                self->state = 2;
                self->timer = 50.0f * (3.0517578125e-05f * (f32)rand()) + 50.0f;
                if (3.0517578125e-05f * (f32)rand() < 0.5f) {
                    self->dir = 0;
                } else {
                    self->dir = 1;
                }
            } else {
                self->state = 1;
                self->timer = 2.0f * (30.0f * (3.0517578125e-05f * (f32)rand())) + 30.0f;
            }
            break;
        }
    }
    self->angle = self->angle + (s32)(40.0f * (3.0517578125e-05f * (f32)rand()) + 160.0f);
}
#pragma pop

void *__dt__10TButterflyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TButterfly;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
