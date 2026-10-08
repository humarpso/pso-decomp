#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800C7DF8 { u8 pad0[0x326]; s16 state; };

extern "C" {
void update_state__15TObjEnemyCustomFPv(void *arg0);
void update_wander_state__15TObjEnemyCustomFPv(void *);
void update__15TObjEnemyCustomFPv(void *);
void update_state_machine__15TObjEnemyCustomFPv(void *);
void update_knockback_state__15TObjEnemyCustomFPv(void *);
void TObjEnemyCustom__sub_800C77A4(void *);
void dispatch_state__15TObjEnemyCustomFPv(Obj_800C7DF8 *arg0);
}

extern "C" {

int TObjEnemyCustom__sub_800C7DD0(void* p);
void TObjEnemyCustom__sub_800C7DF4(void);
void handle_state_transition__15TObjEnemyCustomFPv(u8 *arg0);
int update_if_active__15TObjEnemyCustomFPv(void* p);
void update_state__15TObjEnemyCustomFPv(void *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK TObjVoloptCage__sub_800C76F0(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);

void __dt__15TObjEnemyCustomFv();
void draw__15TObjEnemyCustomFPv();
void render_actor_shadows_default();
void TLobby__sub_801A1FD8();
void apply_object_set_data();
void reset_actor_action_state();
void get_actor_body_center();
void update_object_view_visibility();
void classify_actor_view_detail();
void get_enemy_name__14TObjEnePanarmsFPv();
void TObjPlayer__sub_80019568();
void add_actor_exp();
void TObjPlayer__sub_800111D8();
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
void try_start_action__10TObjPlayerFPvii();
void roll_physical_accuracy__10TObjPlayerFv();
void TObjPlayer__sub_8000FF3C();
void is_target_in_attack_range__10TObjPlayerFv();
void test_flag_256__10TObjPlayerFPv();
void test_flag30_512__10TObjPlayerFPv();
void has_flag_0x800__10TObjPlayerFPv();
void test_flag_1000__10TObjPlayerFPv();
void update_poison_status__10TObjPlayerFv();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_shock_clock__10TObjPlayerFPv();
void update_attack_stat_status();
void update_defense_stat_status();
void TObjPlayer__sub_800172CC();
void apply_poison_status__10TObjPlayerFv();
void apply_paralysis__10TObjPlayerFv();
void apply_slow_status__10TObjPlayerFPv();
void apply_confusion_status__10TObjPlayerFv();
void apply_movement_ailment__10TObjPlayerFv();
void apply_shock_status__10TObjPlayerFv();
void clear_harmful_statuses__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_defense_stat_status__10TObjPlayerFv();
void cure_poison_ailment();
void cure_paralysis__10TObjPlayerFv();
void clear_all_status_effects();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void update_gigue__15TObjEnemyCustomFPv();
void TObjEnemyCustom__sub_800C7AE0();
void TObjEnemyCustom__sub_800C79C8();
void TObjEnemyCustom__sub_800C789C();
void reset_pose__10TObjPlayerFPv();
void TBoss3Volopt__sub_800C762C();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014830();
void get_pos__10TObjPlayerFii();
void apply_switch_attack__10TObjPlayerFi();
void enemy_spawn_jellen_effect();
void trigger_switch_attack__10TObjPlayerFi();
void enemy_spawn_zalure_effect();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_800F65D0();
void fn_80010EC8();
void fn_80010EC4();
void fn_80010EC0();
void fn_80010EBC();
void call_player_preserving_field__15TObjEnemyCustomFPv();
void apply_hit_message_flags__10TObjPlayerFPvPv();
void apply_set_data__9TObjEnemyFPvPv();
void fn_800F5D80();
void *__vt__15TObjEnemyCustom[83] = {
    0,
    0,
    (void *)__dt__15TObjEnemyCustomFv,
    (void *)handle_state_transition__15TObjEnemyCustomFPv,
    (void *)draw__15TObjEnemyCustomFPv,
    (void *)render_actor_shadows_default,
    (void *)TLobby__sub_801A1FD8,
    (void *)apply_object_set_data,
    (void *)reset_actor_action_state,
    (void *)get_actor_body_center,
    (void *)update_object_view_visibility,
    (void *)classify_actor_view_detail,
    (void *)get_enemy_name__14TObjEnePanarmsFPv,
    (void *)TObjPlayer__sub_80019568,
    (void *)add_actor_exp,
    (void *)TObjPlayer__sub_800111D8,
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
    (void *)try_start_action__10TObjPlayerFPvii,
    (void *)roll_physical_accuracy__10TObjPlayerFv,
    (void *)TObjEnemyCustom__sub_800C7DF4,
    (void *)TObjPlayer__sub_8000FF3C,
    (void *)is_target_in_attack_range__10TObjPlayerFv,
    (void *)test_flag_256__10TObjPlayerFPv,
    (void *)test_flag30_512__10TObjPlayerFPv,
    (void *)has_flag_0x800__10TObjPlayerFPv,
    (void *)test_flag_1000__10TObjPlayerFPv,
    (void *)update_poison_status__10TObjPlayerFv,
    (void *)update_action_hold_status__10TObjPlayerFv,
    (void *)update_action_timer__10TObjPlayerFPv,
    (void *)update_flag30_timer__10TObjPlayerFPv,
    (void *)update_movement_status__10TObjPlayerFv,
    (void *)update_shock_clock__10TObjPlayerFPv,
    (void *)update_attack_stat_status,
    (void *)update_defense_stat_status,
    (void *)TObjPlayer__sub_800172CC,
    (void *)apply_poison_status__10TObjPlayerFv,
    (void *)apply_paralysis__10TObjPlayerFv,
    (void *)apply_slow_status__10TObjPlayerFPv,
    (void *)apply_confusion_status__10TObjPlayerFv,
    (void *)apply_movement_ailment__10TObjPlayerFv,
    (void *)apply_shock_status__10TObjPlayerFv,
    (void *)clear_harmful_statuses__10TObjPlayerFv,
    (void *)apply_attack_stat_status__10TObjPlayerFv,
    (void *)apply_defense_stat_status__10TObjPlayerFv,
    (void *)cure_poison_ailment,
    (void *)cure_paralysis__10TObjPlayerFv,
    (void *)clear_all_status_effects,
    (void *)apply_action_hold_status,
    (void *)apply_anti_technique__10TObjPlayerFv,
    (void *)TObjEnemyCustom__sub_800C7DD0,
    (void *)update_if_active__15TObjEnemyCustomFPv,
    (void *)update_gigue__15TObjEnemyCustomFPv,
    (void *)TObjEnemyCustom__sub_800C7AE0,
    (void *)TObjEnemyCustom__sub_800C79C8,
    (void *)TObjEnemyCustom__sub_800C789C,
    (void *)reset_pose__10TObjPlayerFPv,
    (void *)TBoss3Volopt__sub_800C762C,
    (void *)TObjPlayer__sub_80014838,
    (void *)TObjPlayer__sub_80014830,
    (void *)get_pos__10TObjPlayerFii,
    (void *)apply_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_jellen_effect,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect,
    (void *)TObjPlayer__sub_80010A80,
    (void *)TObjPlayer__sub_800F65D0,
    (void *)fn_80010EC8,
    (void *)fn_80010EC4,
    (void *)fn_80010EC0,
    (void *)fn_80010EBC,
    (void *)call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)apply_hit_message_flags__10TObjPlayerFPvPv,
    (void *)apply_set_data__9TObjEnemyFPvPv,
    (void *)fn_800F5D80,
};

int update_if_active__15TObjEnemyCustomFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 1); }

