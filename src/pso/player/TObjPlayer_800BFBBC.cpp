#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_800C00F4_800BFBBC { char pad[0x18]; };

struct VObj_800C00F4_800BFBBC : Base_800C00F4_800BFBBC {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m48();
};

struct VBase_18_ca64a0 { char pad[0x18]; };

struct VObj_18_ca64a0 : VBase_18_ca64a0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
};

#include <stddef.h>
struct VPad18 { char pad[0x18]; };

struct VCls18 : VPad18 {
    virtual M2C_UNK vm0();
    virtual M2C_UNK vm1();
    virtual M2C_UNK vm2();
    virtual M2C_UNK vm3();
    virtual M2C_UNK vm4();
    virtual M2C_UNK vm5();
    virtual M2C_UNK vm6();
    virtual M2C_UNK vm7();
    virtual M2C_UNK vm8();
    virtual M2C_UNK vm9();
    virtual M2C_UNK vm10();
    virtual M2C_UNK vm11();
    virtual M2C_UNK vm12();
    virtual M2C_UNK vm13();
    virtual M2C_UNK vm14();
    virtual M2C_UNK vm15();
    virtual M2C_UNK vm16();
    virtual M2C_UNK vm17(M2C_UNK, s16);
};

struct RecoveredFields_800C1478_arg0 {
    u8 unknown_0[0x30];
    s32 field_30;
    u8 unknown_34[0x70];
    void * field_A4;
    u8 unknown_A8[0x10];
    s16 field_B8;
    u8 unknown_BA[0x1EE];
    void * field_2A8;
    u8 unknown_2AC[0x60];
    f32 field_30C;
    u8 unknown_310[0x16];
    s16 field_326;
    u8 unknown_328[0x10];
    u16 field_338;
    u8 unknown_33A[0x3A];
    s16 field_374;
    u8 unknown_376[0xA];
    s16 field_380;
};

struct RecoveredFields_800C1478_temp_r3 {
    u8 unknown_0[0x30];
    s32 field_30;
};

struct RecoveredFields_800C1478_temp_r3_2 {
    u8 unknown_0[0x18];
    s32 field_18;
};

struct Sub_800BFCD4 { u8 pad[0xc]; f32 fc; };

struct Obj_800BFCD4 { u8 pad[0xa4]; Sub_800BFCD4 *fa4; u8 pad2[0x368 - 0xa8]; s32 f368; };

struct G_800BFCD4 { u8 pad[0x68]; f32 f68; u8 pad2[0x1c]; f32 f88; };

struct Vec_800C1224 { f32 x, y, z; };

struct VBase_18_800C1224 { char pad[0x18]; };

struct VObj_18_800C1224 : VBase_18_800C1224 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16();
    virtual s32 m17(s32);
};

#include "pso/enemy/TObjEneLappy.h"

struct VBase_18_800C0588 { char pad[0x18]; };

struct VObj_18_800C0588 : VBase_18_800C0588 {
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
    virtual M2C_UNK m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual M2C_UNK m57();
};

struct Sp800C0D3C { s32 a; s32 b; s32 c; };

struct Vec_800C1144 { f32 x, y, z; };

struct Position_800C08A0 { f32 x, y, z; };

struct VBase_18_800C0E30 { char pad[0x18]; };
struct VObj_18_800C0E30 : VBase_18_800C0E30 {
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
    virtual s32 m17(int);
};

struct Vec_800C0E30 { s32 x, y, z; };

struct Vec_800C0318 { f32 x, y, z; };

struct Lappy_800C0318 { u8 pad0[0x2FC]; Vec_800C0318 pos; f32 vx; f32 vy; f32 vz; };

