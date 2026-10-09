#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_Sub_800da0b8 { char pad[0x14]; };
struct V_Sub_800da0b8 : Base_Sub_800da0b8 {
    PADV4
    PADV
    virtual s32 m5();
};

struct V3_800DA1F4 { f32 x; f32 y; f32 z; };
struct Obj_800DA1F4 { u8 pad0[0x30]; u32 flags; u8 pad34[4]; V3_800DA1F4 pos; V3_800DA1F4 pos2; u8 pad50[0x60 - 0x50]; s32 h; u8 pad64[0x378 - 0x64]; s32 f378; };

struct Obj_800DA1F4;
struct Base_800DA2A0 {
    char pad[0x18];
};

struct Ene_800DA2A0 : Base_800DA2A0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual s32 v17(s32);
    u8 pad1C[0x326 - 0x1C];
    s16 state;
    u8 pad328[0x350 - 0x328];
    f32 *param;
    u8 pad354[0x378 - 0x354];
    s32 f378;
    u8 pad37C[0x388 - 0x37C];
    u32 f388;
};

extern "C" {
u16 find_nearest_visible_player(void *, s32, f32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK, s32);
s32 select_nearest_target__10TObjPlayerFPvf(void *, f32);
void TObjPlayer__sub_800DA1F4(Obj_800DA1F4 *arg0);
extern const f32 lbl_805DA408;
void TObjPlayer__sub_800DA2A0(Ene_800DA2A0 *arg0);
}

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void vec3_add_to(void *, void *);
void rotate_vector_by_matrix(int, void *, void *);
void rotate_matrix_y(int, int);
void push_matrix_from(void *, f32);
void pop_matrix();
extern u8 lbl_8058D490[];
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA404;
void refresh_collision_body_centers(void *);

void update_death_state__10TObjPlayerFPv(u8 *arg0);
void trigger_hit_camera_shake__10TObjPlayerFPvUi(void *arg0, u32 arg1);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
u32 get_player_by_client_id(M2C_UNK);
M2C_UNK play_area_sound_effect__12TBoss3VoloptFi(void *, s32);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

void update_death_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        play_area_sound_effect__12TBoss3VoloptFi(arg0 + 0x2FC, temp_r4);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3E8);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (((V_Sub_800da0b8 *) (arg0 + 0x3E8))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0, temp_r5);
        break;
    }
}

void trigger_hit_camera_shake__10TObjPlayerFPvUi(void *arg0, u32 arg1) {
    if ((arg1 == get_player_by_client_id(0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x3DC) <= 0)) {
        M2C_FIELD(arg0, s32 *, 0x3DC) = 0x1E;
        set_shake_preset__11TCameraCtrlFi(1);
    }
}

