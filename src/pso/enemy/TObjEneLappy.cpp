#include "types.h"
extern "C" __declspec(section ".data") s32 lbl_80500BF8[2];
#define lbl_80500BF8 ((f32 * *)lbl_80500BF8)
extern "C" void * rappy_variant_speed_table[40];
#define rappy_variant_speed_table (*(G_800BFCD4 *)&rappy_variant_speed_table)
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
void fn_800C20B0(void *arg0);
#define fn_800C20B0 (*(M2C_UNK (*)())&fn_800C20B0)
extern const f32 lbl_805D9F24;
extern const f32 lbl_805D9F2C;
extern const f32 lbl_805D9F4C;
s32 play_sound_effect(s32, u32, M2C_UNK, s32);
M2C_UNK distribute_experience(void *);
M2C_UNK query_lobby_state__10TObjPlayerFPv(void *);
void set_flag_and_notify__10TObjPlayerFPv(void *arg0);
void handle_death__10TObjPlayerFPv(u8 *arg0);
s32 get_player_by_client_id(u16);
f32 xyz_distance_squared(void *, s32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
extern const f32 lbl_805D9F50;
void enter_state_4__10TObjPlayerFPv(u8 *arg0);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
extern const f32 lbl_805D9F4C;
void set_action_state_3__10TObjPlayerFPv(void *arg0);
s32 obj_testFlags30(void *, M2C_UNK);
void enter_down_state__10TObjPlayerFPv(void *arg0);
s32 render_with_position_override__10TObjPlayerFPvPvi(void *, int, int);
s32 init_lights__9TObjEneDDFv();
s32 TObjEneDD__sub_800B9B24(f32);
void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1);
#define set_speed_params__12TObjEneLappyFPvi (*(s32 (*)(void *, int))&set_speed_params__12TObjEneLappyFPvi)
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
s32 get_instance__6TLobbyFv();
s32 check_demo_mode__10TObjPlayerFv();
void TObjPlayer__sub_800BFF54(void * _w0);
M2C_UNK apply_move_friction__10TObjPlayerFPv(void *arg0);
void update_idle_state__12TObjEneLappyFv(void *ov);
void fn_800C20C0(void *arg0);
#define fn_800C20C0 (*(M2C_UNK (*)())&fn_800C20C0)
u8 *find_active_entity_by_id(u16);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805D9F8C;
extern const f32 lbl_805D9F90;
void run_task__12TObjEneLappyFPv(u8 *arg0);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D9F4C;
void update_invuln_timer__10TObjPlayerFPv(u8 *arg0);
void apply_variant_speeds__12TObjEneLappyFPv(Obj_800BFCD4 *self);
s32 check_path_obstructed(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
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
u32 csnVector(void *, void *, s32);
M2C_UNK project_actor_to_ground(void *, void *, M2C_UNK);
s32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(s32, void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrices(s32);
extern f32 lbl_8058D490[3][4];
extern const f32 lbl_805D9F24;
M2C_UNK enemy_set_heading_velocity(void *, int, f32);
M2C_UNK enemy_turn_toward_dest(void *, void *);
extern const f32 lbl_805D9F4C;
extern const f32 lbl_805D9F54;
extern const f32 lbl_805D9F58;
extern const f32 lbl_805D9F5C;
extern const f32 lbl_805D9F60;
extern const f32 lbl_805D9F64;
void update_attacking__12TObjEneLappyFPv(u8 *arg0);
s32 select_enemy_destination(void *, struct Sp800C0D3C *, M2C_UNK);
void enter_moving_state__12TObjEneLappyFPv(void *arg0);
extern const f32 lbl_805D9F7C;
void enter_idle_state__12TObjEneLappyFPv(void *arg0);
M2C_UNK enemy_backstep_from_point(void *, void *, f32);
M2C_UNK enemy_wander_home(void *, int, f32, f32, f32);
f32 update_enemy_wander_move(void *, void *, int, f32);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
s32 advance_flee_step__12TObjEneLappyFv(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 angle_difference_abs(int, int);
s32 lerp_angle_half__10TObjPlayerFUsUs(int, int);
M2C_UNK play_persistent_sound(s32, void *, void *, int, int);
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
void update_hurt__12TObjEneLappyFv(u8 *arg0);
}

extern "C" {

s32 update_action_hold__12TObjEneLappyFi(s32 arg0);
void clear_flags_60__10TObjPlayerFPv(u8 *arg0);
s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0);
s32 update_movement_status__10TObjPlayerFv();
s32 update_action_hold_status__10TObjPlayerFv();
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
    rappy_variant_speed_table.f68 = p[1];
    rappy_variant_speed_table.f88 = p[2];
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

#undef fn_800C20B0
#undef set_speed_params__12TObjEneLappyFPvi
#undef fn_800C20C0

#undef rappy_variant_speed_table
#undef lbl_80500BF8

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__12TObjEneLappyFPv(void *arg0);
void *TObjControl__ct(void *, void *);
struct Set_800C1C4C;
u8 * TObjEneLappy__ct(u8 *self, s32 arg1, Set_800C1C4C *set);
#define TObjEneLappy__ct (*(void * (*)(void *, void *, void *))&TObjEneLappy__ct)
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__12TObjEneLappyFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3A4);
    if (o2 != NULL) {
        o2 = TObjEneLappy__ct(o2, o, arg0);
    }
    return o2;
}

}

