#include "types.h"
#include "pso/object/TObjGyaranzoMissile.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_800D4668_lbl_80494400 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800D4668_lbl_8049442C {
    s32 value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_800D4668_lbl_8058D490 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_800D4BD0_lbl_80494468 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile {
    s32 value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_800D4BD0_lbl_8058D490 {
    s32 value;
    u8 remaining[0x2C];
};

typedef struct Parm_800D47B4 {
    s32 a;
    f32 b;
} Parm_800D47B4;

struct Base_800D47B4 {
    char pad[0x18];
};

struct Obj_800D47B4 : Base_800D47B4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(void *, Parm_800D47B4, s32, s32, s32);
};

typedef struct Col_800D47B4 {
    u8 pad0[0xC];
    f32 fC;
    u8 pad10[0x18 - 0x10];
    u32 flags;
} Col_800D47B4;

typedef struct Missile_800D47B4 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0xA4 - 0x44];
    Col_800D47B4 *col;
    u8 padA8[0xD8 - 0xA8];
    u16 ownerIdx;
} Missile_800D47B4;

struct Missile_800D47B4;
struct Vec_800D4990 { f32 x, y, z; };

struct Target_800D4990 {
    u8 pad[0x2FC];
    Vec_800D4990 pos;
};

struct Col_800D4990 { u8 pad[0x18]; u32 flags; };

struct Gyr_800D4990 {
    u8 pad0[0x38];
    Vec_800D4990 pos;
    Vec_800D4990 prev;
    u8 pad50[0x5C - 0x50];
    u8 x5C[4];
    u8 x60[0xA4 - 0x60];
    Col_800D4990 *col;
    u8 padA8[0xAC - 0xA8];
    Vec_800D4990 vel;
    u8 padB8[0xC4 - 0xB8];
    u16 target;
    u16 padC6;
    s32 timer;
    s32 xCC;
    s32 xD0;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 construct_collider_proxy__10TObjPlayerFv(void *, int);
s32 rotate_vector_by_matrix(int, int, int);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_800D4668_lbl_80494400 gyaranzo_missile_collision_body;
extern s32 lbl_8049442C[];
extern RecoveredGlobal_800D4668_lbl_8058D490 identity_matrix;
extern s32 gyaranzo_bml_resource;
extern s32 tl_04;
extern const f32 lbl_805DA2A4;
extern const f32 lbl_805DA2A8;
extern const f32 lbl_805DA2B4;
extern const f32 lbl_805DA2B8;
u8 *TObjGyaranzoMissile__sub_800D4668(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 construct_collider_proxy__10TObjPlayerFv(void *, int);
s32 rand();
s32 matrix_mult_vec(int, int, int);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_800D4BD0_lbl_80494468 gyaranzo_missile_collision_body_b;
extern s32 __vt__19TObjGyaranzoMissile[];
extern RecoveredGlobal_800D4668_lbl_8058D490 identity_matrix;
extern s32 lbl_805D2A80;
extern f32 TObjGyaranzoMissile__speed_scale;
extern s32 tl_04;
extern const f32 lbl_805DA2C4;
extern const f32 lbl_805DA2CC;
extern const f32 lbl_805DA2D0;
extern const f32 lbl_805DA2D4;
extern const f32 lbl_805DA2D8;
extern const f32 lbl_805DA2DC;
extern const f32 lbl_805DA2E0;
u8 *TObjGyaranzoMissile__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3);
void queue_destruction__7TObjectFv(void *);
Obj_800D47B4 *get_battle_param__10TObjPlayerFi(s32);
s32 spawn_particle_effect(void *, int);
s32 get_gyaranzo_missile_int_parameter(int);
s32 remap_area_sound_id(int, int);
void *find_entity_by_id(u16);
void init_all_slots__10TObjPlayerFv(void *);
void check_enemy_body_collisions(void *);
s32 play_sound_effect(void *, void *, int, int);
extern Parm_800D47B4 lbl_8043C464[];
extern const f32 lbl_805DA2C0;
void sub_800D47B4__19TObjGyaranzoMissileFv(Missile_800D47B4 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnVector(void *, void *, int);
void sub_800D47B4__19TObjGyaranzoMissileFv(Missile_800D47B4 *arg0);
Target_800D4990 *find_active_entity_by_id(u16);
int direction_to_rotation_xy(void *, void *, void *);
void check_enemy_body_collisions(void *);
s32 project_actor_to_ground(void *, void *, int);
int vec3_add_to(void *, void *);
f32 vector_length(void *);
int subtract_vector(void *, void *);
extern f32 TObjGyaranzoMissile__speed_scale;
extern const f32 TObjGyaranzoMissile__max_range;
extern s32 gyaranzo_missile_volley_end_time;
extern const f32 lbl_805DA2C8;
}

extern "C" {

void *__dt__19TObjGyaranzoMissileFv(void *arg0, s16 arg1);
f32 sin_table_lookup(int);
s32 post_translate_matrix(void *);
s32 rotate_matrix_x(int, int);
void free_collision_body_parts(void *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
s32 draw_chunk_object();
void unregister_object_by_id(void *);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFs(void *, int);
s32 set_global_param__8TObjFishFl();

extern s32 lbl_8049442C[];

void *TObjGyaranzoMissile::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_8049442C;
        unregister_object_by_id(this);
        free_collision_body_parts(this);
        destroy_particle_controller__10TObjPlayerFs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

extern s32 gyaranzo_bml_resource;
extern s32 model_render_flags;
extern const f32 lbl_805DA2C4;

typedef char RecoveredGlobal_800D4668_lbl_80494400_size[sizeof(RecoveredGlobal_800D4668_lbl_80494400) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_800D4668_lbl_8049442C_size[sizeof(RecoveredGlobal_800D4668_lbl_8049442C) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_800D4668_lbl_8058D490_size[sizeof(RecoveredGlobal_800D4668_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TObjGyaranzoMissile__sub_800D4668(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u8 *temp_r4;
    construct_collider_proxy__10TObjPlayerFv((void *) (arg0), (int) (tl_04));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800D4668_lbl_8049442C *)&lbl_8049442C).value;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xE0), (void *) (arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) (*(f32 *)((s8 *)arg0 + 0xE4) + lbl_805DA2A8);
    *(s32 *)((s8 *)arg0 + 0xDC) = arg4;
    *(s32 *)((s8 *)arg0 + 0xC4) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&gyaranzo_bml_resource) + 0x42C)) + 0x58);
    *(s32 *)((s8 *)arg0 + 0xC8) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&gyaranzo_bml_resource) + 0x42C)) + 0x5C);
    *(s16 *)((s8 *)arg0 + 0x28) = (s16) *(s16 *)((s8 *)arg1 + 0x28);
    *(u16 *)((s8 *)arg0 + 0xD8) = obj_getField1c((void *) (arg1));
    *(s32 *)((s8 *)arg0 + 0xB8) = 0;
    *(s32 *)((s8 *)arg0 + 0xBC) = (s32) (arg3 + 0x8000);
    *(s32 *)((s8 *)arg0 + 0xC0) = -0x4000;
    *(s32 *)((s8 *)arg0 + 0xCC) = 0;
    *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    push_matrix_from((void *) (&identity_matrix.value));
    *(f32 *)((s8 *)arg0 + 0xAC) = (f32) lbl_805DA2A4;
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) lbl_805DA2A4;
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) lbl_805DA2B4;
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0xBC)));
    temp_r4 = (u8 *)(arg0 + 0xAC);
    rotate_vector_by_matrix((int) (0), (int) (temp_r4), (int) (temp_r4));
    pop_matrix();
    *(f32 *)((s8 *)arg0 + 0xD4) = (f32) lbl_805DA2A4;
    init_collision_body_parts((void *) (arg0), (void *) (&gyaranzo_missile_collision_body.value), (int) (1));
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0xC) = (f32) lbl_805DA2B8;
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)((s8 *)arg0 + 0xEC) = 0xF;
    return arg0;
}

