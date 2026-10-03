#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
void set_param__12TObjEneLappyFPvi(void *, s32);
M2C_UNK bindModel__11TObjEneMojaFi(void *, int);
extern const f32 lbl_805D9BE0;
void select_rare_variant__11TObjEneMojaFPv(u8 *arg0);
s32 spawn_particle_effect(s32, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void handle_death__11TObjEneMojaFPv(u8 *arg0);
struct Vec_800ACB58 { f32 x, y, z; };
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_effect_at_ground__10TObjPlayerFPvi(void *, int);
M2C_UNK spawn_dead_spot_scale15(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK play_sound_effect(s32, void *, int, int);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix(void);
extern u8 lbl_8058D490[];
extern const f32 lbl_805D9BE4;
extern const f32 lbl_805D9BE8;
extern const f32 lbl_805D9BEC;
extern const f32 lbl_805D9BF0;
extern const f32 lbl_805D9BF4;
extern const f32 lbl_805D9BF8;
}

extern "C" {

void clamp_stat_354__10TObjPlayerFPv(void *arg0);

extern f32 lbl_805D9BDC;

void clamp_stat_354__10TObjPlayerFPv(void *arg0) {
    extern f32 lbl_805D9BD8;
    f32 lo = lbl_805D9BD8;
    if (M2C_FIELD(arg0, f32 *, 0x354) < lo) {
        M2C_FIELD(arg0, f32 *, 0x354) = lo;
    } else if (lbl_805D9BDC < M2C_FIELD(arg0, f32 *, 0x354)) {
        M2C_FIELD(arg0, f32 *, 0x354) = (f32) lbl_805D9BDC;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = (s32) M2C_FIELD(arg0, f32 *, 0x354);
}
void select_rare_variant__11TObjEneMojaFPv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x368);
    if (temp_r0 >= 1) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 2);
        bindModel__11TObjEneMojaFi((void *) (arg0), (int) (2));
        return;
    }
    if (temp_r0 <= 0) {
        if (calc_boss4_scale__10TObjPlayerFi((s32) arg0) < lbl_805D9BE0) {
            M2C_FIELD(arg0, s32 *, 0x368) = 1;
            set_param__12TObjEneLappyFPvi(arg0, 2);
            bindModel__11TObjEneMojaFi((void *) (arg0), (int) (2));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 1);
        bindModel__11TObjEneMojaFi((void *) (arg0), (int) (1));
    }
}
void update_death_state__11TObjEneMojaFv(u8 *arg0) {
    extern const f32 lbl_805D9BD8;
    Vec_800ACB58 v;

    advance_animation_playback(arg0);
    if (objInBand__FP7GameObjf(arg0, lbl_805D9BD8) != 0) {
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A809), arg0 + 0x38, 0, 0);
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D9BE4) != 0) {
        v.x = lbl_805D9BD8;
        v.y = lbl_805D9BE8;
        v.z = lbl_805D9BEC * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        vec3_add_to(&v, arg0 + 0x38);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD03), &v, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x300);
        spawn_particle_effect((s32) &v, 0xF0);
        spawn_dead_spot_scale15(&v, 0x14);
        spawn_effect_at_ground__10TObjPlayerFPvi(&v, 0x32);
    }
    if (M2C_FIELD(arg0, f32 *, 0xC0) < lbl_805D9BEC * (lbl_805D9BF0 * M2C_FIELD(arg0, f32 *, 0xC8))) {
        move_with_wall_slide(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805D9BEC;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805D9BEC;
    } else if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity(arg0, 0, lbl_805D9BD8);
    }
    M2C_FIELD(arg0, f32 *, 0x38C) -= lbl_805D9BF4;
    if (M2C_FIELD(arg0, f32 *, 0x38C) < lbl_805D9BF8) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void handle_death__11TObjEneMojaFPv(u8 *arg0) {
    u8 *temp_r6;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9) {
        M2C_FIELD(arg0, s16 *, 0x326) = 9;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xFFFF7FFE);
        spawn_particle_effect((s32) (arg0 + 0x2FC), 0xF1);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
    }
}

}
