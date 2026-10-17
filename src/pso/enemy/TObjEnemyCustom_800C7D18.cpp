#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/player/TObjPlayer.h"

struct Obj_800C7DF8 { u8 pad0[0x326]; s16 state; };

extern "C" {
void TObjEnemyCustom__sub_800C77A4(void *);
int vfunc_58__15TObjEnemyCustomFv(void* p);
void vfunc_28__15TObjEnemyCustomFv(void);
void run_task__15TObjEnemyCustomFv(u8 *arg0);
int vfunc_59__15TObjEnemyCustomFv(void* p);
s32 advance_animation_playback(void *);
s32 apply_actor_gravity(void *, s32, f32);
s32 TObjVoloptCage__sub_800C76F0(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
int update_if_active__15TObjEneMe1GiGueFl(void*, int);

void __dt__15TObjEnemyCustomFv();
void render__15TObjEnemyCustomFv();
void render_actor_shadows_default();
void TLobby__sub_801A1FD8();
void apply_object_set_data();
void reset_motion_fields__13TUnk_804806E8Fv();
void vfunc_9__13TUnk_804806E8Fv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void classify_actor_view_detail();
void vfunc_12__9TObjEnemyFv();
void vfunc_13__13TUnk_804AF8A0Fl();
void add_actor_exp();
void consume_timer_field__10TObjPlayerFPvi();
void get_actor_level_index();
void update_actor_ground_y();
void TObjPlayer__sub_80018E6C();
void is_actor_cadence_frame();
void select_melee_contact_body__10TObjPlayerFv();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void receive_physical_attack__10TObjPlayerFv();
void receive_direct_attack__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void apply_knockback_from_attacker();
void try_start_action__13TUnk_804806E8Fll();
void roll_physical_accuracy__13TUnk_804806E8FPvlf();
void vfunc_29__13TUnk_804806E8Fv();
void is_target_in_attack_range__10TObjPlayerFv();
void update_poison_status__10TObjPlayerFv();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_shock_clock__10TObjPlayerFPv();
void update_attack_stat_status();
void update_defense_stat_status();
void vfunc_43__13TUnk_804806E8Fv();
void apply_poison_status__13TUnk_804806E8Fv();
void apply_paralysis__13TUnk_804806E8Fv();
void apply_slow_status__13TUnk_804806E8Fv();
void apply_confusion_status__13TUnk_804806E8Fv();
void apply_movement_ailment__13TUnk_804806E8Fl();
void apply_shock_status__13TUnk_804806E8Fv();
void clear_harmful_statuses__13TUnk_804806E8Fv();
void apply_attack_stat_status__13TUnk_804806E8FPv();
void cure_poison_ailment();
void cure_paralysis__13TUnk_804806E8Fv();
void clear_all_status_effects();
void apply_action_hold_status();
void apply_anti_technique__13TUnk_804806E8Fl();
void vfunc_60__15TObjEnemyCustomFv();
void vfunc_61__15TObjEnemyCustomFv();
void vfunc_62__15TObjEnemyCustomFv();
void vfunc_63__15TObjEnemyCustomFv();
void reset_pose__13TUnk_804806E8Fv();
void vfunc_65__15TObjEnemyCustomFll();
void vfunc_66__13TUnk_804806E8Fv();
void vfunc_67__13TUnk_804806E8Fv();
void get_pos__13TUnk_804806E8Fl();
void apply_switch_attack__10TObjPlayerFi();
void enemy_spawn_jellen_effect();
void trigger_switch_attack__10TObjPlayerFi();
void enemy_spawn_zalure_effect();
void vfunc_73__13TUnk_804806E8Fv();
void vfunc_74__9TObjEnemyFl();
void vfunc_75__13TUnk_804806E8Ff();
void vfunc_76__13TUnk_804806E8Fv();
void vfunc_77__13TUnk_804806E8Fv();
void vfunc_78__13TUnk_804806E8Fl();
void vfunc_79__15TObjEnemyCustomFv();
void apply_hit_message_flags__9TObjEnemyFPv();
void apply_set_data__9TObjEnemyFPv();
void clear_lobby_object_state__9TObjEnemyFv();
void *__vt__15TObjEnemyCustom[83] = {
    0,
    0,
    (void *)__dt__15TObjEnemyCustomFv,
    (void *)run_task__15TObjEnemyCustomFv,
    (void *)render__15TObjEnemyCustomFv,
    (void *)render_actor_shadows_default,
    (void *)TLobby__sub_801A1FD8,
    (void *)apply_object_set_data,
    (void *)reset_motion_fields__13TUnk_804806E8Fv,
    (void *)vfunc_9__13TUnk_804806E8Fv,
    (void *)update_object_view_visibility__13TUnk_804B9870Fff,
    (void *)classify_actor_view_detail,
    (void *)vfunc_12__9TObjEnemyFv,
    (void *)vfunc_13__13TUnk_804AF8A0Fl,
    (void *)add_actor_exp,
    (void *)consume_timer_field__10TObjPlayerFPvi,
    (void *)get_actor_level_index,
    (void *)update_actor_ground_y,
    (void *)TObjPlayer__sub_80018E6C,
    (void *)is_actor_cadence_frame,
    (void *)select_melee_contact_body__10TObjPlayerFv,
    (void *)calc_distance_accuracy_penalty__10TObjPlayerFv,
    (void *)receive_physical_attack__10TObjPlayerFv,
    (void *)receive_direct_attack__10TObjPlayerFv,
    (void *)receive_weapon_special_attack__10TObjPlayerFv,
    (void *)apply_knockback_from_attacker,
    (void *)try_start_action__13TUnk_804806E8Fll,
    (void *)roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)vfunc_28__15TObjEnemyCustomFv,
    (void *)vfunc_29__13TUnk_804806E8Fv,
    (void *)is_target_in_attack_range__10TObjPlayerFv,
    (void *)TObjPlayer::test_flag_256,
    (void *)TObjPlayer::test_flag30_512,
    (void *)TObjPlayer::has_flag_0x800,
    (void *)TObjPlayer::test_flag_1000,
    (void *)update_poison_status__10TObjPlayerFv,
    (void *)update_action_hold_status__10TObjPlayerFv,
    (void *)update_action_timer__10TObjPlayerFPv,
    (void *)update_flag30_timer__10TObjPlayerFPv,
    (void *)update_movement_status__10TObjPlayerFv,
    (void *)update_shock_clock__10TObjPlayerFPv,
    (void *)update_attack_stat_status,
    (void *)update_defense_stat_status,
    (void *)vfunc_43__13TUnk_804806E8Fv,
    (void *)apply_poison_status__13TUnk_804806E8Fv,
    (void *)apply_paralysis__13TUnk_804806E8Fv,
    (void *)apply_slow_status__13TUnk_804806E8Fv,
    (void *)apply_confusion_status__13TUnk_804806E8Fv,
    (void *)apply_movement_ailment__13TUnk_804806E8Fl,
    (void *)apply_shock_status__13TUnk_804806E8Fv,
    (void *)clear_harmful_statuses__13TUnk_804806E8Fv,
    (void *)apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)TObjPlayer::apply_defense_stat_status,
    (void *)cure_poison_ailment,
    (void *)cure_paralysis__13TUnk_804806E8Fv,
    (void *)clear_all_status_effects,
    (void *)apply_action_hold_status,
    (void *)apply_anti_technique__13TUnk_804806E8Fl,
    (void *)vfunc_58__15TObjEnemyCustomFv,
    (void *)vfunc_59__15TObjEnemyCustomFv,
    (void *)vfunc_60__15TObjEnemyCustomFv,
    (void *)vfunc_61__15TObjEnemyCustomFv,
    (void *)vfunc_62__15TObjEnemyCustomFv,
    (void *)vfunc_63__15TObjEnemyCustomFv,
    (void *)reset_pose__13TUnk_804806E8Fv,
    (void *)vfunc_65__15TObjEnemyCustomFll,
    (void *)vfunc_66__13TUnk_804806E8Fv,
    (void *)vfunc_67__13TUnk_804806E8Fv,
    (void *)get_pos__13TUnk_804806E8Fl,
    (void *)apply_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_jellen_effect,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect,
    (void *)vfunc_73__13TUnk_804806E8Fv,
    (void *)vfunc_74__9TObjEnemyFl,
    (void *)vfunc_75__13TUnk_804806E8Ff,
    (void *)vfunc_76__13TUnk_804806E8Fv,
    (void *)vfunc_77__13TUnk_804806E8Fv,
    (void *)vfunc_78__13TUnk_804806E8Fl,
    (void *)vfunc_79__15TObjEnemyCustomFv,
    (void *)apply_hit_message_flags__9TObjEnemyFPv,
    (void *)apply_set_data__9TObjEnemyFPv,
    (void *)clear_lobby_object_state__9TObjEnemyFv,
};