void TObjGyaranzoMissile::sub_800D47B4() {
    Missile_800D47B4 *arg0 = (Missile_800D47B4 *)this;
    void *owner;
    s32 i;
    Obj_800D47B4 *q;
    owner = find_entity_by_id(arg0->ownerIdx);
    arg0->col->fC = lbl_805DA2C0;
    init_all_slots__10TObjPlayerFv(owner);
    ((TObjPlayer *)arg0)->check_object_collisions();
    check_enemy_body_collisions(arg0);
    if (arg0->col->flags & 0x180000) {
        for (i = 0; i < 0x10; i++) {
            q = get_battle_param__10TObjPlayerFi(i);
            if (q == NULL) {
                break;
            }
            if (TObjPlayer::is_valid_and_active((u32)q) != 0) {
                Parm_800D47B4 parm = lbl_8043C464[0];
                parm.b = get_gyaranzo_missile_int_parameter(2);
                q->v21(owner, parm, 0, -1, -1);
            }
        }
    }
    spawn_particle_effect(arg0->pos, 0xFB);
    play_sound_effect((void *)remap_area_sound_id(0x4003A80C, 0x19), arg0->pos, 0, 0);
    queue_destruction__7TObjectFv(arg0);
}

void TObjGyaranzoMissile::render() {
    u8 *arg0 = (u8 *)this;
    TObjFish__sub_8001EDB0((void *) (gyaranzo_bml_resource), (int) (6));
    set_global_param__8TObjFishFl();
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_x((int) (0), (int) (*(s32 *)&this->m_5c));
    rotate_matrix_y((int) (0), (int) (this->rotation_y));
    translate_matrix((int) (0), (f32) (lbl_805DA2C4), (f32) (*(f32 *)&this->_padD4 * sin_table_lookup((int) (*(s32 *)&this->m_cc))), (f32) (lbl_805DA2C4));
    model_render_flags &= 0xFFFFFBFF;
    get_bml_model((void *) (gyaranzo_bml_resource), (int) (6));
    draw_chunk_object();
    pop_matrix();
}