#undef TObjEneLappy__ct

#define lbl_805D5168 (*(s32 *)&lbl_805D5168)
#define update_action_hold__12TObjEneLappyFi (*(void (*)())&update_action_hold__12TObjEneLappyFi)
#define try_clear_flags_60__10TObjPlayerFi (*(void (*)())&try_clear_flags_60__10TObjPlayerFi)
#define set_action_state_3__10TObjPlayerFPv (*(void (*)())&set_action_state_3__10TObjPlayerFPv)
#define select_target__12TObjEneLappyFPv (*(void (*)())&select_target__12TObjEneLappyFPv)
#define run_task__12TObjEneLappyFPv (*(void (*)())&run_task__12TObjEneLappyFPv)
#define render__12TObjEneLappyFPv (*(void (*)())&render__12TObjEneLappyFPv)
#define handle_death__10TObjPlayerFPv (*(void (*)())&handle_death__10TObjPlayerFPv)
#define enter_state_4__10TObjPlayerFPv (*(void (*)())&enter_state_4__10TObjPlayerFPv)
#define enter_moving_state__12TObjEneLappyFPv (*(void (*)())&enter_moving_state__12TObjEneLappyFPv)
#define enter_idle_state__12TObjEneLappyFPv (*(void (*)())&enter_idle_state__12TObjEneLappyFPv)
#define enter_down_state__10TObjPlayerFPv (*(void (*)())&enter_down_state__10TObjPlayerFPv)
#define apply_variant_speeds__12TObjEneLappyFPv (*(M2C_UNK (*)(void *))&apply_variant_speeds__12TObjEneLappyFPv)
#define render_world_model__10TObjPlayerFPv (*(void (*)(void *))&render_world_model__10TObjPlayerFPv)
#define draw__16TObjEneRe7BeruraFPv (*(void (*)(void *))&draw__16TObjEneRe7BeruraFPv)
#define scale_matrix (*(void (*)(int, f32, f32, f32))&scale_matrix)
#define draw_chunk_object (*(M2C_UNK (*)(int))&draw_chunk_object)
#define set_global_param__8TObjFishFi (*(M2C_UNK (*)(void *))&set_global_param__8TObjFishFi)
#define post_translate_matrix (*(M2C_UNK (*)(void *))&post_translate_matrix)
#define pop_matrix (*(M2C_UNK (*)())&pop_matrix)
#define push_matrix (*(M2C_UNK (*)())&push_matrix)
#define rotate_matrix_y (*(M2C_UNK (*)(int, int))&rotate_matrix_y)
#define end_effect_render__13TParticleCtrlFv (*(M2C_UNK (*)())&end_effect_render__13TParticleCtrlFv)
#define toggle_particle_effect__10TObjPlayerFv (*(M2C_UNK (*)())&toggle_particle_effect__10TObjPlayerFv)

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_fe72f9 { char pad[0x18]; };
struct VObj_18_fe72f9 : VBase_18_fe72f9 {
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
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
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
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual M2C_UNK m79(void *);
    virtual M2C_UNK m80();
};

struct Set_800C1C4C {
    u8 pad0[0xA];
    s16 fa;
    u8 padC[0x10 - 0xC];
    f32 pos[3];
    f32 rot[3];
    f32 params[5];
    s16 f3c;
    s16 f3e;
};
struct Lappy_800C1C4C { u8 pad[0x354]; f32 params[5]; };
struct Tbl_800C1C4C { s32 a[2]; s32 b[2]; s32 c[2]; };

typedef s32 M2C_UNK;
typedef struct Vec_800C20D0 {
    f32 x, y, z;
} Vec_800C20D0;

typedef struct Mat_800C20D0 {
    u8 pad0[0x8];
    s32 f8;
    u8 padC[0x14 - 0xC];
    s32 f14;
    u8 pad18[0x20 - 0x18];
    s32 f20;
    u8 pad24[0x2C - 0x24];
    s32 f2C;
} Mat_800C20D0;