extern "C" {
extern const f32 lbl_805D9F80;
extern const f32 lbl_805D9F84;
extern const f32 lbl_805D9F68;
s32 remap_area_sound_id(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D9F28;
extern const f32 lbl_805D9F2C;
void play_walk_sound__12TObjEneLappyFPv(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
extern const f32 lbl_805D9F44;
extern const f32 lbl_805D9F48;
void set_boss4_state__10TObjPlayerFPv(void *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK fn_800C20B0();
extern const f32 lbl_805D9F24;
extern const f32 lbl_805D9F2C;
extern const f32 lbl_805D9F4C;
s32 play_sound_effect(s32, u32, M2C_UNK, s32);
s32 remap_area_sound_id(s32, s32);
M2C_UNK distribute_experience(void *);
M2C_UNK query_lobby_state__10TObjPlayerFPv(void *);
void set_flag_and_notify__10TObjPlayerFPv(void *arg0);
void handle_death__10TObjPlayerFPv(u8 *arg0);
s32 play_sound_effect(s32, u32, M2C_UNK, s32);
s32 remap_area_sound_id(s32, s32);
s32 get_player_by_client_id(u16);
f32 xyz_distance_squared(void *, s32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
void set_flag_and_notify__10TObjPlayerFPv(void *arg0);
extern const f32 lbl_805D9F50;
void enter_state_4__10TObjPlayerFPv(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
extern const f32 lbl_805D9F4C;
void set_action_state_3__10TObjPlayerFPv(void *arg0);
s32 obj_testFlags30(void *, M2C_UNK);
void enter_down_state__10TObjPlayerFPv(void *arg0);
s32 render_with_position_override__10TObjPlayerFPvPvi(void *, int, int);
s32 obj_testFlags30(void *, M2C_UNK);
s32 init_lights__9TObjEneDDFv();
s32 TObjEneDD__sub_800B9B24(f32);
s32 set_speed_params__12TObjEneLappyFPvi(void *, int);
s32 toggle_particle_effect__10TObjPlayerFv();
s32 is_item_light_interaction_blocked();
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
s32 render_world_model__10TObjPlayerFPv(void *);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 end_effect_render__13TParticleCtrlFv();
s32 scale_matrix(int, f32, f32, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 draw_chunk_object(int);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern s32 *lbl_805D5168;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9F28;
extern const f32 lbl_805D9F30;
extern const f32 lbl_805D9F34;
extern const f32 lbl_805D9F38;
extern const f32 lbl_805D9F3C;
extern const f32 lbl_805D9F40;
void render__12TObjEneLappyFPv(u8 *arg0);
u16 find_nearest_visible_player(void *, int, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, M2C_UNK);
s32 get_instance__6TLobbyFv();
s32 check_demo_mode__10TObjPlayerFv();
void TObjPlayer__sub_800BFF54(void *);
void set_boss4_state__10TObjPlayerFPv(void *arg0);
M2C_UNK apply_move_friction__10TObjPlayerFPv(void *arg0);
void update_idle_state__12TObjEneLappyFv(void *);
M2C_UNK fn_800C20C0();
u8 *find_active_entity_by_id(u16);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 play_sound_effect(s32, u32, M2C_UNK, s32);
extern const f32 lbl_805D9F8C;
extern const f32 lbl_805D9F90;
void run_task__12TObjEneLappyFPv(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D9F4C;
void update_invuln_timer__10TObjPlayerFPv(u8 *arg0);
extern f32 *lbl_80500BF8[];
extern G_800BFCD4 lbl_80492E18;
void apply_variant_speeds__12TObjEneLappyFPv(Obj_800BFCD4 *self);
u16 find_nearest_visible_player(void *, int, f32);
s32 check_path_obstructed(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, M2C_UNK);
s32 obj_getField1c(void *);
f32 xz_distance_squared(void *, void *);
M2C_UNK subtract_vector(void *, void *);
extern M2C_UNK lbl_8043BA08[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D9F4C;
extern const f32 lbl_805D9F60;
extern const f32 lbl_805D9F88;
void select_target__12TObjEneLappyFPv(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnVector(void *, void *, s32);
M2C_UNK project_actor_to_ground(void *, void *, M2C_UNK);
s32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(s32, void *, void *);
s32 rotate_matrix_y(int, int);
M2C_UNK subtract_vector(void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrices(s32);
extern f32 lbl_8058D490[3][4];
extern const f32 lbl_805D9F24;
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK enemy_set_heading_velocity(void *, int, f32);
M2C_UNK enemy_turn_toward_dest(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 remap_area_sound_id(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
s32 play_sound_effect(s32, u32, M2C_UNK, s32);
extern const f32 lbl_805D9F4C;
extern const f32 lbl_805D9F54;
extern const f32 lbl_805D9F58;
extern const f32 lbl_805D9F5C;
extern const f32 lbl_805D9F60;
extern const f32 lbl_805D9F64;
void update_attacking__12TObjEneLappyFPv(u8 *arg0);
s32 select_enemy_destination(void *, struct Sp800C0D3C *, M2C_UNK);
void enter_moving_state__12TObjEneLappyFPv(void *arg0);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK project_actor_to_ground(void *, void *, M2C_UNK);
extern const f32 lbl_805D9F7C;
void enter_idle_state__12TObjEneLappyFPv(void *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 find_nearest_visible_player(void *, int, f32);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK enemy_backstep_from_point(void *, void *, f32);
M2C_UNK enemy_wander_home(void *, int, f32, f32, f32);
f32 update_enemy_wander_move(void *, void *, int, f32);
M2C_UNK enemy_set_heading_velocity(void *, int, f32);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, void *, void *);
s32 obj_testFlags30(void *, M2C_UNK);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
s32 advance_flee_step__12TObjEneLappyFv(void *);
void play_walk_sound__12TObjEneLappyFPv(u8 *arg0);
s32 remap_area_sound_id(s32, s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 angle_difference_abs(int, int);
s32 lerp_angle_half__10TObjPlayerFUsUs(int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_persistent_sound(s32, void *, void *, int, int);
s32 play_sound_effect(s32, u32, M2C_UNK, s32);
extern const f64 lbl_8043BA18;
extern const f32 lbl_805D9F24;
extern const f32 lbl_805D9F2C;
extern const f32 lbl_805D9F4C;
extern const f32 lbl_805D9F50;
extern const f32 lbl_805D9F68;
extern const f32 lbl_805D9F6C;
extern const f32 lbl_805D9F70;
extern const f32 lbl_805D9F74;
extern const f32 lbl_805D9F78;
extern const f32 lbl_805D9F7C;
void update_moving__12TObjEneLappyFv(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
s32 check_path_obstructed(void *, void *);
void set_boss4_state__10TObjPlayerFPv(void *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
void update_hurt__12TObjEneLappyFv(u8 *arg0);
}

extern "C" {

s32 update_action_hold__12TObjEneLappyFi(s32 arg0);
void clear_flags_60__10TObjPlayerFPv(u8 *arg0);
void set_flag_and_notify__10TObjPlayerFPv(void *arg0);
s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0);
s32 update_movement_status__10TObjPlayerFv();
s32 update_action_hold_status__10TObjPlayerFv();
M2C_UNK project_actor_to_ground(void *, void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK send_entity_set_flags__6TLobbyFPv();

void clear_flags_60__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (temp_r4 & 0x60) {
        M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r4 & 0xFFFFFF9F);
        project_actor_to_ground(arg0, arg0 + 0x38, 0);
        obj_setFlags30(arg0, 0x800000);
    }
}

s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0) {
    if (update_movement_status__10TObjPlayerFv() != 0) {
        clear_flags_60__10TObjPlayerFPv((u8 *)(arg0));
        return 1;
    }
    return 0;
}

s32 update_action_hold__12TObjEneLappyFi(s32 arg0) {
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        clear_flags_60__10TObjPlayerFPv((u8 *)(arg0));
        return 1;
    }
    return 0;
}

void set_flag_and_notify__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (!(temp_r4 & 0x80)) {
        M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r4 | 0x80);
        send_entity_set_flags__6TLobbyFPv();
    }
}

void apply_variant_speeds__12TObjEneLappyFPv(Obj_800BFCD4 *self) {
    f32 *p;
    if (self->f368 >= 2) {
        return;
    }
    self->fa4->fc = lbl_80500BF8[self->f368][0];
    p = lbl_80500BF8[self->f368];
    lbl_80492E18.f68 = p[1];
    lbl_80492E18.f88 = p[2];
}

s32 TObjEneLappy::advance_flee_step() {
    TObjEneLappy *arg0 = this;
    LappyVec sp20;
    LappyVec sp14;
    LappyVec sp8;
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    VecCopy__FP3VecPC3Vec(&arg0->previous_position, &arg0->position);
    VecCopy__FP3VecPC3Vec(&sp20, &arg0->center);
    vec3_add_to(&sp20, &arg0->velocity);
    if (arg0->has_update_cadence(0x1E) != 0) {
        if (csnVector(&arg0->center, &sp20, -1) != 0U) {
            return 0;
        }
        if (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D9F24) {
            var_r30 = -1;
        } else {
            var_r30 = 1;
        }
        var_r29 = 0;
        var_r31 = 0;
loop_7:
        if (var_r29 == 0) {
            VecCopy__FP3VecPC3Vec(&sp14, &arg0->velocity);
        } else {
            push_matrix_from(&lbl_8058D490);
            rotate_matrix_y((int)(0), (int)(var_r30 * var_r31));
            rotate_vector_by_matrix(0, &arg0->velocity, &sp14);
            pop_matrices(1);
        }
        VecCopy__FP3VecPC3Vec(&sp8, &arg0->position);
        vec3_add_to(&sp8, &sp14);
        if (((s32)project_actor_to_ground((void *)(arg0), (void *)(&sp8), (M2C_UNK)(0))) == 1) {
            VecCopy__FP3VecPC3Vec(&arg0->position, &sp8);
            VecCopy__FP3VecPC3Vec(&arg0->velocity, &arg0->position);
            subtract_vector(&arg0->velocity, &arg0->previous_position);
            return 1;
        }
        var_r29 += 1;
        var_r31 += 0x1000;
        if (var_r29 >= 0xF) {
            return 0;
        }
        goto loop_7;
    }
    if (((s32)project_actor_to_ground((void *)(arg0), (void *)(&sp20), (M2C_UNK)(0))) == 1) {
        VecCopy__FP3VecPC3Vec(&arg0->position, &sp20);
        VecCopy__FP3VecPC3Vec(&arg0->velocity, &arg0->position);
        subtract_vector(&arg0->velocity, &arg0->previous_position);
        return 1;
    }
    return 0;
}

void play_walk_sound__12TObjEneLappyFPv(u8 *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 3) && ((objInBand__FP7GameObjf(arg0, lbl_805D9F28) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D9F2C) != 0))) {
        play_sound_effect(remap_area_sound_id(0x3D20C, 5), (u32) (arg0 + 0x38), 0, 0);
    }
}
void TObjPlayer__sub_800BFF54(void * _w0) {  }

void render__12TObjEneLappyFPv(u8 *arg0) {
    s32 temp_r3;
    if (obj_testFlags30((void *)((void *) (arg0)), (M2C_UNK)((int) (0x02000000))) == 0) {
        if (M2C_FIELD(arg0, s16 *, 0x374) & 1) {
            *lbl_805D5168 &= 0xFFFFFFF7;
        } else {
            *lbl_805D5168 |= 8;
        }
        temp_r3 = ((VObj_18_ca64a0 *)(arg0))->m9(lbl_805D9F30, lbl_805D9F34, lbl_805D9F28);
        if (temp_r3 != 0) {
            set_speed_params__12TObjEneLappyFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x368)));
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            select_actor_lighting((void *) (arg0));
            toggle_particle_effect__10TObjPlayerFv();
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            if (M2C_FIELD(arg0, s16 *, 0x374) & 0x400) {
                scale_matrix((int) (0), (f32) (lbl_805D9F38), (f32) (lbl_805D9F3C), (f32) (lbl_805D9F38));
                TObjEneDD__sub_800B9B24((f32) (lbl_805D9F40));
            }
            some_id_805c6f74 &= 0xFFFFFBFF;
            set_global_flag__10TObjPlayerFv();
            if (is_item_light_interaction_blocked() == 1) {
                draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
            } else {
                some_id_805c6f74 |= 0x01000000;
                if (temp_r3 == 1) {
                    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
                } else {
                    render_world_model__10TObjPlayerFPv((void *) (arg0));
                }
                some_id_805c6f74 &= 0xFEFFFFFF;
            }
            clear_global_state__10TObjPlayerFv();
            if (M2C_FIELD(arg0, s16 *, 0x374) & 0x400) {
                init_lights__9TObjEneDDFv();
            }
            pop_matrix();
            restore_scene_lighting();
            end_effect_render__13TParticleCtrlFv();
            if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && (obj_testFlags30((void *)((void *) (arg0)), (M2C_UNK)((int) (0x800000))) != 0)) {
                render_with_position_override__10TObjPlayerFPvPvi((void *) (arg0), (int) (0), (int) (0));
            }
        }
    }
}

void set_boss4_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    s16 temp_r4_2;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (!(temp_r4 & 2)) {
        temp_r4_2 = temp_r4 | 2;
        M2C_FIELD(arg0, s16 *, 0x374) = temp_r4_2;
        M2C_FIELD(arg0, s16 *, 0x394) = 0;
        M2C_FIELD(arg0, s32 *, 0x390) = (s32) (lbl_805D9F44 * (lbl_805D9F48 * calc_boss4_scale__10TObjPlayerFi(arg0)));
    }
    M2C_FIELD(arg0, s16 *, 0x326) = 1;
    M2C_FIELD(arg0, s16 *, 0x37A) = 3;
    ((struct VObj_800C00F4_800BFBBC *)arg0)->m48();
    M2C_FIELD(arg0, s16 *, 0x32C) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0xA00);
}
M2C_UNK apply_move_friction__10TObjPlayerFPv(void *arg0) {
    fn_800C20B0();
    advance_animation_playback((void *)(arg0));
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity(arg0, 0, lbl_805D9F4C);
    }
    refresh_collision_body_centers(arg0);
    if (M2C_FIELD(arg0, f32 *, 0xC0) < (lbl_805D9F24 * (lbl_805D9F2C * M2C_FIELD(arg0, f32 *, 0xC8)))) {
        move_with_wall_slide(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805D9F24);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805D9F24);
    }
}
void handle_death__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC0);
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x374);
    if (temp_r3 & 2) {
        if (!(temp_r3 & 4)) {
            M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r3 | 4);
            play_sound_effect((s32)(((M2C_UNK)remap_area_sound_id((s32)(0x3AD13), (s32)(5)))), (u32)(arg0 + 0x38), (M2C_UNK)(0), (s32)(0));
            query_lobby_state__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        }
    } else if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) {
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        if (!(M2C_FIELD(arg0, s16 *, 0x374) & 0x10)) {
            play_sound_effect((s32)(((M2C_UNK)remap_area_sound_id((s32)(0x3AE10), (s32)(5)))), (u32)(arg0 + 0x38), (M2C_UNK)(0), (s32)(0));
            distribute_experience(arg0);
            set_flag_and_notify__10TObjPlayerFPv(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x380) = 0;
    }
}

