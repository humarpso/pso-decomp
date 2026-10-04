#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>

struct Vec_802CB8F0 { f32 x, y, z; };

struct Sub_802CB8F0 { u8 pad0[8]; s32 f8; };

struct Obj_802CB8F0 {
    u8 pad0[0x38];
    Vec_802CB8F0 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x29C - 0x64];
    Vec_802CB8F0 v29C;
    u8 pad2A8[0x350 - 0x2A8];
    Sub_802CB8F0 *f350;
    u8 pad354[0x390 - 0x354];
    Vec_802CB8F0 v390;
    u8 pad39C[0x3E4 - 0x39C];
    f32 f3E4;
};

struct VBase_802CB6D4 { char pad[0x18]; };

struct VObj_802CB6D4 : VBase_802CB6D4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual s32 m17(s32);
};

struct Obj_802CB8F0;
struct Vec_802CB8F0;

struct Vec_802CBA98 { f32 x, y, z; };

typedef s32 M2C_UNK;
struct Vec_802CCBAC { f32 x, y, z; };

struct Sub_802CCBAC { f32 f0; u8 pad4[4]; s32 f8; };

struct Tgt_802CCBAC { u8 pad0[0x38]; Vec_802CCBAC pos; u8 pad44[0x2FC - 0x44]; Vec_802CCBAC v2FC; };

struct Obj_802CCBAC {
    u8 pad0[0x30]; u32 f30; u8 pad34[4]; Vec_802CCBAC pos; u8 pad44[0x60 - 0x44];
    s32 f60; u8 pad64[0xB8 - 0x64]; s16 fB8; u8 padBA[0x29C - 0xBA];
    Vec_802CCBAC v29C; Tgt_802CCBAC *f2A8; u8 pad2AC[0x350 - 0x2AC];
    Sub_802CCBAC *f350; u8 pad354[0x37C - 0x354]; s32 f37C; u8 pad380[8]; u32 f388;
    u8 pad38C[0x3DC - 0x38C]; s32 f3DC; f32 f3E0; f32 f3E4; u8 pad3E8[0x3F8 - 0x3E8];
    s32 f3F8; u8 pad3FC[0x434 - 0x3FC]; s32 f434; f32 f438; u8 pad43C[0x448 - 0x43C]; s32 f448;
};

