#include "types.h"
#include "pso/object/TObjMotion.h"
extern "C" void vfunc_101__12TObjEneBeastFv();
extern "C" void test_flag_256__13TUnk_80493450Fv();
#include "pso/enemy/TObjEneBeast.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/player/TObjPlayer.h"

struct Ent_8009241C { u8 pad0[0xC]; f32 radius; u8 pad10[0x2C - 0x10]; };
struct Res_8009241C {
    u8 pad0[0x44];
    u8 desc[0x10];
    s32 parts[(0x168 - 0x54) / 4];
    Ent_8009241C ents[3];
};
struct Mdl_8009241C { u8 pad0[8]; s32 f8; s32 fC; };
struct Mot_8009241C { u8 pad0[4]; s32 f4; };
struct Data_8009241C { u8 pad0[0x42C]; Mdl_8009241C *f42c; Mot_8009241C *f430; };
struct Quad_8009241C { s32 a; s32 b; s32 c; s32 d; };
struct Ids_8009241C { s16 id[3]; };

struct O_80092724 { u8 pad0[0x18]; void *vptr; u8 pad1c[0x38c]; void *objs[2]; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void unlink_enemy_group_relations(void *);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
extern u8 TObjPlayer__sub_800D7C58[];
O_80092724 *TObjPlayer__sub_80092724(O_80092724 *arg0, s16 arg1);
s32 dispatch_shared_handler_a__6TLobbyFl(int);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
u8 *load_resource_from_descriptor(void *, int, void *, int, int, int);
u8 *alloc__23TAdSinglePlyChrSelectGCFv(int);
u8 *load_enemy_bml_resource_named(void *, void *);
s32 draw_trail_with_colors(void *, s32, s32, int, int);
u8 *init_trail_buffer__11TBoss4Type3FPvifff(void *, int, f32, f32, f32);
s32 *mem_alloc(int);
s32 spawn_npc_enemy__6TLobbyFslllff(int, s32, s32, Quad_8009241C *, f32, f32);
extern Ids_8009241C lbl_80439D68[];
extern Quad_8009241C lbl_80439D70[];
extern s32 lbl_80439D80[];
}