void update_hurt__12TObjEneLappyFv(u8 *arg0) {
    advance_animation_playback(arg0);
    Lappy_800C0318 *self = (Lappy_800C0318 *)arg0;
    Vec_800C0318 v = self->pos;
    v.x += self->vx;
    v.z += self->vz;
    if (check_path_obstructed(arg0, &v) == 0) {
        move_with_wall_slide(arg0);
    } else {
        self->vx = self->vz = 0.0f;
    }
    self->vx *= 0.5f;
    self->vz *= 0.5f;
    apply_actor_gravity(arg0, 0, 0.0f);
    update_collisions__10TObjPlayerFPv(arg0);
    if (M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
        M2C_FIELD(arg0, s32 *, 0x30) &= ~0x200;
        M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
        if (M2C_FIELD(arg0, s16 *, 0x374) & 2) {
            set_boss4_state__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        }
    }
}

void enter_state_4__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    if (M2C_FIELD(arg0, s16 *, 0x374) & 2) {
        obj_clearFlags30(arg0, 0x23F);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 4) {
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x2D4));
        if ((temp_r3 != 0) && !(xyz_distance_squared(arg0 + 0x38, temp_r3 + 0x38) < lbl_805D9F50)) {
            M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) | 2);
            set_flag_and_notify__10TObjPlayerFPv(arg0);
        }
        play_sound_effect((s32)((void*)((M2C_UNK)remap_area_sound_id((s32)(0x3B10F), (s32)(5)))), (u32)(arg0 + 0x38), (M2C_UNK)(0), (s32)(0));
    }
}

