#include "types.h"

struct RecoveredGlobal_800A6BE0_lbl_80500978 {
    s32 value;
    u8 remaining[0xC];
};

struct Obj_800A6B14;

typedef struct Init_800A715C { s32 w[4]; } Init_800A715C;

typedef struct Rec_800A715C { s32 a; s32 idx; f32 f; s32 d; } Rec_800A715C;

typedef struct Ent_800A715C { s32 a; void *b; } Ent_800A715C;

typedef struct Sub_800A715C { u8 pad[8]; void *f8; void *fC; } Sub_800A715C;

typedef struct Res_800A715C { u8 pad[0x42C]; Sub_800A715C *sub; Ent_800A715C *ents; } Res_800A715C;

typedef struct Vec_800A715C { f32 x, y, z; } Vec_800A715C;

struct Obj_800A73F8 { u8 pad0[0x18]; void *vt; u8 pad1c[0x3C0 - 0x1C]; void *items[3]; };

struct E_800A7734 { u8 pad[8]; s32 x8; s32 xc; };

struct G_800A7734 { u8 pad[0x42c]; E_800A7734 *tbl; };

struct O_800A7734 { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

struct VBase_800A749C { char pad[0x18]; };

struct VObj_800A749C : VBase_800A749C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78();
    virtual void m79(void *);
    virtual void m80();
};

