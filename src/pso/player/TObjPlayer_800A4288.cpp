#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800A6B14;

extern "C" {
s32 update_movement_status__10TObjPlayerFv();
M2C_UNK obj_clearFlags30(void *, int);
s32 update_landing_recovery__10TObjPlayerFPv(u8 *arg0);
s32 update_action_hold_status__10TObjPlayerFv();
M2C_UNK obj_clearFlags30(void *, int);
s32 update_action_hold_recovery__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {
void step_angle_clamped__10TObjPlayerFPvi(void*, s32);
void turn_toward_target__10TObjPlayerFPv(Obj_800A6B14*);
void TObjPlayer__sub_800A62D4(u8*);
}

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
extern int TObjPlayer__effect_count;
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
#define step_angle_clamped__10TObjPlayerFPvi ((s32 (*)(void*, int))(step_angle_clamped__10TObjPlayerFPvi))
M2C_UNK request_two_effects__10TObjPlayerFPv(void *);
M2C_UNK apply_effect_variant_a__10TObjPlayerFii(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback();
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805D9A10;
extern const f32 lbl_805D9A14;
void update_collapse_and_destroy__10TObjPlayerFPv(u8 *arg0);
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
M2C_UNK mult_vec_array__10TObjPlayerFUii(int, int, void *, int);
M2C_UNK set_matrix_identity__10TObjPlayerFPv(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *, void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);

    extern int TObjPlayer__effect_count;
void reset_effect_count__10TObjPlayerFv(void) { TObjPlayer__effect_count = 0; }

void TObjPlayer__sub_800A4294(void) {
    lbl_80500970.p = &lbl_804CC8C8;
    lbl_80500970.n = 0x10;
    (*(s32 *)&TObjPlayer__effect_count) = lbl_80500970.p->b->c->x0;
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
        set_matrix_identity__10TObjPlayerFPv((int) (0));
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        mult_vec_array__10TObjPlayerFUii((int) (0), (int) (temp_r3), (void *) (&sp8), (int) (2));
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

void update_collapse_and_destroy__10TObjPlayerFPv(u8 *arg0) {
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

#undef step_angle_clamped__10TObjPlayerFPvi

typedef struct Vec_800A48C4 {
    f32 x, y, z;
} Vec_800A48C4;

typedef struct Sub_800A48C4 {
    u8 pad0[0x18];
    s32 flags;
} Sub_800A48C4;

typedef struct Obj_800A48C4 {
    u8 pad0[0x30];
    s32 flags30;
    u8 pad34[0x60 - 0x34];
    s32 f60;
    u8 pad64[0xA4 - 0x64];
    Sub_800A48C4 *fA4;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0x2D4 - 0xBA];
    u16 target;
    u8 pad2D6[0x2FC - 0x2D6];
    Vec_800A48C4 pos;
    u8 pad308[0x326 - 0x308];
    s16 state;
    s16 f328;
} Obj_800A48C4;

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
u8 *get_player_by_client_id(s32);
M2C_UNK subtract_vector(void *, void *);
extern const f64 lbl_8043A8D0[];
void TObjPlayer__sub_800A48C4(Obj_800A48C4 *o);
}

extern "C" {

void update_knockback_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK advance_animation_playback();
#define apply_actor_gravity ((s32 (*)(void*, s32, f32))(apply_actor_gravity))
M2C_UNK move_with_wall_slide(void *);
#define step_angle_clamped__10TObjPlayerFPvi ((s32 (*)(void*, s32))(step_angle_clamped__10TObjPlayerFPvi))
M2C_UNK check_enemy_body_collisions(void *);
#define submit_cursor_candidate ((s32 (*)(void*, s32))(submit_cursor_candidate))
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
#define minimap_render_dot ((s32 (*)(void*, s32, s32, s32))(minimap_render_dot))

extern const f32 lbl_805D9A10;
extern const f32 lbl_805D9A14;

void update_knockback_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;

    advance_animation_playback();
    step_angle_clamped__10TObjPlayerFPvi(arg0, 0);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        apply_actor_gravity(arg0, 0, lbl_805D9A14);
        break;
    case 1:
        move_with_wall_slide(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805D9A10);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805D9A10);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 7;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        break;
    case 2:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity(arg0, 0, lbl_805D9A14);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            if ((s32) M2C_FIELD(arg0, s16 *, 0x388) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 8);
            }
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF9FF);
            M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        }
        break;
    }
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    submit_cursor_candidate(arg0, -1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}
void TObjPlayer__sub_800A48C4(Obj_800A48C4 *o) {
    Vec_800A48C4 v;
    u8 *e;
    s32 d;
    if (o->state >= 10 || o->state < 8) {
        e = get_player_by_client_id(o->target);
        if (e != NULL) {
            VecCopy__FP3VecPC3Vec(&v, e + 0x2FC);
            subtract_vector(&v, &o->pos);
            d = angle_difference_abs(o->f60, (s32)(lbl_8043A8D0[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
        } else {
            d = 0;
        }
        if (d < 0x2AAA) {
            o->state = 8;
            o->fB8 = 6;
        } else {
            o->state = 9;
            o->fB8 = 8;
        }
        o->f328 = 0;
    }
    o->fA4->flags |= 1;
    o->flags30 &= ~0x06240000;
}

}

#undef apply_actor_gravity
#undef step_angle_clamped__10TObjPlayerFPvi
#undef submit_cursor_candidate
#undef minimap_render_dot

struct Base14 { char pad[0x14]; };

struct VObj14 : Base14 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

struct Vec_800A4C4C { f32 x, y, z; };

struct Obj_800A4C4C {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x60 - 0x34];
    s32 f60;
    u8 pad64[0x2FC - 0x64];
    Vec_800A4C4C pos;
    u8 pad308[0x374 - 0x308];
    u32 f374;
    u8 pad378[0x388 - 0x378];
    s16 f388;
    u8 pad38A[0x38C - 0x38A];
    struct Obj_800A4C4C *f38C;
};

struct Vec_800A5A68 { f32 x, y, z; };

struct Sub_800A5A68 { u8 pad0[0x18]; u32 flags; };

struct Obj_800A5A68 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0xA4 - 0x34];
    Sub_800A5A68 *sub;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0x2A8 - 0xBA];
    struct Obj_800A5A68 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_800A5A68 pos;
    u8 pad308[0x326 - 0x308];
    s16 f326;
    s16 f328;
    u8 pad32A[0x37C - 0x32A];
    s16 mode;
};

struct Vec_800A5BBC { f32 x, y, z; };

struct Vec_800A5DC4 { f32 x, y, z; };

struct VBase18_800A4D9C { char pad[0x18]; };

struct VObj18_800A4D9C : VBase18_800A4D9C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(void *, void *);
};

struct VBase_18_217cff { char pad[0x18]; };