void update_invuln_timer__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r4;
    advance_animation_playback((void *)(arg0));
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity((void *)(arg0), (M2C_UNK)(NULL), lbl_805D9F4C);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}

void set_action_state_3__10TObjPlayerFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9FFFFF);
    }
}

void update_attacking__12TObjEneLappyFPv(u8 *arg0) {
    u8 *temp_r3;
    advance_animation_playback(arg0);
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        enemy_turn_toward_dest(arg0, (void *) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8));
        apply_actor_gravity(arg0, 0, lbl_805D9F4C);
        if (objInBand__FP7GameObjf(arg0, lbl_805D9F54) != 0) {
            enemy_set_heading_velocity(arg0, M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4));
            M2C_FIELD(arg0, f32 *, 0x30C) = lbl_805D9F4C;
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
        }
        break;
    case 1:
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
        M2C_FIELD(arg0, f32 *, 0x38) += M2C_FIELD(arg0, f32 *, 0x308);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805D9F58;
        M2C_FIELD(arg0, f32 *, 0x40) += M2C_FIELD(arg0, f32 *, 0x310);
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805D9F58;
        apply_actor_gravity(arg0, 0, lbl_805D9F4C);
        if (objInBand__FP7GameObjf(arg0, lbl_805D9F5C) != 0) {
            temp_r3 = M2C_FIELD(arg0, u8 **, 0x2A8);
            if (temp_r3 != NULL && ((VObj_18_800C0588 *) temp_r3)->m18(arg0, lbl_805D9F60) != 0) {
                ((VObj_18_800C0588 *) M2C_FIELD(arg0, u8 **, 0x2A8))->m20(arg0, lbl_805D9F60);
                ((VObj_18_800C0588 *) M2C_FIELD(arg0, u8 **, 0x2A8))->m23(arg0, lbl_805D9F64);
            }
            play_sound_effect(remap_area_sound_id(0x3BC0D, 5), (u32) (arg0 + 0x38), 0, 0);
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
        }
        break;
    case 2:
        apply_actor_gravity(arg0, 0, lbl_805D9F4C);
        M2C_FIELD(arg0, s16 *, 0x33C)--;
        if (M2C_FIELD(arg0, s16 *, 0x33C) < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
        break;
    case 3:
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
        M2C_FIELD(arg0, f32 *, 0x38) += M2C_FIELD(arg0, f32 *, 0x308);
        M2C_FIELD(arg0, f32 *, 0x40) += M2C_FIELD(arg0, f32 *, 0x310);
        apply_actor_gravity(arg0, 0, lbl_805D9F4C);
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 4U) {
            M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x30C) = M2C_FIELD(arg0, f32 *, 0x310) = lbl_805D9F4C;
            M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFDFFFFF;
            ((VObj_18_800C0588 *) arg0)->m57();
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
        }
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
}