extern "C" {
s32 update_movement_status__10TObjPlayerFv();
s32 obj_clearFlags30(void *, int);
s32 update_landing_recovery__10TObjPlayerFPv(u8 *arg0);
s32 update_action_hold_status__10TObjPlayerFv();
s32 obj_clearFlags30(void *, int);
s32 update_action_hold_recovery__10TObjPlayerFPv(u8 *arg0);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 TObjEneMe3ShinowaMirage__sub_800D98D8(s32, void *, void *, int, Vec_800A715C *, Vec_800A715C *);
s32 draw_trail_with_colors(s32, void *, void *, int, int);
s32 init_trail_buffer__11TBoss4Type3FPvifff(void *, int, f32, f32, f32);
s32 *alloc_buffer__11TOBoss4RockFPv(int);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, void *, void *, Init_800A715C *, f32, f32);
extern const Init_800A715C saver_init_binding_desc;
extern void *bm_ene_df1_saver_model_names[2];
extern void *bm_ene_df1_saver_motion_names[12];
extern RecoveredGlobal_800A6BE0_lbl_80500978 lbl_80500978;
extern s32 saver_boss_stat_handle;
extern s32 *player_object_ptr_array;
extern s32 saver_object_stat_handle;
extern f32 *lbl_805D504C;
extern u32 saver_bml_resource;
extern s32 lbl_805D5054;
extern s32 lbl_805D5058;
extern s32 lbl_805D505C;
extern s32 lbl_805D5060;
extern s32 lbl_805D5064;
extern void *lbl_805D5068;
extern s32 lbl_805D506C;
extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A28;
extern const f32 lbl_805D9A2C;
extern const f32 lbl_805D9A34;
extern const f32 lbl_805D9A3C;
extern const f32 lbl_805D9A40;
extern const f32 lbl_805D9A6C;
extern const f32 lbl_805D9A94;
void initialize_saver_resources(void);
s32 queue_destruction__7TObjectFv(void *);
void *TObjPlayer__sub_800A05B8(void *, s16);
void __dt__9TObjEnemyFv(void *, int);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
extern void *TObjEneSaver__vtable[83];
Obj_800A73F8 *fn_800A73F8(Obj_800A73F8 *arg0, s16 arg1);
void* TObjPlayer__sub_800A772C(void* p);
extern u32 saver_bml_resource;
void TObjPlayer__sub_800A7734(O_800A7734 *self, s32 i);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 copy_position__20TBoss3VoloptHiraisinFi(void *);
void init_position_vectors__10TObjPlayerFi(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void TObjPlayer__sub_800A7734(O_800A7734 *self, s32 i);
s32 create__12TObjEneSaverFPvPv(u32, u32);
void set_param__12TObjEneLappyFPvi(void *, s32);
void initialize_enemy_photon_effect(void *);
s32 update_prev_position__10TObjPlayerFPv(void *);
s32 bind_enemy_combat_stats(void *, int, int, int);
void initialize__9TObjEnemyFPv(void *, void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, s32);
void *__nw__7TObjectFUl(int);
void *TEneParticleCtrl__ct(void *, void *, s32);
extern s32 TObjEneSaver__class_name;
extern s32 saver_boss_stat_handle;
extern s32 *player_object_ptr_array;
extern s32 saver_object_stat_handle;
extern u32 saver_bml_resource;
u8 *TObjEneSaver__ct(u8 *arg0, void *arg1, void *arg2);
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
extern G_800A4294 player_effect_task_list;
extern int TObjPlayer__effect_count;
void TObjPlayer__sub_800A4294(void);
void calc_move_state__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_800A7774(void *, void *);
s32 set_param__16TEneParticleCtrlFPv(void *, s32);
s32 free_particle_ctrl__16TEneParticleCtrlFPv(void *);
void TObjPlayer__sub_800A435C(u8 *arg0);
s32 apply_actor_gravity(void *, int, f32);
s32 move_with_wall_slide(void *);
s32 queue_destruction__7TObjectFv(void *);
s32 TObjPlayer__sub_800A04F0(void *);
#define step_angle_clamped__10TObjPlayerFPvi ((s32 (*)(void*, int))(step_angle_clamped__10TObjPlayerFPvi))
s32 request_two_effects__10TObjPlayerFPv(void *);
s32 apply_effect_variant_a__10TObjPlayerFii(void *, s32);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, s32);
s32 advance_animation_playback();
s32 play_sound_effect(s32, void *, s32, s32);
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
s32 advance_animation_playback();
s32 post_translate_matrix(void *);
s32 apply_actor_gravity(void *, int, f32);
s32 check_enemy_body_collisions(void *);
s32 submit_cursor_candidate(void *, int);
s32 mult_vec_array__10TObjPlayerFUii(int, int, void *, int);
s32 set_matrix_identity(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 check_object_collisions__10TObjPlayerFPv(void *);
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
s32 minimap_render_dot(void *, int, int, int);
s32 refresh_lobby_state__10TObjPlayerFPv(void *, void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);

    extern int TObjPlayer__effect_count;

struct Obj_800A48C4;
struct Obj_800A4C4C;
struct Obj_800A5A68;
struct Obj_800A677C;
extern "C" {
void TLobby__sub_801A1FD8();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_80014830();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void TObjPlayer__sub_80019568();
void TObjPlayer__sub_800A48C4(Obj_800A48C4 *o);
void TObjPlayer__sub_800A5A68(Obj_800A5A68 *self);
void TObjPlayer__sub_800A617C(void *arg0);
void TObjPlayer__sub_800A64E8(u8 *arg0);
void TObjPlayer__sub_800A6C54(u8 *arg0);
void TObjPlayer__sub_800A6EC0(u8 *arg0);
void update_and_send_enemy_hit_state();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_defense_stat_status__10TObjPlayerFv();
void apply_hit_message_flags__10TObjPlayerFPvPv();
void apply_knockback_from_attacker();
void apply_movement_ailment__10TObjPlayerFv();
void apply_object_set_data();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_set_data__9TObjEnemyFPvPv();
void apply_shock_status__10TObjPlayerFv();
void apply_slow_status__10TObjPlayerFPv();
void apply_switch_attack__10TObjPlayerFi();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void call_vt78__10TObjPlayerFPv();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void clear_lobby_object_state();
void consume_timer_field__10TObjPlayerFPvi();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void enter_state_7__10TObjPlayerFPv(void *arg0);
s32 find_facing_partner__10TObjPlayerFPv(Obj_800A4C4C *self);
void find_nearest_target__10TObjPlayerFPv(Obj_800A677C *self);
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void get_actor_level_index();
void get_enemy_name__14TObjEnePanarmsFPv();
void get_pos__10TObjPlayerFii();
void has_flag_0x800__10TObjPlayerFPv();
void is_actor_cadence_frame();
s32 is_target_in_attack_arc__10TObjPlayerFPv(u8 *arg0);
extern u8 lbl_8043A738[];
extern u8 lbl_8043A74C[];
extern u8 lbl_8043A768[];
extern u8 lbl_8043A784[];
extern u8 lbl_8043A7A0[];
extern u8 lbl_8043A7BC[];
extern u8 lbl_8043A7D4[];
extern u8 lbl_8043A7F0[];
extern u8 lbl_8043A80C[];
extern u8 lbl_8043A824[];
extern u8 lbl_8043A83C[];
extern u8 lbl_8043A854[];
extern u8 lbl_8043A86C[];
void receive_direct_attack__10TObjPlayerFv();
void receive_physical_attack__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void render_actor_shadows_default();
void reset_actor_action_state();
void reset_pose__10TObjPlayerFPv();
void roll_physical_accuracy__10TObjPlayerFv();
void select_melee_contact_body__10TObjPlayerFv();
void start_boss4_pose__10TObjPlayerFPv(void *arg0);
void test_flag30_512__10TObjPlayerFPv();
void test_flag_1000__10TObjPlayerFPv();
void trigger_switch_attack__10TObjPlayerFi();
void try_start_action__10TObjPlayerFPvii();
s32 update_action_hold_recovery__10TObjPlayerFPv(u8 *arg0);
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
s32 update_landing_recovery__10TObjPlayerFPv(u8 *arg0);
void update_object_view_visibility();
void update_poison_status__10TObjPlayerFv();
void update_shock_clock__10TObjPlayerFPv();
extern void *bm_ene_df1_saver_model_names[2];
extern void *bm_ene_df1_saver_motion_names[12];
__declspec(section ".data") void *bm_ene_df1_saver_model_names[2] = {
    (void *)&lbl_8043A738, (void *)0x0,
};
void *bm_ene_df1_saver_motion_names[12] = {
    (void *)&lbl_8043A74C, (void *)&lbl_8043A768, (void *)&lbl_8043A784, (void *)&lbl_8043A7A0,
    (void *)&lbl_8043A7BC, (void *)&lbl_8043A7D4, (void *)&lbl_8043A7F0, (void *)&lbl_8043A80C,
    (void *)&lbl_8043A824, (void *)&lbl_8043A83C, (void *)&lbl_8043A854, (void *)0x0,
};
void *bm_ene_df1_saver_resource_descriptor[4] = {
    (void *)&lbl_8043A86C, (void *)&bm_ene_df1_saver_model_names, (void *)&bm_ene_df1_saver_motion_names, (void *)0x1000b,
};
void *TObjEneSaver__trail_record_table[44] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f800000, (void *)0x1,
    (void *)0x10000, (void *)0xa, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f800000, (void *)0x4,
    (void *)0x20000, (void *)0x8, (void *)0x3f800000, (void *)0x4,
    (void *)0x20000, (void *)0x7, (void *)0x3f333333, (void *)0x4,
    (void *)0x10000, (void *)0x6, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x20007, (void *)0x5, (void *)0x3f800000, (void *)0x8,
    (void *)0x20000, (void *)0x0, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x20000, (void *)0x2, (void *)0x3f800000, (void *)0x8,
    (void *)0x30000, (void *)0x4, (void *)0x3f800000, (void *)0x10,
    (void *)0x30000, (void *)0x3, (void *)0x3f800000, (void *)0x10,
};
void *lbl_80490B28[7] = {
    (void *)0x437a0000, (void *)0x3fa00000, (void *)0x400, (void *)0x0,
    (void *)0x64, (void *)0x0, (void *)0x0,
};
void *saver_collision_body_part_table[11] = {
    (void *)0x0, (void *)0x41480000, (void *)0x0, (void *)0x40c00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *TObjEneSaver__vtable[83] = {
    (void *)0x0, (void *)0x0, (void *)&fn_800A73F8, (void *)&TObjPlayer__sub_800A6EC0,
    (void *)&TObjPlayer__sub_800A6C54, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&TObjPlayer__sub_800A772C, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&find_nearest_target__10TObjPlayerFPv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_arc__10TObjPlayerFPv, (void *)&find_facing_partner__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_recovery__10TObjPlayerFPv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_landing_recovery__10TObjPlayerFPv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_800A64E8, (void *)&TObjPlayer__sub_800A617C,
    (void *)&TObjPlayer__sub_800A5A68, (void *)&enter_state_7__10TObjPlayerFPv, (void *)&TObjPlayer__sub_800A48C4, (void *)&start_boss4_pose__10TObjPlayerFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state,
};
}

void reset_effect_count__10TObjPlayerFv(void) { TObjPlayer__effect_count = 0; }

void TObjPlayer__sub_800A4294(void) {
    player_effect_task_list.p = &lbl_804CC8C8;
    player_effect_task_list.n = 0x10;
    (*(s32 *)&TObjPlayer__effect_count) = player_effect_task_list.p->b->c->x0;
}

void TObjPlayer__sub_800A42C0(void) {  }

extern s32 lbl_805D5064;

void apply_lookup_entry_effect__10TObjPlayerFPv(u8 *arg0) {
    struct { s32 a, b, c; s32 d, e, f, g, h; } sp8;
    s32 temp_r3;
    u8 *temp_r3_2;

    temp_r3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (lbl_805D5064), (f32) (*(f32 *)((s8 *)arg0 + 0xC0)));
    if (temp_r3 != 0) {
        push_matrix();
        set_matrix_identity((int) (0));
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        mult_vec_array__10TObjPlayerFUii((int) (0), (int) (temp_r3), (void *) (&sp8), (int) (2));
        pop_matrix();
        temp_r3_2 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x3C0));
        if (temp_r3_2 != NULL) {
            ((struct VDisp_800a42c4_800A4288 *) temp_r3_2)->m4(&sp8, &sp8.d);
        }
    }
}

extern s32 lbl_8043A8C8;
extern const f32 lbl_805D9A10;