void TObjPlayer__sub_800DA1F4(Obj_800DA1F4 *arg0) {
    V3_800DA1F4 v;
    v.y = lbl_805DA3F8;
    v.x = lbl_805DA3F8;
    v.z = lbl_805DA404;
    push_matrix_from(lbl_8058D490, lbl_805DA3F8);
    rotate_matrix_y(0, arg0->h);
    rotate_vector_by_matrix(0, &v, &v);
    pop_matrix();
    vec3_add_to(&arg0->pos, &v);
    VecCopy__FP3VecPC3Vec(&arg0->pos2, &arg0->pos);
    arg0->flags |= 0x01000000;
    ((void (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0xB);
    arg0->f378 = 1;
    refresh_collision_body_centers(arg0);
}
void TObjPlayer__sub_800DA2A0(Ene_800DA2A0 *arg0) {
    switch (arg0->state) {
    case 0:
        if (arg0->v17(0x1E) != 0) {
            if (find_nearest_visible_player(arg0, 0, *arg0->param) != 0xFFFF) {
                select_nearest_target__10TObjPlayerFPvf(arg0, *arg0->param);
                if (arg0->f388 & 0x40000) {
                    TObjPlayer__sub_800DA1F4((Obj_800DA1F4 *)((struct Obj_800DA1F4 *)arg0));
                } else {
                    ((void (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 1);
                }
            }
        }
        break;
    case 11:
        break;
    case 1:
        if (find_nearest_visible_player(arg0, 0, lbl_805DA408) != 0xFFFF) {
            ((void (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0xB);
            arg0->f378 = 1;
        } else if (find_nearest_visible_player(arg0, 0, lbl_805DA408 + *arg0->param) == 0xFFFF) {
            ((void (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0);
        }
        break;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_800DA4B4 { s32 a; s32 b; s32 c; };

struct Obj_800DA4B4 { u8 pad[0x60]; s32 f60; u8 pad2[0x39c - 0x64]; Rec_800DA4B4 recs[1]; };

struct Vec_800DA4B4 { s32 x; s32 y; s32 z; };

struct S_800DA414 { s32 a; s32 b; s32 c; };

struct Obj_800DA414 { u8 pad0[0x1C]; u16 f1c; u8 pad1e[0x60 - 0x1E]; s32 h; u8 pad64[0x39C - 0x64]; u8 sub[2][0xC]; u8 pad3b4[4]; u16 ids[2]; };

typedef struct Vec_800DA508 {
    f32 x, y, z;
} Vec_800DA508;

typedef struct Param_800DA508 {
    u8 pad0[8];
    s32 turn;
} Param_800DA508;

typedef struct Ene_800DA508 {
    u8 pad0[0x38];
    Vec_800DA508 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x29C - 0x64];
    Vec_800DA508 v29C;
    u8 pad2A8[0x350 - 0x2A8];
    Param_800DA508 *param;
    u8 pad354[0x390 - 0x354];
    Vec_800DA508 dest;
    u8 pad39C[0x3D8 - 0x39C];
    f32 speed;
} Ene_800DA508;

struct Vec_800DA7E4 { f32 x, y, z; };

typedef s32 M2C_UNK;
typedef struct Home_800DB0F8 {
    u8 pad0[8];
    s32 f8;
} Home_800DB0F8;

typedef struct Obj_800DB0F8 {
    u8 pad0[0x30];
    s32 flags30;
    u8 pad34[0x38 - 0x34];
    u8 pos[0xC];
    u8 pad44[0xB8 - 0x44];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 frame;
    u8 padC4[0x350 - 0xC4];
    Home_800DB0F8 *home;
    u8 pad354[0x37C - 0x354];
    s32 state;
    u8 pad380[0x384 - 0x380];
    s32 timer;
    s32 f388;
    u8 pad38C[0x39C - 0x38C];
    u8 fx39C[0xC];
    u8 fx3A8[0xC];
    s32 count;
    u8 pad3B8[0x3D8 - 0x3B8];
    f32 f3D8;
} Obj_800DB0F8;

struct Vec_800DAB98 { f32 x, y, z; };

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void enter_state_5__10TObjPlayerFPv(u8 *arg0);
void *spawn_directional_particle(void *pos, void *dir, s32 id);
void spawn_directional_particle_at_slot__10TObjPlayerFPvi(Obj_800DA4B4 *self, s32 i);
void TObjPlayer__sub_800DCD04(void *, void *, int, void *, s32, int);
u32 find_entity_by_id(int);
u32 __nw__7TObjectFUl(u32);
void TObjPlayer__sub_800DA414(Obj_800DA414 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void move_with_wall_slide(void *);
void enemy_set_heading_velocity(void *, f32, s32);
void enemy_turn_toward_dest(void *, s32);
f32 xz_distance_squared(void *, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 lbl_805DA40C;
extern const f32 lbl_805DA410;
extern const f32 lbl_805DA414;
extern const f32 lbl_805DA418;
extern const f32 lbl_805DA41C;
void update_circle_move__10TObjPlayerFPvPvf(Ene_800DA508 *arg0, Vec_800DA508 *center, f32 radius);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK enemy_turn_half_toward_dest(void *);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK render_model_transformed__10TObjPlayerFPv(void *);
void spawn_directional_particle_at_slot__10TObjPlayerFPvi(Obj_800DA4B4 *self, s32 i);
M2C_UNK construct_beam_effect__10TObjPlayerFPvPvPviPv(u32, void *, void *, u8, void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
u32 __nw__7TObjectFUl(u32);
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA3FC;
extern const f32 lbl_805DA45C;
void TObjPlayer__sub_800DB390(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
void move_with_wall_slide(void *);
s32 check_path_obstructed(void *, Vec_800DA7E4 *);
M2C_UNK spawn_particle_effect(void *, int);
f32 xz_distance_squared(void *, void *);
M2C_UNK advance_animation_playback(void *);
u32 find_entity_by_id(int);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA40C;
extern const f32 lbl_805DA430;
void TObjPlayer__sub_800DA7E4(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK enemy_wander_home(void *, int, f32, f32, f32);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK render_model_transformed__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_800D9F4C(void *);
void TObjPlayer__sub_800DA414(Obj_800DA414 *arg0, s32 arg1);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA3FC;
extern const f32 lbl_805DA408;
extern const f32 lbl_805DA45C;
extern const f32 lbl_805DA460;
extern const f32 lbl_805DA464;
void TObjPlayer__sub_800DB0F8(Obj_800DB0F8 *o);
M2C_UNK apply_actor_gravity(void *, int, f32);
void calc_velocity_toward_destination(void *, Vec_800DAB98, Vec_800DAB98, f32);
void update_angle__10TObjPlayerFPviPv(void *, s32, void *);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK spawn_particle_effect(void *, int);
void find_target_in_range__10TObjPlayerFPvf(void *, f32);
void find_open_direction__10TObjPlayerFPvPv(void *, void *);
f32 TObjPlayer__sub_800DC434(void *, s32);
s32 TObjPlayer__sub_800DC478(void *, s32, f32);
f32 xz_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
void refresh_collision_body_centers(void *);
void check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
void project_actor_to_ground(void *, void *, s32);
M2C_UNK play_sound_effect(int, void *, int, int);
void vec3_add_to(void *, void *);
void subtract_vector(void *, void *);
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA408;
extern const f32 lbl_805DA41C;
extern const f32 lbl_805DA43C;
extern const f32 lbl_805DA440;
extern const f32 lbl_805DA444;
extern const f32 lbl_805DA448;
extern const f32 lbl_805DA450;
extern const f32 lbl_805DA454;
extern const f32 lbl_805DA458;
void TObjPlayer__sub_800DAB98(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK queue_destruction__7TObjectFv();
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK spawn_ground_effect__10TObjPlayerFPvi(void *, int);
M2C_UNK TObjPlayer__sub_800D92BC(void *, int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv();
M2C_UNK advance_animation_playback(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA420;
extern const f32 lbl_805DA424;
extern const f32 lbl_805DA428;
extern const f32 lbl_805DA42C;
void update_death_sequence__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void set_flag_20000__10TObjPlayerFPv(void *arg0);

void set_flag_20000__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000)) {
        ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0xC);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x20000 | 1);
    }
}

void TObjPlayer__sub_800DA414(Obj_800DA414 *arg0, s32 arg1) {
    S_800DA414 s;
    s32 t;
    s32 off;
    void *o;
    if (find_entity_by_id(arg0->ids[arg1]) != 0) {
        t = arg1 & 1;
        s.a = 0;
        off = 0x2000;
        if (t != 0) {
            off = -0x2000;
        }
        s.b = arg0->h + off;
        s.c = 0;
        o = (void *)__nw__7TObjectFUl(0x104);
        if (o != 0) {
            TObjPlayer__sub_800DCD04(o, arg0->sub[t], arg0->ids[arg1], &s, arg1 * 3, arg0->f1c);
        }
    }
}

void spawn_directional_particle_at_slot__10TObjPlayerFPvi(Obj_800DA4B4 *self, s32 i) {
    Vec_800DA4B4 v;
    v.x = self->f60 + 0x4000;
    v.y = 0;
    v.z = 0x4000;
    spawn_directional_particle(&self->recs[i], &v, 0xfd);
}

#pragma push
#pragma fp_contract on
void update_circle_move__10TObjPlayerFPvPvf(Ene_800DA508 *arg0, Vec_800DA508 *center, f32 radius) {
    s32 ang;
    f32 r;
    if (xz_distance_squared(&arg0->pos, &arg0->dest) < lbl_805DA40C) {
        ang = (s32)(lbl_805DA410 * (lbl_805DA414 * calc_boss4_scale__10TObjPlayerFi(arg0)));
        r = lbl_805DA418 * (radius * (lbl_805DA41C + calc_boss4_scale__10TObjPlayerFi(arg0)));
        arg0->dest.x = r * cos_table_lookup(ang) + center->x;
        arg0->dest.z = r * sin_table_lookup(ang) + center->z;
    }
    ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&arg0->v29C, &arg0->dest);
    enemy_turn_toward_dest(arg0, arg0->param->turn);
    enemy_set_heading_velocity(arg0, arg0->speed, arg0->angle);
    move_with_wall_slide(arg0);
}
#pragma pop

struct Obj_800DA4B4;

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline f32 fmax_800DA5FC(f32 a, f32 b) {
    if (a > b) {
        return a;
    }
    return b;
}
void update_death_sequence__10TObjPlayerFPv(u8 *arg0) {
    f32 var_f1;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        refresh_lobby_state__10TObjPlayerFPv();
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
        play_sound_effect((int) (0x4003A825), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            M2C_FIELD(arg0, f32 *, 0x408) = (f32) (lbl_805DA420 * -M2C_FIELD(arg0, f32 *, 0x404));
            M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        ((M2C_UNK (*)())advance_animation_playback)();
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805DA3F8));
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805DA424) {
            spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            return;
        }
        break;
    case 2:
        ((M2C_UNK (*)())advance_animation_playback)();
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805DA3F8));
        {
        f32 lim = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x404) = fmax_800DA5FC(M2C_FIELD(arg0, f32 *, 0x404) + M2C_FIELD(arg0, f32 *, 0x408), lim);
        }
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805DA424) {
            spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
            play_sound_effect((int) (0x40039E22), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            return;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (M2C_FIELD(arg0, s16 *, 0x33C) - 1);
        if (M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            spawn_ground_effect__10TObjPlayerFPvi((void *) (arg0 + 0x38), (int) (0x1E));
            TObjPlayer__sub_800D92BC((void *) (arg0 + 0x38), (int) (0xF));
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
            return;
        }
        break;
    case 4:
        M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E4) - lbl_805DA428);
        if (M2C_FIELD(arg0, f32 *, 0x3E4) < lbl_805DA42C) {
            queue_destruction__7TObjectFv();
        }
        break;
    }
}
#pragma pop

void TObjPlayer__sub_800DA7E4(u8 *arg0) {
    f32 sp10;
    s32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_r5;
    s16 temp_r4;
    s16 var_r3;
    s32 temp_r0;
    u32 temp_r3;
    s32 var_r30;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        var_r3 = 3;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            var_r3 = 0xA;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = var_r3;
        spawn_particle_effect((void *)(arg0 + 0x2FC), (int)(0xF2));
        play_sound_effect((int)(0x40039E22), (void *)(arg0 + 0x38), (int)(0), (int)(0));
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000)) {
            Vec_800DA7E4 v = M2C_FIELD(arg0, Vec_800DA7E4 *, 0x2FC);
            v.x += M2C_FIELD(arg0, f32 *, 0x308);
            v.z += M2C_FIELD(arg0, f32 *, 0x310);
            if (check_path_obstructed(arg0, &v) == 0) {
                move_with_wall_slide(arg0);
            } else {
                M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x310) = lbl_805DA3F8;
            }
            M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805DA430);
            M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805DA430);
        }
        apply_actor_gravity((void *)(arg0), (int)(0), lbl_805DA3F8);
        update_collisions__10TObjPlayerFPv(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        break;
    case -1:
        var_r30 = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x378) = 1;
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x33E);
        if (((s32) (temp_r4 - M2C_FIELD(arg0, s16 *, 0x32C)) > (s32) (temp_r4 / 4)) && !(M2C_FIELD(arg0, s32 *, 0x30) & 2)) {
            temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x2D4));
            if (temp_r3 != 0) {
                var_r30 = 1;
                if ((M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) && (xz_distance_squared(arg0 + 0x38, (u8 *)temp_r3 + 0x38) > lbl_805DA40C)) {
                    var_r30 = 0;
                }
            }
        }
        if (var_r30 == 1) {
            M2C_FIELD(arg0, u16 *, 0x338) = (u16) M2C_FIELD(arg0, u16 *, 0x2D4);
            M2C_FIELD(arg0, s32 *, 0x374) = 0xA;
        } else if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0xB);
            M2C_FIELD(arg0, s32 *, 0x378) = (s32) M2C_FIELD(arg0, s32 *, 0x380);
        } else {
            ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0);
        }
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        break;
    }
}