void enter_down_state__10TObjPlayerFPv(void *arg0) {
    u16 temp_r4;
    if (!(M2C_FIELD(arg0, s16 *, 0x374) & 0x42) && (obj_testFlags30(arg0, 0xA02) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 2;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
        if ((s16) M2C_FIELD(arg0, s16 *, 0x382) != (s32) (temp_r4 = M2C_FIELD(arg0, u16 *, 0x338))) {
            M2C_FIELD(arg0, s16 *, 0x382) = (s16) temp_r4;
            M2C_FIELD(arg0, s16 *, 0x384) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0x384) = (s16) (M2C_FIELD(arg0, s16 *, 0x384) + 1);
        }
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
    }
}
#pragma push
#pragma opt_common_subs off
typedef char RecoveredFields_800C1478_arg0_30_offset[offsetof(RecoveredFields_800C1478_arg0, field_30) == 0x30 ? 1 : -1];
typedef char RecoveredFields_800C1478_arg0_A4_offset[offsetof(RecoveredFields_800C1478_arg0, field_A4) == 0xA4 ? 1 : -1];
typedef char RecoveredFields_800C1478_arg0_B8_offset[offsetof(RecoveredFields_800C1478_arg0, field_B8) == 0xB8 ? 1 : -1];
typedef char RecoveredFields_800C1478_arg0_2A8_offset[offsetof(RecoveredFields_800C1478_arg0, field_2A8) == 0x2A8 ? 1 : -1];
typedef char RecoveredFields_800C1478_arg0_30C_offset[offsetof(RecoveredFields_800C1478_arg0, field_30C) == 0x30C ? 1 : -1];
typedef char RecoveredFields_800C1478_arg0_326_offset[offsetof(RecoveredFields_800C1478_arg0, field_326) == 0x326 ? 1 : -1];
typedef char RecoveredFields_800C1478_arg0_338_offset[offsetof(RecoveredFields_800C1478_arg0, field_338) == 0x338 ? 1 : -1];
typedef char RecoveredFields_800C1478_arg0_374_offset[offsetof(RecoveredFields_800C1478_arg0, field_374) == 0x374 ? 1 : -1];
typedef char RecoveredFields_800C1478_arg0_380_offset[offsetof(RecoveredFields_800C1478_arg0, field_380) == 0x380 ? 1 : -1];
typedef char RecoveredFields_800C1478_temp_r3_30_offset[offsetof(RecoveredFields_800C1478_temp_r3, field_30) == 0x30 ? 1 : -1];
typedef char RecoveredFields_800C1478_temp_r3_2_18_offset[offsetof(RecoveredFields_800C1478_temp_r3_2, field_18) == 0x18 ? 1 : -1];