struct VObj_18_217cff : VBase_18_217cff {
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
    virtual s32 m18(u32, f32);
    virtual void m19();
    virtual M2C_UNK m20(u32, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(u32);
};

extern "C" {
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK TObjPlayer__sub_800A0554(void *);
M2C_UNK play_area_variant_sound__12TBoss3VoloptFi(void *);
M2C_UNK play_area_se_with_particle__12TBoss3VoloptFi(void *);
#define advance_animation_playback ((s32 (*)(void*, int))(advance_animation_playback))
M2C_UNK minimap_render_dot(void *, int, int, int);
void TObjPlayer__sub_800A5FA8(u8 *arg0);
f32 calc_distance_to_client__10TObjPlayerFiUsUi(void *, u16, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
Obj_800A4C4C *get_player_data__10TObjPlayerFi(s32);
#define get_ad_end_text_start__10TObjPlayerFv ((f32 (*)(f32, f32))(get_ad_end_text_start__10TObjPlayerFv))
s32 test_action_mask__10TObjPlayerFPvi(void *, int);
s32 angle_difference_abs(s32, s32);
M2C_UNK subtract_vector(void *, void *);
extern const f64 lbl_8043A8D0[];
extern s32 lbl_805D586C;
extern const f32 lbl_805D9A24;
s32 find_facing_partner__10TObjPlayerFPv(Obj_800A4C4C *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK subtract_vector(void *, void *);
extern const f64 lbl_8043A8D0[];
extern s32 *player_object_ptr_array;
extern f32 *lbl_805D504C;
void TObjPlayer__sub_800A5A68(Obj_800A5A68 *self);
f32 calc_xz_distance_sq__10TObjPlayerFiUiPv(void *, void *, Vec_800A5BBC *);
s32 get_field_0c__10TObjPlayerFPv(int);
f32 get_pos_x__10TObjPlayerFPv(int);

s32 angle_difference_abs(s32, s32);
extern const f64 lbl_8043A8D0[];
extern s32 *player_object_ptr_array;
extern const f32 lbl_805D9A70;
extern const f32 lbl_805D9A74;
s32 is_target_in_attack_arc__10TObjPlayerFPv(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK enemy_move_toward(void *, s32, Vec_800A5DC4 *, int, f32 *, f32);
s32 select_enemy_destination(void *, Vec_800A5DC4 *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800A5DC4 *);
#define turn_toward_target__10TObjPlayerFPv ((s32 (*)(void*))(turn_toward_target__10TObjPlayerFPv))
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
f32 horizontal_distance_squared(int, void *);

M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern f32 *lbl_805D504C;
extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A78;
void update_move_toward_target__10TObjPlayerFPv(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK enemy_set_heading_velocity(void *, s32, f32);
M2C_UNK calc_velocity_toward_destination(void *, Vec_800A5DC4, Vec_800A5DC4, f32);
s32 select_enemy_destination(void *, Vec_800A5DC4 *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800A5DC4 *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 newton_sqrtf(f32);
M2C_UNK spawn_particle_effect(void *, int);
#define step_angle_clamped__10TObjPlayerFPvi ((s32 (*)(void*, int))(step_angle_clamped__10TObjPlayerFPvi))
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
#define copy_target_state__14TObjEnePanarmsFPvPv ((s32 (*)(void*, int))(copy_target_state__14TObjEnePanarmsFPvPv))
u8 *get_enemy_entity(u16);
s32 objInBand__FP7GameObjf(void *, f32);

M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
#define get_player_by_client_id ((u8* (*)(u16))(get_player_by_client_id))
M2C_UNK minimap_render_dot(void *, int, int, int);
#define play_sound_effect ((s32 (*)(int, void*, int, int))(play_sound_effect))
#define mult_vec_array__10TObjPlayerFUii ((s32 (*)(int, s32, void*, int))(mult_vec_array__10TObjPlayerFUii))
M2C_UNK set_matrix_identity__10TObjPlayerFPv(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern void *lbl_805D5068;
extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A28;
extern const f32 lbl_805D9A2C;
extern const f32 lbl_805D9A30;
extern const f32 lbl_805D9A34;
extern const f32 lbl_805D9A38;
void TObjPlayer__sub_800A4D9C(u8 *arg0);
void TObjPlayer__sub_800A54B4(u8 *arg0);
#define apply_lookup_entry_effect__10TObjPlayerFPv ((s32 (*)(void*))(apply_lookup_entry_effect__10TObjPlayerFPv))
s32 update_angle__10TObjPlayerFPviPv(void *, s32, void *);
s32 check_path_obstructed(void *, void *);
extern const f32 lbl_805D9A44;
extern const f32 lbl_805D9A48;
extern const f32 lbl_805D9A4C;
extern const f32 lbl_805D9A50;
extern const f32 lbl_805D9A54;
extern const f32 lbl_805D9A58;
extern const f32 lbl_805D9A5C;
extern const f32 lbl_805D9A60;
extern const f32 lbl_805D9A64;
extern const f32 lbl_805D9A68;
extern const f32 lbl_805D9A6C;
Obj_800A4C4C *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, s32);
u16 obj_getField1c(void *);
s32 is_valid_and_active__10TObjPlayerFUi(u32);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D9A40;
void TObjPlayer__sub_800A5960(void *arg0);
}

extern "C" {

void advance_motion_state__10TObjPlayerFPv(u8 *arg0);
void enter_state_7__10TObjPlayerFPv(void *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
f32 horizontal_distance_squared(int, void *);

void enter_state_7__10TObjPlayerFPv(void *arg0) {
    void *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF99BFFFF);
}

extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A7C;

s32 find_facing_partner__10TObjPlayerFPv(Obj_800A4C4C *self) {
    Vec_800A4C4C v;
    Obj_800A4C4C *p;
    s32 i;
    if (self->f374 & 0x20) {
        return 1;
    }
    if ((self->f374 & 4) && self->f388 > 0) {
        for (i = 0; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (p == NULL || (p->f30 & 0x800)) {
                continue;
            }
            if (!(calc_distance_to_client__10TObjPlayerFiUsUi(self, i, &v) < lbl_805D9A24)) {
                continue;
            }
            if (angle_difference_abs(self->f60, (s32)(lbl_8043A8D0[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) >= 0x2AAA) {
                continue;
            }
            if (test_action_mask__10TObjPlayerFPvi(p, 0xE0) == 0) {
                continue;
            }
            VecCopy__FP3VecPC3Vec(&v, &self->pos);
            subtract_vector(&v, &p->pos);
            if (angle_difference_abs(p->f60, (s32)(lbl_8043A8D0[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) < 0x2AAA) {
                self->f38C = p;
                self->f374 |= 0x20;
                return 1;
            }
        }
    }
    return 0;
}

#define F(T, o) (*(T *)(arg0 + (o)))
void TObjPlayer__sub_800A4D9C(u8 *arg0) {
    u8 m50[0xC];
    u8 m44[0xC];
    Vec_800A5DC4 d;
    u8 *p;
    s32 floor;
    s32 e;
    u16 id;
    id = F(u16, 0x338);
    if (id < 0x1000) {
        p = get_player_by_client_id(id);
        if (p != NULL && get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
            F(u8 *, 0x2A8) = p;
        } else {
            F(u8 *, 0x2A8) = NULL;
        }
    } else if (id < 0x4000) {
        F(u8 *, 0x2A8) = get_enemy_entity(id);
    } else {
        F(u16, 0x338) = 0xFFFF;
        F(u8 *, 0x2A8) = NULL;
    }
    F(u32, 0x30) |= 0x06000000;
    {
        u32 *anim = F(u32 *, 0xA4);
        anim[6] &= ~1;
        advance_animation_playback(arg0, (int)anim);
    }
    step_angle_clamped__10TObjPlayerFPvi(arg0, 0);
    switch (F(s16, 0x328)) {
    case 0:
        if (!(F(u32, 0x30) & 0x800000)) {
            apply_actor_gravity(arg0, 0, lbl_805D9A14);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A28) != 0) {
            u8 *t = F(u8 *, 0x2A8);
            if (t == NULL) {
                goto fail;
            }
            {
                Vec_800A5DC4 dest = *(Vec_800A5DC4 *)(t + 0x2FC);
                if (select_enemy_destination(arg0, &dest, 1) == 0) {
                    goto fail;
                }
            }
            F(s16, 0x328) = 1;
            {
                Vec_800A5DC4 pos = F(Vec_800A5DC4, 0x2FC);
                copy_position_if_valid__10TObjPlayerFii(arg0, &pos);
            }
            VecCopy__FP3VecPC3Vec(&d, arg0 + 0x29C);
            subtract_vector(&d, arg0 + 0x2FC);
            {
                f32 dist = newton_sqrtf(d.x * d.x + d.z * d.z);
                dist -= lbl_805D9A2C;
                calc_velocity_toward_destination(arg0, F(Vec_800A5DC4, 0x290), F(Vec_800A5DC4, 0x29C), lbl_805D9A30 * dist);
            }
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD03), arg0 + 0x38, 0, 0);
            goto done;
        fail:
            F(s16, 0x328) = 2;
        done:
            spawn_particle_effect(arg0 + 0x38, 0xF3);
        }
        break;
    case 1:
        move_with_wall_slide(arg0);
        if (lbl_805D9A28 <= F(f32, 0xC0) && F(f32, 0xC0) <= lbl_805D9A34) {
            if ((e = lookup_entry_by_value__10TObjPlayerFPvf(lbl_805D5068, F(f32, 0xC0))) != 0) {
                push_matrix();
                set_matrix_identity__10TObjPlayerFPv(0);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_y(0, F(s32, 0x60));
                mult_vec_array__10TObjPlayerFUii(0, e, m44, 2);
                pop_matrix();
                if (F(VObj18_800A4D9C *, 0x3C4) != NULL) {
                    F(VObj18_800A4D9C *, 0x3C4)->m4(m44, m50);
                }
            }
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A38) != 0) {
            check_object_collisions__10TObjPlayerFPv(arg0);
            check_enemy_body_collisions(arg0);
            F(s16, 0x328) = 2;
            TObjPlayer__sub_800A5960((void *)(arg0));
            spawn_particle_effect(arg0 + 0x38, 0xF3);
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD04), arg0 + 0x38, 0, 0);
            F(u32, 0x374) &= ~0x10;
        }
        break;
    case 2:
        if (!(F(u32, 0x30) & 0x800000)) {
            apply_actor_gravity(arg0, 0, lbl_805D9A14);
        }
        if (F(u32, 0xB4) != 4) {
            ((M2C_UNK (*)(f32, void *, s32))enemy_set_heading_velocity)(lbl_805D9A14, arg0, F(s32, 0x60));
            F(u32, 0x30) &= 0xF9DFFFFF;
            F(u32 *, 0xA4)[6] |= 1;
        }
        break;
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}
#undef F

struct VBase_800A5154 { char pad[0x18]; };
struct VTgt_800A5154 : VBase_800A5154 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual f32 m20(void *, f32);
    virtual void m21(); virtual void m22();
    virtual void m23(void *);
};
struct VCb_800A5154 : VBase_800A5154 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(void *, void *);
};
struct Vec_800A5154 { f32 x, y, z; };
struct Anim_800A5154 { u8 pad[0x18]; u32 flags; };

struct Pl_800A5154 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x38 - 0x34];
    Vec_800A5154 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xA4 - 0x64];
    Anim_800A5154 *anim;
    u8 padA8[0xB4 - 0xA8];
    u32 fB4;
    u8 padB8[0xC0 - 0xB8];
    f32 fC0;
    u8 padC4[0x2A8 - 0xC4];
    VTgt_800A5154 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    u8 snd[0x328 - 0x2FC];
    s16 phase;
    u8 pad32A[0x338 - 0x32A];
    u16 target_id;
    u8 pad33A[0x374 - 0x33A];
    u32 f374;
    u8 pad378[0x37E - 0x378];
    s16 count;
    s32 f380;
    u8 pad384[0x388 - 0x384];
    s16 f388;
    s16 f38A;
    u8 pad38C[0x3C8 - 0x38C];
    VCb_800A5154 *cb;
};

#define calc_move_state__10TObjPlayerFPv ((s32 (*)(void*))(calc_move_state__10TObjPlayerFPv))
extern const f32 lbl_805D9A3C;
extern s32 lbl_805D506C;
#define o ((Pl_800A5154 *)arg0)
void TObjPlayer__sub_800A5154(void *arg0) {
    Vec_800A5154 w;
    Vec_800A5154 v;
    u16 id;

    id = o->target_id;
    if (id < 0x1000) {
        u8 *p = get_player_by_client_id(id);
        if (p != NULL && get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
            o->target = (VTgt_800A5154 *)p;
        } else {
            o->target = NULL;
        }
    } else if (id < 0x4000) {
        o->target = (VTgt_800A5154 *)get_enemy_entity(id);
    } else {
        o->target_id = 0xFFFF;
        o->target = NULL;
    }
    o->anim->flags |= 1;
    o->flags &= 0xF9FBFFFF;
    ((M2C_UNK (*)(void *))advance_animation_playback)(o);
    step_angle_clamped__10TObjPlayerFPvi(o, 0);
    switch (o->phase) {
    case 0:
        o->phase = 1;
        apply_actor_gravity(o, 0, lbl_805D9A14);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(o, 0x4003AD02), &o->pos, 0, 0);
        break;
    case 1:
        if (!(o->flags & 0x800000)) {
            apply_actor_gravity(o, 0, lbl_805D9A14);
        }
        if (objInBand__FP7GameObjf(o, lbl_805D9A3C) != 0) {
            if (o->target != NULL && o->target->m18(o, lbl_805D9A40) != 0) {
                f32 d = o->target->m20(o, lbl_805D9A40);
                o->target->m23(o);
                o->f388 = o->f388 + d;
                o->f380 = 0x10E;
                if (o->f38A < o->f388) {
                    o->f388 = o->f38A;
                }
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(o, 0x4003B241), o->snd, 0, 0);
            }
        }
        if (lbl_805D9A14 <= o->fC0 && o->fC0 <= lbl_805D9A3C) {
            s32 entry = lookup_entry_by_value__10TObjPlayerFPvf((void *)lbl_805D506C, o->fC0);
            if (entry != 0) {
                push_matrix();
                set_matrix_identity__10TObjPlayerFPv(0);
                post_translate_matrix(&o->pos);
                rotate_matrix_y(0, o->angle);
                mult_vec_array__10TObjPlayerFUii(0, entry, &v, 2);
                pop_matrix();
                if (o->cb != NULL) {
                    o->cb->m4(&v, &w);
                }
            }
        }
        if (o->fB4 != 4) {
            o->phase = 2;
            o->count++;
        }
        break;
    case 2:
        calc_move_state__10TObjPlayerFPv(o);
        if (o->count >= 2) {
            o->count = 0;
            o->f374 &= ~8;
        }
        o->flags &= ~0x200000;
        break;
    }
    check_object_collisions__10TObjPlayerFPv(o);
    check_enemy_body_collisions(o);
    minimap_render_dot(&o->pos, -0x5DB4, 1, 0);
    submit_cursor_candidate(o, -1);
}
#undef o

