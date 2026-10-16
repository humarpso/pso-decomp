#include "types.h"
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

void set_motion_params__10TObjPlayerFPvPv(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void TObjNpcBase__ct(void *, void *);
void init_collision_body_parts(void *, void *, s32);
extern u8 npc_default_battle_stats[];
extern u8 npc_movement_parameters[];
extern "C" void TLobby__sub_801A1FD8();
extern "C" void draw_debug_info__12TObjNpcEnemyFv();
extern "C" void TObjNpcFemaleBase__sub_80147CD4();
extern "C" void TObjNpcFemaleBase__sub_801480F4();
extern "C" void TObjNpcFemaleBase__sub_801480F8();
extern "C" void debug_draw_talk__17TObjNpcFemaleBaseFv();
extern "C" void TObjNpcLappy__sub_8014B620();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014884();
extern "C" void TObjPlayer__sub_80014888();
extern "C" void TObjPlayer__sub_8001488C();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void update_and_send_enemy_hit_state();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void TObjPlayer__sub_80148D80();
extern "C" void deactivateIdleMode__11TObjNpcBaseFv();
extern "C" void activate_idle_mode__11TObjNpcBaseFv();
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
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_set_params__11TObjNpcBaseFll();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_vt78__10TObjPlayerFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void draw_model__10TObjPlayerFv();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void clear_lobby_object_state();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void handle_message_event__17TObjNpcFemaleBaseFUs();
extern "C" void is_actor_cadence_frame();
extern "C" void play_voice__11TObjNpcBaseFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void run_task__11TObjNpcBaseFPv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_battle_target__10TObjPlayerFv();
extern "C" void update_conversation__11TObjNpcBaseFv();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
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
    (void *)&draw_model__10TObjPlayerFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFv, (void *)&handle_message_event__17TObjNpcFemaleBaseFUs, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&update_battle_target__10TObjPlayerFv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&TObjNpcFemaleBase__sub_80147CD4, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&deactivateIdleMode__11TObjNpcBaseFv, (void *)&activate_idle_mode__11TObjNpcBaseFv,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjPlayer__sub_8001488C, (void *)&TObjPlayer__sub_80014888, (void *)&TObjPlayer__sub_80014884,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjPlayer__sub_80148D80,
    (void *)&update_standing__11TObjNpcBaseFv, (void *)&update_wandering__11TObjNpcBaseFv, (void *)&update_conversation__11TObjNpcBaseFv, (void *)&apply_set_params__11TObjNpcBaseFll,
    (void *)&TObjNpcLappy__sub_8014B620, (void *)&debug_draw_talk__17TObjNpcFemaleBaseFv, (void *)&play_voice__11TObjNpcBaseFv, (void *)&TObjNpcFemaleBase__sub_801480F8,
    (void *)&TObjNpcFemaleBase__sub_801480F4, (void *)&draw_debug_info__12TObjNpcEnemyFv, (void *)0x0,
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
    ((VObj_8014B704 *)self)->m85(0, 1);
    *(s32 *)(self + 0x34) = *(s32 *)(*(u8 **)(rappy_bml_resource + 0x42C) + 8);
    *(s32 *)(self + 0x24) = *(s32 *)(*(u8 **)(rappy_bml_resource + 0x42C) + 0xC);
    ((TObjPlayer *)self)->init_npc_animation((void*)npc_lappy_animation_table, (void*)(*(s32 *)(rappy_bml_resource + 0x430)), (void*)(*(s16 *)(self + 0xB8)));
    *(u8 **)(self + 0x350) = npc_movement_parameters;
    set_motion_params__10TObjPlayerFPvPv(self, npc_default_battle_stats);
    init_collision_body_parts(self, lbl_804A9DA8, 1);
    ((TObjPlayer *)self)->reset_photon_effect();
    ((TObjPlayer *)self)->update_prev_position();
    copy_position__20TBoss3VoloptHiraisinFi(self);
    return self;
}

void TObjNpcMaleBase::request_action(s32 arg1) {
    if (arg1 != 1) {
        *(s16 *)((s8 *)this + 0xB8) = 0;
        return;
    }
    *(s16 *)((s8 *)this + 0xB8) = 1;
}

}
