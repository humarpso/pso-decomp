#include "types.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TUnk_80484AFC.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TNowLoading.h"
#include "pso/object/TObjGyaranzoMissile.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80049E9C_lbl_80484AD0 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80049E9C_lbl_80484AFC {
    s32 value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80049E9C_lbl_8058D490 {
    s32 value;
    u8 remaining[0x2C];
};

struct Vec_80049C10 { f32 x, y, z; };

struct Flags_80049C10 { u8 pad[0x18]; u32 f18; };

struct Tgt_80049C10 { u8 pad[0x2FC]; Vec_80049C10 pos; };

struct Self_80049C10 {
    u8 pad0[0x38];
    Vec_80049C10 pos;
    Vec_80049C10 prev;
    u8 pad50[0x5c - 0x50];
    s32 f5c;
    s32 f60;
    u8 pad64[0xa4 - 0x64];
    Flags_80049C10 *fa4;
    u8 pada8[0xb4 - 0xa8];
    Vec_80049C10 vel;
    u8 padc0[0xcc - 0xc0];
    s32 fcc;
    s32 fd0;
    u8 padd4[0xe0 - 0xd4];
    void *fe0;
    u8 fe4[4];
    s32 fe8;
    s32 fec;
};

extern "C" {
f32 TBoss3Volopt__sub_8004812C(s32 arg0);
void *spawn_particle_effect_with_rotation(void *pos, void *dir, s32 id, int e);
s32 init_collision_body_parts(void *, void *, int);
s32 construct_collider_proxy__13TUnk_804AF8A0Fv(void *, void *);
s32 matrix_mult_vec(int, int, int);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_80049E9C_lbl_80484AD0 volopt_collision_body_desc;
extern s32 lbl_80484AFC[];
extern RecoveredGlobal_80049E9C_lbl_8058D490 identity_matrix;
extern u8 *boss3_volopt_resources;
extern s32 volopt_homing_projectile_expire_tick;
extern const f32 lbl_805D88AC;
extern const f32 lbl_805D88B0;
u8 *TBoss3Volopt__sub_80049E9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void explode_and_destroy__12TBoss3VoloptFPv(u8 *arg0);
u32 csnVector(void *, void *, s32);
void direction_to_rotation_yx(u8 *arg0, s32 *arg1, s32 *arg2);
void direction_to_rotation_xy(u8 *arg0, s32 *arg1, s32 *arg2);
void check_enemy_body_collisions(void *);
void *get_player_by_client_id(s32 i);
s32 play_persistent_sound(s32 id, s32 a1, u32 src, s32 a3, s32 flags);
void vec3_add_to(void *, void *);
void subtract_vector(void *, void *);
extern const f32 lbl_805D88A4;
extern const f32 lbl_805D88A8;
void *__dt__13TUnk_80484AFCFv(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
void queue_destruction__7TObjectFv(void *arg0);

void TUnk_80484AFC::run_task() {
    Self_80049C10 *self = (Self_80049C10 *)this;
    Tgt_80049C10 *t;
    t = (Tgt_80049C10 *)get_player_by_client_id(self->fcc);
    if (t != NULL) {
        Vec_80049C10 d = t->pos;
        subtract_vector(&d, &self->pos);
        ((TObjGyaranzoMissile *)(&d))->scale_velocity(TBoss3Volopt__sub_8004812C(1));
        vec3_add_to(&self->vel, &d);
        ((TObjGyaranzoMissile *)(&self->vel))->scale_velocity(TBoss3Volopt__sub_8004812C(0));
    }
    VecCopy((Vec *)&self->prev, (const Vec *)&self->pos);
    vec3_add_to(&self->pos, &self->vel);
    direction_to_rotation_xy((u8 *)&self->vel, &self->f5c, &self->f60);
    if (self->fe0 != NULL) {
        Vec_80049C10 n = self->vel;
        n.x = -n.x;
        n.y = -n.y;
        n.z = -n.z;
        direction_to_rotation_yx((u8 *)&n, &self->fe8, &self->fec);
        self->fec -= 0x4000;
        ((TBoss4Type2 *)(self->fe0))->copy_vec3(self->fe4);
        ((TObjGyaranzoMissile *)(&n))->scale_velocity(lbl_805D88A4);
        vec3_add_to(&n, &self->pos);
        ((TNowLoading *)(self->fe0))->copy_pos(&n);
    }
    if (csnVector(&self->prev, &self->pos, -1) != 0) {
        explode_and_destroy__12TBoss3VoloptFPv((u8 *)self);
        return;
    }
    self->fa4->f18 &= ~6;
    if (self->pos.y < lbl_805D88A8) {
        self->fa4->f18 |= 2;
    } else {
        self->fa4->f18 |= 4;
    }
    ((TObjPlayer *)self)->check_object_collisions();
    check_enemy_body_collisions(self);
    if (self->fa4->f18 & 0x180000) {
        explode_and_destroy__12TBoss3VoloptFPv((u8 *)self);
        return;
    }
    self->fd0++;
    if (self->fd0 > volopt_homing_projectile_expire_tick) {
        explode_and_destroy__12TBoss3VoloptFPv((u8 *)self);
        return;
    }
    play_persistent_sound(0x4003C114, (s32)self, (u32)&self->pos, 0, 0);
}

void *__dt__13TUnk_80484AFCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80484AFC;
        free_collision_body_parts(arg0);
        if ((u32) *(u32 *)&((TUnk_80484AFC *)arg0)->m_e0 != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xE0));
        }
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80049E9C_lbl_80484AD0_size[sizeof(RecoveredGlobal_80049E9C_lbl_80484AD0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80049E9C_lbl_80484AFC_size[sizeof(RecoveredGlobal_80049E9C_lbl_80484AFC) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_80049E9C_lbl_8058D490_size[sizeof(RecoveredGlobal_80049E9C_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TBoss3Volopt__sub_80049E9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *temp_r4;
    construct_collider_proxy__13TUnk_804AF8A0Fv((void *)arg0, (void *)arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80049E9C_lbl_80484AFC *)&lbl_80484AFC).value;
    init_collision_body_parts(arg0, &volopt_collision_body_desc.value, 1);
    *(f32 *)((s8 *)(((TUnk_80484AFC *)arg0)->m_a4) + 0xC) = (f32) lbl_805D88AC;
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)(arg2));
    ((TUnk_80484AFC *)arg0)->m_cc = arg4;
    *(s32 *)((s8 *)arg0 + 0x5C) = 0;
    ((TUnk_80484AFC *)arg0)->rotation_y = arg3;
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) lbl_805D88B0;
    ((TUnk_80484AFC *)arg0)->m_b8 = (f32) lbl_805D88B0;
    *(f32 *)((s8 *)arg0 + 0xBC) = TBoss3Volopt__sub_8004812C(0);
    push_matrix_from(&identity_matrix.value);
    rotate_matrix_y(0, (int) (((TUnk_80484AFC *)arg0)->rotation_y));
    rotate_matrix_x(0, (int) (*(s32 *)((s8 *)arg0 + 0x5C)));
    temp_r4 = (arg0 + 0xB4);
    matrix_mult_vec(0, (int)temp_r4, (int)temp_r4);
    pop_matrix();
    *(s32 *)((s8 *)arg0 + 0xAC) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)boss3_volopt_resources + 0x42C)) + 0x168);
    ((TUnk_80484AFC *)arg0)->m_b0 = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)boss3_volopt_resources + 0x42C)) + 0x16C);
    *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    *(s32 *)((s8 *)arg0 + 0xEC) = 0;
    ((TUnk_80484AFC *)arg0)->m_e8 = 0;
    *(s32 *)((s8 *)arg0 + 0xE4) = 0;
    ((TUnk_80484AFC *)arg0)->m_e0 = (s32)spawn_particle_effect_with_rotation((arg0 + 0x38), (arg0 + 0xE4), 0x112, 2);
    volopt_homing_projectile_expire_tick = (s32) TBoss3Volopt__sub_8004812C(3) + 0xF0;
    return arg0;
}

}
