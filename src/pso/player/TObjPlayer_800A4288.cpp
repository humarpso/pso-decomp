#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base14 { char pad[0x14]; };

struct VObj14 : Base14 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

typedef s32 M2C_UNK;
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

extern "C" {
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK TObjPlayer__sub_800A0554(void *);
M2C_UNK TBoss3Volopt__sub_800D8B30(void *);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK advance_animation_playback(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
void TObjPlayer__sub_800A5FA8(u8 *arg0);
f32 TObjPlayer__sub_80018780(void *, u16, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
Obj_800A4C4C *get_player_data__10TObjPlayerFi(s32);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 test_action_mask__10TObjPlayerFPvi(void *, int);
s32 angle_difference_abs(s32, s32);
M2C_UNK subtract_vector(void *, void *);
extern const f64 lbl_8043A8D0[];
extern s32 lbl_805D586C;
extern const f32 lbl_805D9A24;
s32 TObjPlayer__sub_800A4C4C(Obj_800A4C4C *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK subtract_vector(void *, void *);
extern const f64 lbl_8043A8D0[];
extern s32 *lbl_805D5044;
extern f32 *lbl_805D504C;
void TObjPlayer__sub_800A5A68(Obj_800A5A68 *self);
f32 TObjPlayer__sub_800186E8(void *, void *, Vec_800A5BBC *);
s32 get_field_0c__10TObjPlayerFPv(int);
f32 get_pos_x__10TObjPlayerFPv(int);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
extern const f64 lbl_8043A8D0[];
extern s32 *lbl_805D5044;
extern const f32 lbl_805D9A70;
extern const f32 lbl_805D9A74;
s32 TObjPlayer__sub_800A5BBC(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK enemy_move_toward(void *, s32, Vec_800A5DC4 *, int, f32 *, f32);
s32 select_enemy_destination(void *, Vec_800A5DC4 *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800A5DC4 *);
M2C_UNK TObjPlayer__sub_800A6B14(void *);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
f32 horizontal_distance_squared(int, void *);
M2C_UNK advance_animation_playback(void *, int);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern f32 *lbl_805D504C;
extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A78;
void TObjPlayer__sub_800A5DC4(u8 *arg0);
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
M2C_UNK TObjPlayer__sub_800A5960(void *);
M2C_UNK step_angle_clamped__10TObjPlayerFPvi(void *, int);
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
u8 *get_enemy_entity(u16);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *, int);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
u8 *get_player_by_client_id(u16);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TObjPlayer__sub_803D8960(int, s32, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
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
M2C_UNK apply_lookup_entry_effect__10TObjPlayerFPv(void *);
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

s32 TObjPlayer__sub_800A4C4C(Obj_800A4C4C *self) {
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
            if (!(TObjPlayer__sub_80018780(self, i, &v) < lbl_805D9A24)) {
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
                TObjPlayer__sub_803D8CD4(0);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_y(0, F(s32, 0x60));
                TObjPlayer__sub_803D8960(0, e, m44, 2);
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
            TObjPlayer__sub_800A5960(arg0);
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
            TObjPlayer__sub_800A5960(arg0);
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
            TObjPlayer__sub_800A5960(arg0);
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
            TObjPlayer__sub_800A5960(arg0);
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
    bind_enemy_combat_stats(self, 0, lbl_805D5044[self->mode], 0);
    self->sub->flags |= 1;
    self->f30 &= 0xF9FBFFFF;
    self->f30 |= 0x200000;
}

s32 TObjPlayer__sub_800A5BBC(u8 *arg0) {
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
            dist = TObjPlayer__sub_800186E8(arg0, tgt, &v);
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
                if (dist <= (var_f29 + get_pos_x__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) * (var_f29 + get_pos_x__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) && ang <= get_field_0c__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) {
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
                if (dist <= (var_f29 + get_pos_x__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) * (var_f29 + get_pos_x__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) && ang <= get_field_0c__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void TObjPlayer__sub_800A5DC4(u8 *arg0) {
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
        TObjPlayer__sub_800A6B14((void *) (arg0));
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
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        TObjPlayer__sub_800A0554((void *) (arg0 + 0x3A4));
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        TBoss3Volopt__sub_800D8B30((void *) (arg0 + 0x38));
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