void TObjEnemyCustom::vfunc_59() { update_if_active__15TObjEneMe1GiGueFl(this, 1); }

extern f32 lbl_805DA070;

void TObjEnemyCustom::update_state() {
    s32 temp_r0;

    temp_r0 = *(s32 *)&this->state;
    switch (temp_r0) {
    case 0:
        this->m_b8 = 0;
        *(s32 *)&this->state = 1;
    case 1:
        advance_animation_playback(this);
        if (!(*(s32 *)&this->actorFlags & 0x800000)) {
            apply_actor_gravity(this, 0, lbl_805DA070);
        }
        break;
    case -1:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFFBFFFF);
        break;
    }
}

void TObjEnemyCustom::vfunc_58() { update_if_active__15TObjEneMe1GiGueFl(this, 0); }
void TObjEnemyCustom::vfunc_28() {  }

void TObjEnemyCustom::dispatch_state() {
    Obj_800C7DF8 *arg0 = (Obj_800C7DF8 *)this;
    switch (arg0->state) {
    case 0: update_state(); return;
    case 1: ((TObjEnemyCustom *)arg0)->update_wander_state(); return;
    case 2: ((TObjEnemyCustom *)arg0)->update(); return;
    case 3: ((TObjEnemyCustom *)arg0)->update_state_machine(); return;
    case 4: ((TObjEnemyCustom *)arg0)->update_knockback_state(); return;
    case 5: TObjEnemyCustom__sub_800C77A4(arg0); return;
    case 6: break;
    }
}

void TObjEnemyCustom::run_task() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::check_demo_mode() == 1) {
        TObjVoloptCage__sub_800C76F0(arg0);
        return;
    }
    if ((s16) this->mode != (s32) *(s32 *)&this->next_action) {
        if ((s32) *(s32 *)&this->state != -1) {
            *(s32 *)&this->state = -1;
            ((TObjEnemyCustom *)arg0)->dispatch_state();
        }
        this->mode = (s16) *(s32 *)&this->next_action;
        *(s32 *)&this->state = 0;
    }
    ((TObjEnemyCustom *)arg0)->dispatch_state();
    if ((s32) *(s32 *)&this->state == -1) {
        *(s32 *)&this->state = -1;
        ((TObjEnemyCustom *)arg0)->dispatch_state();
        this->mode = (s16) *(s32 *)&this->next_action;
        *(s32 *)&this->state = 0;
    }
    ((TObjEnemy *)arg0)->update_prev_position();
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