extern "C" {

void free_boss4_rock_pool(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneBeast__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void mem_free(void*);

extern void *tl_04;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void vfunc_99__12TObjEneBeastFv();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void vfunc_65__13TUnk_804806E8Fll();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_100__13TUnk_80493450Fv();
extern "C" void vfunc_89__13TUnk_80493450Fv();
extern "C" void update_turn_toward_target__13TUnk_80493450Fv();
extern "C" void update_and_send_enemy_hit_state();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void vfunc_59__13TUnk_80493450Fv();
extern "C" void beast_idle_update__13TUnk_80493450Fv();
extern "C" void beast_retire_corpse__13TUnk_80493450Fv();
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
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
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
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 beast_body_model_filename[];
extern "C" u8 beast_red_body_model_filename[];
extern "C" u8 beast_super_red_body_model_filename[];
extern "C" u8 beast_appear_motion_filename[];
extern "C" u8 beast_attack_left_motion_filename[];
extern "C" u8 beast_attack_right_motion_filename[];
extern "C" u8 beast_damage_motion_filename[];
extern "C" u8 beast_deadb_motion_filename[];
extern "C" u8 beast_dead_motion_filename[];
extern "C" u8 beast_leader_motion_filename[];
extern "C" u8 beast_mihari_motion_filename[];
extern "C" u8 beast_run_motion_filename[];
extern "C" u8 beast_stund_motion_filename[];
extern "C" u8 beast_wakeup_motion_filename[];
extern "C" u8 beast_walk_motion_filename[];
extern "C" u8 beast_bml_filename[];
extern "C" void vfunc_95__12TObjEneBeastFv();
extern "C" void vfunc_97__12TObjEneBeastFv();
extern "C" void vfunc_98__12TObjEneBeastFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render__12TObjEneBeastFPv();
extern "C" void render_actor_shadows_default();
extern "C" void request_stand_action__13TUnk_80493450Fv();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void run_task__13TUnk_80493450Fv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void vfunc_96__12TObjEneBeastFv();
extern "C" void vfunc_94__12TObjEneBeastFv();
extern "C" void update_movement_status__13TUnk_80493450Fv();
extern "C" void tick_freeze_state__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__13TUnk_80493450Fv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void vfunc_83__12TObjEneBeastFv();
extern "C" void update_attack_stat_status();
extern "C" void vfunc_93__12TObjEneBeastFv();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *beast_model_name_table[4];
extern void *beast_motion_name_table[13];
void *beast_model_name_table[4] = {
    (void *)&beast_body_model_filename, (void *)&beast_red_body_model_filename, (void *)&beast_super_red_body_model_filename, (void *)0x0,
};
void *beast_motion_name_table[13] = {
    (void *)&beast_appear_motion_filename, (void *)&beast_attack_left_motion_filename, (void *)&beast_attack_right_motion_filename, (void *)&beast_damage_motion_filename,
    (void *)&beast_deadb_motion_filename, (void *)&beast_dead_motion_filename, (void *)&beast_leader_motion_filename, (void *)&beast_mihari_motion_filename,
    (void *)&beast_run_motion_filename, (void *)&beast_stund_motion_filename, (void *)&beast_wakeup_motion_filename, (void *)&beast_walk_motion_filename,
    (void *)0x0,
};
void *beast_resource_descriptor[4] = {
    (void *)&beast_bml_filename, (void *)&beast_model_name_table, (void *)&beast_motion_name_table, (void *)0x3000c,
};
void *beast_action_table[48] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f19999a, (void *)0x1,
    (void *)0x20000, (void *)0x7, (void *)0x3f19999a, (void *)0x20,
    (void *)0x10002, (void *)0xb, (void *)0x3f000000, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f266666, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f59999a, (void *)0x4,
    (void *)0x10000, (void *)0x8, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x3, (void *)0x3fc00000, (void *)0x8,
    (void *)0x20000, (void *)0xa, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x10,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20000, (void *)0x6, (void *)0x3f19999a, (void *)0x20,
    (void *)0x20000, (void *)0x0, (void *)0x3f000000, (void *)0x20,
};
void *beast_movement_params[21] = {
    (void *)0x43610000, (void *)0x3ecccccd, (void *)0x400, (void *)0x0,
    (void *)0x1e0000, (void *)0x1, (void *)0x0, (void *)0x437a0000,
    (void *)0x3f0ccccd, (void *)0x400, (void *)0x0, (void *)0x1e0000,
    (void *)0x1, (void *)0x0, (void *)0x43960000, (void *)0x3f333333,
    (void *)0x400, (void *)0x0, (void *)0x1e0000, (void *)0x1,
    (void *)0x0,
};
void *beast_collision_body_table[33] = {
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
void *__vt__12TObjEneBeast[103] = {
    (void *)0x0, (void *)0x0, (void *)&TObjPlayer__sub_80092724, (void *)&run_task__13TUnk_80493450Fv,
    (void *)&render__12TObjEneBeastFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&beast_select_target, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__13TUnk_80493450Fv,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__13TUnk_80493450Fv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__13TUnk_80493450Fv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&tick_freeze_state__10TObjPlayerFv, (void *)&vfunc_59__13TUnk_80493450Fv,
    (void *)&vfunc_60__13TUnk_80493450Fv, (void *)&vfunc_61__13TUnk_80493450Fv, (void *)&enter_state7__10TObjPlayerFv, (void *)&enter_state_8__10TObjPlayerFv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&vfunc_65__13TUnk_804806E8Fll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&update_and_send_enemy_hit_state, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__9TObjEnemyFv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)&vfunc_83__12TObjEneBeastFv,
    (void *)&beast_idle_update__13TUnk_80493450Fv, (void *)&update_turn_toward_target__13TUnk_80493450Fv, (void *)&beast_update_approach__13TUnk_80493450Fv, (void *)&beast_update_group_chase__13TUnk_80493450Fv,
    (void *)&beast_update_attack, (void *)&vfunc_89__13TUnk_80493450Fv, (void *)&beast_update_hurt__13TUnk_80493450Fv, (void *)&beast_update_dead__13TUnk_80493450Fv,
    (void *)&beast_retire_corpse__13TUnk_80493450Fv, (void *)&vfunc_93__12TObjEneBeastFv, (void *)&vfunc_94__12TObjEneBeastFv, (void *)&vfunc_95__12TObjEneBeastFv,
    (void *)&vfunc_96__12TObjEneBeastFv, (void *)&vfunc_97__12TObjEneBeastFv, (void *)&vfunc_98__12TObjEneBeastFv, (void *)&vfunc_99__12TObjEneBeastFv,
    (void *)&vfunc_100__13TUnk_80493450Fv, (void *)&vfunc_101__12TObjEneBeastFv, (void *)&request_stand_action__13TUnk_80493450Fv,
};
#define __vt__12TObjEneBeast ((u8 *)__vt__12TObjEneBeast)

void *TObjEneBeast::create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x420);
    if (o2 != NULL) {
        o2 = TObjEneBeast__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 ene_beast_boss_id_buffer;
extern u32 TObjEneBeast__boss4_rock_handler_ids;
extern u32 boss4_rock_pool;
extern u32 boss4_rock_shared_handler_ids;
extern u32 ene_beast_bml_resource;
extern u32 beast_claw_trail_instance;
extern u32 boss4_type3_instance;

void free_boss4_rock_pool(void) {
    if ((u32) ene_beast_boss_id_buffer != 0U) {
        mem_free((void*)ene_beast_boss_id_buffer);
        ene_beast_boss_id_buffer = 0U;
    }
    if ((u32) TObjEneBeast__boss4_rock_handler_ids != 0U) {
        mem_free((void*)TObjEneBeast__boss4_rock_handler_ids);
        TObjEneBeast__boss4_rock_handler_ids = 0U;
    }
    if ((u32) boss4_rock_pool != 0U) {
        mem_free((void*)boss4_rock_pool);
        boss4_rock_pool = 0U;
    }
    if ((u32) boss4_rock_shared_handler_ids != 0U) {
        mem_free((void*)boss4_rock_shared_handler_ids);
        boss4_rock_shared_handler_ids = 0U;
    }
    if ((u32) boss4_type3_instance != 0U) {
        __dt__11TBoss4Type3FPvs((void*)boss4_type3_instance, 1);
        boss4_type3_instance = 0U;
    }
    if ((u32) beast_claw_trail_instance != 0U) {
        __dt__11TBoss4Type3FPvs((void*)beast_claw_trail_instance, 1);
        beast_claw_trail_instance = 0U;
    }
    if ((u32) ene_beast_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)ene_beast_bml_resource, 1);
        ene_beast_bml_resource = 0U;
    }
}
extern const f32 lbl_805D96D8;
extern const f32 lbl_805D96DC;
extern const f32 lbl_805D96E4;
extern const f32 lbl_805D96F8;
extern const f32 lbl_805D9700;
extern const f32 lbl_805D9704;
extern const f32 lbl_805D9708;

