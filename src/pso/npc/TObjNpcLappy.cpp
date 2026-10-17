#include "types.h"
#include "pso/npc/TObjNpcLappy.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/npc/TObjNpcMaleBase.h"
#include "pso/player/TObjPlayer.h"

struct VBase_8014B704 { char pad[0x18]; };
struct VObj_8014B704 : VBase_8014B704 {
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
    virtual s32 m79(s32);
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual s32 m85(s32, s32);
};

extern "C" {

void *dt__12TObjNpcLappyFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

void copy_position__20TBoss3VoloptHiraisinFi(void *);
void TObjNpcBase__ct(void *, void *);
void init_collision_body_parts(void *, void *, s32);
extern u8 npc_default_battle_stats[];
extern u8 npc_movement_parameters[];
extern "C" void vfunc_6__13TUnk_804B9870FPsl();
extern "C" void draw_debug_info__11TObjNpcBaseFv();
extern "C" void is_target_in_attack_range__11TObjNpcBaseFv();
extern "C" void vfunc_92__11TObjNpcBaseFv();
extern "C" void vfunc_91__11TObjNpcBaseFv();
extern "C" void debug_draw_talk__11TObjNpcBaseFv();
extern "C" void vfunc_88__12TObjNpcLappyFv();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__13TUnk_804806E8Fl();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void vfunc_65__13TUnk_804806E8Fll();
extern "C" void vfunc_63__13TUnk_804806E8Fv();
extern "C" void vfunc_62__13TUnk_804806E8Fv();
extern "C" void vfunc_61__13TUnk_804806E8Fv();
extern "C" void vfunc_60__13TUnk_804806E8Fv();
extern "C" void apply_slow_status__13TUnk_804806E8Fv();
extern "C" void update_shock_clock__13TUnk_804806E8Fv();
extern "C" void vfunc_43__13TUnk_804806E8Fv();
extern "C" void vfunc_18__13TUnk_804806E8FPUc();
extern "C" void vfunc_74__9TObjEnemyFl();
extern "C" void apply_hit_message_flags__9TObjEnemyFPv();
extern "C" void vfunc_83__11TObjNpcBaseFv();
extern "C" void vfunc_58__11TObjNpcBaseFv();
extern "C" void vfunc_59__11TObjNpcBaseFv();
extern "C" void add_actor_exp__13TUnk_804806E8Fl();
extern "C" void apply_action_hold_status__13TUnk_804806E8Ff();
extern "C" void apply_anti_technique__13TUnk_804806E8Fl();
extern "C" void apply_attack_stat_status__13TUnk_804806E8FPv();
extern "C" void apply_confusion_status__13TUnk_804806E8Fv();
extern "C" void apply_knockback_from_attacker__13TUnk_804806E8FPUc();
extern "C" void apply_movement_ailment__13TUnk_804806E8Fl();
extern "C" void apply_object_set_data__13TUnk_804B9870FPv();
extern "C" void apply_paralysis__13TUnk_804806E8Fv();
extern "C" void apply_poison_status__13TUnk_804806E8Fv();
extern "C" void apply_set_data__9TObjEnemyFPv();
extern "C" void apply_set_params__11TObjNpcBaseFll();
extern "C" void apply_shock_status__13TUnk_804806E8Fv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void vfunc_79__9TObjEnemyFv();
extern "C" void classify_actor_view_detail__13TUnk_804B9870Ffff();
extern "C" void clear_all_status_effects__13TUnk_804806E8Fv();
extern "C" void clear_harmful_statuses__13TUnk_804806E8Fv();
extern "C" void cure_paralysis__13TUnk_804806E8Fv();
extern "C" void cure_poison_ailment__13TUnk_804806E8Fv();
extern "C" void draw_model__10TObjPlayerFv();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void vfunc_78__13TUnk_804806E8Fl();
extern "C" void vfunc_77__13TUnk_804806E8Fv();
extern "C" void vfunc_76__13TUnk_804806E8Fv();
extern "C" void vfunc_75__13TUnk_804806E8Ff();
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index__13TUnk_804806E8Fv();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__13TUnk_804806E8Fl();
extern "C" void handle_message_event__17TObjNpcFemaleBaseFUs();
extern "C" void is_actor_cadence_frame__13TUnk_804806E8Fl();
extern "C" void play_voice__11TObjNpcBaseFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__13TUnk_804806E8Fv();
extern "C" void roll_physical_accuracy__13TUnk_804806E8FPvlf();
extern "C" void run_task__11TObjNpcBaseFPv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__13TUnk_804806E8Fll();
extern "C" void update_action_hold_status__13TUnk_804806E8Fv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y__13TUnk_804806E8Fv();
extern "C" void update_attack_stat_status();
extern "C" void vfunc_28__11TObjNpcBaseFv();
extern "C" void update_conversation__11TObjNpcBaseFv();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__13TUnk_804806E8Fv();
extern "C" void update_movement_status__13TUnk_804806E8Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__13TUnk_804806E8Fv();
extern "C" void update_standing__11TObjNpcBaseFv();
extern "C" void update_wandering__11TObjNpcBaseFv();
void *npc_lappy_animation_table[40] = {
    (void *)0x10000, (void *)0x5, (void *)0x3f333333, (void *)0x0,
    (void *)0x10001, (void *)0x9, (void *)0x3fe66666, (void *)0x1,
    (void *)0x10002, (void *)0x6, (void *)0x3f666666, (void *)0x0,
    (void *)0x20001, (void *)0x8, (void *)0x3f333333, (void *)0x0,
    (void *)0x10004, (void *)0x3, (void *)0x3f99999a, (void *)0x1,
    (void *)0x20000, (void *)0x0, (void *)0x3f800000, (void *)0x4,
    (void *)0x20000, (void *)0x1, (void *)0x3f800000, (void *)0x8,
    (void *)0x30006, (void *)0x2, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20004, (void *)0x4, (void *)0x3f666666, (void *)0x1,
    (void *)0x20004, (void *)0x7, (void *)0x3f000000, (void *)0x0,
};
void *lbl_804A9DA8[11] = {
    (void *)0x0, (void *)0x40f00000, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x30203, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *__vt__12TObjNpcLappy[95] = {
    (void *)0x0, (void *)0x0, (void *)&dt__12TObjNpcLappyFPvs, (void *)&run_task__11TObjNpcBaseFPv,
    (void *)&draw_model__10TObjPlayerFv, (void *)&render_actor_shadows_default, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&handle_message_event__17TObjNpcFemaleBaseFUs, (void *)&add_actor_exp__13TUnk_804806E8Fl, (void *)&consume_timer_field__13TUnk_804806E8Fl,
    (void *)&get_actor_level_index__13TUnk_804806E8Fv, (void *)&update_actor_ground_y__13TUnk_804806E8Fv, (void *)&vfunc_18__13TUnk_804806E8FPUc, (void *)&is_actor_cadence_frame__13TUnk_804806E8Fl,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker__13TUnk_804806E8FPUc, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&vfunc_28__11TObjNpcBaseFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__11TObjNpcBaseFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__13TUnk_804806E8Fv,
    (void *)&update_action_hold_status__13TUnk_804806E8Fv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__13TUnk_804806E8Fv, (void *)&update_movement_status__13TUnk_804806E8Fv,
    (void *)&update_shock_clock__13TUnk_804806E8Fv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment__13TUnk_804806E8Fv, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects__13TUnk_804806E8Fv,
    (void *)&apply_action_hold_status__13TUnk_804806E8Ff, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__11TObjNpcBaseFv, (void *)&vfunc_59__11TObjNpcBaseFv,
    (void *)&vfunc_60__13TUnk_804806E8Fv, (void *)&vfunc_61__13TUnk_804806E8Fv, (void *)&vfunc_62__13TUnk_804806E8Fv, (void *)&vfunc_63__13TUnk_804806E8Fv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__13TUnk_804806E8Fll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__9TObjEnemyFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)&vfunc_83__11TObjNpcBaseFv,
    (void *)&update_standing__11TObjNpcBaseFv, (void *)&update_wandering__11TObjNpcBaseFv, (void *)&update_conversation__11TObjNpcBaseFv, (void *)&apply_set_params__11TObjNpcBaseFll,
    (void *)&vfunc_88__12TObjNpcLappyFv, (void *)&debug_draw_talk__11TObjNpcBaseFv, (void *)&play_voice__11TObjNpcBaseFv, (void *)&vfunc_91__11TObjNpcBaseFv,
    (void *)&vfunc_92__11TObjNpcBaseFv, (void *)&draw_debug_info__11TObjNpcBaseFv, (void *)0x0,
};
extern s32 TObjNpcLappy__name;
extern u8 *rappy_bml_resource;

void *dt__12TObjNpcLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__12TObjNpcLappy;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjNpcLappy__ct(u8 *self, void *parent, s32 arg2) {
    TObjNpcBase__ct(self, parent);
    *(u8 **)(self + 0x18) = (u8 *)__vt__12TObjNpcLappy;
    *(s32 *)(self + 0) = TObjNpcLappy__name;
    ((VObj_8014B704 *)self)->m79(arg2);
    ((TObjPlayer *)self)->init_position_vectors();
    ((TObjNpcLappy *)self)->apply_set_params(0, 1);
    *(s32 *)(self + 0x34) = *(s32 *)(*(u8 **)(rappy_bml_resource + 0x42C) + 8);
    *(s32 *)(self + 0x24) = *(s32 *)(*(u8 **)(rappy_bml_resource + 0x42C) + 0xC);
    ((TObjPlayer *)self)->init_npc_animation((void*)npc_lappy_animation_table, (void*)(*(s32 *)(rappy_bml_resource + 0x430)), (void*)(*(s16 *)(self + 0xB8)));
    *(u8 **)(self + 0x350) = npc_movement_parameters;
    ((TUnk_804806E8 *)self)->set_motion_params(npc_default_battle_stats);
    init_collision_body_parts(self, lbl_804A9DA8, 1);
    ((TObjPlayer *)self)->reset_photon_effect();
    ((TObjEnemy *)self)->update_prev_position();
    copy_position__20TBoss3VoloptHiraisinFi(self);
    return self;
}

void TObjNpcMaleBase::request_action(s32 arg1) {
    if (arg1 != 1) {
        this->m_b8 = 0;
        return;
    }
    this->m_b8 = 1;
}

}