void TObjPlayer__sub_800A435C(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x380);
    switch (temp_r0) {
    case 0x0:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3A0) != 0U) {
            free_particle_ctrl__16TEneParticleCtrlFPv(*(void **)((s8 *)arg0 + 0x3A0));
        }
        break;
    default:
        calc_move_state__10TObjPlayerFPv(arg0);
    case 0x107:
    case 0x10E:
        if (!(*(s32 *)((s8 *)arg0 + 0x374) & 4)) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x3A0) != 0U) {
                free_particle_ctrl__16TEneParticleCtrlFPv(*(void **)((s8 *)arg0 + 0x3A0));
            }
        } else if ((s32) *(s32 *)((s8 *)arg0 + 0x384) != (s32) *(s32 *)((s8 *)arg0 + 0x380)) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x3A0) != 0U) {
                set_param__16TEneParticleCtrlFPv(*(void **)((s8 *)arg0 + 0x3A0), *(s32 *)((s8 *)arg0 + 0x380));
            }
            *(s32 *)((s8 *)arg0 + 0x384) = (s32) *(s32 *)((s8 *)arg0 + 0x380);
        }
        break;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x3A0) != 0U) {
        TObjPlayer__sub_800A7774(*(void **)((s8 *)arg0 + 0x3A0), arg0 + 0x390);
    }
}

void calc_move_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r6;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x38A);
    temp_r6 = *(s16 *)((s8 *)arg0 + 0x388);
    if (temp_r0 == temp_r6) {
        *(s32 *)((s8 *)arg0 + 0x380) = 0x101;
        return;
    }
    if ((lbl_805D9A10 * (f32) temp_r0) < (f32) temp_r6) {
        *(s32 *)((s8 *)arg0 + 0x380) = 0x102;
        return;
    }
    if (temp_r6 > 0) {
        *(s32 *)((s8 *)arg0 + 0x380) = 0x103;
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x380) = 0;
}

extern const f32 lbl_805D9A10;

void update_collapse_and_destroy__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    s32 prev_r3;
    advance_animation_playback();
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        request_two_effects__10TObjPlayerFPv(arg0 + 0x38);
        TObjPlayer__sub_800A04F0(arg0 + 0x3A4);
        apply_actor_gravity((void *)(arg0), (int)(0), lbl_805D9A14);
        prev_r3 = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B207);
        play_sound_effect(prev_r3, arg0 + 0x38, 0, 0);
        return;
    case 1:
        step_angle_clamped__10TObjPlayerFPvi((void *)(arg0), (int)(0));
        move_with_wall_slide(arg0);
        *(f32 *)((s8 *)arg0 + 0x308) *= lbl_805D9A10;
        *(f32 *)((s8 *)arg0 + 0x310) *= lbl_805D9A10;
        if (((VObj1 *)(arg0 + 0x3A4))->m4() == 1) {
            apply_effect_variant_a__10TObjPlayerFii(arg0 + 0x38, 0);
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
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

    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 0xA) {
        temp_s16 = 0xA;
        *(s16 *)((s8 *)arg0 + 0x326) = temp_s16;
        *(s16 *)((s8 *)arg0 + 0x328) = 0;
        if (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D9A10) {
            *(s16 *)((s8 *)arg0 + 0xB8) = 9;
        } else {
            *(s16 *)((s8 *)arg0 + 0xB8) = 0xA;
        }
        temp_r4 = *(void **)((s8 *)arg0 + 0xA4);
        *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFFE);
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
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        break;
    case 1:
        *(f32 *)((s8 *)arg0 + 0x310) = (f32) lbl_805D9A14;
        *(f32 *)((s8 *)arg0 + 0x308) = (f32) lbl_805D9A14;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 8U) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
        }
        break;
    case 2:
        if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x800000)) {
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        }
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFF9FF);
        temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
        *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) & 0xFBFFFFFF);
        *(s16 *)((s8 *)arg0 + 0x33E) = (s16) *(s16 *)((s8 *)arg0 + 0x32C);
        break;
    }
    check_object_collisions__10TObjPlayerFPv((void *) (arg0));
    check_enemy_body_collisions((void *) (arg0));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
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
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 angle_difference_abs(s32, s32);
u8 *get_player_by_client_id(s32);
s32 subtract_vector(void *, void *);
extern const f64 lbl_8043A8D0[];
void TObjPlayer__sub_800A48C4(Obj_800A48C4 *o);
}

extern "C" {

void update_knockback_state__10TObjPlayerFPv(u8 *arg0);
s32 advance_animation_playback();
#define apply_actor_gravity ((s32 (*)(void*, s32, f32))(apply_actor_gravity))
s32 move_with_wall_slide(void *);
#define step_angle_clamped__10TObjPlayerFPvi ((s32 (*)(void*, s32))(step_angle_clamped__10TObjPlayerFPvi))
s32 check_enemy_body_collisions(void *);
#define submit_cursor_candidate ((s32 (*)(void*, s32))(submit_cursor_candidate))
s32 check_object_collisions__10TObjPlayerFPv(void *);
#define minimap_render_dot ((s32 (*)(void*, s32, s32, s32))(minimap_render_dot))

extern const f32 lbl_805D9A10;
extern const f32 lbl_805D9A14;

void update_knockback_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;

    advance_animation_playback();
    step_angle_clamped__10TObjPlayerFPvi(arg0, 0);
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        apply_actor_gravity(arg0, 0, lbl_805D9A14);
        break;
    case 1:
        move_with_wall_slide(arg0);
        *(f32 *)((s8 *)arg0 + 0x308) = (f32) (*(f32 *)((s8 *)arg0 + 0x308) * lbl_805D9A10);
        *(f32 *)((s8 *)arg0 + 0x310) = (f32) (*(f32 *)((s8 *)arg0 + 0x310) * lbl_805D9A10);
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 8U) {
            *(s16 *)((s8 *)arg0 + 0xB8) = 7;
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
        }
        break;
    case 2:
        if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x800000)) {
            apply_actor_gravity(arg0, 0, lbl_805D9A14);
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 0x20U) {
            if ((s32) *(s16 *)((s8 *)arg0 + 0x388) <= 0) {
                *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 8);
            }
            *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFF9FF);
            *(s16 *)((s8 *)arg0 + 0x33E) = (s16) *(s16 *)((s8 *)arg0 + 0x32C);
        }
        break;
    }
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    submit_cursor_candidate(arg0, -1);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
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
            d = angle_difference_abs(o->f60, (s32)(lbl_8043A8D0[0] * atan2_float(v.x, v.z)));
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
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
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
    virtual s32 m20(u32, f32);
    virtual void m21();
    virtual void m22();
    virtual s32 m23(u32);
};