extern "C" {
void TObjEneMe1GiGue__sub_802CCE50(u8 *arg0);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEneMe1GiGue__sub_802CCE9C(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
s32 spawn_particle_effect(void *, int);
s32 create_breakup_mdl__12TBoss3VoloptFiiiii(int, int, int, void *, int);
s32 refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
s32 play_sound_effect(void *, void *, int, int);
s32 TObjEneMe1GiGue__sub_802CB5A0(void *, int);
extern s32 TObjEneMe1GiGue__data_805D683C;
extern const f32 TObjEneMe1GiGue__data_805DE674;
void TObjEneMe1GiGue__sub_802CB9E4(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 move_with_wall_slide(void *);
s32 enemy_set_heading_velocity(void *, f32, s32);
s32 enemy_turn_toward_dest(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 xz_distance_squared(void *, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 TObjEneMe1GiGue__data_805DE678;
extern const f32 TObjEneMe1GiGue__data_805DE680;
extern const f32 lbl_805DE684;
extern const f32 lbl_805DE688;
extern const f32 lbl_805DE68C;
void TObjEneMe1GiGue__sub_802CB8F0(Obj_802CB8F0 *o, Vec_802CB8F0 *c, f32 r);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 find_nearest_visible_player(void *, int, f32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
void init_move__15TObjEneMe1GiGueFPv(u8 *arg0);
extern const f32 TObjEneMe1GiGue__data_805DE67C;
void TObjEneMe1GiGue__sub_802CB6D4(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
s32 spawn_particle_effect(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
s32 play_sound_effect(void *, void *, int, int);
M2C_UNK create__9TTecJelinFiiii(void *, void *, void *, s32);
M2C_UNK create_instance__9TTecZaruaFiiii(void *, void *, void *, s32);
M2C_UNK TObjEneMe1GiGue__sub_802CB03C(void *);
s32 TObjEneMe1GiGue__sub_802CB10C(void *);
s32 TObjEneMe1GiGue__sub_802CB5A0(void *, int);
s32 TObjEneMe1GiGue__sub_802CDAC4(void *, int);
extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 TObjEneMe1GiGue__data_805DE6A0;
extern const f32 TObjEneMe1GiGue__data_805DE6A8;
void TObjEneMe1GiGue__sub_802CC45C(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
void TObjEneMe1GiGue__sub_802CB8F0(Obj_802CB8F0 *o, Vec_802CB8F0 *c, f32 r);
extern const f32 TObjEneMe1GiGue__data_805DE660;
void TObjEneMe1GiGue__sub_802CCF2C(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 move_with_wall_slide(void *);
s32 check_path_obstructed(void *, Vec_802CBA98 *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
s32 spawn_particle_effect(void *, int);
f32 xz_distance_squared(void *, void *);
M2C_UNK advance_animation_playback(void *);
s32 find_entity_by_id(u16);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 TObjEneMe1GiGue__data_805DE680;
extern const f32 lbl_805DE690;
void TObjEneMe1GiGue__sub_802CBA98(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 move_with_wall_slide(void *);
s32 enemy_set_heading_velocity(void *, f32, s32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK enemy_wander_home(void *, s32, f32, f32, f32);
void subtract_vector(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
extern const f64 TObjEneMe1GiGue__data_80472298;
extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 TObjEneMe1GiGue__data_805DE67C;
extern const f32 TObjEneMe1GiGue__data_805DE694;
void TObjEneMe1GiGue__sub_802CCBAC(Obj_802CCBAC *o);
}

extern "C" {

void action__15TObjEneMe1GiGueFPv(void *arg0);
void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1);
void init_move__15TObjEneMe1GiGueFPv(u8 *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC4(void *, void *);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK enemy_wander_home(void *, s32, f32, f32, f32);
M2C_UNK refresh_collision_body_centers(void *);
u32 get_player_by_client_id(M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);

void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1) {
    if ((arg1 == get_player_by_client_id(0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x3F4) <= 0)) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = 0x1E;
        set_shake_preset__11TCameraCtrlFi(1);
    }
}

void init_move__15TObjEneMe1GiGueFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
    update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0xE));
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
    refresh_collision_body_centers(arg0);
}

extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 TObjEneMe1GiGue__data_805DE694;

#pragma fp_contract on

void TObjEneMe1GiGue__sub_802CB6D4(u8 *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x326)) {
    case 0:
        if (((VObj_802CB6D4 *) arg0)->m17(0x1E) != 0) {
            if (find_nearest_visible_player(arg0, 0, *M2C_FIELD(arg0, f32 **, 0x350)) != 0xFFFF) {
                find_target_in_range__10TObjPlayerFPvf(arg0, *M2C_FIELD(arg0, f32 **, 0x350));
                if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
                    init_move__15TObjEneMe1GiGueFPv(arg0);
                } else {
                    update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
                }
            }
        }
        break;
    case 1:
        if (find_nearest_visible_player(arg0, 0, TObjEneMe1GiGue__data_805DE67C) != 0xFFFF) {
            if (calc_boss4_scale__10TObjPlayerFi(arg0) <= M2C_FIELD(arg0, f32 *, 0x444)) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xB);
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xD);
                M2C_FIELD(arg0, s32 *, 0x378) = 1;
            }
        } else if (find_nearest_visible_player(arg0, 0, TObjEneMe1GiGue__data_805DE67C + *M2C_FIELD(arg0, f32 **, 0x350)) == 0xFFFF) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        }
        break;
    case 13:
        break;
    }
}

void TObjEneMe1GiGue__sub_802CB8F0(Obj_802CB8F0 *o, Vec_802CB8F0 *c, f32 r) {
    if (xz_distance_squared(&o->pos, &o->v390) < TObjEneMe1GiGue__data_805DE680) {
        f32 a = lbl_805DE688 * calc_boss4_scale__10TObjPlayerFi(o);
        s32 k = (s32)(lbl_805DE684 * a);
        f32 d = lbl_805DE68C * (r * (TObjEneMe1GiGue__data_805DE678 + calc_boss4_scale__10TObjPlayerFi(o)));
        o->v390.x = d * cos_table_lookup(k) + c->x;
        o->v390.z = d * sin_table_lookup(k) + c->z;
    }
    VecCopy__FP3VecPC3Vec(&o->v29C, &o->v390);
    enemy_turn_toward_dest(o, o->f350->f8);
    enemy_set_heading_velocity(o, o->f3E4, o->f60);
    move_with_wall_slide(o);
}

void TObjEneMe1GiGue__sub_802CB9E4(u8 *arg0) {
    Vec position;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    position.y += TObjEneMe1GiGue__data_805DE674 + M2C_FIELD(arg0, f32 *, 0x3EC);
    create_breakup_mdl__12TBoss3VoloptFiiiii((int) (TObjEneMe1GiGue__data_805D683C), (int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (&position.x), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    refresh_lobby_state__10TObjPlayerFPv((void *) (arg0));
    send_entity_set_flags__6TLobbyFPv((void *) (arg0));
    spawn_particle_effect((void *) (&position.x), (int) (0x205));
    spawn_particle_effect((void *) (&position.x), (int) (0x206));
    play_sound_effect((void *) (TObjEneMe1GiGue__sub_802CB5A0((void *) (arg0), (int) (0x3AF1C))), (void *) (&position.x), (int) (0), (int) (0));
    queue_destruction__7TObjectFv((void *) (arg0));
}

void TObjEneMe1GiGue__sub_802CBA98(u8 *arg0) {
    f32 sp10;
    s32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_r5;
    s16 temp_r4;
    s16 var_r3;
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r30;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        var_r3 = 4;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            var_r3 = 5;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = var_r3;
        spawn_particle_effect(arg0 + 0x2FC, 0xF2);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000)) {
            Vec_802CBA98 v = M2C_FIELD(arg0, Vec_802CBA98 *, 0x2FC);
            v.x += M2C_FIELD(arg0, f32 *, 0x308);
            v.z += M2C_FIELD(arg0, f32 *, 0x310);
            if (check_path_obstructed(arg0, &v) == 0) {
                move_with_wall_slide(arg0);
            } else {
                M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x310) = TObjEneMe1GiGue__data_805DE660;
            }
            M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805DE690);
            M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805DE690);
        }
        apply_actor_gravity(arg0, 0, TObjEneMe1GiGue__data_805DE660);
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
                if ((M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) && (xz_distance_squared(arg0 + 0x38, (u8 *)temp_r3 + 0x38) > TObjEneMe1GiGue__data_805DE680)) {
                    var_r30 = 0;
                }
            }
        }
        if (var_r30 == 1) {
            M2C_FIELD(arg0, u16 *, 0x338) = (u16) M2C_FIELD(arg0, u16 *, 0x2D4);
            M2C_FIELD(arg0, s32 *, 0x374) = 9;
        } else if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0xD));
            M2C_FIELD(arg0, s32 *, 0x378) = (s32) M2C_FIELD(arg0, s32 *, 0x380);
        } else {
            update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0));
        }
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        break;
    }
}