#define F(t, o) M2C_FIELD(arg0, t *, o)

void TObjPlayer__sub_800A54B4(u8 *arg0) {
    M2C_FIELD(F(u8 *, 0xA4), s32 *, 0x18) |= 1;
    F(s32, 0x30) &= 0xF9FBFFFF;
    if (F(u16, 0x338) < 0x1000) {
        u8 *p = get_player_by_client_id(F(u16, 0x338));
        if (p != NULL && get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
            F(u8 *, 0x2A8) = p;
        } else {
            F(u8 *, 0x2A8) = NULL;
        }
    } else if (F(u16, 0x338) < 0x4000) {
        F(u8 *, 0x2A8) = get_enemy_entity(F(u16, 0x338));
    } else {
        F(u16, 0x338) = 0xFFFF;
        F(u8 *, 0x2A8) = NULL;
    }
    switch (F(s16, 0x328)) {
    case 0:
        if (F(u8 *, 0x2A8) == NULL) {
            F(s16, 0x328) = 0;
            F(s32, 0x30) &= ~0x200000;
            F(s16, 0x33A) = 0;
        } else {
            Vec_800A5DC4 d;
            s32 a;
            VecCopy__FP3VecPC3Vec(&d, F(u8 *, 0x2A8) + 0x2FC);
            subtract_vector(&d, arg0 + 0x2FC);
            a = update_angle__10TObjPlayerFPviPv(arg0, M2C_FIELD(F(u8 *, 0x350), s32 *, 8), &d);
            if (!(F(s32, 0x30) & 0x800000)) {
                apply_actor_gravity(arg0, 0, lbl_805D9A14);
            }
            if (a < 0x10) {
                F(s16, 0x328) = 1;
                F(s16, 0xB8) = 2;
                TObjPlayer__sub_800A7798(arg0, lbl_805D504C[0]);
                if (check_path_obstructed(arg0, F(u8 *, 0x2A8) + 0x2FC) == 1) {
                    F(f32, 0x308) = F(f32, 0x30C) = F(f32, 0x310) = lbl_805D9A14;
                } else {
                    calc_velocity_toward_destination(arg0, *(Vec_800A5DC4 *)(arg0 + 0x2FC), *(Vec_800A5DC4 *)(F(u8 *, 0x2A8) + 0x2FC), M2C_FIELD(F(u8 *, 0x350), f32 *, 4));
                }
            }
        }
        break;
    case 1:
        F(s16, 0xB8) = 2;
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A44) != 0) {
            F(s16, 0x328) = 2;
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0 + 0x38, 0, 0);
        }
        break;
    case 2:
        F(s16, 0xB8) = 2;
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A48) != 0) {
            TObjPlayer__sub_800A5960((void *)(arg0));
        }
        if (lbl_805D9A2C <= F(f32, 0xC0) && F(f32, 0xC0) <= lbl_805D9A4C) {
            apply_lookup_entry_effect__10TObjPlayerFPv(arg0);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A50) != 0) {
            F(s16, 0x328) = 3;
        }
        break;
    case 3:
        F(s16, 0xB8) = 2;
        move_with_wall_slide(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A54) != 0) {
            F(s16, 0x328) = 4;
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0 + 0x38, 0, 0);
        }
        break;
    case 4:
        F(s16, 0xB8) = 2;
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A58) != 0) {
            TObjPlayer__sub_800A5960((void *)(arg0));
        }
        if (lbl_805D9A54 <= F(f32, 0xC0) && F(f32, 0xC0) <= lbl_805D9A5C) {
            apply_lookup_entry_effect__10TObjPlayerFPv(arg0);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A60) != 0) {
            F(s16, 0x328) = 5;
        }
        break;
    case 5:
        F(s16, 0xB8) = 2;
        move_with_wall_slide(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A64) != 0) {
            F(s16, 0x328) = 6;
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0 + 0x38, 0, 0);
        }
        break;
    case 6:
        F(s16, 0xB8) = 2;
        if (objInBand__FP7GameObjf(arg0, lbl_805D9A68) != 0) {
            TObjPlayer__sub_800A5960((void *)(arg0));
        }
        if (lbl_805D9A64 <= F(f32, 0xC0) && F(f32, 0xC0) <= lbl_805D9A6C) {
            apply_lookup_entry_effect__10TObjPlayerFPv(arg0);
        }
        if (F(u32, 0xB4) != 4) {
            F(s16, 0x328) = 7;
            F(s16, 0x33A) = lbl_805D504C[1];
        }
        break;
    case 7:
        if (--F(s16, 0x33A) < 0) {
            F(s16, 0x328) = 0;
            F(s32, 0x30) &= ~0x200000;
            F(s16, 0x33A) = 0;
        }
        break;
    }
    ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
    step_angle_clamped__10TObjPlayerFPvi(arg0, 0);
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    submit_cursor_candidate(arg0, -1);
}
#undef F