struct Obj_800DA414;

#define F(t, o) M2C_FIELD(arg0, t *, o)
#define POS (*(Vec_800DAB98 *)(arg0 + 0x38))
#define DEST (*(Vec_800DAB98 *)(arg0 + 0x390))
void TObjPlayer__sub_800DAB98(u8 *arg0) {
    Vec_800DAB98 v;
    F(s32, 0x30) &= ~0x800000;
    switch (F(s32, 0x37C)) {
    case 0:
        F(s32, 0x37C) = 1;
        if (F(s32, 0x30) & 0x01000000) {
            if (F(s32, 0x388) & 0x40000) {
                ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x390, arg0 + 0x50);
                calc_velocity_toward_destination(arg0, POS, DEST, F(f32, 0x3D8));
                F(s32, 0x388) &= ~0x40000;
                ((M2C_UNK (*)(void *))TBoss3VoloptMonitor__sub_8004292C)(arg0);
                F(f32, 0x404) = lbl_805DA408;
            } else {
                find_target_in_range__10TObjPlayerFPvf(arg0, *F(f32 *, 0x350));
                calc_velocity_toward_destination(arg0, POS, DEST, F(f32, 0x3D8));
            }
            F(s16, 0xB8) = 7;
        } else {
            F(s32, 0x30) |= 0x01000000;
            F(s16, 0xB8) = 6;
            F(f32, 0x404) = lbl_805DA3F8;
            find_target_in_range__10TObjPlayerFPvf(arg0, *F(f32 *, 0x350));
            if (F(u32, 0x2A8) != 0) {
                ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&v, arg0 + 0x38);
                subtract_vector(&v, F(u8 *, 0x2A8) + 0x38);
                find_open_direction__10TObjPlayerFPvPv(arg0, &v);
                calc_velocity_toward_destination(arg0, POS, DEST, F(f32, 0x3D8));
            } else {
                ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x390, arg0 + 0x50);
                calc_velocity_toward_destination(arg0, POS, DEST, F(f32, 0x3D8));
            }
        }
        break;
    case 1:
        advance_animation_playback(arg0);
        calc_velocity_toward_destination(arg0, POS, DEST, TObjPlayer__sub_800DC434(arg0, 0));
        if (F(f32, 0x404) < lbl_805DA408) {
            s32 ok = 1;
            if (F(s16, 0xB8) == 6 && F(f32, 0xC0) < lbl_805DA43C) {
                ok = 0;
            }
            if (ok != 0) {
                F(f32, 0x404) += lbl_805DA440;
            }
            update_collisions__10TObjPlayerFPv(arg0);
            if (TObjPlayer__sub_800DC478(arg0, 6, lbl_805DA43C) != 0) {
                spawn_particle_effect(arg0 + 0x38, 0xF0);
                play_sound_effect(0x4003AD20, arg0 + 0x38, 0, 0);
            }
        } else {
            F(f32, 0x30C) = lbl_805DA3F8;
            ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x44, arg0 + 0x38);
            vec3_add_to(arg0 + 0x38, arg0 + 0x308);
            if (xz_distance_squared(arg0 + 0x38, arg0 + 0x390) <= (lbl_805DA444 + F(f32, 0x3D8)) * (lbl_805DA444 + F(f32, 0x3D8))) {
                F(s32, 0x37C) = 2;
                F(f32, 0x310) = lbl_805DA3F8;
                F(f32, 0x308) = lbl_805DA3F8;
            }
            if (objInBand__FP7GameObjf(arg0, lbl_805DA444) != 0) {
                spawn_particle_effect(arg0 + 0x38, 0xF0);
                play_sound_effect(0x4003AD20, arg0 + 0x38, 0, 0);
            }
            refresh_collision_body_centers(arg0);
        }
        if (F(f32, 0x404) > lbl_805DA448) {
            update_angle__10TObjPlayerFPviPv(arg0, *(s32 *)(F(u8 *, 0x350) + 8) * 2, arg0 + 0x308);
        }
        project_actor_to_ground(arg0, arg0 + 0x38, 0);
        break;
    case 2:
        *(s32 *)(F(u8 *, 0xA4) + 0x44) |= 1;
        advance_animation_playback(arg0);
        F(f32, 0x404) += -2.3f;
        if (F(f32, 0x404) <= 0.0f) {
            F(f32, 0x404) = 0.0f;
            F(s32, 0x30) |= 0x800000;
            F(s32, 0x30) &= ~0x01000000;
            F(f32, 0x30C) = 0.0f;
            if (F(s16, 0xB8) != 8) {
                ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0);
            }
        } else if (F(s16, 0xB8) == 7) {
            if (F(f32, 0x404) <= lbl_805DA450 * (lbl_805DA454 + lbl_805DA41C / F(f32, 0xCC))) {
                F(s16, 0xB8) = 8;
            }
        } else {
            s32 t = (s32)F(f32, 0xC0);
            if (t == 20 || t == 40) {
                spawn_particle_effect(arg0 + 0x38, 0xF0);
            }
        }
        if (TObjPlayer__sub_800DC478(arg0, 8, lbl_805DA458) != 0) {
            play_sound_effect(0x4003AD23, arg0 + 0x38, 0, 0);
        }
        check_object_collisions__10TObjPlayerFPv(arg0);
        apply_actor_gravity(arg0, 0, lbl_805DA3F8);
        break;
    case -1:
        if (F(s32, 0x374) != 4 && F(s32, 0x374) != 5) {
            F(f32, 0x404) = lbl_805DA3F8;
        }
        *(s32 *)(F(u8 *, 0xA4) + 0x44) &= ~1;
        F(s32, 0x388) &= ~0x40000;
        break;
    }
}

