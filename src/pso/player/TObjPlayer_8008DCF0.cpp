#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Row_8008ED48 { u32 *p[11]; };

struct Vec_8008F910 { f32 x, y, z; };

struct VBase_14_c1c33b { char pad[0x14]; };

struct VObj_14_c1c33b : VBase_14_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct P_8008F730 { u8 pad[0x3C4]; s32 ids[5]; s16 n; };

struct Vec_8008FAD0 { f32 x, y, z; };

struct P_8008EDE8;
struct VBase_18_a01d39 { char pad[0x18]; };

struct VObj_18_a01d39 : VBase_18_a01d39 {
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
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual M2C_UNK m21(void *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
};

struct Pair_8008EDE8 { s32 a, b; };

struct TB_8008EDE8 { u8 pad0[0x18]; };

struct T_8008EDE8 : TB_8008EDE8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual s32 m18(P_8008EDE8 *, f32);
    virtual void m19();
    virtual void m20(P_8008EDE8 *, f32);
    virtual void m21(P_8008EDE8 *, Pair_8008EDE8 *, s32, s32, s32);
    virtual void m22();
    virtual void m23(P_8008EDE8 *, f32);
    u8 pad1C[0x2FC - 0x1C];
    Vec_8008F910 pos;
};

struct H_8008EDE8 { u8 pad[8]; void *f8; };

struct P_8008EDE8 {
    u8 pad0[0x38];
    f32 pos38[3];
    u8 pad44[0xB4 - 0x44];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x2A8 - 0xBA];
    T_8008EDE8 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_8008F910 pos;
    Vec_8008F910 vel;
    u8 pad314[0x318 - 0x314];
    s32 f318;
    u8 pad31C[0x338 - 0x31C];
    u16 f338;
    u8 pad33A[0x350 - 0x33A];
    H_8008EDE8 *f350;
    u8 pad354[0x37C - 0x354];
    s32 state;
    u8 pad380[0x3C0 - 0x380];
    f32 f3C0;
    u8 pad3C4[0x3DA - 0x3C4];
    s16 f3DA;
};