struct Obj_800A4C4C;
typedef struct Self_800A5960 Self_800A5960;
void TObjPlayer__sub_800A5960(void *arg0) {
    s32 n;
    s32 limit;
    s32 i;
    u8 *p;
    u32 self = (u32)arg0;
    if (obj_testFlags30((void *)self, 0x10) != 0) {
        limit = 0x4000;
        n = lbl_805D586C + lbl_805D5870;
    } else {
        n = lbl_805D586C;
        limit = 0x1000;
    }
    for (i = 0; i < n; i++) {
        p = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (is_valid_and_active__10TObjPlayerFUi((u32)p) != 0 && p != (u8 *)self &&
            obj_getField1c(p) < limit && !(*(s32 *)(p + 0x30) & 0x02000800) &&
            ((VObj_18_217cff *)p)->m18(self, lbl_805D9A40) != 0) {
            ((VObj_18_217cff *)p)->m20(self, lbl_805D9A40);
            ((VObj_18_217cff *)p)->m23(self);
        }
    }
}

void TObjPlayer__sub_800A5A68(Obj_800A5A68 *self) {
    Vec_800A5A68 v;
    switch (self->mode) {
    case 0:
    default:
        VecCopy__FP3VecPC3Vec(&v, &self->target->pos);
        subtract_vector(&v, &self->pos);
        f32 a = get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
        self->f326 = 4;
        if ((s32)(lbl_8043A8D0[0] * a) < 0x10) {
            self->f328 = 1;
            self->fB8 = 2;
            TObjPlayer__sub_800A7798(self, *lbl_805D504C);
        } else {
            self->f328 = 0;
            self->fB8 = 1;
        }
        break;
    case 2:
        self->f326 = 5;
        self->f328 = 0;
        self->fB8 = 3;
        break;
    case 1:
        self->f326 = 6;
        self->f328 = 0;
        self->fB8 = 4;
        break;
    }
    bind_enemy_combat_stats(self, 0, player_object_ptr_array[self->mode], 0);
    self->sub->flags |= 1;
    self->f30 &= 0xF9FBFFFF;
    self->f30 |= 0x200000;
}