extern f32 lbl_805DA070;

void update_state__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity(arg0, 0, lbl_805DA070);
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        break;
    }
}

int TObjEnemyCustom__sub_800C7DD0(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }
void TObjEnemyCustom__sub_800C7DF4(void) {  }

void dispatch_state__15TObjEnemyCustomFPv(Obj_800C7DF8 *arg0) {
    switch (arg0->state) {
    case 0: update_state__15TObjEnemyCustomFPv(arg0); return;
    case 1: update_wander_state__15TObjEnemyCustomFPv(arg0); return;
    case 2: update__15TObjEnemyCustomFPv(arg0); return;
    case 3: update_state_machine__15TObjEnemyCustomFPv(arg0); return;
    case 4: update_knockback_state__15TObjEnemyCustomFPv(arg0); return;
    case 5: TObjEnemyCustom__sub_800C77A4(arg0); return;
    case 6: break;
    }
}

void handle_state_transition__15TObjEnemyCustomFPv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjVoloptCage__sub_800C76F0(arg0);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            dispatch_state__15TObjEnemyCustomFPv((Obj_800C7DF8 *)(arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    dispatch_state__15TObjEnemyCustomFPv((Obj_800C7DF8 *)(arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        dispatch_state__15TObjEnemyCustomFPv((Obj_800C7DF8 *)(arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    update_prev_position__10TObjPlayerFPv(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
