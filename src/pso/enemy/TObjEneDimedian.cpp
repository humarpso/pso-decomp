#include "types.h"
#include "pso/enemy/TObjEneDimedian.h"
#include "pso/enemy/TUnk_80493450.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/player/TUnk_80490470.h"
#include "pso/object/TObjMotion.h"
extern "C" void test_flag_256__13TUnk_80493450Fv();
#include "pso/enemy/TObjEneDimedian.h"
#include "pso/misc/TLobby.h"
#include "pso/enemy/TObjEneBeast.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/player/TObjPlayer.h"

extern "C" const u8 dimedian_sl_body_model_filename[20] = "df3_sl_wala_body.nj";
extern "C" const u8 dimedian_ssl_body_model_filename[24] = "df3_ssl_wala_body.nj";
extern "C" const u8 dimedian_s_body_model_filename[20] = "df3_s_wala_body.nj";
extern "C" const u8 dimedian_appear_motion_filename[28] = "appear_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_attack_left_motion_filename[28] = "atackl_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_attack_right_motion_filename[28] = "atackr_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_damage_motion_filename[28] = "damage_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_deadb_motion_filename[28] = "deadb_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_dead_motion_filename[28] = "dead_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_leader_motion_filename[28] = "leader_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_mihari_motion_filename[28] = "mihari_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_run_motion_filename[24] = "run_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_stund_motion_filename[28] = "stund_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_wakeup_motion_filename[28] = "wakeup_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_walk_motion_filename[28] = "walk_bm1_s_wala_body.njm";
extern "C" const u8 dimedian_bml_filename[24] = "bm_ene_df3_dimedian.bml";
extern "C" const u8 dimedian_class_name[16] = "TObjEneDimedian";

typedef struct O_800A846C {
    u8 pad0[0x18];
    void *vptr;
    u8 pad1c[0x3C4 - 0x1C];
    void *objs[2];
} O_800A846C;

struct VBase_18_c99286 { char pad[0x18]; };
struct VObj_18_c99286 : VBase_18_c99286 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78();
    virtual s32 m79(s32);
    virtual s32 m80();
};

struct Anim_800A8118 { s32 motions; void *actions; s32 initial_action; s32 counts; };
struct Pair_800A8118 { s32 a; s32 b; };
struct Bodies_800A8118 { s32 a; s32 b; s32 model; s32 textures; };
struct Res_800A8118 { u8 pad[0x42C]; Bodies_800A8118 *bodies; Pair_800A8118 *motions; };
struct Act_800A8118 { s32 a; s32 idx; f32 c; s32 d; };
struct Part_800A8118 { u8 pad[0xC]; f32 radius; u8 pad10[0x1C]; };
struct Sub_800A8530 { u8 b[0x1C]; };
struct Self_800A8530 { u8 pad[0x3CC]; Sub_800A8530 subs[4]; };

extern "C" {
s32 dispatch_shared_handler_a__6TLobbyFl(int);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
u8 *load_enemy_bml_resource_named(void *, void *);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
void draw_trail_with_colors(void *, s32, s32, s32, s32);
void *init_trail_buffer__11TBoss4Type3FPvifff(void *, s32, f32, f32, f32);
s32 *mem_alloc(s32);
void spawn_npc_enemy__6TLobbyFslllff(int, int, int, void *, f32, f32);
extern u8 lbl_8043AAA4[];
extern s32 dimedian_resource_handles[];
extern s32 dimedian_last_draw_tick[];
extern const f32 lbl_805D9AA4;
extern const f32 lbl_805D9AB8;
extern const f32 lbl_805D9AC0;
extern const f32 lbl_805D9AC4;
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void init_enemy_base__13TUnk_80493450Fv(void *);
s32 create__12TObjEneSaverFPvPv(s32, s32);
void initialize_enemy_photon_effect(void *);
void bind_enemy_combat_stats(void *, s32, s32, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, s32);
void __construct_array(void *, void *, void *, int, int);
void init_and_activate__10TObjPlayerFv();
extern s32 lbl_805D29F0;
extern const f32 lbl_805D9AC8;
extern const f32 lbl_805D9ACC;
extern const f32 lbl_805D9AD0;
}

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_800A05B8(void *, int);
extern u8 TObjPlayer__sub_800D7C58[];
O_800A846C *TObjPlayer__sub_800A846C(O_800A846C *arg0, s16 arg1);
}