extern "C" {
s32 apply_actor_gravity(void *, int, f32);
s32 TObjPlayer__sub_800A0554(void *);
s32 play_area_variant_sound__12TBoss3VoloptFi(void *);
s32 play_area_se_with_particle__12TBoss3VoloptFi(void *);
#define advance_animation_playback ((s32 (*)(void*, int))(advance_animation_playback))
s32 minimap_render_dot(void *, int, int, int);
void TObjPlayer__sub_800A5FA8(u8 *arg0);
f32 calc_distance_to_client__10TObjPlayerFiUsUi(void *, u16, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
Obj_800A4C4C *get_player_data__10TObjPlayerFi(s32);
#define atan2_float ((f32 (*)(f32, f32))(atan2_float))
s32 test_action_mask__10TObjPlayerFPvi(void *, int);
s32 angle_difference_abs(s32, s32);
s32 subtract_vector(void *, void *);
extern const f64 lbl_8043A8D0[];
extern s32 lbl_805D586C;
extern const f32 lbl_805D9A24;
s32 find_facing_partner__10TObjPlayerFPv(Obj_800A4C4C *self);
s32 VecCopy__FP3VecPC3Vec(void *, void *);

s32 TObjPlayer__sub_800A7798(void *, f32);
s32 bind_enemy_combat_stats(void *, int, int, int);
s32 subtract_vector(void *, void *);
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
s32 apply_actor_gravity(void *, int, f32);
s32 enemy_move_toward(void *, s32, Vec_800A5DC4 *, int, f32 *, f32);
s32 select_enemy_destination(void *, Vec_800A5DC4 *, int);
s32 copy_position_if_valid__10TObjPlayerFii(void *, Vec_800A5DC4 *);
#define turn_toward_target__10TObjPlayerFPv ((s32 (*)(void*))(turn_toward_target__10TObjPlayerFPv))
s32 TObjPlayer__sub_800A7798(void *, f32);
f32 horizontal_distance_squared(int, void *);

s32 check_enemy_body_collisions(void *);
s32 check_object_collisions__10TObjPlayerFPv(void *);
s32 submit_cursor_candidate(void *, int);
s32 minimap_render_dot(void *, int, int, int);
extern f32 *lbl_805D504C;
extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A78;
void update_move_toward_target__10TObjPlayerFPv(u8 *arg0);
s32 apply_actor_gravity(void *, int, f32);
s32 move_with_wall_slide(void *);
s32 enemy_set_heading_velocity(void *, s32, f32);
s32 calc_velocity_toward_destination(void *, Vec_800A5DC4, Vec_800A5DC4, f32);
s32 select_enemy_destination(void *, Vec_800A5DC4 *, int);
s32 copy_position_if_valid__10TObjPlayerFii(void *, Vec_800A5DC4 *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 newton_sqrtf(f32);
s32 spawn_particle_effect(void *, int);
#define step_angle_clamped__10TObjPlayerFPvi ((s32 (*)(void*, int))(step_angle_clamped__10TObjPlayerFPvi))
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
#define copy_target_state__14TObjEnePanarmsFPvPv ((s32 (*)(void*, int))(copy_target_state__14TObjEnePanarmsFPvPv))
u8 *get_enemy_entity(u16);
s32 objInBand__FP7GameObjf(void *, f32);

s32 check_enemy_body_collisions(void *);
s32 check_object_collisions__10TObjPlayerFPv(void *);
#define get_player_by_client_id ((u8* (*)(u16))(get_player_by_client_id))
s32 minimap_render_dot(void *, int, int, int);
#define play_sound_effect ((s32 (*)(int, void*, int, int))(play_sound_effect))
#define mult_vec_array__10TObjPlayerFUii ((s32 (*)(int, s32, void*, int))(mult_vec_array__10TObjPlayerFUii))
s32 set_matrix_identity(int);
s32 rotate_matrix_y(int, int);
s32 subtract_vector(void *, void *);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
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
s32 apply_actor_gravity(void *, int, f32);
f32 horizontal_distance_squared(int, void *);

void enter_state_7__10TObjPlayerFPv(void *arg0) {
    void *temp_r5;

    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 7) {
        *(s16 *)((s8 *)arg0 + 0x326) = 7;
        *(s16 *)((s8 *)arg0 + 0x328) = 0;
        *(s16 *)((s8 *)arg0 + 0xB8) = 5;
    }
    temp_r5 = *(void **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 1);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xF99BFFFF);
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
            if (angle_difference_abs(self->f60, (s32)(lbl_8043A8D0[0] * atan2_float(v.x, v.z))) >= 0x2AAA) {
                continue;
            }
            if (test_action_mask__10TObjPlayerFPvi(p, 0xE0) == 0) {
                continue;
            }
            VecCopy__FP3VecPC3Vec(&v, &self->pos);
            subtract_vector(&v, &p->pos);
            if (angle_difference_abs(p->f60, (s32)(lbl_8043A8D0[0] * atan2_float(v.x, v.z))) < 0x2AAA) {
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
                set_matrix_identity(0);
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
            ((s32 (*)(f32, void *, s32))enemy_set_heading_velocity)(lbl_805D9A14, arg0, F(s32, 0x60));
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
    ((s32 (*)(void *))advance_animation_playback)(o);
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
                set_matrix_identity(0);
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

#define F(t, o) (*(t *)((s8 *)(arg0) + (o)))

void TObjPlayer__sub_800A54B4(u8 *arg0) {
    *(s32 *)((s8 *)(F(u8 *, 0xA4)) + 0x18) |= 1;
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
            a = update_angle__10TObjPlayerFPviPv(arg0, *(s32 *)((s8 *)(F(u8 *, 0x350)) + 8), &d);
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
                    calc_velocity_toward_destination(arg0, *(Vec_800A5DC4 *)(arg0 + 0x2FC), *(Vec_800A5DC4 *)(F(u8 *, 0x2A8) + 0x2FC), *(f32 *)((s8 *)(F(u8 *, 0x350)) + 4));
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
    ((s32 (*)(void *))advance_animation_playback)(arg0);
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
        f32 a = atan2_float(v.x, v.z);
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
    if (*(s16 *)((s8 *)arg0 + 0x326) >= 3) {
        tgt = *(u8 **)((s8 *)arg0 + 0x2A8);
        if (tgt != NULL && *(u32 *)((s8 *)arg0 + 0x318) != 0U && !(*(s32 *)((s8 *)tgt + 0x30) & 0x02000800)) {
            dist = calc_xz_distance_sq__10TObjPlayerFiUiPv(arg0, tgt, &v);
            ang = angle_difference_abs(*(s32 *)((s8 *)arg0 + 0x60), (s32)(lbl_8043A8D0[0] * atan2_float(v.x, v.z)));
            p = *(u8 **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x2A8)) + 0xA4);
            if (p != NULL) {
                var_f29 = *(f32 *)((s8 *)p + 0xC);
            } else {
                var_f29 = lbl_805D9A70;
            }
            flags = *(s32 *)((s8 *)arg0 + 0x374);
            if (flags & 8) {
                *(s16 *)((s8 *)arg0 + 0x37C) = 2;
                if (dist <= (var_f29 + get_pos_x__10TObjPlayerFPv(player_object_ptr_array[*(s16 *)((s8 *)arg0 + 0x37C)])) * (var_f29 + get_pos_x__10TObjPlayerFPv(player_object_ptr_array[*(s16 *)((s8 *)arg0 + 0x37C)])) && ang <= get_field_0c__10TObjPlayerFPv(player_object_ptr_array[*(s16 *)((s8 *)arg0 + 0x37C)])) {
                    return 1;
                }
            } else if (flags & 0x10) {
                *(s16 *)((s8 *)arg0 + 0x37C) = 1;
                r = lbl_805D9A74 + var_f29;
                if (dist <= r * r && ang <= 0xAAA) {
                    return 1;
                }
            } else {
                *(s16 *)((s8 *)arg0 + 0x37C) = 0;
                if (dist <= (var_f29 + get_pos_x__10TObjPlayerFPv(player_object_ptr_array[*(s16 *)((s8 *)arg0 + 0x37C)])) * (var_f29 + get_pos_x__10TObjPlayerFPv(player_object_ptr_array[*(s16 *)((s8 *)arg0 + 0x37C)])) && ang <= get_field_0c__10TObjPlayerFPv(player_object_ptr_array[*(s16 *)((s8 *)arg0 + 0x37C)])) {
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
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xA4));
    *(s32 *)((s8 *)temp_r5 + 0x18) |= 1;
    *(s32 *)((s8 *)arg0 + 0x30) &= 0xF9DBFFFF;
    temp_r8 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x2A8));
    if (temp_r8 != NULL) {
        switch (*(s16 *)((s8 *)arg0 + 0x328)) {
        case 0: {
            Vec_800A5DC4 v = *(Vec_800A5DC4 *)(temp_r8 + 0x2FC);
            if (select_enemy_destination((void *) (arg0), &v, 1) != 0) {
                TObjPlayer__sub_800A7798((void *) (arg0), lbl_805D504C[3]);
                *(s16 *)((s8 *)arg0 + 0x328) = 1;
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
            enemy_move_toward((void *) (arg0), *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x350)) + 8), &v3, 0, lbl_805D504C, lbl_805D504C[2]);
            temp_f1 = horizontal_distance_squared((int) (arg0 + 0x29C), (void *) (arg0 + 0x38));
            if (temp_f1 < lbl_805D9A78) {
                *(s32 *)((s8 *)arg0 + 0x374) &= ~0x10;
            } else {
                *(s32 *)((s8 *)arg0 + 0x374) |= 0x10;
            }
            temp_f0 = *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x350)) + 4) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0xC);
            if (temp_f1 < (temp_f0 * temp_f0)) {
                *(s16 *)((s8 *)arg0 + 0x328) = 2;
            }
            break;
        }
        case 2:
            *(s32 *)((s8 *)arg0 + 0x374) &= ~0x10;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            break;
        }
        ((s32 (*)(void *)) advance_animation_playback)((void *) (arg0));
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
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x06040000);
    temp_r4 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
    *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFFE);
    advance_animation_playback((void *)(arg0), (int) (temp_r4));
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        play_area_se_with_particle__12TBoss3VoloptFi((void *) (arg0 + 0x38));
        TObjPlayer__sub_800A0554((void *) (arg0 + 0x3A4));
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        play_area_variant_sound__12TBoss3VoloptFi((void *) (arg0 + 0x38));
        break;
    case 1:
        if (((VObj14 *) (arg0 + 0x3A4))->m5() == 1) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
        }
        break;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 4);
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