extern "C" {
extern Row_8008ED48 lbl_805006F8[];
void TObjPlayer__sub_8008ED48(void *arg0, s32 arg1);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
s32 check_path_obstructed(void *, Vec_8008F910 *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
s32 get_flag_0x388_b24__10TObjPlayerFPv(void *);
s32 fn_80090464(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
extern const f32 lbl_805D9620;
extern const f32 lbl_805D966C;
void TObjPlayer__sub_8008F910(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_flag_0x388_b24__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_800A04F0(void *);
M2C_UNK request_two_effects__10TObjPlayerFPv(void *);
M2C_UNK apply_effect_variant_a__10TObjPlayerFii(void *, int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK advance_animation_playback(void *);
u8 *find_entity_by_id(u16);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
extern const f32 lbl_805D964C;
extern const f32 lbl_805D9664;
extern const f32 lbl_805D9668;
void TObjPlayer__sub_8008F730(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK update_enemy_wander_move(void *, Vec_8008FAD0 *, int, f32);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C(void *);
M2C_UNK reset_enemy_state__10TObjPlayerFPv();
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
extern const f32 lbl_805D9620;
void TObjPlayer__sub_8008FAD0(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
void calc_velocity_toward_destination(void *, Vec_8008F910, Vec_8008F910, f32);
s32 select_enemy_destination(void *, Vec_8008F910, s32);
s32 check_path_obstructed(void *, Vec_8008F910 *);
void copy_position_if_valid__10TObjPlayerFii(void *, Vec_8008F910);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, void *, void *);
f32 get_pos_x__10TObjPlayerFPv(s32);
M2C_UNK reset_enemy_state__10TObjPlayerFPv();
s32 get_flag_0x388_b24__10TObjPlayerFPv(void *);
void find_target_in_range__10TObjPlayerFPvf(void *, f32);
f32 xz_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
extern Pair_8008EDE8 lbl_80439B54[];
extern const f32 lbl_805D9620;
extern const f32 lbl_805D9644;
extern const f32 lbl_805D9648;
extern const f32 lbl_805D964C;
extern const f32 lbl_805D9650;
extern const f32 lbl_805D9654;
extern const f32 lbl_805D9658;
void TObjPlayer__sub_8008EDE8(P_8008EDE8 *arg0);
}

extern "C" {

void update_dragon_boss_state__10TObjPlayerFPv(void *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);

extern const f32 lbl_805D9620;

void update_dragon_boss_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) ((((u32) M2C_FIELD(arg0, u32 *, 0x388) >> 0x18U) & 1) ? 0 : 5);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, lbl_805D9620);
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        return;
    }
}
void TObjPlayer__sub_8008ED48(void *arg0, s32 arg1) {
    s32 i;
    s32 j;
    u32 *e;
    for (i = 0; i < arg1; i++) {
        for (j = 0; (e = lbl_805006F8[i].p[j]) != NULL; j++) {
            *e &= ~8;
        }
    }
    for (; i < 4; i++) {
        for (j = 0; (e = lbl_805006F8[i].p[j]) != NULL; j++) {
            *e |= 8;
        }
    }
}

#define RESET(p) ((M2C_UNK (*)(void *))reset_enemy_state__10TObjPlayerFPv)(p)
void TObjPlayer__sub_8008EDE8(P_8008EDE8 *arg0) {
    switch (arg0->state) {
    case 0:
        if (get_flag_0x388_b24__10TObjPlayerFPv(arg0) == 0) {
            RESET(arg0);
            return;
        }
        find_target_in_range__10TObjPlayerFPvf(arg0, lbl_805D9644);
        if (arg0->f338 != 0xFFFF) {
            arg0->fB8 = 1;
            arg0->state = 1;
            if (select_enemy_destination(arg0, arg0->pos, 1) != 0) {
                copy_position_if_valid__10TObjPlayerFii(arg0, arg0->pos);
            }
        } else {
            RESET(arg0);
        }
        break;
    case 1:
        if (arg0->target == NULL) {
            reset_enemy_state__10TObjPlayerFPv();
        } else {
            arg0->vel.y = lbl_805D9620;
            calc_velocity_toward_destination(arg0, arg0->pos, arg0->target->pos, lbl_805D9648);
            {
                Vec_8008F910 n1 = arg0->pos;
                n1.x += arg0->vel.x;
                n1.z += arg0->vel.z;
                if (check_path_obstructed(arg0, &n1) == 0) {
                    move_with_wall_slide(arg0);
                }
            }
            update_angle__10TObjPlayerFPviPv(arg0, arg0->f350->f8, &arg0->vel);
            arg0->f3C0 = xz_distance_squared(&arg0->pos, &arg0->target->pos);
            if (arg0->f3C0 <= get_pos_x__10TObjPlayerFPv(arg0->f318) * get_pos_x__10TObjPlayerFPv(arg0->f318)) {
                arg0->fB8 = 2;
                arg0->state = 2;
                play_sound_effect(0x4003B033, arg0->pos38, 0, 0);
            }
        }
        break;
    case 2:
        if (arg0->target == NULL) {
            reset_enemy_state__10TObjPlayerFPv();
        } else {
            arg0->vel.y = lbl_805D9620;
            calc_velocity_toward_destination(arg0, arg0->pos, arg0->target->pos, lbl_805D9648);
            move_with_wall_slide(arg0);
            {
                Vec_8008F910 n2 = arg0->pos;
                n2.x += arg0->vel.x;
                n2.z += arg0->vel.z;
                if (check_path_obstructed(arg0, &n2) == 0) {
                    move_with_wall_slide(arg0);
                }
            }
            if (objInBand__FP7GameObjf(arg0, lbl_805D964C) != 0) {
                if (arg0->target->m18(arg0, lbl_805D9650) != 0) {
                    if (calc_boss4_scale__10TObjPlayerFi(arg0) <= lbl_805D9654) {
                        Pair_8008EDE8 q = lbl_80439B54[0];
                        arg0->target->m21(arg0, &q, 0, -1, -1);
                    }
                    arg0->target->m20(arg0, lbl_805D9650);
                    arg0->target->m23(arg0, lbl_805D9658);
                }
                arg0->f3DA++;
            }
            if (arg0->fB4 != 4) {
                RESET(arg0);
            }
        }
        break;
    case -1:
        break;
    }
    advance_animation_playback(arg0);
    apply_actor_gravity(arg0, 0, lbl_805D9620);
    update_collisions__10TObjPlayerFPv(arg0);
}

void TObjPlayer__sub_8008F730(u8 *arg0) {
    s32 i;
    u8 *p;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x388) &= ~0x20000;
        if (get_flag_0x388_b24__10TObjPlayerFPv(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
            for (i = 0; i < ((P_8008F730 *)arg0)->n; i++) {
                p = find_entity_by_id(((P_8008F730 *)arg0)->ids[i]);
                if (p != NULL) {
                    send_entity_set_flags__6TLobbyFPv(p);
                    queue_destruction__7TObjectFv(p);
                }
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 9;
            M2C_FIELD(arg0, f32 *, 0x30C) = M2C_FIELD(arg0, f32 *, 0x3B4) / lbl_805D9664;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        }
        play_sound_effect(0x4003AD37, arg0 + 0x38, 0, 0);
        break;
    case 1:
        advance_animation_playback(arg0);
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805D9668) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
        }
        break;
    case 2:
        advance_animation_playback(arg0);
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805D964C) {
            M2C_FIELD(arg0, f32 *, 0x3B4) -= M2C_FIELD(arg0, f32 *, 0x30C);
            if (M2C_FIELD(arg0, f32 *, 0x3B4) <= 0.0f) {
                M2C_FIELD(arg0, f32 *, 0x3B4) = 0.0f;
                M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            }
        }
        break;
    case 3:
        TObjPlayer__sub_800A04F0(arg0 + 0x390);
        request_two_effects__10TObjPlayerFPv(arg0 + 0x2FC);
        M2C_FIELD(arg0, s32 *, 0x388) |= 4;
        M2C_FIELD(arg0, s32 *, 0x37C) = 4;
    case 4:
        advance_animation_playback(arg0);
        if (((VObj_14_c1c33b *)(arg0 + 0x390))->m4() == 1) {
            apply_effect_variant_a__10TObjPlayerFii(arg0 + 0x38, 0);
            send_entity_set_flags__6TLobbyFPv(arg0);
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    }
}