#pragma push
#pragma opt_propagation off
void TObjEneBeast::load_resources() {
    u8 *p;
    s32 i;

    if (TObjEneDD::check_v2_mode() != 0) {
        ene_beast_bml_resource = (u32)load_enemy_bml_resource_named(beast_resource_descriptor, lbl_80439D80);
        ((Ent_8009241C *)beast_collision_body_table)[0].radius = lbl_805D96DC;
        ((Ent_8009241C *)beast_collision_body_table)[1].radius = lbl_805D96DC;
        ((Ent_8009241C *)beast_collision_body_table)[2].radius = lbl_805D9700;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, beast_resource_descriptor, 0, 0, 0);
        }
        ene_beast_bml_resource = (u32)p;
        ((Ent_8009241C *)beast_collision_body_table)[0].radius = lbl_805D9704;
        ((Ent_8009241C *)beast_collision_body_table)[1].radius = lbl_805D9704;
        ((Ent_8009241C *)beast_collision_body_table)[2].radius = lbl_805D9708;
    }
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9704, lbl_805D96E4, lbl_805D96F8);
    }
    beast_claw_trail_instance = (u32)p;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9704, lbl_805D96E4, lbl_805D96F8);
    }
    boss4_type3_instance = (u32)p;
    draw_trail_with_colors((void *)beast_claw_trail_instance, ((Data_8009241C *)ene_beast_bml_resource)->f42c->f8,
                           ((Data_8009241C *)ene_beast_bml_resource)->f430[((s32 *)beast_action_table)[13]].f4, 5, 8);
    draw_trail_with_colors((void *)boss4_type3_instance, ((Data_8009241C *)ene_beast_bml_resource)->f42c->f8,
                           ((Data_8009241C *)ene_beast_bml_resource)->f430[((s32 *)beast_action_table)[17]].f4, 10, 13);
    ene_beast_boss_id_buffer = (u32)mem_alloc(0xC);
    TObjEneBeast__boss4_rock_handler_ids = (u32)mem_alloc(0xC);
    boss4_rock_pool = (u32)mem_alloc(0xC);
    boss4_rock_shared_handler_ids = (u32)mem_alloc(0xC);
    ((s32 *)ene_beast_boss_id_buffer)[0] = register_boss__6TLobbyFl(0x4B);
    ((s32 *)ene_beast_boss_id_buffer)[1] = register_boss__6TLobbyFl(0x4C);
    ((s32 *)ene_beast_boss_id_buffer)[2] = register_boss__6TLobbyFl(0x4D);
    ((s32 *)TObjEneBeast__boss4_rock_handler_ids)[0] = dispatch_shared_handler_b__6TLobbyFl(0x4E);
    ((s32 *)TObjEneBeast__boss4_rock_handler_ids)[1] = dispatch_shared_handler_b__6TLobbyFl(0x4F);
    ((s32 *)TObjEneBeast__boss4_rock_handler_ids)[2] = dispatch_shared_handler_b__6TLobbyFl(0x50);
    ((s32 *)boss4_rock_pool)[0] = register_object__6TLobbyFl(0x4A);
    ((s32 *)boss4_rock_pool)[1] = register_object__6TLobbyFl(0x4B);
    ((s32 *)boss4_rock_pool)[2] = register_object__6TLobbyFl(0x4C);
    ((s32 *)boss4_rock_shared_handler_ids)[0] = dispatch_shared_handler_a__6TLobbyFl(0x4A);
    ((s32 *)boss4_rock_shared_handler_ids)[1] = dispatch_shared_handler_a__6TLobbyFl(0x4B);
    ((s32 *)boss4_rock_shared_handler_ids)[2] = dispatch_shared_handler_a__6TLobbyFl(0x4C);
    {
        Ids_8009241C ids = lbl_80439D68[0];
        Quad_8009241C q = lbl_80439D70[0];
        q.a = (s32)((Data_8009241C *)ene_beast_bml_resource)->f430;
        for (i = 0; i < 3; i++) {
            spawn_npc_enemy__6TLobbyFslllff(ids.id[i], ((Data_8009241C *)ene_beast_bml_resource)->f42c[i].f8,
                                            ((Data_8009241C *)ene_beast_bml_resource)->f42c[i].fC, &q,
                                            ((Ent_8009241C *)beast_collision_body_table)[i].radius, lbl_805D96D8);
        }
    }
}