void advance_motion_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;

    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x06040000);
    *(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 0x18) = (s32) (*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 0x18) & 0xFFFFFFFE);
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        apply_actor_gravity((void *) arg0, (int) (0), (f32) (lbl_805D9A14));
        return;
    case 1:
        if (horizontal_distance_squared((int) (*(s32 *)((s8 *)arg0 + 0x2A8) + 0x2FC), (void *) (arg0 + 0x2FC)) < lbl_805D9A7C) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
        }
        return;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 2);
        break;
    }
}

}

#undef advance_animation_playback
#undef atan2_float
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
    virtual s32 m8();
};

struct RecoveredGlobal_800A6BE0_lbl_804FF5E8 {
    s32 value;
    u8 remaining[0x24];
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
    virtual s32 m8();
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
s32 transform_vec_by_camera__15TObjBoss2TunnelFiii(void *, void *, void *);
s32 rotate_matrix_x(int, void *);
extern RecoveredGlobal_800A6BE0_lbl_804FF5E8 lbl_804FF5E8;
extern RecoveredGlobal_800A6BE0_lbl_80500978 lbl_80500978;
extern s32 lbl_805D505C;
extern s32 lbl_805D5060;
extern const f32 lbl_805D9A14;
void step_cutscene_frame__10TObjPlayerFv(void);
#define VecCopy__FP3VecPC3Vec ((void (*)(Vec_800A6B14*, const Vec_800A6B14*))(VecCopy__FP3VecPC3Vec))
#define subtract_vector ((f32 (*)(void*, void*))(subtract_vector))
f64 atan2_float(f32, f32);
s32 angle_diff_s16(s32, s32);
void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1);
#define lbl_8043A8D0 (*(const f64 *)&lbl_8043A8D0)
void turn_toward_target__10TObjPlayerFPv(Obj_800A6B14 *self);
s32 copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
#define TObjPlayer__sub_800A42C0 ((s32 (*)(void*))(TObjPlayer__sub_800A42C0))
#define TObjPlayer__sub_800A435C ((s32 (*)(void*))(TObjPlayer__sub_800A435C))
#define update_collapse_and_destroy__10TObjPlayerFPv ((s32 (*)(void*))(update_collapse_and_destroy__10TObjPlayerFPv))
#define update_entry_motion__10TObjPlayerFPv ((s32 (*)(void*))(update_entry_motion__10TObjPlayerFPv))
#define update_knockback_state__10TObjPlayerFPv ((s32 (*)(void*))(update_knockback_state__10TObjPlayerFPv))
s32 TObjPlayer__sub_800A49B4(void *);
#define TObjPlayer__sub_800A4D9C ((s32 (*)(void*))(TObjPlayer__sub_800A4D9C))
#define TObjPlayer__sub_800A5154 ((s32 (*)(void*))(TObjPlayer__sub_800A5154))
#define TObjPlayer__sub_800A54B4 ((s32 (*)(void*))(TObjPlayer__sub_800A54B4))
#define update_move_toward_target__10TObjPlayerFPv ((s32 (*)(void*))(update_move_toward_target__10TObjPlayerFPv))
#define TObjPlayer__sub_800A5FA8 ((s32 (*)(void*))(TObjPlayer__sub_800A5FA8))
#define advance_motion_state__10TObjPlayerFPv ((s32 (*)(void*))(advance_motion_state__10TObjPlayerFPv))
#define TObjPlayer__sub_800A62D4 ((s32 (*)(void*))(TObjPlayer__sub_800A62D4))
void init_render_flags__10TObjPlayerFPv(u8 *arg0);
s32 update_prev_position__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_8023DEE0(void *, int, int, int);
extern s32 lbl_805D5054;
extern s32 lbl_805D5058;
extern s32 actor_frame_tick;
extern const f32 lbl_805D9A40;
void TObjPlayer__sub_800A6EC0(u8 *arg0);
s32 render_with_position_override__10TObjPlayerFPvPvi(void *, int, int);

