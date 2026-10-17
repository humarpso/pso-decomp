#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804806E8.h"
extern "C" void has_flag_0x800__13TUnk_804806E8Fv();
extern "C" void test_flag30_512__13TUnk_804806E8Fv();
extern "C" void test_flag_1000__13TUnk_804806E8Fv();
extern "C" void test_flag_256__13TUnk_804806E8Fv();
#include "pso/system/vector.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/player/TObjPlayer.h"

struct Obj_800C7DF8 { u8 pad0[0x326]; s16 state; };

extern "C" {
void TObjEnemyCustom__sub_800C77A4(u8 *arg0);
int vfunc_58__15TObjEnemyCustomFv(void* p);
void vfunc_28__15TObjEnemyCustomFv(void);
void run_task__15TObjEnemyCustomFv(u8 *arg0);
int vfunc_59__15TObjEnemyCustomFv(void* p);
s32 advance_animation_playback(void *);
void apply_actor_gravity(TObjEnemy *arg0, s32 *arg1, f32 farg0);
s32 TObjVoloptCage__sub_800C76F0(void *);
int update_if_active__15TObjEneMe1GiGueFl(void*, int);

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
void render__15TObjEnemyCustomFv();
void render_shadows__9TObjEnemyFv(u8 *arg0);
void vfunc_6__13TUnk_804B9870FPsl();
void apply_object_set_data__13TUnk_804B9870FPv();
void reset_motion_fields__13TUnk_804806E8Fv();
void vfunc_9__13TUnk_804806E8Fv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void vfunc_12__9TObjEnemyFv();
void vfunc_13__13TUnk_804AF8A0Fl();
void add_actor_exp__13TUnk_804806E8Fl();
void consume_timer_field__13TUnk_804806E8Fl();
void get_actor_level_index__13TUnk_804806E8Fv();
void update_actor_ground_y__13TUnk_804806E8Fv();
void vfunc_18__13TUnk_804806E8FPUc();
void is_actor_cadence_frame__13TUnk_804806E8Fl();
void select_melee_contact_body__10TObjPlayerFv();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void receive_physical_attack__10TObjPlayerFv();
void receive_direct_attack__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void apply_knockback_from_attacker__13TUnk_804806E8FPUc();
void try_start_action__13TUnk_804806E8Fll();
void roll_physical_accuracy__13TUnk_804806E8FPvlf();
void vfunc_29__13TUnk_804806E8Fv();
void is_target_in_attack_range__10TObjPlayerFv();
void update_poison_status__13TUnk_804806E8Fv();
void update_action_hold_status__13TUnk_804806E8Fv();
s32 update_action_timer__10TObjPlayerFPv(u8 *arg0);
void update_flag30_timer__13TUnk_804806E8Fv();
void update_movement_status__13TUnk_804806E8Fv();
void update_shock_clock__13TUnk_804806E8Fv();
s32 update_attack_stat_status(u8 *arg0);
s32 update_defense_stat_status(u8 *arg0);
void vfunc_43__13TUnk_804806E8Fv();
void apply_poison_status__13TUnk_804806E8Fv();
void apply_paralysis__13TUnk_804806E8Fv();
void apply_slow_status__13TUnk_804806E8Fv();
void apply_confusion_status__13TUnk_804806E8Fv();
void apply_movement_ailment__13TUnk_804806E8Fl();
void apply_shock_status__13TUnk_804806E8Fv();
void clear_harmful_statuses__13TUnk_804806E8Fv();
void apply_attack_stat_status__13TUnk_804806E8FPv();
void cure_poison_ailment__13TUnk_804806E8Fv();
void cure_paralysis__13TUnk_804806E8Fv();
void clear_all_status_effects__13TUnk_804806E8Fv();
void apply_action_hold_status__13TUnk_804806E8Ff();
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
void apply_switch_attack__13TUnk_804806E8Fv();
void enemy_spawn_jellen_effect__13TUnk_804806E8Fv();
void trigger_switch_attack__10TObjPlayerFi(s32 arg0);
void enemy_spawn_zalure_effect__13TUnk_804806E8Fv();
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
    (void *)render_shadows__9TObjEnemyFv,
    (void *)vfunc_6__13TUnk_804B9870FPsl,
    (void *)apply_object_set_data__13TUnk_804B9870FPv,
    (void *)reset_motion_fields__13TUnk_804806E8Fv,
    (void *)vfunc_9__13TUnk_804806E8Fv,
    (void *)update_object_view_visibility__13TUnk_804B9870Fff,
    (void *)classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)vfunc_12__9TObjEnemyFv,
    (void *)vfunc_13__13TUnk_804AF8A0Fl,
    (void *)add_actor_exp__13TUnk_804806E8Fl,
    (void *)consume_timer_field__13TUnk_804806E8Fl,
    (void *)get_actor_level_index__13TUnk_804806E8Fv,
    (void *)update_actor_ground_y__13TUnk_804806E8Fv,
    (void *)vfunc_18__13TUnk_804806E8FPUc,
    (void *)is_actor_cadence_frame__13TUnk_804806E8Fl,
    (void *)select_melee_contact_body__10TObjPlayerFv,
    (void *)calc_distance_accuracy_penalty__10TObjPlayerFv,
    (void *)receive_physical_attack__10TObjPlayerFv,
    (void *)receive_direct_attack__10TObjPlayerFv,
    (void *)receive_weapon_special_attack__10TObjPlayerFv,
    (void *)apply_knockback_from_attacker__13TUnk_804806E8FPUc,
    (void *)try_start_action__13TUnk_804806E8Fll,
    (void *)roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)vfunc_28__15TObjEnemyCustomFv,
    (void *)vfunc_29__13TUnk_804806E8Fv,
    (void *)is_target_in_attack_range__10TObjPlayerFv,
    (void *)&test_flag_256__13TUnk_804806E8Fv,
    (void *)&test_flag30_512__13TUnk_804806E8Fv,
    (void *)&has_flag_0x800__13TUnk_804806E8Fv,
    (void *)&test_flag_1000__13TUnk_804806E8Fv,
    (void *)update_poison_status__13TUnk_804806E8Fv,
    (void *)update_action_hold_status__13TUnk_804806E8Fv,
    (void *)update_action_timer__10TObjPlayerFPv,
    (void *)update_flag30_timer__13TUnk_804806E8Fv,
    (void *)update_movement_status__13TUnk_804806E8Fv,
    (void *)update_shock_clock__13TUnk_804806E8Fv,
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
    (void *)cure_poison_ailment__13TUnk_804806E8Fv,
    (void *)cure_paralysis__13TUnk_804806E8Fv,
    (void *)clear_all_status_effects__13TUnk_804806E8Fv,
    (void *)apply_action_hold_status__13TUnk_804806E8Ff,
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
    (void *)apply_switch_attack__13TUnk_804806E8Fv,
    (void *)enemy_spawn_jellen_effect__13TUnk_804806E8Fv,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect__13TUnk_804806E8Fv,
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

    switch (this->state) {
    case 0:
        this->m_b8 = 0;
        this->state = 1;
    case 1:
        advance_animation_playback(this);
        if (!(this->actorFlags & 0x800000)) {
            apply_actor_gravity((TObjEnemy *)this, (s32 *)(0), lbl_805DA070);
        }
        break;
    case -1:
        this->actorFlags = (s32) (this->actorFlags & 0xFFFBFFFF);
        break;
    }
}