extern "C" {

void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneDimedian__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void mem_free(void*);

extern void *tl_04;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void vfunc_65__13TUnk_804806E8Fll();
extern "C" void apply_slow_status__13TUnk_804806E8Fv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void vfunc_43__13TUnk_804806E8Fv();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_100__13TUnk_80493450Fv();
extern "C" void vfunc_101__15TObjEneDimedianFv();
extern "C" void vfunc_99__15TObjEneDimedianFv();
extern "C" void vfunc_98__15TObjEneDimedianFv();
extern "C" void vfunc_97__15TObjEneDimedianFv();
extern "C" void vfunc_96__15TObjEneDimedianFv();
extern "C" void vfunc_94__15TObjEneDimedianFv();
extern "C" void vfunc_93__15TObjEneDimedianFv();
extern "C" void vfunc_83__15TObjEneDimedianFv();
extern "C" void draw_actor_model__10TObjPlayerFPv();
extern "C" void vfunc_89__13TUnk_80493450Fv();
extern "C" void update_turn_toward_target__13TUnk_80493450Fv();
extern "C" void vfunc_74__9TObjEnemyFl();
extern "C" void apply_hit_message_flags__9TObjEnemyFPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__13TUnk_804806E8Fl();
extern "C" void apply_attack_stat_status__13TUnk_804806E8FPv();
extern "C" void apply_confusion_status__13TUnk_804806E8Fv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__13TUnk_804806E8Fl();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__13TUnk_804806E8Fv();
extern "C" void apply_poison_status__13TUnk_804806E8Fv();
extern "C" void apply_set_data__9TObjEnemyFPv();
extern "C" void apply_shock_status__13TUnk_804806E8Fv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void vfunc_59__13TUnk_80493450Fv();
extern "C" void beast_idle_update__13TUnk_80493450Fv();
extern "C" void beast_select_target();
extern "C" void vfunc_60__13TUnk_80493450Fv();
extern "C" void beast_update_approach__13TUnk_80493450Fv();
extern "C" void beast_update_attack();
extern "C" void beast_update_dead__13TUnk_80493450Fv();
extern "C" void beast_update_group_chase__13TUnk_80493450Fv();
extern "C" void beast_update_hurt__13TUnk_80493450Fv();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void vfunc_79__9TObjEnemyFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void vfunc_61__13TUnk_80493450Fv();
extern "C" void clear_harmful_statuses__13TUnk_804806E8Fv();
extern "C" void cure_paralysis__13TUnk_804806E8Fv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void enter_state7__10TObjPlayerFv();
extern "C" void enter_state_8__10TObjPlayerFv();
extern "C" void vfunc_78__13TUnk_804806E8Fl();
extern "C" void vfunc_77__13TUnk_804806E8Fv();
extern "C" void vfunc_76__13TUnk_804806E8Fv();
extern "C" void vfunc_75__13TUnk_804806E8Ff();
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__13TUnk_804806E8Fl();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();

extern "C" void vfunc_95__15TObjEneDimedianFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void request_stand_action__13TUnk_80493450Fv();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__13TUnk_804806E8Fv();
extern "C" void roll_physical_accuracy__13TUnk_804806E8FPvlf();
extern "C" void run_task__13TUnk_80493450Fv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void beast_retire_corpse__15TObjEneDimedianFv();
extern "C" void update_movement_status__13TUnk_80493450Fv();
extern "C" void tick_freeze_state__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__13TUnk_804806E8Fll();
extern "C" void update_action_hold_status__13TUnk_80493450Fv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *dimedian_model_name_table[4];
extern void *dimedian_motion_name_table[13];
void *dimedian_model_name_table[4] = {
    (void *)&dimedian_sl_body_model_filename, (void *)&dimedian_ssl_body_model_filename, (void *)&dimedian_s_body_model_filename, (void *)0x0,
};
void *dimedian_motion_name_table[13] = {
    (void *)&dimedian_appear_motion_filename, (void *)&dimedian_attack_left_motion_filename, (void *)&dimedian_attack_right_motion_filename, (void *)&dimedian_damage_motion_filename,
    (void *)&dimedian_deadb_motion_filename, (void *)&dimedian_dead_motion_filename, (void *)&dimedian_leader_motion_filename, (void *)&dimedian_mihari_motion_filename,
    (void *)&dimedian_run_motion_filename, (void *)&dimedian_stund_motion_filename, (void *)&dimedian_wakeup_motion_filename, (void *)&dimedian_walk_motion_filename,
    (void *)0x0,
};
void *dimedian_resource_descriptor[4] = {
    (void *)&dimedian_bml_filename, (void *)&dimedian_model_name_table, (void *)&dimedian_motion_name_table, (void *)0x3000c,
};
void *dimedian_action_table[44] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f19999a, (void *)0x1,
    (void *)0x20000, (void *)0x7, (void *)0x3f19999a, (void *)0x20,
    (void *)0x10002, (void *)0xb, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f800000, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f800000, (void *)0x4,
    (void *)0x10000, (void *)0x8, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x3, (void *)0x3f800000, (void *)0x8,
    (void *)0x20000, (void *)0xa, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x10,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20000, (void *)0x6, (void *)0x3f19999a, (void *)0x20,
};
void *dimedian_movement_params[21] = {
    (void *)0x43610000, (void *)0x3f400000, (void *)0x400, (void *)0x0,
    (void *)0x1e0000, (void *)0x1, (void *)0x0, (void *)0x437a0000,
    (void *)0x3f666666, (void *)0x400, (void *)0x0, (void *)0x1e0000,
    (void *)0x1, (void *)0x0, (void *)0x43960000, (void *)0x3f800000,
    (void *)0x400, (void *)0x0, (void *)0x1e0000, (void *)0x1,
    (void *)0x0,
};
void *dimedian_collision_body_table[33] = {
    (void *)0x0, (void *)0x41480000, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41480000, (void *)0x0, (void *)0x40e00000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x41000000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *__vt__15TObjEneDimedian[103] = {
    (void *)0x0, (void *)0x0, (void *)&TObjPlayer__sub_800A846C, (void *)&run_task__13TUnk_80493450Fv,
    (void *)&draw_actor_model__10TObjPlayerFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&beast_select_target, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__13TUnk_80493450Fv,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__13TUnk_80493450Fv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__13TUnk_80493450Fv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&tick_freeze_state__10TObjPlayerFv, (void *)&vfunc_59__13TUnk_80493450Fv,
    (void *)&vfunc_60__13TUnk_80493450Fv, (void *)&vfunc_61__13TUnk_80493450Fv, (void *)&enter_state7__10TObjPlayerFv, (void *)&enter_state_8__10TObjPlayerFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__13TUnk_804806E8Fll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__9TObjEnemyFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)&vfunc_83__15TObjEneDimedianFv,
    (void *)&beast_idle_update__13TUnk_80493450Fv, (void *)&update_turn_toward_target__13TUnk_80493450Fv, (void *)&beast_update_approach__13TUnk_80493450Fv, (void *)&beast_update_group_chase__13TUnk_80493450Fv,
    (void *)&beast_update_attack, (void *)&vfunc_89__13TUnk_80493450Fv, (void *)&beast_update_hurt__13TUnk_80493450Fv, (void *)&beast_update_dead__13TUnk_80493450Fv,
    (void *)&beast_retire_corpse__15TObjEneDimedianFv, (void *)&vfunc_93__15TObjEneDimedianFv, (void *)&vfunc_94__15TObjEneDimedianFv, (void *)&vfunc_95__15TObjEneDimedianFv,
    (void *)&vfunc_96__15TObjEneDimedianFv, (void *)&vfunc_97__15TObjEneDimedianFv, (void *)&vfunc_98__15TObjEneDimedianFv, (void *)&vfunc_99__15TObjEneDimedianFv,
    (void *)&vfunc_100__13TUnk_80493450Fv, (void *)&vfunc_101__15TObjEneDimedianFv, (void *)&request_stand_action__13TUnk_80493450Fv,
};
#define __vt__15TObjEneDimedian ((u8 *)__vt__15TObjEneDimedian)