s32 is_target_in_attack_arc__10TObjPlayerFPv(u8 *arg0) {
    Vec_800A5BBC v;
    f32 var_f29;
    f32 r;
    f32 dist;
    s32 ang;
    s32 flags;
    u8 *tgt;
    u8 *p;
    if (M2C_FIELD(arg0, s16 *, 0x326) >= 3) {
        tgt = M2C_FIELD(arg0, u8 **, 0x2A8);
        if (tgt != NULL && M2C_FIELD(arg0, u32 *, 0x318) != 0U && !(M2C_FIELD(tgt, s32 *, 0x30) & 0x02000800)) {
            dist = calc_xz_distance_sq__10TObjPlayerFiUiPv(arg0, tgt, &v);
            ang = angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32)(lbl_8043A8D0[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
            p = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2A8), u8 **, 0xA4);
            if (p != NULL) {
                var_f29 = M2C_FIELD(p, f32 *, 0xC);
            } else {
                var_f29 = lbl_805D9A70;
            }
            flags = M2C_FIELD(arg0, s32 *, 0x374);
            if (flags & 8) {
                M2C_FIELD(arg0, s16 *, 0x37C) = 2;
                if (dist <= (var_f29 + get_pos_x__10TObjPlayerFPv(player_object_ptr_array[M2C_FIELD(arg0, s16 *, 0x37C)])) * (var_f29 + get_pos_x__10TObjPlayerFPv(player_object_ptr_array[M2C_FIELD(arg0, s16 *, 0x37C)])) && ang <= get_field_0c__10TObjPlayerFPv(player_object_ptr_array[M2C_FIELD(arg0, s16 *, 0x37C)])) {
                    return 1;
                }
            } else if (flags & 0x10) {
                M2C_FIELD(arg0, s16 *, 0x37C) = 1;
                r = lbl_805D9A74 + var_f29;
                if (dist <= r * r && ang <= 0xAAA) {
                    return 1;
                }
            } else {
                M2C_FIELD(arg0, s16 *, 0x37C) = 0;
                if (dist <= (var_f29 + get_pos_x__10TObjPlayerFPv(player_object_ptr_array[M2C_FIELD(arg0, s16 *, 0x37C)])) * (var_f29 + get_pos_x__10TObjPlayerFPv(player_object_ptr_array[M2C_FIELD(arg0, s16 *, 0x37C)])) && ang <= get_field_0c__10TObjPlayerFPv(player_object_ptr_array[M2C_FIELD(arg0, s16 *, 0x37C)])) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void update_move_toward_target__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    u8 *temp_r5;
    u8 *temp_r8;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r5, s32 *, 0x18) |= 1;
    M2C_FIELD(arg0, s32 *, 0x30) &= 0xF9DBFFFF;
    temp_r8 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if (temp_r8 != NULL) {
        switch (M2C_FIELD(arg0, s16 *, 0x328)) {
        case 0: {
            Vec_800A5DC4 v = *(Vec_800A5DC4 *)(temp_r8 + 0x2FC);
            if (select_enemy_destination((void *) (arg0), &v, 1) != 0) {
                TObjPlayer__sub_800A7798((void *) (arg0), lbl_805D504C[3]);
                M2C_FIELD(arg0, s16 *, 0x328) = 1;
                {
                Vec_800A5DC4 v2 = *(Vec_800A5DC4 *)(arg0 + 0x2FC);
                copy_position_if_valid__10TObjPlayerFii((void *) (arg0), &v2);
                }
                apply_actor_gravity((void *) (arg0), 0, lbl_805D9A14);
            }
            break;
        }
        case 1: {
            Vec_800A5DC4 v3 = *(Vec_800A5DC4 *)(temp_r8 + 0x2FC);
            enemy_move_toward((void *) (arg0), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &v3, 0, lbl_805D504C, lbl_805D504C[2]);
            temp_f1 = horizontal_distance_squared((int) (arg0 + 0x29C), (void *) (arg0 + 0x38));
            if (temp_f1 < lbl_805D9A78) {
                M2C_FIELD(arg0, s32 *, 0x374) &= ~0x10;
            } else {
                M2C_FIELD(arg0, s32 *, 0x374) |= 0x10;
            }
            temp_f0 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC);
            if (temp_f1 < (temp_f0 * temp_f0)) {
                M2C_FIELD(arg0, s16 *, 0x328) = 2;
            }
            break;
        }
        case 2:
            M2C_FIELD(arg0, s32 *, 0x374) &= ~0x10;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            break;
        }
        ((M2C_UNK (*)(void *)) advance_animation_playback)((void *) (arg0));
        turn_toward_target__10TObjPlayerFPv((void *) (arg0));
        check_object_collisions__10TObjPlayerFPv((void *) (arg0));
        check_enemy_body_collisions((void *) (arg0));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
        submit_cursor_candidate((void *) (arg0), (int) (-1));
    }
}

void TObjPlayer__sub_800A5FA8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    advance_animation_playback((void *)(arg0), (int) (temp_r4));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        play_area_se_with_particle__12TBoss3VoloptFi((void *) (arg0 + 0x38));
        TObjPlayer__sub_800A0554((void *) (arg0 + 0x3A4));
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        play_area_variant_sound__12TBoss3VoloptFi((void *) (arg0 + 0x38));
        break;
    case 1:
        if (((VObj14 *) (arg0 + 0x3A4))->m5() == 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 4);
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

void advance_motion_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0xFFFFFFFE);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        apply_actor_gravity((void *) arg0, (int) (0), (f32) (lbl_805D9A14));
        return;
    case 1:
        if (horizontal_distance_squared((int) (M2C_FIELD(arg0, s32 *, 0x2A8) + 0x2FC), (void *) (arg0 + 0x2FC)) < lbl_805D9A7C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 2);
        break;
    }
}

}

#undef advance_animation_playback
#undef get_ad_end_text_start__10TObjPlayerFv
#undef turn_toward_target__10TObjPlayerFPv
#undef step_angle_clamped__10TObjPlayerFPvi
#undef copy_target_state__14TObjEnePanarmsFPvPv
#undef get_player_by_client_id
#undef play_sound_effect
#undef mult_vec_array__10TObjPlayerFUii
#undef apply_lookup_entry_effect__10TObjPlayerFPv
#undef calc_move_state__10TObjPlayerFPv

struct VBase800A64E8_800a64e8_800A4288 { char pad[0x14]; };
struct VObj800A64E8_800a64e8_800A4288 : VBase800A64E8_800a64e8_800A4288 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

struct RecoveredGlobal_800A6BE0_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800A6BE0_lbl_80500978 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_800A6B14 { f32 x, y, z; };

struct Tgt_800A6B14 { u8 pad[0x2fc]; Vec_800A6B14 pos; };

struct Obj_800A6B14 {
    u8 pad[0x60]; s32 angle;
    u8 pad2[0x2a8 - 0x64]; Tgt_800A6B14 *target;
    u8 pad3[0x2fc - 0x2ac]; Vec_800A6B14 pos;
};

struct VBase_800A6C54_a { char pad[0x14]; };

struct VObj_800A6C54_a : VBase_800A6C54_a {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

struct VBase_800A6C54_b { char pad[0x18]; };

struct VObj_800A6C54_b : VBase_800A6C54_b {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
};

struct Vec_800A6C54 { f32 x, y, z; };

struct VBase_800A677C { char pad[0x18]; };

struct VObj_800A677C : VBase_800A677C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16();
    virtual s32 m17(s32);
};

struct Obj_800A677C : VObj_800A677C {
    u16 f1C;
    u8 pad1E[0x30 - 0x1E];
    u32 f30;
    u8 pad34[0x2A8 - 0x34];
    u8 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_800A6B14 pos;
    u8 pad308[0x338 - 0x308];
    u16 f338;
    u8 pad33A[0x350 - 0x33A];
    f32 *range;
    u8 pad354[0x374 - 0x354];
    u32 f374;
    u32 f378;
};