s32 toggle_particle_effect__10TObjPlayerFv();
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 render_world_model__10TObjPlayerFPv(void *);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 matrix_mult_vec(int, Vec_800A6C54 *, void *);
s32 scale_matrix_vec3(int, void *);
s32 translate_matrix_vec3(int, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
s32 set_global_state__16TObjEneRe7BeruraFi(void *);
void step_cutscene_frame__10TObjPlayerFv(void);
extern Vec_800A6C54 lbl_8043A8A4;
extern RecoveredGlobal_800A6BE0_lbl_80500978 lbl_80500978;
extern u8 identity_matrix[];
extern s32 lbl_805D505C;
extern s32 lbl_805D5060;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern u8 *anim_model_matrix_array;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
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
extern s32 lbl_8043A8B0[];
extern s32 lbl_8043A8BC[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D9A24;
void find_nearest_target__10TObjPlayerFPv(Obj_800A677C *self);
}

extern "C" {

void TObjPlayer__sub_800A617C(void *arg0);
void TObjPlayer__sub_800A64E8(u8 *arg0);
void * create_ene_saver(void *arg0);
void free_resources__10TObjPlayerFv(void);
void init_render_flags__10TObjPlayerFPv(u8 *arg0);
void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 set_position_from__14TBoss4DarkFalzFPvPv(void *, void *);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
s32 refresh_collision_body_centers(void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
s32 obj_clearFlags30(void *, int);
s32 obj_setFlags30(void *, int);

void TObjPlayer__sub_800A617C(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;
    void *temp_r3;
    void *temp_r3_2;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    default:
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x374);
        if (temp_r4 & 4) {
            *(s16 *)((s8 *)arg0 + 0x326) = 3;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s16 *)((s8 *)arg0 + 0xB8) = 1;
            *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xF9FBFFFF);
        } else if (temp_r4 & 1) {
            *(s16 *)((s8 *)arg0 + 0x326) = 1;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x06040000);
        }
        temp_r3 = *(void **)((s8 *)arg0 + 0xA4);
        *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) | 1);
        return;
    case 1:
        if (*(s32 *)((s8 *)arg0 + 0x374) & 2) {
            *(s16 *)((s8 *)arg0 + 0x326) = 2;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x06040000);
        }
        return;
    case 2:
        if (*(s32 *)((s8 *)arg0 + 0x374) & 4) {
            *(s16 *)((s8 *)arg0 + 0x326) = 3;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s16 *)((s8 *)arg0 + 0xB8) = 1;
            *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xF9FBFFFF);
            return;
        }
        break;
    case 3:
        if (*(s32 *)((s8 *)arg0 + 0x374) & 3) {
            *(s16 *)((s8 *)arg0 + 0x326) = 1;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x06040000);
            *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
            *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 1);
            temp_r3_2 = *(void **)((s8 *)arg0 + 0xA4);
            *(s32 *)((s8 *)temp_r3_2 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3_2 + 0x18) | 1);
            return;
        }
        break;
    }
}

s32 apply_actor_gravity(void *, int, f32);
s32 set_position_from__14TBoss4DarkFalzFPvPv(void *, void *);
s32 TObjPlayer__sub_800A04F0(void *);
s32 play_area_variant_sound__12TBoss3VoloptFi(void *);
s32 update_prev_position__10TObjPlayerFPv(void *);
#define advance_animation_playback ((s32 (*)(int))(advance_animation_playback))
s32 minimap_render_dot(void *, int, int, int);

struct VBase62D4 { char pad[0x14]; };
struct VObj62D4 : VBase62D4 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4(f32);
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

    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x06040000);
    *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFFFFF8);
    *(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 0x18) = (s32) (*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 0x18) & 0xFFFFFFFE);
    advance_animation_playback((int) (arg0));
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
    default:
        temp_r4_2 = *(s16 *)((s8 *)arg0 + 0x37E);
        *(s16 *)((s8 *)arg0 + 0x37E) = (s16) (temp_r4_2 + 1);
        if (lbl_805D9A80 < (f32) temp_r4_2) {
            *(s16 *)((s8 *)arg0 + 0x328) = 1;
            *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805D9A40;
            *(f32 *)((s8 *)arg0 + 0x6C) = (f32) lbl_805D9A40;
            *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805D9A40;
            *(s16 *)((s8 *)arg0 + 0x37E) = 0;
            TObjPlayer__sub_800A04F0((void *) (arg0 + 0x3A4));
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
            play_area_variant_sound__12TBoss3VoloptFi((void *) (arg0 + 0x38));
        }
        break;
    case 1:
        *(f32 *)((s8 *)arg0 + 0x68) = (f32) (*(f32 *)((s8 *)arg0 + 0x68) - lbl_805D9A84);
        if (*(f32 *)((s8 *)arg0 + 0x68) < lbl_805D9A88) {
            *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805D9A14;
        }
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x6C);
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) (temp_f1 + lbl_805D9A84);
        *(f32 *)((s8 *)arg0 + 0x70) = (f32) *(f32 *)((s8 *)arg0 + 0x68);
        if (((VObj62D4 *) (arg0 + 0x3A4))->m4(temp_f1) == 1) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
        }
        break;
    case 2:
        set_position_from__14TBoss4DarkFalzFPvPv((void *) (arg0), (void *) (arg0 + 0x50));
        update_prev_position__10TObjPlayerFPv((void *) (arg0));
        *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805D9A40;
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) lbl_805D9A40;
        *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805D9A40;
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 1);
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}
#define TObjPlayer__sub_800A62D4 ((s32 (*)(void*))(TObjPlayer__sub_800A62D4))

void init_render_flags__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;

    set_position_from__14TBoss4DarkFalzFPvPv((void *) arg0, (void *) (arg0 + 0x50));
    refresh_collision_body_centers((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x06040000);
    temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
    *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) & 0xFFFFFFFE);
}

void TObjPlayer__sub_800A64E8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r3;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 0:
        if (((VObj800A64E8_800a64e8_800A4288 *)(arg0 + 0x3A4))->m8() != 0) {
            *(s16 *)((s8 *)arg0 + 0x326) = 0xB;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s16 *)((s8 *)arg0 + 0xB8) = 0;
            obj_clearFlags30((void *) (arg0), (int) (0x200000));
            obj_setFlags30((void *) (arg0), (int) (0x06040000));
            *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
            *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 0x40);
            temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
            *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) & 0xFFFFFFFE);
        }
        return;
    case 11:
        if (!(*(s32 *)((s8 *)arg0 + 0x374) & 0x40)) {
            *(s16 *)((s8 *)arg0 + 0x326) = 0;
            return;
        }
        break;
    default:
        *(s16 *)((s8 *)arg0 + 0x326) = 0xB;
        *(s16 *)((s8 *)arg0 + 0x328) = 0;
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        obj_clearFlags30((void *) (arg0), (int) (0x200000));
        obj_setFlags30((void *) (arg0), (int) (0x06040000));
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 0x40);
        break;
    }
}

#define P_800A677C(p) ((Obj_800A677C *)(p))

s32 update_landing_recovery__10TObjPlayerFPv(u8 *arg0) {
    if (update_movement_status__10TObjPlayerFv() != 0) {
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 0:
        case 1:
        case 2:
        case 0xB:
            if (((VObj14 *)(arg0 + 0x3A4))->m5() == 1) {
                *(s32 *)((s8 *)arg0 + 0x374) &= ~0x43;
                *(s32 *)((s8 *)arg0 + 0x374) |= 4;
                *(s16 *)((s8 *)arg0 + 0x326) = 3;
                *(s16 *)((s8 *)arg0 + 0x328) = 0;
                *(s16 *)((s8 *)arg0 + 0xB8) = 1;
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
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 0:
        case 1:
        case 2:
        case 0xB:
            if (((VObj14 *)(arg0 + 0x3A4))->m5() == 1) {
                *(s32 *)((s8 *)arg0 + 0x374) &= ~0x43;
                *(s32 *)((s8 *)arg0 + 0x374) |= 4;
                *(s16 *)((s8 *)arg0 + 0x326) = 3;
                *(s16 *)((s8 *)arg0 + 0x328) = 0;
                *(s16 *)((s8 *)arg0 + 0xB8) = 1;
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
        angle_diff_s16(self->angle, (s32)(lbl_8043A8D0 * atan2_float(d.x, d.z))));
}

void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < -0x238E) {
        var_r4 = -0x238E;
    } else if (var_r4 > 0x238E) {
        var_r4 = 0x238E;
    }
    *(s32 *)((s8 *)arg0 + 0x39C) = lerp_angle_half__10TObjPlayerFUsUs(*(s32 *)((s8 *)arg0 + 0x39C), var_r4);
}