void *TObjEneDimedian::create(void *arg2_) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x43C);
    if (o2 != NULL) {
        o2 = TObjEneDimedian__ct(o2, o, arg2_);
    }
    return o2;
}

extern u32 dimedian_boss_object_buf;
extern u32 lbl_805D5074;
extern u32 TObjEneDimedian__boss_objects;
extern u32 dimedian_buffer_ptr;
extern u32 dimedian_resource_ptr;
extern u32 dimedian_type3_object;
extern u32 lbl_805D5088;

void TObjEneDimedian::free_boss_objects() {
    if ((u32) dimedian_boss_object_buf != 0U) {
        mem_free((void*)dimedian_boss_object_buf);
        dimedian_boss_object_buf = 0U;
    }
    if ((u32) lbl_805D5074 != 0U) {
        mem_free((void*)lbl_805D5074);
        lbl_805D5074 = 0U;
    }
    if ((u32) TObjEneDimedian__boss_objects != 0U) {
        mem_free((void*)TObjEneDimedian__boss_objects);
        TObjEneDimedian__boss_objects = 0U;
    }
    if ((u32) dimedian_buffer_ptr != 0U) {
        mem_free((void*)dimedian_buffer_ptr);
        dimedian_buffer_ptr = 0U;
    }
    if ((u32) lbl_805D5088 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5088, 1);
        lbl_805D5088 = 0U;
    }
    if ((u32) dimedian_type3_object != 0U) {
        __dt__11TBoss4Type3FPvs((void*)dimedian_type3_object, 1);
        dimedian_type3_object = 0U;
    }
    if ((u32) dimedian_resource_ptr != 0U) {
        TLobby__sub_8001FE7C((void*)dimedian_resource_ptr, 1);
        dimedian_resource_ptr = 0U;
    }
}