void action__15TObjEneMe1GiGueFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        TObjEneMe1GiGueBarrier__sub_80325CC4(arg0, arg0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        M2C_FIELD(arg0, s32 *, 0x384) = 0x2D;
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case 2:
        enemy_wander_home(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8), M2C_FIELD(arg0, f32 *, 0x3E4), TObjEneMe1GiGue__data_805DE694, TObjEneMe1GiGue__data_805DE694);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        update_collisions__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0));
        }
    case -1:
        return;
    }
}

void TObjEneMe1GiGue__sub_802CC45C(u8 *arg0) {
    s32 r;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        r = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000)) {
            r = TObjEneMe1GiGue__sub_802CB10C(arg0);
        }
        if (r > 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        } else if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xD);
        } else {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x388) &= ~0x40000;
        break;
    case 1:
    case 2:
    case 3:
        switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
        case 1:
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEneMe1GiGue__data_805DE6A8) {
                TObjEneMe1GiGue__sub_802CB03C(arg0);
                spawn_particle_effect(arg0 + 0x3A8, 0x204);
                M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            }
            break;
        case 2:
            play_sound_effect((void *)TObjEneMe1GiGue__sub_802CB5A0(arg0, 0x3A344), arg0 + 0x38, 0, 0);
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEneMe1GiGue__data_805DE6A0) {
                TObjEneMe1GiGue__sub_802CB03C(arg0);
                M2C_FIELD(arg0, s32 *, 0x37C) = 3;
                create_instance__9TTecZaruaFiiii(arg0, arg0 + 0x2FC, arg0 + 0x2FC, TObjEneMe1GiGue__sub_802CDAC4(arg0, 2));
                create__9TTecJelinFiiii(arg0, arg0 + 0x2FC, arg0 + 0x2FC, TObjEneMe1GiGue__sub_802CDAC4(arg0, 2));
            }
            break;
    }
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        update_collisions__10TObjPlayerFPv(arg0);
        if (M2C_FIELD(arg0, s16 *, 0xB8) != 3) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xD);
        }
        break;
    }
}