typedef struct Model_800C20D0 {
    Mat_800C20D0 *mat;
} Model_800C20D0;

struct VBase_800C20D0 {
    char pad0[0x18];
};

struct VObj_800C20D0 : VBase_800C20D0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Obj_800C20D0 : VObj_800C20D0 {
    u8 pad1C[0x24 - 0x1C];
    Model_800C20D0 *model;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_800C20D0 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
};

typedef struct Vec_800C220C { f32 x, y, z; } Vec_800C220C;

typedef struct Mat_800C220C {
    u8 pad0[0x8];
    s32 f8;
    u8 padC[0x14 - 0xC];
    s32 f14;
    u8 pad18[0x20 - 0x18];
    s32 f20;
    u8 pad24[0x2C - 0x24];
    s32 f2C;
} Mat_800C220C;

typedef struct Model_800C220C { Mat_800C220C *mat; } Model_800C220C;

struct SBase_800C220C { char pad0[0x14]; };

struct Sub_800C220C : SBase_800C220C {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5();
    virtual void m6(); virtual void m7(); virtual s32 m8();
};

struct VBase_800C220C { char pad0[0x18]; };

struct VObj_800C220C : VBase_800C220C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void m104();
};

struct Obj_800C220C : VObj_800C220C {
    u8 pad1C[0x24 - 0x1C];
    Model_800C220C *model;
    u8 pad28[0x38 - 0x28];
    Vec_800C220C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x326 - 0x64];
    s16 f326;
    u8 pad328[0x3C0 - 0x328];
    s32 f3C0;
    u32 f3C4;
    f32 f3C8;
    u8 pad3CC[0x3D8 - 0x3CC];
    s32 f3D8;
    f32 f3DC;
    f32 f3E0;
    f32 f3E4;
    f32 f3E8;
    f32 f3EC;
    f32 f3F0;
    Sub_800C220C sub;
};