#define dimedian_boss_object_buf (*(s32 **)&dimedian_boss_object_buf)
#define lbl_805D5074 (*(s32 **)&lbl_805D5074)
#define TObjEneDimedian__boss_objects (*(s32 **)&TObjEneDimedian__boss_objects)
#define dimedian_buffer_ptr (*(s32 **)&dimedian_buffer_ptr)
#define dimedian_resource_ptr (*(u8 **)&dimedian_resource_ptr)
#define dimedian_type3_object (*(void **)&dimedian_type3_object)
#define lbl_805D5088 (*(void **)&lbl_805D5088)

#define RES_800A8118 ((Res_800A8118 *)dimedian_resource_ptr)
#define dimedian_resource_descriptor ((u8 *)dimedian_resource_descriptor)
#define dimedian_action_table ((Act_800A8118 *)dimedian_action_table)
#define dimedian_collision_body_table ((Part_800A8118 *)dimedian_collision_body_table)
#define CHAIN_800A8118(p) (*(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 **)((s8 *)(*(u8 **)((s8 *)(*(u8 **)((s8 *)(p) + 0x2C)) + 0x30)) + 0x30)) + 4)) + 4))

void TLobby::load_dimedian_resources() {
    u8 *r;
    void *p;
    s32 i;
    if (TObjEneDD::check_v2_mode() != 0) {
        dimedian_resource_ptr = load_enemy_bml_resource_named(dimedian_resource_descriptor, lbl_8043AAA4);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, dimedian_resource_descriptor, 0, 0, 0);
        }
        dimedian_resource_ptr = (u8 *)p;
    }
    r = *(u8 **)((s8 *)dimedian_resource_ptr + 0x42C);
    dimedian_resource_handles[0] = CHAIN_800A8118(*(u8 **)((s8 *)r + 0x8));
    dimedian_resource_handles[1] = CHAIN_800A8118(*(u8 **)((s8 *)r + 0x18));
    dimedian_resource_handles[2] = CHAIN_800A8118(*(u8 **)((s8 *)r + 0x28));
    dimedian_last_draw_tick[0] = 0;
    dimedian_last_draw_tick[1] = 0;
    dimedian_last_draw_tick[2] = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9AC0, lbl_805D9AA4, lbl_805D9AB8);
    }
    dimedian_type3_object = p;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9AC0, lbl_805D9AA4, lbl_805D9AB8);
    }
    lbl_805D5088 = p;
    draw_trail_with_colors(dimedian_type3_object, RES_800A8118->bodies->model,
        RES_800A8118->motions[dimedian_action_table[3].idx].b, 5, 8);
    draw_trail_with_colors(lbl_805D5088, RES_800A8118->bodies->model,
        RES_800A8118->motions[dimedian_action_table[4].idx].b, 0xA, 0xD);
    dimedian_boss_object_buf = mem_alloc(0xC);
    lbl_805D5074 = mem_alloc(0xC);
    TObjEneDimedian__boss_objects = mem_alloc(0xC);
    dimedian_buffer_ptr = mem_alloc(0xC);
    dimedian_boss_object_buf[0] = register_boss__6TLobbyFl(0x53);
    dimedian_boss_object_buf[1] = register_boss__6TLobbyFl(0x54);
    dimedian_boss_object_buf[2] = register_boss__6TLobbyFl(0x55);
    lbl_805D5074[0] = dispatch_shared_handler_b__6TLobbyFl(0x5A);
    lbl_805D5074[1] = dispatch_shared_handler_b__6TLobbyFl(0x5B);
    lbl_805D5074[2] = dispatch_shared_handler_b__6TLobbyFl(0x5C);
    TObjEneDimedian__boss_objects[0] = register_object__6TLobbyFl(0x52);
    TObjEneDimedian__boss_objects[1] = register_object__6TLobbyFl(0x53);
    TObjEneDimedian__boss_objects[2] = register_object__6TLobbyFl(0x54);
    dimedian_buffer_ptr[0] = dispatch_shared_handler_a__6TLobbyFl(0x52);
    dimedian_buffer_ptr[1] = dispatch_shared_handler_a__6TLobbyFl(0x53);
    dimedian_buffer_ptr[2] = dispatch_shared_handler_a__6TLobbyFl(0x54);
    {
        s16 ids[3] = { 0x1B, 0x1C, 0x1D };
        Anim_800A8118 anim = { (s32)RES_800A8118->motions, dimedian_action_table, 2, 0xC0000 };
        for (i = 0; i < 3; i++) {
            u8 *b = *(u8 **)((s8 *)dimedian_resource_ptr + 0x42C) + i * 0x10;
            spawn_npc_enemy__6TLobbyFslllff(ids[i], *(s32 *)((s8 *)b + 8), *(s32 *)((s8 *)b + 0xC), &anim,
                dimedian_collision_body_table[i].radius, lbl_805D9AC4);
        }
    }
}
#undef CHAIN_800A8118
#undef RES_800A8118
#undef dimedian_resource_descriptor
#undef dimedian_action_table
#undef dimedian_collision_body_table