extern void *tl_04;

typedef char RecoveredGlobal_800A6BE0_lbl_804FF5E8_size[sizeof(RecoveredGlobal_800A6BE0_lbl_804FF5E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800A6BE0_lbl_80500978_size[sizeof(RecoveredGlobal_800A6BE0_lbl_80500978) == 0x10 ? 1 : -1];
void step_cutscene_frame__10TObjPlayerFv(void) {
    if ((s32) lbl_805D505C == 0x15) {
        rotate_matrix_x((int) (0), (void *) (lbl_805D5060));
    }
    if ((s32) lbl_805D505C == 0x1A) {
        *(f32 *)((s8 *)(&lbl_80500978.value) + 0) = (f32) lbl_805D9A14;
        *(f32 *)((s8 *)(&lbl_80500978.value) + 4) = (f32) lbl_805D9A14;
        *(f32 *)((s8 *)(&lbl_80500978.value) + 8) = (f32) lbl_805D9A14;
        transform_vec_by_camera__15TObjBoss2TunnelFiii((void *) (&lbl_804FF5E8.value), (void *) (&lbl_80500978.value), (void *) (&lbl_80500978.value));
    }
    lbl_805D505C += 1;
}

void TObjPlayer__sub_800A6C54(u8 *arg0) {
    s32 v;
    v = ((VObj_800A6C54_b *)arg0)->m9(lbl_805D9A8C, lbl_805D9A90, lbl_805D9A80);
    if (v != 0) {
        select_actor_lighting(arg0);
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix_from(NULL);
        translate_matrix_vec3(0, arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        lbl_805D505C = 0;
        lbl_805D5060 = *(s32 *)((s8 *)arg0 + 0x39C);
        set_global_state__16TObjEneRe7BeruraFi((void *)step_cutscene_frame__10TObjPlayerFv);
        toggle_particle_effect__10TObjPlayerFv();
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 11:
            if (*(s16 *)((s8 *)arg0 + 0x328) == 1) {
                scale_matrix_vec3(0, arg0 + 0x68);
            }
        case 1:
        case 2:
            if (((VObj_800A6C54_a *)(arg0 + 0x3A4))->m8() != 0) {
                lbl_805D5660 = model_render_flags;
                lbl_805D5664 = chunk_polygon_flags_and_mask;
                lbl_805D5668 = chunk_polygon_flags_or_mask;
                ((VObj_800A6C54_a *)(arg0 + 0x3A4))->m6();
                v = 1;
                model_render_flags |= 1;
                if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) != 0) {
                    v = 0;
                }
                if (v != 0) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                }
                model_render_flags &= ~1;
                ((VObj_800A6C54_a *)(arg0 + 0x3A4))->m7();
                chunk_polygon_flags_and_mask = lbl_805D5664;
                chunk_polygon_flags_or_mask = lbl_805D5668;
                model_render_flags = lbl_805D5660;
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
        if (!(*(s32 *)((s8 *)arg0 + 0x374) & 1)) {
            render_with_position_override__10TObjPlayerFPvPvi(arg0, 0, 0);
        }
    } else {
        push_matrix_from(identity_matrix);
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_flag__10TObjPlayerFv();
        render_anim_model__10TObjPlayerFPvf(arg0, *(f32 *)((s8 *)arg0 + 0xC0));
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
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
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
    temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x2A8));
    if ((temp_r4 != NULL) && (*(s32 *)((s8 *)temp_r4 + 0x30) & 0x02000800)) {
        *(s16 *)((s8 *)arg0 + 0x37E) = 0;
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 0x40);
        *(u8 **)((s8 *)arg0 + 0x2A8) = NULL;
    }
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    TObjPlayer__sub_800A435C((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0x2B4) = (f32) (*(f32 *)((s8 *)arg0 + 0x2B4) + lbl_805D9A40);
}

void * create_ene_saver(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3CC);
    if (o2 != NULL) {
        o2 = TObjEneSaver__ct((u8 *)(o2), (void *)(o), (void *)(arg0));
    }
    return o2;
}

#define player_object_ptr_array (*(u32 *)&player_object_ptr_array)
extern u32 saver_bml_resource;
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
    if ((u32) saver_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)saver_bml_resource, 1);
        saver_bml_resource = 0U;
    }
}
#undef player_object_ptr_array
#undef lbl_805D5064
#undef lbl_805D5068
#undef lbl_805D506C

u8 lbl_8043A738[];
u8 lbl_8043A74C[];
u8 lbl_8043A768[];
u8 lbl_8043A784[];
u8 lbl_8043A7A0[];
u8 lbl_8043A7BC[];
u8 lbl_8043A7D4[];
u8 lbl_8043A7F0[];
u8 lbl_8043A80C[];
u8 lbl_8043A824[];
u8 lbl_8043A83C[];
u8 lbl_8043A854[];
u8 lbl_8043A86C[];
#define TObjEneSaver__trail_record_table ((Rec_800A715C *)TObjEneSaver__trail_record_table)
#define saver_collision_body_part_table ((f32 *)saver_collision_body_part_table)
#define RES ((Res_800A715C *)saver_bml_resource)
void initialize_saver_resources(void) {
    Vec_800A715C pos;
    Vec_800A715C dir;
    void *r;
    r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != NULL) {
        r = load_resource_from_descriptor(r, 1, bm_ene_df1_saver_resource_descriptor, 0, 0, 0);
    }
    saver_bml_resource = (u32)r;
    lbl_805D5054 = *(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)((u8 *)((Res_800A715C *)r)->sub) + 8)) + 0x2C)) + 0x30)) + 4)) + 4);
    lbl_805D5058 = 0;
    lbl_805D505C = 0;
    lbl_805D5060 = 0;
    ((f32 *)&lbl_80500978)[2] = lbl_805D9A14;
    ((f32 *)&lbl_80500978)[1] = lbl_805D9A14;
    ((f32 *)&lbl_80500978)[0] = lbl_805D9A14;
    r = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (r != NULL) {
        r = (void *)init_trail_buffer__11TBoss4Type3FPvifff(r, 2, lbl_805D9A2C, lbl_805D9A6C, lbl_805D9A40);
    }
    lbl_805D5064 = (s32)r;
    r = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (r != NULL) {
        r = (void *)init_trail_buffer__11TBoss4Type3FPvifff(r, 2, lbl_805D9A28, lbl_805D9A34, lbl_805D9A40);
    }
    lbl_805D5068 = r;
    r = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (r != NULL) {
        r = (void *)init_trail_buffer__11TBoss4Type3FPvifff(r, 2, lbl_805D9A14, lbl_805D9A3C, lbl_805D9A40);
    }
    lbl_805D506C = (s32)r;
    draw_trail_with_colors(lbl_805D5064, RES->sub->f8, RES->ents[TObjEneSaver__trail_record_table[2].idx].b, 0x20, 0x21);
    draw_trail_with_colors((s32)lbl_805D5068, RES->sub->f8, RES->ents[TObjEneSaver__trail_record_table[4].idx].b, 0x20, 0x21);
    pos.x = pos.y = pos.z = lbl_805D9A14;
    dir.x = lbl_805D9A94;
    dir.y = dir.z = lbl_805D9A14;
    TObjEneMe3ShinowaMirage__sub_800D98D8(lbl_805D506C, RES->sub->f8, RES->ents[TObjEneSaver__trail_record_table[3].idx].b, 0x19, &pos, &dir);
    player_object_ptr_array = alloc_buffer__11TOBoss4RockFPv(0xC);
    saver_boss_stat_handle = register_boss__6TLobbyFPv(0x52);
    player_object_ptr_array[0] = dispatch_shared_handler_b__6TLobbyFPv(0x57);
    player_object_ptr_array[2] = dispatch_shared_handler_b__6TLobbyFPv(0x58);
    player_object_ptr_array[1] = dispatch_shared_handler_b__6TLobbyFPv(0x59);
    saver_object_stat_handle = register_object__6TLobbyFPv(0x51);
    lbl_805D504C = (f32 *)dispatch_shared_handler_a__6TLobbyFPv(0x51);
    Init_800A715C init = saver_init_binding_desc;
    init.w[0] = (s32)RES->ents;
    spawn_npc_enemy__6TLobbyFsiiiff(0x1A, RES->sub->f8, RES->sub->fC, &init, saver_collision_body_part_table[3], lbl_805D9A14);
}
Obj_800A73F8 *fn_800A73F8(Obj_800A73F8 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        i = 0;
        arg0->vt = TObjEneSaver__vtable;
        do {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
                arg0->items[i] = NULL;
            }
            i++;
        } while (i < 3);
        free_collision_body_parts(arg0);
        TObjPlayer__sub_800A05B8((u8 *)arg0 + 0x3A4, -1);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#undef VecCopy__FP3VecPC3Vec