void TObjPlayer__sub_800DB0F8(Obj_800DB0F8 *o) {
    s32 r;
    s32 i;
    switch (o->state) {
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        r = 0;
        if (!(o->flags30 & 0x01000000)) {
            r = TObjPlayer__sub_800D9F4C(o);
        }
        if (r > 0) {
            o->fB8 = 2;
            o->timer = 0x5A;
            o->state = 1;
        } else if (o->flags30 & 0x01000000) {
            ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(o, 0xB);
        } else {
            ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(o, 0);
        }
        o->f388 &= ~0x40000;
        break;
    case 1:
    case 2:
    case 3:
        switch (o->state) {
        case 1:
            if (o->frame >= lbl_805DA45C) {
                render_model_transformed__10TObjPlayerFPv(o);
                spawn_particle_effect(o->fx39C, 0xF7);
                spawn_particle_effect(o->fx3A8, 0xF7);
                o->state = 2;
            }
            break;
        case 2:
            play_persistent_sound(0x4003AD1E, o, o->pos, 0, 0);
            if (o->frame >= lbl_805DA3FC) {
                render_model_transformed__10TObjPlayerFPv(o);
                for (i = 0; i < o->count; i++) {
                    TObjPlayer__sub_800DA414((Obj_800DA414 *)o, i);
                }
                o->state = 3;
            }
            break;
        }
        advance_animation_playback(o);
        apply_actor_gravity(o, 0, lbl_805DA3F8);
        update_collisions__10TObjPlayerFPv(o);
        o->timer--;
        if (o->timer <= 0) {
            o->timer = 0x2D;
            o->fB8 = 1;
            o->state = 4;
        }
        break;
    case 4:
        enemy_wander_home(o, o->home->f8, o->f3D8, lbl_805DA460, lbl_805DA460);
        advance_animation_playback(o);
        apply_actor_gravity(o, 0, lbl_805DA3F8);
        update_collisions__10TObjPlayerFPv(o);
        if (objInBand__FP7GameObjf(o, lbl_805DA464) != 0 || objInBand__FP7GameObjf(o, lbl_805DA3FC) != 0) {
            play_sound_effect(0x4003AD23, o->pos, 0, 0);
        }
        if (((u16 (*)(void *, int, f32))find_nearest_visible_player)(o, 0, lbl_805DA408) != 0xFFFF) {
            ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(o, 0xB);
        } else {
            o->timer--;
            if (o->timer <= 0) {
                ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(o, 0);
            }
        }
        break;
    case -1:
        break;
    }
}

