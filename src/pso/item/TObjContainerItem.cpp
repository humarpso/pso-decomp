#include "types.h"
#include "pso/item/TObjContainerItem.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804B6C24.h"
extern "C" void roll_physical_accuracy__13TUnk_804B6C24FPvlf();
#include "pso/item/TObjContainerBase.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80189BE0_lbl_804B63BC {
    s32 value;
    u8 remaining[0x158];
};

struct RecoveredGlobal_80189BE0___vt__17TObjContainerItem {
    s32 value;
    u8 remaining[0x148];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_container_base(void *, void *, void *);
s32 get_container_param(int);
extern RecoveredGlobal_80189BE0_lbl_804B63BC forest_box_collision_body_parts;
extern s32 __vt__17TObjContainerItem[];
extern s32 TObjContainerItem__name;
u8 *TObjContainerItem__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 play_sound_effect(int, void *, int, int);
void play_container_break_sound(s32 arg0);
void __dt__21TObjContainerAbeEnemyFv();
void run_task__13TUnk_804B6C24Fv();
void render__13TUnk_804B6C24Fv();
void render_shadows__7TObjectFv();
void vfunc_6__21TObjContainerAbeEnemyFPsl();
void apply_object_set_data();
void reset_motion_fields__13TUnk_804806E8Fv();
void vfunc_9__13TUnk_804806E8Fv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void classify_actor_view_detail();
void vfunc_12__13TUnk_804B9870Fv();
void vfunc_13__13TUnk_804AF8A0Fl();
void add_actor_exp();
void consume_timer_field__10TObjPlayerFPvi();
void get_actor_level_index();
void update_actor_ground_y();
void TObjPlayer__sub_80018E6C();
void is_actor_cadence_frame();
void is_within_range__10TObjPlayerFl();
void calc_distance_accuracy_penalty__13TUnk_804B6C24FPvPvPvf();
void receive_physical_attack__21TObjContainerAbeEnemyFPvf();
void receive_direct_attack__13TUnk_804B6C24FPvPvPvll();
void receive_weapon_special_attack__13TUnk_804B6C24FPvPv();
void apply_knockback_from_attacker__13TUnk_804B6C24FPUc();
void try_start_action__13TUnk_804B6C24Fll();
void vfunc_28__13TUnk_804806E8Fv();
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
void vfunc_58__13TUnk_804806E8Fv();
void vfunc_59__13TUnk_804806E8Fv();
void vfunc_60__13TUnk_804806E8Fv();
void vfunc_61__13TUnk_804806E8Fv();
void vfunc_62__13TUnk_804806E8Fv();
void vfunc_63__13TUnk_804806E8Fv();
void reset_pose__13TUnk_804806E8Fv();
void vfunc_65__13TUnk_804806E8Fll();
void vfunc_66__13TUnk_804806E8Fv();
void vfunc_67__13TUnk_804806E8Fv();
void get_pos__13TUnk_804806E8Fl();
void apply_switch_attack__10TObjPlayerFi();
void enemy_spawn_jellen_effect();
void trigger_switch_attack__10TObjPlayerFi();
void enemy_spawn_zalure_effect();
void vfunc_73__13TUnk_804806E8Fv();
void vfunc_74__13TUnk_804806E8Fl();
void vfunc_75__13TUnk_804806E8Ff();
void vfunc_76__13TUnk_804806E8Fv();
void vfunc_77__13TUnk_804806E8Fv();
void vfunc_78__13TUnk_804806E8Fl();
void TObjContainerAbeEnemy__vt77();
void vfunc_80__21TObjContainerAbeEnemyFv();
void vfunc_81__21TObjContainerAbeEnemyFv();
void debug_print_item_box_info__21TObjContainerAbeEnemyFv();
void *__vt__21TObjContainerAbeEnemy[83] = {
    0,
    0,
    (void *)__dt__21TObjContainerAbeEnemyFv,
    (void *)run_task__13TUnk_804B6C24Fv,
    (void *)render__13TUnk_804B6C24Fv,
    (void *)render_shadows__7TObjectFv,
    (void *)vfunc_6__21TObjContainerAbeEnemyFPsl,
    (void *)apply_object_set_data,
    (void *)reset_motion_fields__13TUnk_804806E8Fv,
    (void *)vfunc_9__13TUnk_804806E8Fv,
    (void *)update_object_view_visibility__13TUnk_804B9870Fff,
    (void *)classify_actor_view_detail,
    (void *)vfunc_12__13TUnk_804B9870Fv,
    (void *)vfunc_13__13TUnk_804AF8A0Fl,
    (void *)add_actor_exp,
    (void *)consume_timer_field__10TObjPlayerFPvi,
    (void *)get_actor_level_index,
    (void *)update_actor_ground_y,
    (void *)TObjPlayer__sub_80018E6C,
    (void *)is_actor_cadence_frame,
    (void *)is_within_range__10TObjPlayerFl,
    (void *)calc_distance_accuracy_penalty__13TUnk_804B6C24FPvPvPvf,
    (void *)receive_physical_attack__21TObjContainerAbeEnemyFPvf,
    (void *)receive_direct_attack__13TUnk_804B6C24FPvPvPvll,
    (void *)receive_weapon_special_attack__13TUnk_804B6C24FPvPv,
    (void *)apply_knockback_from_attacker__13TUnk_804B6C24FPUc,
    (void *)try_start_action__13TUnk_804B6C24Fll,
    (void *)&roll_physical_accuracy__13TUnk_804B6C24FPvlf,
    (void *)vfunc_28__13TUnk_804806E8Fv,
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
    (void *)vfunc_58__13TUnk_804806E8Fv,
    (void *)vfunc_59__13TUnk_804806E8Fv,
    (void *)vfunc_60__13TUnk_804806E8Fv,
    (void *)vfunc_61__13TUnk_804806E8Fv,
    (void *)vfunc_62__13TUnk_804806E8Fv,
    (void *)vfunc_63__13TUnk_804806E8Fv,
    (void *)reset_pose__13TUnk_804806E8Fv,
    (void *)vfunc_65__13TUnk_804806E8Fll,
    (void *)vfunc_66__13TUnk_804806E8Fv,
    (void *)vfunc_67__13TUnk_804806E8Fv,
    (void *)get_pos__13TUnk_804806E8Fl,
    (void *)apply_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_jellen_effect,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect,
    (void *)vfunc_73__13TUnk_804806E8Fv,
    (void *)vfunc_74__13TUnk_804806E8Fl,
    (void *)vfunc_75__13TUnk_804806E8Ff,
    (void *)vfunc_76__13TUnk_804806E8Fv,
    (void *)vfunc_77__13TUnk_804806E8Fv,
    (void *)vfunc_78__13TUnk_804806E8Fl,
    (void *)TObjContainerAbeEnemy__vt77,
    (void *)vfunc_80__21TObjContainerAbeEnemyFv,
    (void *)vfunc_81__21TObjContainerAbeEnemyFv,
    (void *)debug_print_item_box_info__21TObjContainerAbeEnemyFv,
};
void *__dt__17TObjContainerItemFv(void *arg0, s16 arg1);
s32 request_box_item_drop__13TUnk_804806E8FPvs(s32, void *, s32, void *);
s32 free_collision_body_parts(void *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TObjContainerItem::vfunc_80() {
    s16 temp_r0;

    temp_r0 = this->mode;
    switch (temp_r0) {
    case 0:
        if ((s32) this->m_364 != 0) {
            submit_cursor_candidate(this, -1);
        }
    case 1:
        return;
    }
}

extern void *tl_05;

void *TObjContainerItem::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerItem__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void *__dt__17TObjContainerItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjContainerItem;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804B6C24 *)arg0)->destroy_container_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80189BE0_lbl_804B63BC_size[sizeof(RecoveredGlobal_80189BE0_lbl_804B63BC) == 0x15C ? 1 : -1];
typedef char RecoveredGlobal_80189BE0___vt__17TObjContainerItem_size[sizeof(RecoveredGlobal_80189BE0___vt__17TObjContainerItem) == 0x14C ? 1 : -1];
u8 *TObjContainerItem__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_container_base((void *) (arg0), (void *) (arg1), (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80189BE0___vt__17TObjContainerItem *)&__vt__17TObjContainerItem).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjContainerItem__name;
    *(s32 *)((s8 *)arg0 + 0x34) = get_container_param((int) (1));
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x60000000);
    init_collision_body_parts((void *) (arg0), (void *) (&forest_box_collision_body_parts.value), (int) (1));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&forest_box_collision_body_parts.value) + 4));
    return arg0;
}

void TUnk_804B6C24::spawn_item(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    request_box_item_drop__13TUnk_804806E8FPvs(arg1, arg0 + 0x38, this->m_360, arg0);
}
void play_container_break_sound(s32 arg0) {
    u32 global_state;
    global_state = TOKeyMachine01::get_global_state();
    switch (global_state) {
    case 1:
    case 2:
        play_sound_effect((int) (0x4BC10), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 3:
    case 4:
    case 5:
        play_sound_effect((int) (0x43C0F), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 6:
    case 7:
        play_sound_effect((int) (0x4004BC09), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 8:
    case 9:
    case 10:
        play_sound_effect((int) (0x4004BC10), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 16:
    case 17:
        play_sound_effect((int) (0x4004BC05), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 19:
    case 20:
        play_sound_effect((int) (0x4BC05), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 21:
    case 22:
        play_sound_effect((int) (0x4004BC05), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        play_sound_effect((int) (0x4BC16), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 28:
    case 29:
        play_sound_effect((int) (0x4004BC16), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 34:
        play_sound_effect((int) (0x4004BC16), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 35:
        play_sound_effect((int) (0x4004BC16), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    default:
        return;
    }
}

}