#pragma pop
O_80092724 *TObjPlayer__sub_80092724(O_80092724 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = __vt__12TObjEneBeast;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        unlink_enemy_group_relations(arg0);
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x3B0, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#define F(o, T, off) (*(T *)((u8 *)(o) + (off)))
struct VBase_800927DC { char pad[0x18]; };
struct VObj_800927DC : VBase_800927DC {
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

f32 calc_boss4_scale__10TObjPlayerFi(void *);
void obj_setFlags30(void *, u32);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void init_enemy_base__13TUnk_80493450Fv(void *, void *);
void *create__12TObjEneSaverFPvPv(void *, void *);
void bind_enemy_combat_stats(void *, u32, u32, u32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, s32);
void __construct_array(void *, void *, void *, int, int);
extern u8 init_and_activate__10TObjPlayerFv[];
struct Rec2C_800927DC { u8 b[0x2C]; };
struct Rec1C_800927DC { u8 b[0x1C]; };
struct Tbl_800927DC {
    u8 pad0[0x54];
    u8 x54[0x114 - 0x54];
    Rec1C_800927DC x114[3];
    Rec2C_800927DC x168[3];
    u8 x1EC[4];
};
struct Elem_800927DC { u8 b[0x1C]; };
struct Obj_800927DC { u8 pad[0x3B0]; Elem_800927DC arr[4]; };
extern s32 lbl_805D2980;
extern const f32 lbl_805D96D8;
extern const f32 lbl_805D970C;
extern const f32 lbl_805D9710;

#define arg0 ((u8 *)arg0v)

void *TObjEneBeast__ct(void *arg0v, void *arg1, void *arg2) {
    s32 i;

    init_enemy_base__13TUnk_80493450Fv(arg0, arg1);
    F(arg0, u8 *, 0x18) = (u8 *)__vt__12TObjEneBeast;
    __construct_array(arg0 + 0x3B0, init_and_activate__10TObjPlayerFv, TObjPlayer__sub_800D7C58, 0x1C, 4);
    F(arg0, s32, 0) = lbl_805D2980;
    ((VObj_800927DC *)arg0)->m79(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    F(arg0, s32, 0x334) = F(arg0, s32, 0x368);
    ((TObjEneBeast *)arg0)->select_subtype();
    ((TObjEneBeast *)arg0)->select_model_record(F(arg0, s32, 0x368));
    F(arg0, u8 *, 0xD8) = (u8 *)beast_action_table;
    ((TObjPlayer *)arg0)->set_field_d8((s32)(F(arg0, u8 *, 0xD8)));
    F(arg0, u32, 0xDC) = F(ene_beast_bml_resource, u32, 0x430);
    F(arg0, s16, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, F(arg0, s16, 0xB8));
    ((TObjMotion *)arg0)->set_field_b8(F(arg0, s16, 0xB8));
    init_collision_body_parts(arg0, &((Rec2C_800927DC *)beast_collision_body_table)[F(arg0, s32, 0x334)], 1);
    bind_enemy_combat_stats(arg0, ((u32 *)ene_beast_boss_id_buffer)[F(arg0, s32, 0x334)],
                            ((u32 *)TObjEneBeast__boss4_rock_handler_ids)[F(arg0, s32, 0x334)],
                            ((u32 *)boss4_rock_pool)[F(arg0, s32, 0x334)]);
    F(arg0, void *, 0x350) = &((Rec1C_800927DC *)beast_movement_params)[F(arg0, s32, 0x334)];
    F(arg0, s16, 0x33E) = F(arg0, s16, 0x32C);
    ((TObjPlayer *)arg0)->update_prev_position();
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    F(arg0, s32, 0x2AC) = (s32)(lbl_805D970C * (lbl_805D9710 * calc_boss4_scale__10TObjPlayerFi(arg0)));
    F(arg0, s16, 0x33A) = 0xF;
    F(arg0, s16, 0x33C) = F(arg0, s16, 0x33A);
    F(arg0, s16, 0x328) = 0;
    F(arg0, s16, 0x374) = 0;
    F(arg0, s16, 0x376) = 0;
    F(arg0, s32, 0x378) = 0;
    F(arg0, s32, 0x37C) = 0;
    ((TObjPlayer *)arg0)->add_flags_2e4(1);
    obj_setFlags30(arg0, 0x40000);
    F(arg0, f32, 0x380) = lbl_805D96D8;
    F(arg0, void *, 0x3A8) = create__12TObjEneSaverFPvPv((void *)0xA0303030, (void *)0xFF303030);
    F(arg0, void *, 0x3AC) = create__12TObjEneSaverFPvPv((void *)0xA0303030, (void *)0xFF303030);
    F(arg0, f32, 0x398) = ((f32 **)boss4_rock_shared_handler_ids)[F(arg0, s32, 0x334)][0];
    F(arg0, f32, 0x3A0) = ((f32 **)boss4_rock_shared_handler_ids)[F(arg0, s32, 0x334)][1];
    F(arg0, f32, 0x39C) = ((f32 **)boss4_rock_shared_handler_ids)[F(arg0, s32, 0x334)][2];
    F(arg0, f32, 0x3A4) = ((f32 **)boss4_rock_shared_handler_ids)[F(arg0, s32, 0x334)][3];
    F(arg0, s32, 0x390) = 1;
    for (i = 0; i < 4; i++) {
        ((TObjPlayer *)(&((Obj_800927DC *)arg0)->arr[i]))->activate_and_dispatch();
    }
    ((VObj_800927DC *)arg0)->m80();
    return arg0;
}
#undef arg0
#undef F

}