extern "C" {
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFPv(void *, void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 TObjEneRe2Flower__sub_800C3B8C(void *);
M2C_UNK restore_default_scene();
M2C_UNK set_scene_override(int);
extern Vec_800C20D0 lbl_8043BBC0[];
extern const f32 lbl_805D9FA0;
extern const f32 lbl_805D9FA4;
void TObjPlayer__sub_800C20D0(Obj_800C20D0 *o);
s32 is_main_phase_15__9TObjEneDDFv(void);
void update_secondary_light__9TObjEneDDFPv(void *);
void update_primary_light__9TObjEneDDFPv(void *);
void translate_matrix(int, f32, f32, f32);
void set_global_state__16TObjEneRe7BeruraFi(void *);
void update_effect_sequence__10TObjPlayerFv(void);
void draw_with_alt_model__10TObjPlayerFPvi(void *, int);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
extern Vec_800C220C lbl_8043BBB4[];
extern s32 some_id_805c6f74;
extern s32 lbl_805D5660;
extern s32 lbl_805D5178;
extern s32 lbl_805D517C;
extern f32 *lbl_805D5180;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 lbl_805D9FA0;
extern const f32 lbl_805D9FA4;
extern const f32 lbl_805D9FAC;
extern const f32 lbl_805D9FB0;
extern const f32 lbl_805D9FB4;
extern const f32 lbl_805D9FB8;
void TObjPlayer__sub_800C220C(Obj_800C220C *o);
}

extern "C" {

int is_lying_down__12TObjEneLappyFv(void);
void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int, f32, f32);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK initialize__9TObjEnemyFPv(void *, s32, void *);
s32 collect_and_count__12TBoss3VoloptFUii(void *, int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, s16);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK init_collision_body_parts(void *, void *, int);

extern s32 lbl_805D2A40;
extern s32 lbl_805D5160;
extern void *lbl_805D5164;
extern const f32 lbl_805D9F2C;
extern const f32 lbl_805D9F60;
extern const f32 lbl_805D9F84;
extern const f32 lbl_805D9F94;
extern const f32 lbl_805D9F98;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_vt78__10TObjPlayerFPv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void clear_lobby_object_state();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_8043B7D8[];
extern "C" u8 lbl_8043B7EC[];
extern "C" u8 lbl_8043B800[];
extern "C" u8 lbl_8043B818[];
extern "C" u8 lbl_8043B830[];
extern "C" u8 lbl_8043B844[];
extern "C" u8 lbl_8043B858[];
extern "C" u8 lbl_8043B870[];
extern "C" u8 lbl_8043B888[];
extern "C" u8 lbl_8043B89C[];
extern "C" u8 lbl_8043B8B4[];
extern "C" u8 lbl_8043B8C8[];
extern "C" u8 lbl_8043B8DC[];
extern "C" u8 lbl_8043B8F0[];
extern "C" u8 lbl_8043B904[];
extern "C" u8 lbl_8043B91C[];
extern "C" u8 lbl_8043B930[];
extern "C" u8 lbl_8043B948[];
extern "C" u8 lbl_8043B960[];
extern "C" u8 lbl_8043B974[];
extern "C" u8 lbl_8043B98C[];
extern "C" u8 lbl_8043B9A4[];
extern "C" u8 lbl_8043B9B8[];
extern "C" u8 lbl_8043B9D0[];
extern "C" u8 lbl_8043B9DC[];
extern "C" u8 lbl_805D9F20[];
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_80492BD8[3];
extern void *lbl_80492BE4[11];
extern void *lbl_80492C20[3];
extern void *lbl_80492C2C[11];
extern void *lbl_80492C68[3];
extern void *lbl_80492C74[11];
extern void *lbl_80492CB0[3];
extern void *lbl_80492CBC[11];
extern void *lbl_80492CF8[3];
extern void *TObjEneLappy__resource_name_table[11];
extern void *lbl_80492D40[3];
extern void *TObjEneLappy__resource_list[11];
extern void *lbl_80492D88[3];
extern void *lbl_80492D94[11];
extern void *lbl_80492DD0[3];
extern void *lbl_80492DDC[11];
void *lbl_80492BD8[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B7EC, (void *)0x0,
};
void *lbl_80492BE4[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492C10[4] = {
    (void *)&lbl_8043B8DC, (void *)&lbl_80492BD8, (void *)&lbl_80492BE4, (void *)0x2000a,
};
void *lbl_80492C20[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B7EC, (void *)0x0,
};
void *lbl_80492C2C[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492C58[4] = {
    (void *)&lbl_8043B8F0, (void *)&lbl_80492C20, (void *)&lbl_80492C2C, (void *)0x2000a,
};
void *lbl_80492C68[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B904, (void *)0x0,
};
void *lbl_80492C74[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492CA0[4] = {
    (void *)&lbl_8043B91C, (void *)&lbl_80492C68, (void *)&lbl_80492C74, (void *)0x2000a,
};
void *lbl_80492CB0[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B904, (void *)0x0,
};
void *lbl_80492CBC[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492CE8[4] = {
    (void *)&lbl_8043B930, (void *)&lbl_80492CB0, (void *)&lbl_80492CBC, (void *)0x2000a,
};
void *lbl_80492CF8[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B948, (void *)0x0,
};
void *TObjEneLappy__resource_name_table[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492D30[4] = {
    (void *)&lbl_8043B960, (void *)&lbl_80492CF8, (void *)&TObjEneLappy__resource_name_table, (void *)0x2000a,
};
void *lbl_80492D40[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B948, (void *)0x0,
};
void *TObjEneLappy__resource_list[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492D78[4] = {
    (void *)&lbl_8043B974, (void *)&lbl_80492D40, (void *)&TObjEneLappy__resource_list, (void *)0x2000a,
};
void *lbl_80492D88[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B98C, (void *)0x0,
};
void *lbl_80492D94[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492DC0[4] = {
    (void *)&lbl_8043B9A4, (void *)&lbl_80492D88, (void *)&lbl_80492D94, (void *)0x2000a,
};
void *lbl_80492DD0[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B98C, (void *)0x0,
};
void *lbl_80492DDC[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492E08[4] = {
    (void *)&lbl_8043B9B8, (void *)&lbl_80492DD0, (void *)&lbl_80492DDC, (void *)0x2000a,
};
void *rappy_variant_speed_table[40] = {
    (void *)0x10000, (void *)0x6, (void *)0x3f666666, (void *)0x0,
    (void *)0x10001, (void *)0x5, (void *)0x3f333333, (void *)0x0,
    (void *)0x20003, (void *)0x8, (void *)0x3f333333, (void *)0x0,
    (void *)0x10003, (void *)0x9, (void *)0x3fe66666, (void *)0x1,
    (void *)0x10004, (void *)0x3, (void *)0x3f99999a, (void *)0x1,
    (void *)0x20001, (void *)0x0, (void *)0x3f800000, (void *)0x4,
    (void *)0x20001, (void *)0x1, (void *)0x3f800000, (void *)0x8,
    (void *)0x30006, (void *)0x2, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20004, (void *)0x4, (void *)0x3f666666, (void *)0x1,
    (void *)0x20004, (void *)0x7, (void *)0x3f000000, (void *)0x0,
};
void *lbl_80492EB8[3] = {
    (void *)&lbl_8043B9D0, (void *)&lbl_8043B9DC, (void *)&lbl_805D9F20,
};
void *lbl_80492EC4[14] = {
    (void *)0x43160000, (void *)0x3f097b42, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0, (void *)0x43160000,
    (void *)0x3f097b42, (void *)0x400, (void *)0x1e0000, (void *)0x0,
    (void *)0x1, (void *)0x0,
};
void *lbl_80492EFC[11] = {
    (void *)0x0, (void *)0x40f00000, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80492F28[84] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__12TObjEneLappyFPvs, (void *)&run_task__12TObjEneLappyFPv,
    (void *)&render__12TObjEneLappyFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&select_target__12TObjEneLappyFPv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&is_lying_down__12TObjEneLappyFv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold__12TObjEneLappyFi, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&try_clear_flags_60__10TObjPlayerFi,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&enter_idle_state__12TObjEneLappyFPv, (void *)&enter_moving_state__12TObjEneLappyFPv,
    (void *)&enter_down_state__10TObjPlayerFPv, (void *)&set_action_state_3__10TObjPlayerFPv, (void *)&enter_state_4__10TObjPlayerFPv, (void *)&handle_death__10TObjPlayerFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)0x0,
};

__declspec(section ".data") s32 lbl_80500BE0[2];
__declspec(section ".data") s32 lbl_80500BE8[2];
__declspec(section ".data") s32 lbl_80500BF0[2];
__declspec(section ".data") s32 lbl_80500BF8[2];
#define lbl_80492F28 ((M2C_UNK *)lbl_80492F28)

typedef struct Desc_800C17B8 {
    s32 a;
    void *b;
    s32 c;
    s32 d;
} Desc_800C17B8;

void cleanup_handles__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
s32 get_main_phase();
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_boss__6TLobbyFPv(s32);
s32 load_resource_from_descriptor(s32, int, void *, int, int, int);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 load_gvm_texture_file(void *);
void spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern u8 lbl_8043BA28[];
extern u8 lbl_8043BA44[];
extern const Desc_800C17B8 lbl_8043B9F8;
extern const f32 lbl_805D9F28;
extern const f32 lbl_805D9F4C;
extern s32 game_difficulty_selection;
extern s32 TLobby__event_theme_id;
extern s32 lbl_805D516C;
#define lbl_805D5164 (*(u32 *)&lbl_805D5164)
#define lbl_805D516C (*(u32 *)&lbl_805D516C)

void cleanup_handles__6TLobbyFv(void) {
    if (get_instance__6TLobbyFv() == 0) {
        if ((u32) lbl_805D516C != 0U) {
            TLobby__sub_803DA16C((void*)lbl_805D516C);
            safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D516C);
            lbl_805D516C = 0U;
        }
    } else {
        lbl_805D516C = 0U;
    }
    if ((u32) lbl_805D5164 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5164, 1);
        lbl_805D5164 = 0U;
    }
}

#define RES_800C17B8 ((u8 *)lbl_805D5164)

void load_resources__12TObjEneLappyFv(void) {
    int rare;
    s32 p;
    s32 i;

    rare = game_difficulty_selection == 3;
    if (get_main_phase() == 0xF) {
        switch (TLobby__event_theme_id) {
        case 1:
            lbl_805D5160 = 1;
            if (rare) {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492E08, 0, 0, 0);
                }
                lbl_805D5164 = p;
            } else {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492DC0, 0, 0, 0);
                }
                lbl_805D5164 = p;
            }
            break;
        case 4:
            lbl_805D5160 = 2;
            if (rare) {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492CE8, 0, 0, 0);
                }
                lbl_805D5164 = p;
            } else {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492CA0, 0, 0, 0);
                }
                lbl_805D5164 = p;
            }
            break;
        case 5:
            lbl_805D5160 = 3;
            if (rare) {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492D78, 0, 0, 0);
                }
                lbl_805D5164 = p;
            } else {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492D30, 0, 0, 0);
                }
                lbl_805D5164 = p;
            }
            break;
        default:
            lbl_805D5160 = 0;
            if (rare) {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492C58, 0, 0, 0);
                }
                lbl_805D5164 = p;
            } else {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492C10, 0, 0, 0);
                }
                lbl_805D5164 = p;
            }
            break;
        }
    } else {
        lbl_805D5160 = 0;
        if (rare) {
            p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
            if (p != 0) {
                p = load_resource_from_descriptor(p, 1, lbl_80492C58, 0, 0, 0);
            }
            lbl_805D5164 = p;
        } else {
            p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
            if (p != 0) {
                p = load_resource_from_descriptor(p, 1, lbl_80492C10, 0, 0, 0);
            }
            lbl_805D5164 = p;
        }
    }
    if (get_instance__6TLobbyFv() == 0) {
        if (rare) {
            lbl_805D516C = load_gvm_texture_file(lbl_8043BA28);
        } else {
            lbl_805D516C = load_gvm_texture_file(lbl_8043BA44);
        }
    } else {
        lbl_805D516C = *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 0x1C);
    }
    lbl_805D5168 = ((s32 (*)(s32, s32))collect_and_count__12TBoss3VoloptFUii)(*(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 8), 0x12);
    for (i = 0; i < 2; i++) {
        lbl_80500BE0[i] = register_boss__6TLobbyFPv(i + 0x18);
        lbl_80500BE8[i] = dispatch_shared_handler_b__6TLobbyFPv(i + 0x18);
        lbl_80500BF0[i] = register_object__6TLobbyFPv(i + 0x18);
        lbl_80500BF8[i] = dispatch_shared_handler_a__6TLobbyFPv(i + 0x18);
    }
    {
        u8 *res = RES_800C17B8;
        Desc_800C17B8 d = lbl_8043B9F8;
        d.a = *(s32 *)(res + 0x430);
        spawn_npc_enemy__6TLobbyFsiiiff(5, *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 8),
                                        *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 0xC), &d, lbl_805D9F28, lbl_805D9F4C);
        if (get_instance__6TLobbyFv() == 0) {
            spawn_npc_enemy__6TLobbyFsiiiff(6, *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 8), lbl_805D516C, &d,
                                            lbl_805D9F28, lbl_805D9F4C);
        } else {
            spawn_npc_enemy__6TLobbyFsiiiff(6, *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 0x18),
                                            *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 0x1C), &d, lbl_805D9F28, lbl_805D9F4C);
        }
    }
}