extern s32 __vt__19TObjGyaranzoMissile[];

void TObjGyaranzoMissile::run_task() {
    Gyr_800D4990 *self = (Gyr_800D4990 *)this;
    Target_800D4990 *t;
    f32 dist;
    t = find_active_entity_by_id(self->target);
    if (t != NULL) {
        Vec_800D4990 d = t->pos;
        subtract_vector(&d, &self->pos);
        dist = vector_length(&d);
        if (self->timer >= 15 && dist > TObjGyaranzoMissile__max_range) {
            ((TObjGyaranzoMissile *)(&d))->scale_velocity(TObjGyaranzoMissile__max_range);
            vec3_add_to(&self->vel, &d);
            ((TObjGyaranzoMissile *)(&self->vel))->scale_velocity(TObjGyaranzoMissile__speed_scale);
        }
    }
    VecCopy__FP3VecPC3Vec(&self->prev, &self->pos);
    vec3_add_to(&self->pos, &self->vel);
    direction_to_rotation_xy(&self->vel, self->x5C, self->x60);
    self->xCC += self->xD0;
    if (self->timer >= 10) {
        if (csnVector(&self->prev, &self->pos, -1) != 0) {
            sub_800D47B4__19TObjGyaranzoMissileFv((Missile_800D47B4 *)self);
            return;
        }
        Vec_800D4990 p = self->pos;
        if (project_actor_to_ground(self, &p, 0) == 1) {
            if (self->pos.y - p.y < lbl_805DA2C8) {
                self->col->flags |= 2;
                self->col->flags &= ~4;
                ((TObjPlayer *)self)->check_object_collisions();
                check_enemy_body_collisions(self);
                if (self->col->flags & 0x180000) {
                    sub_800D47B4__19TObjGyaranzoMissileFv((Missile_800D47B4 *)self);
                    return;
                }
            } else {
                self->col->flags &= ~2;
                self->col->flags |= 4;
            }
        }
    }
    self->timer++;
    if (self->timer > gyaranzo_missile_volley_end_time) {
        sub_800D47B4__19TObjGyaranzoMissileFv((Missile_800D47B4 *)self);
    }
}

void *__dt__19TObjGyaranzoMissileFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjGyaranzoMissile;
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_800D4BD0_lbl_80494468_size[sizeof(RecoveredGlobal_800D4BD0_lbl_80494468) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile_size[sizeof(RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_800D4BD0_lbl_8058D490_size[sizeof(RecoveredGlobal_800D4BD0_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TObjGyaranzoMissile__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3) {
    u8 *temp_r4;
    construct_collider_proxy__10TObjPlayerFv((void *) (arg0), (int) (tl_04));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile *)&__vt__19TObjGyaranzoMissile).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2A80;
    init_collision_body_parts((void *) (arg0), (void *) (&gyaranzo_missile_collision_body_b.value), (int) (1));
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0xC) = (f32) lbl_805DA2CC;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((int) (*(s32 *)((s8 *)arg2 + 0))));
    *(s16 *)((s8 *)arg0 + 0xC4) = arg3;
    *(s32 *)((s8 *)arg0 + 0x5C) = (s32) *(s32 *)((s8 *)arg2 + 4);
    *(s32 *)((s8 *)arg0 + 0x60) = (s32) *(s32 *)((s8 *)arg2 + 8);
    *(s32 *)((s8 *)arg0 + 0xCC) = (s32) (lbl_805DA2D0 * (lbl_805DA2D4 * (lbl_805DA2D8 * (f32) rand())));
    *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(f32 *)((s8 *)arg2 + 0xC) * (lbl_805DA2DC * ((lbl_805DA2D8 * (f32) rand()) + lbl_805DA2E0)));
    *(f32 *)((s8 *)arg0 + 0xD4) = (f32) *(f32 *)((s8 *)arg2 + 0x10);
    *(s16 *)((s8 *)arg0 + 0x28) = (s16) *(s16 *)((s8 *)arg1 + 0x28);
    *(u16 *)((s8 *)arg0 + 0xD8) = obj_getField1c((void *) (arg1));
    *(f32 *)((s8 *)arg0 + 0xAC) = (f32) lbl_805DA2C4;
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) lbl_805DA2C4;
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) TObjGyaranzoMissile__speed_scale;
    push_matrix_from((void *) (&(*(RecoveredGlobal_800D4BD0_lbl_8058D490 *)&identity_matrix).value));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    rotate_matrix_x((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x5C)));
    temp_r4 = (u8 *)(arg0 + 0xAC);
    matrix_mult_vec((int) (0), (int) (temp_r4), (int) (temp_r4));
    pop_matrix();
    *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    return arg0;
}
#pragma pop

}