void TObjEnemyCustom::vfunc_58() { update_if_active__15TObjEneMe1GiGueFl(this, 0); }
void TObjEnemyCustom::vfunc_28() {  }

void TObjEnemyCustom::dispatch_state() {
    Obj_800C7DF8 *arg0 = (Obj_800C7DF8 *)this;
    switch (this->mode) {
    case 0: update_state(); return;
    case 1: ((TObjEnemyCustom *)arg0)->update_wander_state(); return;
    case 2: ((TObjEnemyCustom *)arg0)->update(); return;
    case 3: ((TObjEnemyCustom *)arg0)->update_state_machine(); return;
    case 4: ((TObjEnemyCustom *)arg0)->update_knockback_state(); return;
    case 5: TObjEnemyCustom__sub_800C77A4((u8 *)arg0); return;
    case 6: break;
    }
}

void TObjEnemyCustom::run_task() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::check_demo_mode() == 1) {
        TObjVoloptCage__sub_800C76F0(arg0);
        return;
    }
    if ((s16) this->mode != (s32) this->next_action) {
        if ((s32) this->state != -1) {
            this->state = -1;
            ((TObjEnemyCustom *)arg0)->dispatch_state();
        }
        this->mode = (s16) this->next_action;
        this->state = 0;
    }
    ((TObjEnemyCustom *)arg0)->dispatch_state();
    if ((s32) this->state == -1) {
        this->state = -1;
        ((TObjEnemyCustom *)arg0)->dispatch_state();
        this->mode = (s16) this->next_action;
        this->state = 0;
    }
    ((TObjEnemy *)arg0)->update_prev_position();
    VecCopy((Vec *)&this->m_74, (const Vec *)&this->m_2fc);
}

}