void update_moving__12TObjEneLappyFv(u8 *arg0) {
    Position_800C08A0 probe;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f31;
    s16 temp_r0;
    s16 temp_r3_4;
    s32 temp_r5_2;
    s32 var_r4;
    u32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r4;
    u8 *temp_r5;
    u8 *temp_r6;
    u8 *temp_r6_2;
    u8 *temp_r6_3;
    u8 *temp_r7;
    u8 *temp_r7_2;
    advance_animation_playback(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0x30) & 0x1000) && !(M2C_FIELD(arg0, s16 *, 0x374) & 2)) {
        temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
        if (temp_r6 != NULL) {
            Position_800C08A0 target1 = *(Position_800C08A0 *)(temp_r6 + 0x2FC);
            temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
            enemy_backstep_from_point((void *) (arg0), (void *) (&target1.x), (f32) (M2C_FIELD(temp_r5, f32 *, 4)));
            update_angle__10TObjPlayerFPviPv((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)), (void *) (arg0 + 0x308));
            apply_actor_gravity((void *)((void *) (arg0)), (M2C_UNK)((int) (0)), (f32) (lbl_805D9F4C));
            update_collisions__10TObjPlayerFPv((void *) (arg0));
            return;
        }
    }
    temp_r3 = M2C_FIELD(arg0, u32 *, 0xB4);
    if (temp_r3 == 1U) {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x37A);
        switch (temp_r0) {
        case 0:
            temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
            if (temp_r7 != NULL) {
                Position_800C08A0 target2 = *(Position_800C08A0 *)(temp_r7 + 0x2FC);
                temp_r6_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
                temp_f31 = update_enemy_wander_move((void *) (arg0), (void *) (&target2.x), (int) (1), (f32) (M2C_FIELD(temp_r6_2, f32 *, 4)));
                if ((obj_testFlags30((void *)((void *) (arg0)), (M2C_UNK)((int) (2))) == 0) && (temp_f31 < lbl_805D9F50)) {
                    M2C_FIELD(arg0, s16 *, 0x37A) = 1;
                    M2C_FIELD(arg0, s32 *, 0x398) = 0;
                    calc_boss4_scale__10TObjPlayerFi((void *) (arg0));
                    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) lbl_805D9F4C;
                }
                temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
                if (M2C_FIELD(temp_r3_2, f32 *, 0) * M2C_FIELD(temp_r3_2, f32 *, 0) < temp_f31 || temp_f31 < M2C_FIELD(temp_r3_2, f32 *, 4) * M2C_FIELD(temp_r3_2, f32 *, 4)) {
                    M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
                }
            } else {
                temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
                ((M2C_UNK (*)(void *, f32, f32, f32, int))enemy_wander_home)((void *) (arg0), M2C_FIELD(temp_r4, f32 *, 4), lbl_805D9F68, lbl_805D9F6C, M2C_FIELD(temp_r4, s32 *, 8));
            }
            update_angle__10TObjPlayerFPviPv((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)), (void *) (arg0 + 0x308));
            play_walk_sound__12TObjEneLappyFPv(arg0);
            goto block_48;
        case 1:
            temp_r7_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
            if (temp_r7_2 != NULL) {
                Position_800C08A0 target3 = *(Position_800C08A0 *)(temp_r7_2 + 0x2FC);
                temp_r6_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
                temp_f1 = update_enemy_wander_move((void *) (arg0), (void *) (&target3.x), (int) (1), (f32) (M2C_FIELD(temp_r6_3, f32 *, 4)));
                if (temp_f1 > lbl_805D9F70) {
                    M2C_FIELD(arg0, s16 *, 0x37A) = 0;
                }
                update_angle__10TObjPlayerFPviPv((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)), (void *) (arg0 + 0x308));
                temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
                if (M2C_FIELD(temp_r3_3, f32 *, 0) * M2C_FIELD(temp_r3_3, f32 *, 0) < temp_f1 || temp_f1 < M2C_FIELD(temp_r3_3, f32 *, 4) * M2C_FIELD(temp_r3_3, f32 *, 4)) {
                    M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
                }
            } else {
                M2C_FIELD(arg0, s16 *, 0x37A) = 0;
            }
            play_walk_sound__12TObjEneLappyFPv(arg0);
            goto block_48;
        case 2:
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x60) = lerp_angle_half__10TObjPlayerFUsUs((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x390)));
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) == 1U) {
                temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF;
                M2C_FIELD(arg0, s32 *, 0x30) = temp_r5_2;
                M2C_FIELD(arg0, s16 *, 0x37A) = 4;
                play_sound_effect(remap_area_sound_id(0x3AF12, 5), (u32) (arg0 + 0x38), 0, 0);
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9F2C)) != 0) {
                play_sound_effect(remap_area_sound_id(0x3AA11, 5), (u32) (arg0 + 0x38), 0, 0);
            }
            goto block_48;
        case 4:
            if (temp_r3 == 1U) {
                enemy_set_heading_velocity((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (f32) (lbl_805D9F74 * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4)));
                M2C_FIELD(arg0, s16 *, 0x394) = (s16) (M2C_FIELD(arg0, s16 *, 0x394) + 1);
                if (((f32) M2C_FIELD(arg0, s16 *, 0x394) > lbl_805D9F78) && (((u16 (*)(void *, void *, f32))find_nearest_visible_player)((void *) (arg0), (void *) (&probe.x), (f32) (lbl_805D9F7C)) != 0xFFFFU) && (angle_difference_abs((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) ((s32) (lbl_8043BA18 * get_ad_end_text_start__10TObjPlayerFv((f32) (probe.x), (f32) (probe.z))))) < 0xAAA)) {
                    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) >= lbl_805D9F24) {
                        var_r4 = -0x4000;
                    } else {
                        var_r4 = 0x4000;
                    }
                    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + var_r4);
                    M2C_FIELD(arg0, s16 *, 0x394) = 0;
                }
                if (advance_flee_step__12TObjEneLappyFv((void *) (arg0)) == 0) {
                    queue_destruction__7TObjectFv((void *) (arg0));
                    return;
                }
                if (--M2C_FIELD(arg0, s16 *, 0x396) < 0) {
                    spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF3));
                    M2C_FIELD(arg0, s16 *, 0x396) = 2;
                }
                play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AF12), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                goto block_47;
            }
block_47:
            apply_actor_gravity((void *)((void *) (arg0)), (M2C_UNK)((int) (0)), (f32) (lbl_805D9F4C));
            refresh_collision_body_centers((void *) (arg0));
            return;
        }
    }
block_48:
        apply_actor_gravity((void *)((void *) (arg0)), (M2C_UNK)((int) (0)), (f32) (lbl_805D9F4C));
        update_collisions__10TObjPlayerFPv((void *) (arg0));
}

void enter_moving_state__12TObjEneLappyFPv(void *arg0) {
    s32 temp_r6;
    u8 temp_r0;
    void *temp_r3;
    void *temp_r7;
    if (!(M2C_FIELD(arg0, s16 *, 0x374) & 0x42) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0xA00)) {
        if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 1) {
            temp_r7 = M2C_FIELD(arg0, void **, 0x2A8);
            if (temp_r7 != NULL) {
                struct Sp800C0D3C sp8 = M2C_FIELD(temp_r7, struct Sp800C0D3C *, 0x2FC);
                if (select_enemy_destination(arg0, &sp8, 1) == 1) {
                    temp_r0 = M2C_FIELD(arg0, u8 *, 0x378);
                    switch ((s8) temp_r0) {
                    case 0:
                        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                        break;
                    case 1:
                        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
                        break;
                    }
                    M2C_FIELD(arg0, s16 *, 0x37A) = 0;
                    M2C_FIELD(arg0, s16 *, 0x380) = 0;
                    M2C_FIELD(arg0, u8 *, 0x378) = 0U;
                    M2C_FIELD(arg0, s16 *, 0x326) = 1;
                    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDBFFFF);
                }
            }
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
    }
}

