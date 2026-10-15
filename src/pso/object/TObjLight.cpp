#include "types.h"

struct VBase_18_8322b3 { char pad[0x18]; };

struct VObj_18_8322b3 : VBase_18_8322b3 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(void *);
};

struct RecoveredGlobal_80194528___vt__9TObjLight {
    s32 value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_80194528_TObjLight__data_80506320 {
    s32 value;
    u8 remaining[0x4C];
};

typedef struct Vec_80193FE8 { f32 x, y, z; } Vec_80193FE8;

typedef struct Actor_80193FE8 {
    u8 pad0[0x28];
    s16 room;
    u8 pad2A[0x38 - 0x2A];
    Vec_80193FE8 pos;
} Actor_80193FE8;

typedef struct Light_80193FE8 {
    u8 pad0[0x28];
    s16 room;
    u8 pad2A[0x38 - 0x2A];
    Vec_80193FE8 pos;
    u8 pad44[0x68 - 0x44];
    f32 param[3];
    u8 pad74[0x84 - 0x74];
    s32 packed0;
    s32 packed1;
    s32 angle;
    u8 pad90[0x94 - 0x90];
    s32 osc;
    f32 radius;
    s32 phase;
    u32 flags;
    u32 increment;
    f32 strength;
    u8 padAC[4];
    Vec_80193FE8 color;
    f32 base_a;
    Vec_80193FE8 base_color;
    Vec_80193FE8 dir;
    Vec_80193FE8 base_dir;
    Vec_80193FE8 out_dir;
    u8 padF0[4];
    Vec_80193FE8 out_color;
} Light_80193FE8;

extern "C" {
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(s32);
extern s32 tl_05;
u8 *TObjLight__create(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 disallow_rendering__7TObjectFv(void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 construct_world_actor_base(void *);
extern s32 __vt__9TObjLight[];
extern RecoveredGlobal_80194528_TObjLight__data_80506320 TObjLight__scene_light_state;
extern s32 lbl_805D33B8;
u8 *TObjLight__ct(u8 *arg0, s32 arg1, u8 *arg2);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
Actor_80193FE8 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
void queue_destruction__7TObjectFv(void *);
s32 get_instance__6TLobbyFv(void);
s32 get_game_mode__6TLobbyFv(void);
s32 get_enemy_count__9TObjEneDDFv(void);
f32 xyz_distance_squared(void *, void *);
void register_actor_light(s32, void *);
f32 horizontal_distance_squared(void *, void *);
Actor_80193FE8 *get_player_by_client_id(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
f32 sin_table_lookup(s32);
void matrix_mult_vec(void *, void *, void *);
f32 vector_length(void *);
void rotate_matrix_y(void *, s32);
void rotate_matrix_z(void *, s32);
void normalize_vector(void *);
void push_matrix_from(void *);
void pop_matrices(s32);
extern const Vec_80193FE8 lbl_80445D44;
extern RecoveredGlobal_80194528_TObjLight__data_80506320 TObjLight__scene_light_state;
extern u8 identity_matrix[];
extern u8 *camera_ctrl_instance;
void run_task__9TObjLightFv(Light_80193FE8 *self);
}

extern "C" {

void *__dt__9TObjLightFv(void *arg0, s16 arg1);
void render__9TObjLightFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void mask_object_set_row_flags(void *, int);

void render__9TObjLightFv(void) {  }

extern s32 __vt__9TObjLight[];

#pragma push
#pragma fp_contract on
void run_task__9TObjLightFv(Light_80193FE8 *self) {
    s32 hi;
    if (xyz_distance_squared(&self->pos, camera_ctrl_instance + 0x178) > 160000.0f) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    {
    Vec_80193FE8 fwd = lbl_80445D44;
    VecCopy__FP3VecPC3Vec(&self->base_dir, ((u8 *)&TObjLight__scene_light_state) + 0xC);
    self->flags = 0;
    if (self->param[0] >= 10000.0f) {
        self->color.x = self->param[0] - 10000.0f;
        self->flags |= 1;
    } else {
        self->color.x = self->param[0];
    }
    if (self->param[1] >= 10000.0f) {
        self->color.y = self->param[1] - 10000.0f;
        self->flags |= 2;
    } else {
        self->color.y = self->param[1];
    }
    self->color.z = self->param[2];
    hi = self->packed0 >> 16;
    self->radius = 5.0f * (f32)hi;
    self->increment = (u16)self->packed0;
    self->strength = 0.1 * (f64)(self->packed1 >> 16) + 1.0;
    if (self->flags & 1) {
        self->angle += self->increment;
        self->osc = 0;
    } else if (self->flags & 2) {
        self->phase += self->increment;
        self->osc = 70.0f * sin_table_lookup(self->phase);
    }
    push_matrix_from(identity_matrix);
    rotate_matrix_z(NULL, self->angle + (s32)(182.04445f * (f32)self->osc));
    rotate_matrix_y(NULL, self->packed1);
    matrix_mult_vec(NULL, &fwd, &self->dir);
    pop_matrices(1);
    }
    if (0.0f != vector_length(&self->dir)) {
        normalize_vector(&self->dir);
        if ((u8)(get_instance__6TLobbyFv() == 0) == 1) {
            self->dir.z = -1.0f * self->dir.z;
        } else if (get_global_state__14TOKeyMachine01Fv() == 0 || get_global_state__14TOKeyMachine01Fv() == 0xF ||
                   get_global_state__14TOKeyMachine01Fv() == 0x12) {
            self->dir.z = -1.0f * self->dir.z;
        }
    }
    if (0.0f != self->radius) {
        s32 i;
        for (i = get_game_mode__6TLobbyFv(); i < get_game_mode__6TLobbyFv() + get_enemy_count__9TObjEneDDFv(); i++) {
            Actor_80193FE8 *a = get_player_data__10TObjPlayerFi(i);
            if (a != NULL && self->room == a->room) {
                f32 d = horizontal_distance_squared(&a->pos, &self->pos);
                f32 r2 = self->radius * self->radius;
                if (r2 >= d) {
                    f32 t;
                    d = (1.0f) - d / r2;
                    t = d * self->strength;
                    if (t > (1.0f)) {
                        t = (1.0f);
                    }
                    self->out_color.x = t * (self->color.x - self->base_color.x) + self->base_color.x;
                    self->out_color.y = t * (self->color.y - self->base_color.y) + self->base_color.y;
                    self->out_color.z = t * (self->color.z - self->base_color.z) + self->base_color.z;
                    self->out_dir.x = t * (self->dir.x - self->base_dir.x) + self->base_dir.x;
                    self->out_dir.y = t * (self->dir.y - self->base_dir.y) + self->base_dir.y;
                    self->out_dir.z = t * (self->dir.z - self->base_dir.z) + self->base_dir.z;
                    register_actor_light(obj_getField1c(a), self);
                }
            }
        }
        for (i = 0; i < 4; i++) {
            Actor_80193FE8 *a = get_player_by_client_id(i);
            if (a != NULL) {
                f32 d = horizontal_distance_squared(&a->pos, &self->pos);
                f32 r2 = self->radius * self->radius;
                if (r2 >= d) {
                    f32 t;
                    d = (1.0f) - d / r2;
                    t = d * self->strength;
                    if (t > (1.0f)) {
                        t = (1.0f);
                    }
                    self->out_color.x = t * (self->color.x - self->base_color.x) + self->base_color.x;
                    self->out_color.y = t * (self->color.y - self->base_color.y) + self->base_color.y;
                    self->out_color.z = t * (self->color.z - self->base_color.z) + self->base_color.z;
                    self->out_dir.x = t * (self->dir.x - self->base_dir.x) + self->base_dir.x;
                    self->out_dir.y = t * (self->dir.y - self->base_dir.y) + self->base_dir.y;
                    self->out_dir.z = t * (self->dir.z - self->base_dir.z) + self->base_dir.z;
                    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
                        register_actor_light(obj_getField1c(a), self);
                    }
                }
            }
        }
    }
}
#pragma pop

void *__dt__9TObjLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TObjLight;
        mask_object_set_row_flags(arg0, -3);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80194528___vt__9TObjLight_size[sizeof(RecoveredGlobal_80194528___vt__9TObjLight) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_80194528_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_80194528_TObjLight__data_80506320) == 0x50 ? 1 : -1];
u8 *TObjLight__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    construct_world_actor_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80194528___vt__9TObjLight *)&__vt__9TObjLight).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D33B8;
    ((VObj_18_8322b3 *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x90) = (s32) *(s16 *)((s8 *)arg2 + 8);
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) 0.5f;
    *(f32 *)((s8 *)arg0 + 0xF4) = (f32) *(f32 *)((s8 *)arg0 + 0x68);
    *(f32 *)((s8 *)arg0 + 0xF8) = (f32) *(f32 *)((s8 *)arg0 + 0x6C);
    *(f32 *)((s8 *)arg0 + 0xFC) = (f32) *(f32 *)((s8 *)arg0 + 0x70);
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0xE8) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0xEC) = (f32) (0.0f);
    *(s32 *)((s8 *)arg0 + 0x9C) = 0;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xBC), (void *) ((u8 *)&TObjLight__scene_light_state.value + 0x24));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xD8), (void *) ((u8 *)&TObjLight__scene_light_state.value + 0xC));
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) 0.5f;
    *(f32 *)((s8 *)arg0 + 0xF4) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0xF8) = (f32) (0.0f);
    *(f32 *)((s8 *)arg0 + 0xFC) = (f32) (0.0f);
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

u8 *TObjLight__create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x100));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TObjLight__ct((u8 *)(temp_r3), (s32)(tl_05), (u8 *)(arg0)));
    }
    return var_r0;
}

}