void TObjPlayer__sub_800DB390(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r4) {
    case -1:
        break;
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        M2C_FIELD(arg0, s32 *, 0x384) = 0x5A;
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000)) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        advance_animation_playback((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        break;
    case 3:
    case 2:
    case 1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
            return;
        }
        switch (temp_r4) {
        case 1:
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805DA45C) {
                render_model_transformed__10TObjPlayerFPv((void *) (arg0));
                spawn_particle_effect((void *) (arg0 + 0x39C), (int) (0xF7));
                M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            }
            break;
        case 2:
            play_persistent_sound((int) (0x4003AD1E), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805DA3FC) {
                render_model_transformed__10TObjPlayerFPv((void *) (arg0));
                u32 obj = __nw__7TObjectFUl(0x100);
                if (obj != 0U) {
                    construct_beam_effect__10TObjPlayerFPvPvPviPv(obj, arg0 + 0x39C, (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x2FC), (u8) !(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000), arg0);
                }
                spawn_directional_particle_at_slot__10TObjPlayerFPvi((Obj_800DA4B4 *) (arg0), 0);
                play_sound_effect((int) (0x4003A527), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            }
            break;
        }
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0x29C), (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x2FC));
        enemy_turn_half_toward_dest((void *) (arg0));
        advance_animation_playback((void *) (arg0));
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000)) {
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805DA3F8));
        }
        update_collisions__10TObjPlayerFPv((void *) (arg0));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
        if (temp_r0 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
        }
        break;
    case 4:
        if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            M2C_FIELD(arg0, s32 *, 0x378) = 0;
            ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0xB);
            return;
        }
        ((M2C_UNK (*)(void *, M2C_UNK))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0);
        break;
    }
}