extern "C" {
M2C_UNK transform_vec_by_camera__15TObjBoss2TunnelFiii(void *, void *, void *);
M2C_UNK rotate_matrix_x(int, void *);
extern RecoveredGlobal_800A6BE0_lbl_804FF5E8 lbl_804FF5E8;
extern RecoveredGlobal_800A6BE0_lbl_80500978 lbl_80500978;
extern s32 lbl_805D505C;
extern s32 lbl_805D5060;
extern const f32 lbl_805D9A14;
void step_cutscene_frame__10TObjPlayerFv(void);
#define VecCopy__FP3VecPC3Vec ((void (*)(Vec_800A6B14*, const Vec_800A6B14*))(VecCopy__FP3VecPC3Vec))
#define subtract_vector ((f32 (*)(void*, void*))(subtract_vector))
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_diff_s16(s32, s32);
void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1);
#define lbl_8043A8D0 (*(const f64 *)&lbl_8043A8D0)
void turn_toward_target__10TObjPlayerFPv(Obj_800A6B14 *self);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
#define TObjPlayer__sub_800A42C0 ((s32 (*)(void*))(TObjPlayer__sub_800A42C0))
#define TObjPlayer__sub_800A435C ((s32 (*)(void*))(TObjPlayer__sub_800A435C))
#define update_collapse_and_destroy__10TObjPlayerFPv ((s32 (*)(void*))(update_collapse_and_destroy__10TObjPlayerFPv))
#define update_entry_motion__10TObjPlayerFPv ((s32 (*)(void*))(update_entry_motion__10TObjPlayerFPv))
#define update_knockback_state__10TObjPlayerFPv ((s32 (*)(void*))(update_knockback_state__10TObjPlayerFPv))
M2C_UNK TObjPlayer__sub_800A49B4(void *);
#define TObjPlayer__sub_800A4D9C ((s32 (*)(void*))(TObjPlayer__sub_800A4D9C))
#define TObjPlayer__sub_800A5154 ((s32 (*)(void*))(TObjPlayer__sub_800A5154))
#define TObjPlayer__sub_800A54B4 ((s32 (*)(void*))(TObjPlayer__sub_800A54B4))
#define update_move_toward_target__10TObjPlayerFPv ((s32 (*)(void*))(update_move_toward_target__10TObjPlayerFPv))
#define TObjPlayer__sub_800A5FA8 ((s32 (*)(void*))(TObjPlayer__sub_800A5FA8))
#define advance_motion_state__10TObjPlayerFPv ((s32 (*)(void*))(advance_motion_state__10TObjPlayerFPv))
#define TObjPlayer__sub_800A62D4 ((s32 (*)(void*))(TObjPlayer__sub_800A62D4))
void init_render_flags__10TObjPlayerFPv(u8 *arg0);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8023DEE0(void *, int, int, int);
extern s32 lbl_805D5054;
extern s32 lbl_805D5058;
extern s32 actor_frame_tick;
extern const f32 lbl_805D9A40;
void TObjPlayer__sub_800A6EC0(u8 *arg0);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, int, int);

M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_anim_model__10TObjPlayerFPvf(void *, f32);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK matrix_mult_vec(int, Vec_800A6C54 *, void *);
M2C_UNK set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void step_cutscene_frame__10TObjPlayerFv(void);
extern Vec_800A6C54 lbl_8043A8A4;
extern RecoveredGlobal_800A6BE0_lbl_80500978 lbl_80500978;
extern u8 lbl_8058D490[];
extern s32 lbl_805D505C;
extern s32 lbl_805D5060;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern u8 *anim_model_matrix_array;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9A80;
extern const f32 lbl_805D9A8C;
extern const f32 lbl_805D9A90;
void TObjPlayer__sub_800A6C54(u8 *arg0);

s32 check_path_obstructed(void *, void *);
#define get_player_data__10TObjPlayerFi ((u8* (*)(s32))(get_player_data__10TObjPlayerFi))
#define obj_testFlags30 ((s32 (*)(void*, int))(obj_testFlags30))
#define obj_getField1c ((s32 (*)(void*))(obj_getField1c))
s32 get_current_floor();
#define get_field_3e4__10TObjPlayerFPv ((s32 (*)(int))(get_field_3e4__10TObjPlayerFPv))
#define get_player_by_client_id ((u8* (*)(u16))(get_player_by_client_id))
u8 *get_enemy_entity(u16);
extern M2C_UNK lbl_8043A8B0[];
extern M2C_UNK lbl_8043A8BC[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D9A24;
void find_nearest_target__10TObjPlayerFPv(Obj_800A677C *self);
}

extern "C" {

void TObjPlayer__sub_800A617C(void *arg0);
void TObjPlayer__sub_800A64E8(u8 *arg0);
void * create_ene_saver__10TObjPlayerFPv(void *arg0);
void free_resources__10TObjPlayerFv(void);
void init_render_flags__10TObjPlayerFPv(u8 *arg0);
void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK set_position_from__14TBoss4DarkFalzFPvPv(void *, void *);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneSaver__ct(void *, void *, void *);
M2C_UNK refresh_collision_body_centers(void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);

void TObjPlayer__sub_800A617C(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;
    void *temp_r3;
    void *temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    default:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 & 4) {
            M2C_FIELD(arg0, s16 *, 0x326) = 3;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
        } else if (temp_r4 & 1) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
        return;
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 2) {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
        }
        return;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 4) {
            M2C_FIELD(arg0, s16 *, 0x326) = 3;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
            return;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 3) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 1);
            temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) | 1);
            return;
        }
        break;
    }
}

M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK set_position_from__14TBoss4DarkFalzFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_800A04F0(void *);
M2C_UNK play_area_variant_sound__12TBoss3VoloptFi(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
#define advance_animation_playback ((s32 (*)(int))(advance_animation_playback))
M2C_UNK minimap_render_dot(void *, int, int, int);

struct VBase62D4 { char pad[0x14]; };
struct VObj62D4 : VBase62D4 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4(f32);
};

extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A40;
extern const f32 lbl_805D9A80;
extern const f32 lbl_805D9A84;
extern const f32 lbl_805D9A88;

#undef TObjPlayer__sub_800A62D4
void TObjPlayer__sub_800A62D4(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    s16 temp_r4_2;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFFFFF8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0xFFFFFFFE);
    advance_animation_playback((int) (arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
    default:
        temp_r4_2 = M2C_FIELD(arg0, s16 *, 0x37E);
        M2C_FIELD(arg0, s16 *, 0x37E) = (s16) (temp_r4_2 + 1);
        if (lbl_805D9A80 < (f32) temp_r4_2) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805D9A40;
            M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805D9A40;
            M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805D9A40;
            M2C_FIELD(arg0, s16 *, 0x37E) = 0;
            TObjPlayer__sub_800A04F0((void *) (arg0 + 0x3A4));
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
            play_area_variant_sound__12TBoss3VoloptFi((void *) (arg0 + 0x38));
        }
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x68) - lbl_805D9A84);
        if (M2C_FIELD(arg0, f32 *, 0x68) < lbl_805D9A88) {
            M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805D9A14;
        }
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 + lbl_805D9A84);
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
        if (((VObj62D4 *) (arg0 + 0x3A4))->m4(temp_f1) == 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        break;
    case 2:
        set_position_from__14TBoss4DarkFalzFPvPv((void *) (arg0), (void *) (arg0 + 0x50));
        update_prev_position__10TObjPlayerFPv((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805D9A40;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805D9A40;
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805D9A40;
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 1);
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}
#define TObjPlayer__sub_800A62D4 ((s32 (*)(void*))(TObjPlayer__sub_800A62D4))

void init_render_flags__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;

    set_position_from__14TBoss4DarkFalzFPvPv((void *) arg0, (void *) (arg0 + 0x50));
    refresh_collision_body_centers((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
}

void TObjPlayer__sub_800A64E8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if (((VObj800A64E8_800a64e8_800A4288 *)(arg0 + 0x3A4))->m8() != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            obj_clearFlags30((void *) (arg0), (int) (0x200000));
            obj_setFlags30((void *) (arg0), (int) (0x06040000));
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 0x40);
            temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
        }
        return;
    case 11:
        if (!(M2C_FIELD(arg0, s32 *, 0x374) & 0x40)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            return;
        }
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        obj_clearFlags30((void *) (arg0), (int) (0x200000));
        obj_setFlags30((void *) (arg0), (int) (0x06040000));
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 0x40);
        break;
    }
}

