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

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjPlayer__sub_800DB8D4(u8 *arg0);
void *spawn_directional_particle(void *pos, void *dir, s32 id);
void TObjPlayer__sub_800DA4B4(Obj_800DA4B4 *self, s32 i);
void TObjPlayer__sub_800DCD04(void *, void *, int, void *, s32, int);
u32 find_entity_by_id(int);
u32 __nw__7TObjectFUl(u32);
void TObjPlayer__sub_800DA414(Obj_800DA414 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void move_with_wall_slide(void *);
void enemy_set_heading_velocity(void *, f32, s32);
void enemy_turn_toward_dest(void *, s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 xz_distance_squared(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805DA40C;
extern const f32 lbl_805DA410;
extern const f32 lbl_805DA414;
extern const f32 lbl_805DA418;
extern const f32 lbl_805DA41C;
void TObjPlayer__sub_800DA508(Ene_800DA508 *arg0, Vec_800DA508 *center, f32 radius);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK TObjPlayer__sub_80018570(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK TObjPlayer__sub_800D9E8C(void *);
void TObjPlayer__sub_800DA4B4(Obj_800DA4B4 *self, s32 i);
M2C_UNK TObjPlayer__sub_800DC83C(u32, void *, void *, u8, void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
u32 __nw__7TObjectFUl(u32);
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA3FC;
extern const f32 lbl_805DA45C;
void TObjPlayer__sub_800DB390(u8 *arg0);
}

extern "C" {

void set_flag_20000__10TObjPlayerFPv(void *arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

void set_flag_20000__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000)) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
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

void TObjPlayer__sub_800DA4B4(Obj_800DA4B4 *self, s32 i) {
    Vec_800DA4B4 v;
    v.x = self->f60 + 0x4000;
    v.y = 0;
    v.z = 0x4000;
    spawn_directional_particle(&self->recs[i], &v, 0xfd);
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800DA508(Ene_800DA508 *arg0, Vec_800DA508 *center, f32 radius) {
    s32 ang;
    f32 r;
    if (xz_distance_squared(&arg0->pos, &arg0->dest) < lbl_805DA40C) {
        ang = (s32)(lbl_805DA410 * (lbl_805DA414 * calc_boss4_scale__10TObjPlayerFi(arg0)));
        r = lbl_805DA418 * (radius * (lbl_805DA41C + calc_boss4_scale__10TObjPlayerFi(arg0)));
        arg0->dest.x = r * TBoss8Dragon__sub_803D64DC(ang) + center->x;
        arg0->dest.z = r * TBoss8Dragon__sub_803D64C0(ang) + center->z;
    }
    VecCopy__FP3VecPC3Vec(&arg0->v29C, &arg0->dest);
    enemy_turn_toward_dest(arg0, arg0->param->turn);
    enemy_set_heading_velocity(arg0, arg0->speed, arg0->angle);
    move_with_wall_slide(arg0);
}
#pragma pop

struct Obj_800DA4B4;
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
                TObjPlayer__sub_800D9E8C((void *) (arg0));
                spawn_particle_effect((void *) (arg0 + 0x39C), (int) (0xF7));
                M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            }
            break;
        case 2:
            play_persistent_sound((int) (0x4003AD1E), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805DA3FC) {
                TObjPlayer__sub_800D9E8C((void *) (arg0));
                u32 obj = __nw__7TObjectFUl(0x100);
                if (obj != 0U) {
                    TObjPlayer__sub_800DC83C(obj, arg0 + 0x39C, (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x2FC), (u8) !(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000), arg0);
                }
                TObjPlayer__sub_800DA4B4((Obj_800DA4B4 *) (arg0), 0);
                play_sound_effect((int) (0x4003A527), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            }
            break;
        }
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x29C), (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x2FC));
        TObjPlayer__sub_80018570((void *) (arg0));
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
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xB);
            return;
        }
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        break;
    }
}

void TObjPlayer__sub_800DB8D4(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 5;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

}