u8 *TObjEneSaver__ct(u8 *arg0, void *arg1, void *arg2) {
    s16 t;
    void *p;
    initialize__9TObjEnemyFPv(arg0, arg1, arg2);
    *(u8 **)((s8 *)arg0 + 0x18) = (u8 *)TObjEneSaver__vtable;
    init_vtable_and_field18__10TObjPlayerFPv(arg0 + 0x3A4);
    *(s32 *)((s8 *)arg0 + 0) = TObjEneSaver__class_name;
    ((VObj_800A749C *)arg0)->m79(arg2);
    init_position_vectors__10TObjPlayerFi(arg0);
    *(f32 *)((s8 *)arg0 + 0x70) = 1.0f;
    *(f32 *)((s8 *)arg0 + 0x6C) = 1.0f;
    *(f32 *)((s8 *)arg0 + 0x68) = 1.0f;
    t = (s16)(100.0f + *(f32 *)((s8 *)arg0 + 0x354));
    *(s16 *)((s8 *)arg0 + 0x388) = t;
    *(s16 *)((s8 *)arg0 + 0x38A) = t;
    if (*(f32 *)((s8 *)arg0 + 0x358) < 0.0f) {
        *(f32 *)((s8 *)arg0 + 0x358) = 0.0f;
    } else if (8.0f < *(f32 *)((s8 *)arg0 + 0x358)) {
        *(f32 *)((s8 *)arg0 + 0x358) = 8.0f;
    }
    *(s32 *)((s8 *)arg0 + 0x378) = 0;
    *(s32 *)((s8 *)arg0 + 0x378) |= 1 << (s32)*(f32 *)((s8 *)arg0 + 0x358);
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s16 *)((s8 *)arg0 + 0x328) = 0;
    *(s32 *)((s8 *)arg0 + 0x368) = 0;
    set_param__12TObjEneLappyFPvi(arg0, 0x1E);
    *(s32 *)((s8 *)arg0 + 0x334) = 0;
    TObjPlayer__sub_800A7734((O_800A7734 *)(arg0), (s32)(*(s32 *)((s8 *)arg0 + 0x368)));
    *(u8 **)((s8 *)arg0 + 0xD8) = (u8 *)TObjEneSaver__trail_record_table;
    set_field_d8__10TObjPlayerFPvi(arg0, *(u8 **)((s8 *)arg0 + 0xD8));
    *(s32 *)((s8 *)arg0 + 0xDC) = *(s32 *)((s8 *)(*(u8 * *)&saver_bml_resource) + 0x430);
    *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    init_collision_body_parts(arg0, (u8 *)saver_collision_body_part_table, 1);
    *(s16 *)((s8 *)arg0 + 0x37C) = 0;
    *(s16 *)((s8 *)arg0 + 0x37E) = 0;
    bind_enemy_combat_stats((void *)(arg0), (int)(saver_boss_stat_handle), (int)(player_object_ptr_array[*(s16 *)((s8 *)arg0 + 0x37C)]), (int)(saver_object_stat_handle));
    *(u8 **)((s8 *)arg0 + 0x350) = (u8*)lbl_80490B28;
    *(s16 *)((s8 *)arg0 + 0x33E) = *(s16 *)((s8 *)arg0 + 0x32C);
    update_prev_position__10TObjPlayerFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    initialize_enemy_photon_effect(arg0);
    *(s32 *)((s8 *)arg0 + 0x374) = 1;
    *(s32 *)((s8 *)arg0 + 0x38C) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x390, arg0 + 0x2FC);
    *(s32 *)((s8 *)arg0 + 0x39C) = 0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 8);
    *(u32 *)((s8 *)arg0 + 0x30) |= 0x06040000;
    *(s32 *)((s8 *)arg0 + 0x380) = 0x101;
    *(s32 *)((s8 *)arg0 + 0x384) = 0x101;
    p = __nw__7TObjectFUl((int)(0xC4));
    if (p != NULL) {
        p = TEneParticleCtrl__ct(p, arg0, *(s32 *)((s8 *)arg0 + 0x380));
    }
    *(void **)((s8 *)arg0 + 0x3A0) = p;
    *(s32 *)((s8 *)arg0 + 0x3C0) = create__12TObjEneSaverFPvPv(0xA0303030, 0xFFFF0088);
    *(s32 *)((s8 *)arg0 + 0x3C4) = create__12TObjEneSaverFPvPv(0xA0303030, 0xFFFF0088);
    *(s32 *)((s8 *)arg0 + 0x3C8) = create__12TObjEneSaverFPvPv(0xA0303030, 0xFF303030);
    ((VObj_800A749C *)arg0)->m80();
    return arg0;
}

void* TObjPlayer__sub_800A772C(void* p) { return (char*)p + 0x2fc; }
void TObjPlayer__sub_800A7734(O_800A7734 *self, s32 i) {
    self->x34 = (*(G_800A7734 * *)&saver_bml_resource)->tbl[i].x8;
    self->x24 = (*(G_800A7734 * *)&saver_bml_resource)->tbl[i].xc;
}

#define player_object_ptr_array (*(u32 *)&player_object_ptr_array)
#define lbl_805D5064 (*(u32 *)&lbl_805D5064)
#define lbl_805D5068 (*(u32 *)&lbl_805D5068)
#define lbl_805D506C (*(u32 *)&lbl_805D506C)

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