#define P_800A677C(p) ((Obj_800A677C *)(p))

s32 update_landing_recovery__10TObjPlayerFPv(u8 *arg0) {
    if (update_movement_status__10TObjPlayerFv() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
        case 1:
        case 2:
        case 0xB:
            if (((VObj14 *)(arg0 + 0x3A4))->m5() == 1) {
                M2C_FIELD(arg0, s32 *, 0x374) &= ~0x43;
                M2C_FIELD(arg0, s32 *, 0x374) |= 4;
                M2C_FIELD(arg0, s16 *, 0x326) = 3;
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
                M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                obj_clearFlags30(arg0, 0x06240000);
            }
            break;
        }
        return 1;
    }
    return 0;
}

s32 update_action_hold_recovery__10TObjPlayerFPv(u8 *arg0) {
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
        case 1:
        case 2:
        case 0xB:
            if (((VObj14 *)(arg0 + 0x3A4))->m5() == 1) {
                M2C_FIELD(arg0, s32 *, 0x374) &= ~0x43;
                M2C_FIELD(arg0, s32 *, 0x374) |= 4;
                M2C_FIELD(arg0, s16 *, 0x326) = 3;
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
                M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                obj_clearFlags30(arg0, 0x06240000);
            }
            break;
        }
        return 1;
    }
    return 0;
}

void find_nearest_target__10TObjPlayerFPv(Obj_800A677C *self) {
    if (self->f374 & 0x40) {
        self->f338 = 0xFFFF;
        self->target = NULL;
        return;
    }
    if (self->m17(0x1E) == 0) {
        return;
    }
    if (obj_testFlags30(self, 0x10) != 0) {
        s32 best_id;
        s32 i;
        u8 *p;
        s32 id;
        f32 best;
        f32 d;
        u16 tid;
        i = 0;
        best_id = 0xFFFF;
        Vec_800A6B14 v = *(Vec_800A6B14 *)lbl_8043A8B0;
        best = *self->range * *self->range;
        for (; i < lbl_805D586C + lbl_805D5870; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (p != NULL && p != (u8 *)self) {
                id = obj_getField1c(p);
                if ((u16)id < 0x4000 && (u16)id != self->f1C && !(P_800A677C(p)->f30 & 0x02000800)) {
                    VecCopy__FP3VecPC3Vec(&v, (Vec_800A6B14 *)(p + 0x2FC));
                    subtract_vector(&v, &self->pos);
                    d = v.x * v.x + v.z * v.z;
                    if (d < best && check_path_obstructed(self, p + 0x2FC) != 1) {
                        best_id = id;
                        best = d;
                    }
                }
            }
        }
        self->f338 = best_id;
        tid = self->f338;
        if (tid < 0x1000U) {
            u8 *q = get_player_by_client_id(tid);
            if (q != NULL) {
                if (get_field_3e4__10TObjPlayerFPv((int)q) == get_current_floor()) {
                    self->target = q;
                    return;
                }
            }
            self->target = NULL;
            return;
        }
        if (tid < 0x4000U) {
            self->target = get_enemy_entity(tid);
        }
        return;
    }
    {
        s32 best_id2;
        s32 best_id;
        u8 *p;
        u8 *best_p2;
        u8 *best_p;
        s32 i;
        f32 best2;
        f32 best;
        f32 d;
        Vec_800A6B14 v = *(Vec_800A6B14 *)lbl_8043A8BC;
        best_id = 0xFFFF;
        best_p2 = NULL;
        best_id2 = best_id;
        best_p = NULL;
        i = 0;
        best = *self->range * *self->range;
        best2 = best;
        for (; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (p == NULL) continue;
            if ((u16)obj_getField1c(p) >= 0x1000) continue;
            if (get_field_3e4__10TObjPlayerFPv((int)p) != get_current_floor()) continue;
            if (P_800A677C(p)->f30 & 0x02000800) continue;
            VecCopy__FP3VecPC3Vec(&v, (Vec_800A6B14 *)(p + 0x2FC));
            subtract_vector(&v, &self->pos);
            d = v.x * v.x + v.z * v.z;
            if ((*(u32 *)(p + 0x890) & self->f378) && d < best &&
                check_path_obstructed(self, p + 0x2FC) != 1) {
                best_id = obj_getField1c(p);
                best = d;
                best_p = p;
            }
            if (d < best2 && check_path_obstructed(self, p + 0x2FC) != 1) {
                best_id2 = obj_getField1c(p);
                best2 = d;
                best_p2 = p;
            }
        }
        if (best2 < lbl_805D9A24 && best_p2 != NULL) {
            self->f338 = best_id2;
            self->target = best_p2;
            return;
        }
        if (best_p != NULL) {
            self->f338 = best_id;
            self->target = best_p;
            return;
        }
        if (best_p2 != NULL) {
            self->f338 = best_id2;
            self->target = best_p2;
            return;
        }
        self->f338 = 0xFFFF;
        self->target = NULL;
    }
}

void turn_toward_target__10TObjPlayerFPv(Obj_800A6B14 *self) {
    Vec_800A6B14 d;
    VecCopy__FP3VecPC3Vec(&d, &self->target->pos);
    subtract_vector(&d, &self->pos);
    step_angle_clamped__10TObjPlayerFPvi(self,
        angle_diff_s16(self->angle, (s32)(lbl_8043A8D0 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z))));
}

void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < -0x238E) {
        var_r4 = -0x238E;
    } else if (var_r4 > 0x238E) {
        var_r4 = 0x238E;
    }
    M2C_FIELD(arg0, s32 *, 0x39C) = lerp_angle_half__10TObjPlayerFUsUs(M2C_FIELD(arg0, s32 *, 0x39C), var_r4);
}

extern void *tl_04;