O_800A846C *TObjPlayer__sub_800A846C(O_800A846C *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = __vt__15TObjEneDimedian;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        ((TUnk_80493450 *)arg0)->unlink_enemy_group_relations();
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x3CC, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800A05B8((u8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define dimedian_action_table ((u8 *)dimedian_action_table)
#define dimedian_movement_params ((u8 *)dimedian_movement_params)
#define dimedian_collision_body_table ((u8 *)dimedian_collision_body_table)
#define arg0 ((u8 *)arg0_)
#define arg1 ((s32)arg1_)
#define arg2 ((s32)arg2_)
void *TObjEneDimedian__ct(void *arg0_, void *arg1_, void *arg2_) {
    f32 f;
    s32 color;
    s32 i;
    ((void (*)(void *, s32, s32))init_enemy_base__13TUnk_80493450Fv)(arg0, arg1, arg2);
    *(u8 **)((s8 *)arg0 + 0x18) = __vt__15TObjEneDimedian;
    ((TUnk_80490470 *)(arg0 + 0x3A8))->init_vtable_and_field18();
    __construct_array(arg0 + 0x3CC, (void *)&init_and_activate__10TObjPlayerFv, (void *)&TObjPlayer__sub_800D7C58, 0x1C, 4);
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D29F0;
    ((VObj_18_c99286 *)arg0)->m79(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    *(s32 *)((s8 *)arg0 + 0x334) = *(s32 *)((s8 *)arg0 + 0x368);
    ((TObjEneDimedian *)arg0)->sub_800A7B54();
    ((TObjEneDimedian *)arg0)->load_dimedian_param_entry(*(s32 *)((s8 *)arg0 + 0x368));
    *(u8 **)((s8 *)arg0 + 0xD8) = dimedian_action_table;
    ((TObjPlayer *)arg0)->set_field_d8((s32)(*(u8 **)((s8 *)arg0 + 0xD8)));
    *(s32 *)((s8 *)arg0 + 0xDC) = *(s32 *)((s8 *)dimedian_resource_ptr + 0x430);
    *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    ((TObjMotion *)arg0)->set_field_b8(*(s16 *)((s8 *)arg0 + 0xB8));
    init_collision_body_parts(arg0, dimedian_collision_body_table + *(s32 *)((s8 *)arg0 + 0x334) * 0x2C, 1);
    bind_enemy_combat_stats(arg0, dimedian_boss_object_buf[*(s32 *)((s8 *)arg0 + 0x334)],
        lbl_805D5074[*(s32 *)((s8 *)arg0 + 0x334)], TObjEneDimedian__boss_objects[*(s32 *)((s8 *)arg0 + 0x334)]);
    *(u8 **)((s8 *)arg0 + 0x350) = dimedian_movement_params + *(s32 *)((s8 *)arg0 + 0x334) * 0x1C;
    *(s16 *)((s8 *)arg0 + 0x33E) = *(s16 *)((s8 *)arg0 + 0x32C);
    ((TObjEnemy *)arg0)->update_prev_position();
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    initialize_enemy_photon_effect(arg0);
    f = lbl_805D9ACC * calc_boss4_scale__10TObjPlayerFi(arg0);
    *(s32 *)((s8 *)arg0 + 0x2AC) = (s32)(lbl_805D9AC8 * f);
    *(s16 *)((s8 *)arg0 + 0x33A) = 0xF;
    *(s16 *)((s8 *)arg0 + 0x33C) = *(s16 *)((s8 *)arg0 + 0x33A);
    *(s16 *)((s8 *)arg0 + 0x328) = 0;
    *(s16 *)((s8 *)arg0 + 0x374) = 0;
    *(s16 *)((s8 *)arg0 + 0x376) = 0;
    *(s32 *)((s8 *)arg0 + 0x378) = 0;
    *(s32 *)((s8 *)arg0 + 0x37C) = 0;
    ((TUnk_804806E8 *)arg0)->add_flags_2e4(8);
    *(u32 *)((s8 *)arg0 + 0x30) |= 0x40000;
    *(f32 *)((s8 *)arg0 + 0x388) = lbl_805D9AD0;
    if (TObjEneDD::check_v2_mode() != 0) {
        switch (*(s32 *)((s8 *)arg0 + 0x334)) {
        case 0:
        default:
            color = 0xFF20FF20;
            break;
        case 1:
            color = 0xFFFF0040;
            break;
        case 2:
            color = 0xFFFFFF00;
            break;
        }
    } else {
        switch (*(s32 *)((s8 *)arg0 + 0x334)) {
        default:
            color = 0xFF0000FF;
            break;
        case 1:
            color = 0xFFFF0000;
            break;
        case 2:
            color = 0xFFFFFF00;
            break;
        }
    }
    *(s32 *)((s8 *)arg0 + 0x3C4) = create__12TObjEneSaverFPvPv(0xA0303030, color);
    *(s32 *)((s8 *)arg0 + 0x3C8) = create__12TObjEneSaverFPvPv(0xA0303030, color);
    *(s32 *)((s8 *)arg0 + 0x390) = 1;
    *(f32 *)((s8 *)arg0 + 0x398) = ((f32 **)dimedian_buffer_ptr)[*(s32 *)((s8 *)arg0 + 0x334)][0];
    *(f32 *)((s8 *)arg0 + 0x3A0) = ((f32 **)dimedian_buffer_ptr)[*(s32 *)((s8 *)arg0 + 0x334)][1];
    *(f32 *)((s8 *)arg0 + 0x39C) = ((f32 **)dimedian_buffer_ptr)[*(s32 *)((s8 *)arg0 + 0x334)][2];
    *(f32 *)((s8 *)arg0 + 0x3A4) = ((f32 **)dimedian_buffer_ptr)[*(s32 *)((s8 *)arg0 + 0x334)][3];
    for (i = 0; i < 4; i++) {
        ((TObjPlayer *)(&((Self_800A8530 *)arg0)->subs[i]))->activate_and_dispatch();
    }
    ((VObj_18_c99286 *)arg0)->m80();
    return arg0;
}
#undef arg0
#undef arg1
#undef arg2

}