void enter_state_5__10TObjPlayerFPv(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 5;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK apply_actor_gravity(void *, int, f32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
s32 play_sound_effect(int, void *, int, int);
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA3FC;
extern const f32 lbl_805DA464;
void TObjPlayer__sub_800DB970(u8 *arg0);
}

extern "C" {

void begin_action4__10TObjPlayerFPv(void *arg0);

void begin_action4__10TObjPlayerFPv(void *arg0) {
    ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneMe1GiGueFPvi)(arg0, 4);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 4;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x10000 | 1);
}
void TObjPlayer__sub_800DB970(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
        return;
    }
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        M2C_FIELD(arg0, s32 *, 0x384) = 0x96;
        ((M2C_UNK (*)(void *))TBoss3VoloptMonitor__sub_8004292C)(arg0);
    case 1:
        advance_animation_playback(arg0);
        ((M2C_UNK (*)(void *, void *, f32))update_circle_move__10TObjPlayerFPvPvf)(arg0, arg0 + 0x50, M2C_FIELD(arg0, f32 *, 0x358));
        if (objInBand__FP7GameObjf(arg0, lbl_805DA464) != 0 || objInBand__FP7GameObjf(arg0, lbl_805DA3FC) != 0) {
            play_sound_effect(0x4003AD23, arg0 + 0x38, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            M2C_FIELD(arg0, s32 *, 0x384) = 0x5A;
        }
        ((M2C_UNK (*)(void *))check_object_collisions__10TObjPlayerFPv)(arg0);
        apply_actor_gravity(arg0, 0, lbl_805DA3F8);
        break;
    case 2:
        advance_animation_playback(arg0);
        ((M2C_UNK (*)(void *))check_object_collisions__10TObjPlayerFPv)(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        break;
    }
}

}