typedef char RecoveredGlobal_800A6BE0_lbl_804FF5E8_size[sizeof(RecoveredGlobal_800A6BE0_lbl_804FF5E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800A6BE0_lbl_80500978_size[sizeof(RecoveredGlobal_800A6BE0_lbl_80500978) == 0x10 ? 1 : -1];
void step_cutscene_frame__10TObjPlayerFv(void) {
    if ((s32) lbl_805D505C == 0x15) {
        rotate_matrix_x((int) (0), (void *) (lbl_805D5060));
    }
    if ((s32) lbl_805D505C == 0x1A) {
        M2C_FIELD(&lbl_80500978.value, f32 *, 0) = (f32) lbl_805D9A14;
        M2C_FIELD(&lbl_80500978.value, f32 *, 4) = (f32) lbl_805D9A14;
        M2C_FIELD(&lbl_80500978.value, f32 *, 8) = (f32) lbl_805D9A14;
        transform_vec_by_camera__15TObjBoss2TunnelFiii((void *) (&lbl_804FF5E8.value), (void *) (&lbl_80500978.value), (void *) (&lbl_80500978.value));
    }
    lbl_805D505C += 1;
}

void TObjPlayer__sub_800A6C54(u8 *arg0) {
    s32 v;
    v = ((VObj_800A6C54_b *)arg0)->m9(lbl_805D9A8C, lbl_805D9A90, lbl_805D9A80);
    if (v != 0) {
        select_actor_lighting(arg0);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        push_matrix_from(NULL);
        set_position_vec3__10TObjPlayerFPvPv(0, arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        lbl_805D505C = 0;
        lbl_805D5060 = M2C_FIELD(arg0, s32 *, 0x39C);
        set_global_state__16TObjEneRe7BeruraFi((void *)step_cutscene_frame__10TObjPlayerFv);
        toggle_particle_effect__10TObjPlayerFv();
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 11:
            if (M2C_FIELD(arg0, s16 *, 0x328) == 1) {
                set_monitor_position_vec3__10TObjPlayerFPvPv(0, arg0 + 0x68);
            }
        case 1:
        case 2:
            if (((VObj_800A6C54_a *)(arg0 + 0x3A4))->m8() != 0) {
                lbl_805D5660 = some_id_805c6f74;
                lbl_805D5664 = lbl_805D7784;
                lbl_805D5668 = lbl_805D7780;
                ((VObj_800A6C54_a *)(arg0 + 0x3A4))->m6();
                v = 1;
                some_id_805c6f74 |= 1;
                if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                    v = 0;
                }
                if (v != 0) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                }
                some_id_805c6f74 &= ~1;
                ((VObj_800A6C54_a *)(arg0 + 0x3A4))->m7();
                lbl_805D7784 = lbl_805D5664;
                lbl_805D7780 = lbl_805D5668;
                some_id_805c6f74 = lbl_805D5660;
            }
            break;
        case 0:
            break;
        default:
            if (v == 1) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            } else {
                render_world_model__10TObjPlayerFPv(arg0);
            }
            break;
        }
        end_effect_render__13TParticleCtrlFv();
        set_global_state__16TObjEneRe7BeruraFi(NULL);
        VecCopy__FP3VecPC3Vec((Vec_800A6B14 *)(arg0 + 0x390), (Vec_800A6B14 *)&lbl_80500978);
        pop_matrix();
        restore_scene_lighting();
        if (!(M2C_FIELD(arg0, s32 *, 0x374) & 1)) {
            render_with_position_override__10TObjPlayerFPvPvi(arg0, 0, 0);
        }
    } else {
        push_matrix_from(lbl_8058D490);
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_flag__10TObjPlayerFv();
        render_anim_model__10TObjPlayerFPvf(arg0, M2C_FIELD(arg0, f32 *, 0xC0));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        push_matrix_from(anim_model_matrix_array + 0x4E0);
        {
            Vec_800A6C54 t = lbl_8043A8A4;
            matrix_mult_vec(0, &t, arg0 + 0x390);
        }
        pop_matrix();
    }
}

void TObjPlayer__sub_800A6EC0(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;
    if ((s32) lbl_805D5058 != (s32) actor_frame_tick) {
        lbl_805D5058 = actor_frame_tick;
        TObjPlayer__sub_8023DEE0((void *) (lbl_805D5054), (int) (0xE), (int) (0), (int) (0));
    }
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_800A42C0((void *) (arg0));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    {
        switch (temp_r0) {
        case 0:
            init_render_flags__10TObjPlayerFPv(arg0);
            break;
        case 1:
            advance_motion_state__10TObjPlayerFPv((void *) (arg0));
            break;
        case 2:
            TObjPlayer__sub_800A5FA8((void *) (arg0));
            break;
        case 3:
            update_move_toward_target__10TObjPlayerFPv((void *) (arg0));
            break;
        case 4:
            TObjPlayer__sub_800A54B4((void *) (arg0));
            break;
        case 5:
            TObjPlayer__sub_800A5154((void *) (arg0));
            break;
        case 6:
            TObjPlayer__sub_800A4D9C((void *) (arg0));
            break;
        case 7:
            TObjPlayer__sub_800A49B4((void *) (arg0));
            break;
        case 8:
            update_knockback_state__10TObjPlayerFPv((void *) (arg0));
            break;
        case 9:
            update_entry_motion__10TObjPlayerFPv((void *) (arg0));
            break;
        case 10:
            update_collapse_and_destroy__10TObjPlayerFPv((void *) (arg0));
            break;
        case 11:
            TObjPlayer__sub_800A62D4((void *) (arg0));
            break;
        }
    }
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x30) & 0x02000800)) {
        M2C_FIELD(arg0, s16 *, 0x37E) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 0x40);
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    TObjPlayer__sub_800A435C((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x2B4) + lbl_805D9A40);
}

void * create_ene_saver__10TObjPlayerFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3CC);
    if (o2 != NULL) {
        o2 = TObjEneSaver__ct(o2, o, arg0);
    }
    return o2;
}

#define player_object_ptr_array (*(u32 *)&player_object_ptr_array)
extern u32 lbl_805D5050;
#define lbl_805D5064 (*(u32 *)&lbl_805D5064)
#define lbl_805D5068 (*(u32 *)&lbl_805D5068)
#define lbl_805D506C (*(u32 *)&lbl_805D506C)

void free_resources__10TObjPlayerFv(void) {
    if ((u32) player_object_ptr_array != 0U) {
        free__11TOBoss4RockFUi((void*)player_object_ptr_array);
        player_object_ptr_array = 0U;
    }
    if ((u32) lbl_805D5064 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5064, 1);
        lbl_805D5064 = 0U;
    }
    if ((u32) lbl_805D5068 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5068, 1);
        lbl_805D5068 = 0U;
    }
    if ((u32) lbl_805D506C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D506C, 1);
        lbl_805D506C = 0U;
    }
    if ((u32) lbl_805D5050 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5050, 1);
        lbl_805D5050 = 0U;
    }
}

}
#undef VecCopy__FP3VecPC3Vec
#undef subtract_vector
#undef lbl_8043A8D0
#undef TObjPlayer__sub_800A42C0
#undef TObjPlayer__sub_800A435C
#undef update_collapse_and_destroy__10TObjPlayerFPv
#undef update_entry_motion__10TObjPlayerFPv
#undef update_knockback_state__10TObjPlayerFPv
#undef TObjPlayer__sub_800A4D9C
#undef TObjPlayer__sub_800A5154
#undef TObjPlayer__sub_800A54B4
#undef update_move_toward_target__10TObjPlayerFPv
#undef TObjPlayer__sub_800A5FA8
#undef advance_motion_state__10TObjPlayerFPv
#undef TObjPlayer__sub_800A62D4
#undef get_player_data__10TObjPlayerFi
#undef obj_testFlags30
#undef obj_getField1c
#undef get_field_3e4__10TObjPlayerFPv
#undef get_player_by_client_id
#undef advance_animation_playback
#undef player_object_ptr_array
#undef lbl_805D5064
#undef lbl_805D5068
#undef lbl_805D506C