#pragma push
#pragma opt_common_subs on
#define arg0 ((u8 *)ov)
void update_idle_state__12TObjEneLappyFv(void *ov) {
    f32 range;

    if (((VObj_18_800C0E30 *) arg0)->m17(0x1E) != 0) {
        if ((s8) M2C_FIELD(arg0, u8 *, 0x379) != 0) {
            range = lbl_805D9F28;
        } else {
            range = lbl_805D9F68;
        }
        if (xz_distance_squared(arg0 + 0x38, arg0 + 0x50) > range * range) {
            M2C_FIELD(arg0, u8 *, 0x378) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        } else if ((s8) M2C_FIELD(arg0, u8 *, 0x378) != (s8) M2C_FIELD(arg0, u8 *, 0x379)) {
            M2C_FIELD(arg0, u8 *, 0x378) = M2C_FIELD(arg0, u8 *, 0x379);
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
        }
    }
    switch ((s8) M2C_FIELD(arg0, u8 *, 0x378)) {
    case 0:
        switch (M2C_FIELD(arg0, s16 *, 0x328)) {
        case 0:
            M2C_FIELD(arg0, s16 *, 0x37E) = (s16) (lbl_805D9F80 * (lbl_805D9F60 + calc_boss4_scale__10TObjPlayerFi(arg0)));
            M2C_FIELD(arg0, s16 *, 0x328) = M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x37E)--;
            if (M2C_FIELD(arg0, s16 *, 0x37E) < 0) {
                play_sound_effect(remap_area_sound_id(0x3B20B, 5), (u32) (arg0 + 0x38), 0, 0);
                M2C_FIELD(arg0, s16 *, 0x328) = 2;
            }
            break;
        case 2:
            M2C_FIELD(arg0, f32 *, 0x38C) = lbl_805D9F2C;
            M2C_FIELD(arg0, s16 *, 0x328) = M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        case 3:
            ((M2C_UNK (*)(f32, void *, int, f32, f32)) enemy_wander_home)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4), arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), lbl_805D9F68, lbl_805D9F68);
            M2C_FIELD(arg0, f32 *, 0x38C) -= M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4);
            if (M2C_FIELD(arg0, f32 *, 0x38C) < lbl_805D9F4C) {
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
            }
            break;
        }
        advance_animation_playback(arg0);
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        advance_animation_playback(arg0);
        M2C_FIELD(arg0, s16 *, 0x37E)--;
        if (M2C_FIELD(arg0, s16 *, 0x37E) < 0) {
            play_sound_effect(remap_area_sound_id(0x3B20B, 5), (u32) (arg0 + 0x38), 0, 0);
            M2C_FIELD(arg0, s16 *, 0x37E) = (s16) (lbl_805D9F2C * (lbl_805D9F84 * (lbl_805D9F60 + calc_boss4_scale__10TObjPlayerFi(arg0))));
        }
        break;
    case 2: {
        advance_animation_playback(arg0);
        Vec_800C0E30 v = M2C_FIELD(arg0, Vec_800C0E30 *, 0x50);
        update_enemy_wander_move(arg0, &v, 7, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4));
        update_angle__10TObjPlayerFPviPv(arg0, (void *) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), arg0 + 0x308);
        break;
    }
    }
    refresh_collision_body_centers(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity(arg0, 0, lbl_805D9F4C);
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x40000) {
        if (M2C_FIELD(arg0, s16 *, 0x33C)-- < 0) {
            M2C_FIELD(arg0, s32 *, 0x30) &= ~0x40000;
            M2C_FIELD(arg0, s16 *, 0x33C) = M2C_FIELD(arg0, s16 *, 0x33A);
        }
    }
}
#undef arg0
#pragma pop

void enter_idle_state__12TObjEneLappyFPv(void *arg0) {
    s16 flags;
    flags = M2C_FIELD(arg0, s16 *, 0x374);
    if (!(flags & 2) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0xA00)) {
        if (flags & 0x20) {
            M2C_FIELD(arg0, s16 *, 0x374) = flags & ~0x20;
            obj_clearFlags30(arg0, 0x02000000);
            Vec_800C1144 v = M2C_FIELD(arg0, Vec_800C1144 *, 0x38);
            if (project_actor_to_ground(arg0, &v, 0) == 1) {
                M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805D9F7C + v.y;
            }
        }
        if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            switch ((s8) M2C_FIELD(arg0, u8 *, 0x378)) {
            case 0:
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                break;
            case 1:
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                break;
            }
        }
    }
}

void select_target__12TObjEneLappyFPv(u8 *arg0) {
    s32 best_id;
    s32 i;
    s32 id;
    u8 *p;
    f32 best;
    f32 d;
    if (((VObj_18_800C1224 *)(arg0))->m17(0x1E) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x30) & 0x1000) {
            if ((M2C_FIELD(arg0, f32 *, 0x2B4) -= lbl_805D9F60) < lbl_805D9F4C) {
                M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
                M2C_FIELD(arg0, f32 *, 0x2B4) = lbl_805D9F4C;
            } else {
                M2C_FIELD(arg0, u16 *, 0x338) = find_nearest_visible_player((void *) (arg0), 0, M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0));
            }
        } else if (obj_testFlags30((void *)((void *) (arg0)), (M2C_UNK)(0x10)) != 0) {
            i = 0;
            best_id = 0xFFFF;
            Vec_800C1224 v = *(Vec_800C1224 *)lbl_8043BA08;
            best = M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0) * M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0);
            for (; i < lbl_805D586C + lbl_805D5870; i++) {
                p = get_player_data__10TObjPlayerFi(i);
                if (p == NULL) {
                    break;
                }
                id = obj_getField1c(p);
                if ((u16)id < 0x4000 && (u16)id != M2C_FIELD(arg0, u16 *, 0x1C) && !(M2C_FIELD(p, s32 *, 0x30) & 0x800)) {
                    f32 xx;
                    f32 zz;
                    VecCopy__FP3VecPC3Vec(&v, p + 0x2FC);
                    subtract_vector(&v, arg0 + 0x2FC);
                    xx = v.x * v.x;
                    zz = v.z * v.z;
                    d = xx + zz;
                    if (d < best && check_path_obstructed((void *) (arg0), p + 0x2FC) != 1) {
                        best_id = id;
                        best = d;
                    }
                }
            }
            M2C_FIELD(arg0, u16 *, 0x338) = best_id;
        } else {
            M2C_FIELD(arg0, u16 *, 0x338) = find_nearest_visible_player((void *) (arg0), 0, M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0));
        }
    }
    if (M2C_FIELD(arg0, s16 *, 0x384) > 3 && M2C_FIELD(arg0, s16 *, 0x382) == M2C_FIELD(arg0, u16 *, 0x338)) {
        s32 j;
        u8 *q;
        for (j = 0; j < lbl_805D586C; j++) {
            q = get_player_data__10TObjPlayerFi(j);
            if (q != NULL && M2C_FIELD(arg0, s16 *, 0x382) != (u16) obj_getField1c(q) && !(M2C_FIELD(q, s32 *, 0x30) & 0x800)) {
                if (xz_distance_squared(q + 0x2FC, arg0 + 0x2FC) < lbl_805D9F88) {
                    M2C_FIELD(arg0, u16 *, 0x338) = j;
                }
                break;
            }
        }
    }
}

