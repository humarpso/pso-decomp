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
