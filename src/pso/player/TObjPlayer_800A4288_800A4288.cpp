#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct C_800A4294 { s32 x0; };

struct B_800A4294 { u8 pad[0xc]; C_800A4294 *c; };

struct A_800A4294 { u8 pad[0x8]; B_800A4294 *b; };

struct G_800A4294 { A_800A4294 *p; s32 n; u8 pad[0x8]; };

struct Base1 { u8 pad[0x14]; };

struct VObj1 : Base1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    virtual void m5();
};

extern "C" {
extern A_800A4294 lbl_804CC8C8;
extern G_800A4294 lbl_80500970;
extern int lbl_805D5038;
void TObjPlayer__sub_800A4294(void);
void calc_move_state__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_800A7774(void *, void *);
M2C_UNK set_param__16TEneParticleCtrlFPv(void *, s32);
M2C_UNK free_particle_ctrl__16TEneParticleCtrlFPv(void *);
void TObjPlayer__sub_800A435C(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_800A04F0(void *);
M2C_UNK step_angle_clamped__10TObjPlayerFPvi(void *, int);
M2C_UNK request_two_effects__10TObjPlayerFPv(void *);
M2C_UNK apply_effect_variant_a__10TObjPlayerFii(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback();
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805D9A10;
extern const f32 lbl_805D9A14;
void TObjPlayer__sub_800A44B8(u8 *arg0);
}

extern "C" {

struct VDisp_800a42c4_800A4288 { char pad[0x18]; virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(void *, void *); };

void TObjPlayer__sub_800A42C0(void);
void apply_lookup_entry_effect__10TObjPlayerFPv(u8 *arg0);
void calc_move_state__10TObjPlayerFPv(void *arg0);
void reset_effect_count__10TObjPlayerFv(void);
void start_boss4_pose__10TObjPlayerFPv(void *arg0);
void update_entry_motion__10TObjPlayerFPv(u8 *arg0);
M2C_UNK advance_animation_playback();
M2C_UNK post_translate_matrix(void *);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *, void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK step_angle_clamped__10TObjPlayerFPvi(void *, int);

    extern int lbl_805D5038;
void reset_effect_count__10TObjPlayerFv(void) { lbl_805D5038 = 0; }

void TObjPlayer__sub_800A4294(void) {
    lbl_80500970.p = &lbl_804CC8C8;
    lbl_80500970.n = 0x10;
    (*(s32 *)&lbl_805D5038) = lbl_80500970.p->b->c->x0;
}

void TObjPlayer__sub_800A42C0(void) {  }

extern s32 lbl_805D5064;

void apply_lookup_entry_effect__10TObjPlayerFPv(u8 *arg0) {
    struct { M2C_UNK a, b, c; M2C_UNK d, e, f, g, h; } sp8;
    s32 temp_r3;
    u8 *temp_r3_2;

    temp_r3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (lbl_805D5064), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3 != 0) {
        push_matrix();
        TObjPlayer__sub_803D8CD4((int) (0));
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        TObjPlayer__sub_803D8960((int) (0), (int) (temp_r3), (void *) (&sp8), (int) (2));
        pop_matrix();
        temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3C0));
        if (temp_r3_2 != NULL) {
            ((struct VDisp_800a42c4_800A4288 *) temp_r3_2)->m4(&sp8, &sp8.d);
        }
    }
}

extern M2C_UNK lbl_8043A8C8;
extern const f32 lbl_805D9A10;

void TObjPlayer__sub_800A435C(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380);
    switch (temp_r0) {
    case 0x0:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3A0) != 0U) {
            free_particle_ctrl__16TEneParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x3A0));
        }
        break;
    default:
        calc_move_state__10TObjPlayerFPv(arg0);
    case 0x107:
    case 0x10E:
        if (!(M2C_FIELD(arg0, s32 *, 0x374) & 4)) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3A0) != 0U) {
                free_particle_ctrl__16TEneParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x3A0));
            }
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != (s32) M2C_FIELD(arg0, s32 *, 0x380)) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3A0) != 0U) {
                set_param__16TEneParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x3A0), M2C_FIELD(arg0, s32 *, 0x380));
            }
            M2C_FIELD(arg0, s32 *, 0x384) = (s32) M2C_FIELD(arg0, s32 *, 0x380);
        }
        break;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3A0) != 0U) {
        TObjPlayer__sub_800A7774(M2C_FIELD(arg0, void **, 0x3A0), arg0 + 0x390);
    }
}

void calc_move_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x38A);
    temp_r6 = M2C_FIELD(arg0, s16 *, 0x388);
    if (temp_r0 == temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x101;
        return;
    }
    if ((lbl_805D9A10 * (f32) temp_r0) < (f32) temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x102;
        return;
    }
    if (temp_r6 > 0) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x103;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}

extern const f32 lbl_805D9A10;

void TObjPlayer__sub_800A44B8(u8 *arg0) {
    s16 temp_r0;
    s32 prev_r3;
    advance_animation_playback();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        request_two_effects__10TObjPlayerFPv(arg0 + 0x38);
        TObjPlayer__sub_800A04F0(arg0 + 0x3A4);
        apply_actor_gravity((void *)(arg0), (int)(0), lbl_805D9A14);
        prev_r3 = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B207);
        play_sound_effect(prev_r3, arg0 + 0x38, 0, 0);
        return;
    case 1:
        step_angle_clamped__10TObjPlayerFPvi((void *)(arg0), (int)(0));
        move_with_wall_slide(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805D9A10;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805D9A10;
        if (((VObj1 *)(arg0 + 0x3A4))->m4() == 1) {
            apply_effect_variant_a__10TObjPlayerFii(arg0 + 0x38, 0);
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        return;
    case 2:
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

void start_boss4_pose__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;
    s16 temp_s16;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        temp_s16 = 0xA;
        M2C_FIELD(arg0, s16 *, 0x326) = temp_s16;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        if (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D9A10) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0xA;
        }
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
        refresh_lobby_state__10TObjPlayerFPv(arg0, temp_r4);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

extern const f32 lbl_805D9A14;

void update_entry_motion__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r3;

    advance_animation_playback();
    step_angle_clamped__10TObjPlayerFPvi((void *) (arg0), (int) (0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) lbl_805D9A14;
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) lbl_805D9A14;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        break;
    case 2:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF9FF);
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        break;
    }
    check_object_collisions__10TObjPlayerFPv((void *) (arg0));
    check_enemy_body_collisions((void *) (arg0));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

}