void run_task__12TObjEneLappyFPv(u8 *arg0) {
    f32 var_f1;
    s16 temp_r0;
    s16 temp_r5;
    u8 *temp_r3;
    u8 *temp_r3_2;
    fn_800C20C0();
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        apply_variant_speeds__12TObjEneLappyFPv((Obj_800BFCD4 *)((void *) (arg0)));
        TObjPlayer__sub_800BFF54((void *)((void *) (arg0)));
        return;
    }
    ((RecoveredFields_800C1478_arg0 *)arg0)->field_2A8 = find_active_entity_by_id(((RecoveredFields_800C1478_arg0 *)arg0)->field_338);
    temp_r3 = (unsigned char *) (((RecoveredFields_800C1478_arg0 *)arg0)->field_2A8);
    if ((temp_r3 != NULL) && (((RecoveredFields_800C1478_temp_r3 *)temp_r3)->field_30 & 0x800)) {
        ((RecoveredFields_800C1478_arg0 *)arg0)->field_2A8 = NULL;
        ((RecoveredFields_800C1478_arg0 *)arg0)->field_338 = 0xFFFFU;
    }
    temp_r0 = ((RecoveredFields_800C1478_arg0 *)arg0)->field_326;
    switch (temp_r0) {
    case 0:
        update_idle_state__12TObjEneLappyFv((void *) (arg0));
        break;
    case 1:
        update_moving__12TObjEneLappyFv((u8 *)((void *) (arg0)));
        break;
    case 2:
        update_attacking__12TObjEneLappyFPv((u8 *)((void *) (arg0)));
        break;
    case 3:
        update_invuln_timer__10TObjPlayerFPv((u8 *)((void *) (arg0)));
        break;
    case 4:
        update_hurt__12TObjEneLappyFv((u8 *)((void *) (arg0)));
        break;
    case 5:
        apply_move_friction__10TObjPlayerFPv((void *) (arg0));
        break;
    }
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC));
    if ((obj_testFlags30((void *)((void *) (arg0)), (M2C_UNK)((int) (0x06000000))) == 0) && !(((RecoveredFields_800C1478_arg0 *)arg0)->field_374 & 4)) {
        submit_cursor_candidate((void *) (arg0), (int) (-1));
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    if (((RecoveredFields_800C1478_arg0 *)arg0)->field_374 & 0x40) {
        ((RecoveredFields_800C1478_arg0 *)arg0)->field_30C = (((RecoveredFields_800C1478_arg0 *)arg0)->field_30C > lbl_805D9F8C) ? ((RecoveredFields_800C1478_arg0 *)arg0)->field_30C : lbl_805D9F8C;
        if (((RecoveredFields_800C1478_arg0 *)arg0)->field_30 & 0x800000) {
            ((RecoveredFields_800C1478_arg0 *)arg0)->field_374 = (s16) (((RecoveredFields_800C1478_arg0 *)arg0)->field_374 & 0xFFFFFFBF);
            if (get_instance__6TLobbyFv() == 1) {
                play_sound_effect((s32)((int) (0x3AB44)), (u32)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (s32)((int) (0)));
            } else {
                play_sound_effect((s32)((int) (0x4003AB33)), (u32)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (s32)((int) (0)));
            }
            temp_r3_2 = (unsigned char *) (((RecoveredFields_800C1478_arg0 *)arg0)->field_A4);
            ((RecoveredFields_800C1478_temp_r3_2 *)temp_r3_2)->field_18 = (s32) (((RecoveredFields_800C1478_temp_r3_2 *)temp_r3_2)->field_18 | 1);
        }
    }
    if ((obj_testFlags30((void *)((void *) (arg0)), (M2C_UNK)((int) (0x800))) != 0) && !(((RecoveredFields_800C1478_arg0 *)arg0)->field_374 & 2)) {
        temp_r5 = ((RecoveredFields_800C1478_arg0 *)arg0)->field_380;
        ((RecoveredFields_800C1478_arg0 *)arg0)->field_380 = (s16) (temp_r5 + 1);
        if ((((VCls18 *)(arg0))->vm17(0x1E, temp_r5) != 0) && (((u16)find_nearest_visible_player((void *) (arg0), (int) (0), (f32) (lbl_805D9F90)) == 0xFFFFU) || ((s16) ((RecoveredFields_800C1478_arg0 *)arg0)->field_380 >= 0x384))) {
            set_boss4_state__10TObjPlayerFPv((void *) (arg0));
            ((RecoveredFields_800C1478_arg0 *)arg0)->field_B8 = 9;
        }
    }
}
#pragma pop

}