#undef RES_800C17B8
#undef lbl_805D5164
#undef lbl_805D516C

void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492F28;
        free_collision_body_parts(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define CLAMP_800C1C4C(x, lo, hi) ((x) < (lo) ? (lo) : ((x) < (hi) ? (x) : (hi)))

u8 *TObjEneLappy__ct(u8 *self, s32 arg1, Set_800C1C4C *set) {
    s32 i;
    f32 scale;

    initialize__9TObjEnemyFPv(self, arg1, set);
    *(void **)(self + 0x18) = (u8 *)lbl_80492F28;
    *(s32 *)(self + 0) = lbl_805D2A40;
    ((VObj_18_fe72f9 *)self)->m79(set);
    *(s32 *)(self + 0xDC) = *(s32 *)((u8 *)lbl_805D5164 + 0x430);
    VecCopy__FP3VecPC3Vec(self + 0x38, set->pos);
    copy_xyz__10TObjPlayerFPvPv(self + 0x5C, set->rot);
    for (i = 0; i < 5; i++) {
        ((Lappy_800C1C4C *)self)->params[i] = set->params[i];
    }
    *(s32 *)(self + 0x368) = set->f3c != 0 ? 1 : 0;
    if (calc_boss4_scale__10TObjPlayerFi(self) < lbl_805D9F94) {
        *(s32 *)(self + 0x368) = 1;
        if (get_instance__6TLobbyFv() == 1) {
            lbl_805D5168 = collect_and_count__12TBoss3VoloptFUii(*(void **)(*(u8 **)((u8 *)lbl_805D5164 + 0x42C) + 0x18), 0x12);
        }
    }
    if (*(s32 *)(self + 0x368) == 0) {
        set_param__12TObjEneLappyFPvi(self, 5);
    } else if (get_instance__6TLobbyFv() == 1) {
        switch (lbl_805D5160) {
        case 1:
            set_param__12TObjEneLappyFPvi(self, 0x4F);
            break;
        case 2:
            set_param__12TObjEneLappyFPvi(self, 0x51);
            break;
        case 3:
            set_param__12TObjEneLappyFPvi(self, 0x50);
            break;
        default:
            set_param__12TObjEneLappyFPvi(self, 0x33);
            break;
        }
    } else {
        set_param__12TObjEneLappyFPvi(self, 6);
    }
    *(s32 *)(self + 0x36C) = set->f3e;
    *(s16 *)(self + 0x33A) = 0xF;
    *(s16 *)(self + 0x33C) = *(s16 *)(self + 0x33A);
    VecCopy__FP3VecPC3Vec(self + 0x44, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x50, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x290, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x29C, self + 0x38);
    *(s16 *)(self + 0x374) = 0;
    *(s16 *)(self + 0x396) = 0;
    *(s16 *)(self + 0x382) = -1;
    *(s16 *)(self + 0x384) = 0;
    *(s16 *)(self + 0x380) = 0;
    *(u8 *)(self + 0x378) = CLAMP_800C1C4C((s16)*(f32 *)(self + 0x354), 0, 1);
    *(s16 *)(self + 0x37A) = 0;
    *(void **)(self + 0x350) = (u8 *)lbl_80492EC4;
    init_collision_body_parts(self, (u8 *)lbl_80492EFC, 1);
    if (set->fa > 0) {
        *(s16 *)(self + 0x374) |= 0x60;
        *(u8 *)(self + 0x378) = 1;
        *(u32 *)(self + 0x30) &= ~0x800000;
        *(u32 *)(*(u8 **)(self + 0xA4) + 0x18) &= ~1;
    }
    bind_enemy_combat_stats(self, lbl_80500BE0[*(s32 *)(self + 0x368)], lbl_80500BE8[*(s32 *)(self + 0x368)], lbl_80500BF0[*(s32 *)(self + 0x368)]);
    apply_variant_speeds__12TObjEneLappyFPv(self);
    *(s16 *)(self + 0x32C) = *(s16 *)(self + 0x2B8);
    *(s16 *)(self + 0x32E) = *(s16 *)(self + 0x2BA);
    *(s16 *)(self + 0x33E) = *(s16 *)(self + 0x32C);
    update_prev_position__10TObjPlayerFPv(self);
    copy_position__20TBoss3VoloptHiraisinFi(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    scale = lbl_805D9F84 * (lbl_805D9F60 + calc_boss4_scale__10TObjPlayerFi(self));
    *(s16 *)(self + 0x37E) = lbl_805D9F2C * scale;
    add_flags_2e4__10TObjPlayerFPvUi(self, 1, scale, lbl_805D9F84);
    *(u32 *)(self + 0x30) |= 0x40000;
    *(void **)(self + 0xD8) = (u8 *)rappy_variant_speed_table;
    set_field_d8__10TObjPlayerFPvi(self, *(void **)(self + 0xD8));
    *(s16 *)(self + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(self, *(s16 *)(self + 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(self, *(s16 *)(self + 0xB8));
    *(u8 *)(self + 0x379) = *(u8 *)(self + 0x378);
    if (check_v2_mode__9TObjEneDDFv() != 0 && calc_boss4_scale__10TObjPlayerFi(self) < lbl_805D9F98) {
        *(s16 *)(self + 0x374) |= 0x400;
    }
    ((VObj_18_fe72f9 *)self)->m80();
    return self;
}

int is_lying_down__12TObjEneLappyFv(void) { return 0; }

extern void *lbl_805D5164;
extern s32 lbl_805D516C;

void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (get_instance__6TLobbyFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 8);
    } else {
        if (arg1 == 0) {
            var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 8);
        } else {
            var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 0x18);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = var_r0;
    }
    if (arg1 == 0) {
        var_r0_2 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 0xC);
    } else {
        var_r0_2 = lbl_805D516C;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_2;
}

void fn_800C20B0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) & 0xFFFFFFFE);
}