void TObjPlayer__sub_8008F910(u8 *arg0) {
    s32 var_r30;
    s32 var_r3;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) &= ~0x200000;
        M2C_FIELD(arg0, s16 *, 0xB8) = get_flag_0x388_b24__10TObjPlayerFPv(arg0) != 0 ? 3 : 8;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1: {
        advance_animation_playback(arg0);
        M2C_FIELD(arg0, f32 *, 0x30C) = lbl_805D9620;
        Vec_8008F910 v = M2C_FIELD(arg0, Vec_8008F910 *, 0x2FC);
        v.x += M2C_FIELD(arg0, f32 *, 0x308);
        v.z += M2C_FIELD(arg0, f32 *, 0x310);
        if (check_path_obstructed(arg0, &v) == 0) {
            move_with_wall_slide(arg0);
        } else {
            M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x310) = lbl_805D9620;
        }
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805D966C;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805D966C;
        apply_actor_gravity(arg0, 0, lbl_805D9620);
        update_collisions__10TObjPlayerFPv(arg0);
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            var_r30 = 0;
            M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
            M2C_FIELD(arg0, s32 *, 0x30) &= ~0x200;
            M2C_FIELD(arg0, s32 *, 0x388) &= ~1;
            if (get_flag_0x388_b24__10TObjPlayerFPv(arg0) == 0) {
                var_r3 = fn_80090464(arg0, 0);
                if (var_r3 <= 0) {
                    var_r3 = 0xA;
                }
                if (M2C_FIELD(arg0, s16 *, 0x32C) <= (M2C_FIELD(arg0, s16 *, 0x2B8) * var_r3) / 100) {
                    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x02000000)) {
                        M2C_FIELD(arg0, u16 *, 0x338) = M2C_FIELD(arg0, u16 *, 0x2D4);
                        M2C_FIELD(arg0, s32 *, 0x388) |= 0x02000000;
                    }
                    var_r30 = 2;
                }
            }
            update_if_active__15TObjEneMe1GiGueFPv(arg0, var_r30);
        }
        break;
    }
    }
}
void TObjPlayer__sub_8008FAD0(u8 *arg0) {
    s16 v;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFBFFFEFF;
        TBoss3VoloptMonitor__sub_8004292C(arg0);
        v = 6;
        if (M2C_FIELD(arg0, s32 *, 0x388) & 0x01000000) {
            v = 1;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = v;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x29C, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, void **, 0x2A8) == NULL) {
            reset_enemy_state__10TObjPlayerFPv();
            break;
        }
        play_persistent_sound(0x4003B235, arg0, arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, f32 *, 0x30C) = lbl_805D9620;
        {
            Vec_8008FAD0 pos = *(Vec_8008FAD0 *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            update_enemy_wander_move(arg0, &pos, 1, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4));
        }
        update_angle__10TObjPlayerFPviPv(arg0, (void *)M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8), arg0 + 0x308);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, lbl_805D9620);
        update_collisions__10TObjPlayerFPv(arg0);
        break;
    case -1:
        break;
    }
}

}