void TObjEneMe1GiGue__sub_802CCBAC(Obj_802CCBAC *o) {
    o->f30 &= ~0x01000000;
    switch (o->f37C) {
    case 0:
        o->f388 &= ~0x00040000;
        TBoss3VoloptMonitor__sub_8004292C();
        o->fB8 = 1;
        o->f3DC = 0;
        if (o->f2A8 != NULL) {
            VecCopy__FP3VecPC3Vec(&o->v29C, &o->f2A8->v2FC);
        }
        o->f37C = 1;
    case 1:
        advance_animation_playback(o);
        apply_actor_gravity(o, 0, TObjEneMe1GiGue__data_805DE660);
        if (o->f2A8 != NULL) {
            Vec_802CCBAC d = o->f2A8->pos;
            subtract_vector(&d, &o->pos);
            if (d.x * d.x + d.z * d.z <= o->f438 * o->f438 &&
                angle_difference_abs(-(s32)(TObjEneMe1GiGue__data_80472298 * get_ad_end_text_start__10TObjPlayerFv(d.z, d.x)) + 0x4000, o->f60) < o->f434 / 2) {
                s32 st;
                o->f3F8++;
                if (o->f3F8 > 2) {
                    o->f3F8 = 0;
                    st = 0xD;
                } else {
                    o->f448 = 0;
                    st = 9;
                }
                update_if_active__15TObjEneMe1GiGueFPv(o, st);
                break;
            }
        }
        o->f60 += o->f350->f8 / 2;
        enemy_set_heading_velocity(o, o->f3E4, o->f60);
        move_with_wall_slide(o);
        o->f3DC += o->f350->f8 / 2;
        if (o->f3DC > 0x10000) {
            o->f3E0 = TObjEneMe1GiGue__data_805DE660;
            o->f37C = 2;
        }
        break;
    case -1:
        break;
    case 2:
        ((M2C_UNK (*)(f32, f32, f32, void *, s32))enemy_wander_home)(o->f3E4, TObjEneMe1GiGue__data_805DE694, TObjEneMe1GiGue__data_805DE67C, o, o->f350->f8);
        advance_animation_playback(o);
        apply_actor_gravity(o, 0, TObjEneMe1GiGue__data_805DE660);
        o->f3E0 += o->f3E4;
        if (o->f3E0 > TObjEneMe1GiGue__data_805DE694) {
            if (find_target_in_range__10TObjPlayerFPvf(o, o->f350->f0) != 0) {
                o->f3DC = 0;
                o->f37C = 1;
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(o, 0);
            }
        }
        check_object_collisions__10TObjPlayerFPv(o);
        check_enemy_body_collisions(o);
        update_enemy_collision_flags__10TObjPlayerFPv(o);
        break;
    }
}

void TObjEneMe1GiGue__sub_802CCE50(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 5;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}
void TObjEneMe1GiGue__sub_802CCE9C(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  if (temp_r0 != 0xC)
  {
    if (temp_r0 < 0xC)
    {
      if (temp_r0 < 0xA)
      {
        arg0++;
        arg0--;
        goto block_6;
      }
      goto block_5;
    }
    if (temp_r0 < 0xE)
    {
      block_5:
      *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFFDFF);
      return;
    }
    goto block_6;
  }
  block_6:
  set_state__15TObjEneMe1GiGueFPvi((void *)((void *) arg0), (s32)((int) 4));
  *((s32 *) (((s8 *) arg0) + 0x380)) = (s32) (*((s32 *) (((s8 *) arg0) + 0x378)));
  *((s32 *) (((s8 *) arg0) + 0x378)) = 4;
  *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x388))) | 0x10000) | 1);
}
void TObjEneMe1GiGue__sub_802CCF2C(u8 *arg0) {
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
        ((void (*)(u8 *)) TBoss3VoloptMonitor__sub_8004292C)(arg0);
    case 1:
        advance_animation_playback(arg0);
        TObjEneMe1GiGue__sub_802CB8F0((Obj_802CB8F0 *) arg0, (Vec_802CB8F0 *) (arg0 + 0x50), M2C_FIELD(arg0, f32 *, 0x358));
        M2C_FIELD(arg0, s32 *, 0x384) -= 1;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            M2C_FIELD(arg0, s32 *, 0x384) = 0x5A;
        }
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        apply_actor_gravity(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        break;
    case 2:
        advance_animation_playback(arg0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) -= 1;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        break;
    }
}

}