void fn_800C20C0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) | 1);
}
void TObjPlayer__sub_800C20D0(Obj_800C20D0 *o) {
    s32 save8;
    s32 save14;
    if (o->m8(lbl_805D9FA0, lbl_805D9FA4) == 0) {
        return;
    }
    Vec_800C20D0 v = lbl_8043BBC0[0];
    update_player_state__9TObjEneDDFPv(o, &v, 0);
    if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
        save8 = o->model->mat->f8;
        save14 = o->model->mat->f14;
        o->model->mat->f8 = o->model->mat->f20;
        o->model->mat->f14 = o->model->mat->f2C;
    }
    set_global_param__8TObjFishFi(o->model);
    push_matrix();
    post_translate_matrix(&o->pos);
    rotate_matrix_y(0, o->f60);
    clear_global_flag_400__9TObjEneDDFv();
    toggle_particle_effect__10TObjPlayerFv();
    set_scene_override(0);
    draw_chunk_object(o->f34);
    restore_default_scene();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
        o->model->mat->f8 = save8;
        o->model->mat->f14 = save14;
    }
}
void TObjPlayer__sub_800C220C(Obj_800C220C *o) {
    s32 visible;
    s32 save8;
    s32 save14;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        o->m104();
        return;
    }
    if (o->f326 == 11) {
        return;
    }
    if (is_main_phase_15__9TObjEneDDFv() != 0) {
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) != 0) {
            visible = o->m9(600.0f, 600.0f, lbl_805D9FA4);
        } else {
            visible = o->m9(lbl_805D9E88, lbl_805D9E84, lbl_805D9FA4);
        }
    } else if (o->m8(lbl_805D9FA0, lbl_805D9FA4) != 0) {
        visible = 1;
    } else {
        visible = 0;
    }
    if (visible != 0) {
        if (o->f326 != 10) {
            Vec_800C220C v = lbl_8043BBB4[0];
            update_player_state__9TObjEneDDFPv(o, &v, 0);
        }
        update_secondary_light__9TObjEneDDFPv(o);
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
            save8 = o->model->mat->f8;
            save14 = o->model->mat->f14;
            o->model->mat->f8 = o->model->mat->f20;
            o->model->mat->f14 = o->model->mat->f2C;
        }
        set_global_param__8TObjFishFi(o->model);
        push_matrix();
        post_translate_matrix(&o->pos);
        rotate_matrix_y(0, o->f3C0);
        lbl_805D5660 = some_id_805c6f74;
        set_scene_override(0);
        clear_global_flag_400__9TObjEneDDFv();
        translate_matrix(0, lbl_805D9FAC, o->f3C8, lbl_805D9FAC);
        lbl_805D517C = o->f60 - o->f3C0;
        lbl_805D5180 = &o->f3DC;
        o->f3DC = lbl_805D9FAC;
        o->f3E0 = lbl_805D9FB0;
        o->f3E4 = lbl_805D9FAC;
        o->f3E8 = lbl_805D9FAC;
        o->f3EC = lbl_805D9FB4;
        o->f3F0 = lbl_805D9FAC;
        scale_matrix(0, lbl_805D9FB8, lbl_805D9FB8, lbl_805D9FB8);
        set_global_state__16TObjEneRe7BeruraFi((void *)update_effect_sequence__10TObjPlayerFv);
        if (o->f326 == 8) {
            s32 c = (o->f3D8 & 0xFF) << 16;
            lbl_805D5178 = -1;
            toggle_particle_effect__10TObjPlayerFv();
            draw_with_alt_model__10TObjPlayerFPvi(o, c);
            end_effect_render__13TParticleCtrlFv();
        } else {
            lbl_805D5178 = 0;
            toggle_particle_effect__10TObjPlayerFv();
            if (o->f3C4 & 8) {
                if (o->sub.m8() != 0) {
                    o->sub.m6();
                    if (toggle_flag_9__10TObjPlayerFPv(o) == 0) {
                        draw__16TObjEneRe7BeruraFPv(o);
                    }
                    o->sub.m7();
                }
            } else if (visible == 1) {
                draw__16TObjEneRe7BeruraFPv(o);
            } else {
                render_world_model__10TObjPlayerFPv(o);
            }
            end_effect_render__13TParticleCtrlFv();
        }
        set_global_state__16TObjEneRe7BeruraFi(0);
        restore_default_scene();
        some_id_805c6f74 = lbl_805D5660;
        pop_matrix();
        update_primary_light__9TObjEneDDFPv(o);
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
            o->model->mat->f8 = save8;
            o->model->mat->f14 = save14;
        }
        return;
    }
    o->f3DC = o->pos.x;
    o->f3E0 = lbl_805D9FB0 + o->pos.y;
    o->f3E4 = o->pos.z;
    o->f3E8 = o->pos.x;
    o->f3EC = lbl_805D9FB4 + o->pos.y;
    o->f3F0 = o->pos.z;
}

}

#undef toggle_particle_effect__10TObjPlayerFv
#undef end_effect_render__13TParticleCtrlFv
#undef rotate_matrix_y
#undef push_matrix
#undef pop_matrix
#undef post_translate_matrix
#undef set_global_param__8TObjFishFi
#undef draw_chunk_object
#undef scale_matrix
#undef draw__16TObjEneRe7BeruraFPv
#undef render_world_model__10TObjPlayerFPv
#undef apply_variant_speeds__12TObjEneLappyFPv
#undef enter_down_state__10TObjPlayerFPv
#undef enter_idle_state__12TObjEneLappyFPv
#undef enter_moving_state__12TObjEneLappyFPv
#undef enter_state_4__10TObjPlayerFPv
#undef handle_death__10TObjPlayerFPv
#undef render__12TObjEneLappyFPv
#undef run_task__12TObjEneLappyFPv
#undef select_target__12TObjEneLappyFPv
#undef set_action_state_3__10TObjPlayerFPv
#undef try_clear_flags_60__10TObjPlayerFi
#undef update_action_hold__12TObjEneLappyFi

#undef lbl_805D5168
