#include "types.h"

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
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_container_base(void *, void *, void *);
s32 get_container_param(int);
extern RecoveredGlobal_80189BE0_lbl_804B63BC forest_box_collision_body_parts;
extern s32 __vt__17TObjContainerItem[];
extern s32 TObjContainerItem__name;
u8 *TObjContainerItem__ct(u8 *arg0, s32 arg1, s32 arg2);
u32 get_global_state__14TOKeyMachine01Fv();
s32 play_sound_effect(int, void *, int, int);
void play_container_break_sound(s32 arg0);
}

extern "C" {
void __dt__21TObjContainerAbeEnemyFv();
void step_laser_fence__10TObjPlayerFPv();
void render__17TObjContainerBaseFPv();
void render_shadows__7TObjectFv();
void TObjContainerAbeEnemy__vt4();
void apply_object_set_data();
void reset_actor_action_state();
void get_actor_body_center();
void update_object_view_visibility();
void classify_actor_view_detail();
void TObjRoomId__sub_801A1E2C();
void TObjPlayer__sub_80019568();
void add_actor_exp();
void consume_timer_field__10TObjPlayerFPvi();
void get_actor_level_index();
void update_actor_ground_y();
void TObjPlayer__sub_80018E6C();
void is_actor_cadence_frame();
void is_within_range__10TObjPlayerFPvi();
void TObjPlayer__sub_8015C884();
void TObjContainerAbeEnemy__vt20();
void receive_technique_hit__17TObjContainerBaseFPviPv();
void call_vt5_and_get_default_scale__10TObjPlayerFPv();
void TLobby__sub_8015C8C4();
void TLobby__sub_8015C8C8();
void check_accuracy_hit__17TObjContainerBaseFv();
void TObjPlayer__sub_80011010();
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
void TObjPlayer__sub_80014898();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_8001488C();
void TObjPlayer__sub_80014888();
void TObjPlayer__sub_80014884();
void reset_pose__10TObjPlayerFPv();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014830();
void get_pos__10TObjPlayerFii();
void apply_switch_attack__10TObjPlayerFi();
void enemy_spawn_jellen_effect();
void trigger_switch_attack__10TObjPlayerFi();
void enemy_spawn_zalure_effect();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_80010A78();
void fn_80010EC8();
void fn_80010EC4();
void fn_80010EC0();
void fn_80010EBC();
void TObjContainerAbeEnemy__vt77();
void TObjContainerAbeEnemy__vt78();
void TObjContainerAbeEnemy__vt79();
void TObjContainerAbeEnemy__vt80();
void *__vt__21TObjContainerAbeEnemy[83] = {
    0,
    0,
    (void *)__dt__21TObjContainerAbeEnemyFv,
    (void *)step_laser_fence__10TObjPlayerFPv,
    (void *)render__17TObjContainerBaseFPv,
    (void *)render_shadows__7TObjectFv,
    (void *)TObjContainerAbeEnemy__vt4,
    (void *)apply_object_set_data,
    (void *)reset_actor_action_state,
    (void *)get_actor_body_center,
    (void *)update_object_view_visibility,
    (void *)classify_actor_view_detail,
    (void *)TObjRoomId__sub_801A1E2C,
    (void *)TObjPlayer__sub_80019568,
    (void *)add_actor_exp,
    (void *)consume_timer_field__10TObjPlayerFPvi,
    (void *)get_actor_level_index,
    (void *)update_actor_ground_y,
    (void *)TObjPlayer__sub_80018E6C,
    (void *)is_actor_cadence_frame,
    (void *)is_within_range__10TObjPlayerFPvi,
    (void *)TObjPlayer__sub_8015C884,
    (void *)TObjContainerAbeEnemy__vt20,
    (void *)receive_technique_hit__17TObjContainerBaseFPviPv,
    (void *)call_vt5_and_get_default_scale__10TObjPlayerFPv,
    (void *)TLobby__sub_8015C8C4,
    (void *)TLobby__sub_8015C8C8,
    (void *)check_accuracy_hit__17TObjContainerBaseFv,
    (void *)TObjPlayer__sub_80011010,
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
    (void *)TObjPlayer__sub_80014898,
    (void *)TObjPlayer__sub_80014894,
    (void *)TObjPlayer__sub_80014890,
    (void *)TObjPlayer__sub_8001488C,
    (void *)TObjPlayer__sub_80014888,
    (void *)TObjPlayer__sub_80014884,
    (void *)reset_pose__10TObjPlayerFPv,
    (void *)TObjPlayer__sub_80014840,
    (void *)TObjPlayer__sub_80014838,
    (void *)TObjPlayer__sub_80014830,
    (void *)get_pos__10TObjPlayerFii,
    (void *)apply_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_jellen_effect,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect,
    (void *)TObjPlayer__sub_80010A80,
    (void *)TObjPlayer__sub_80010A78,
    (void *)fn_80010EC8,
    (void *)fn_80010EC4,
    (void *)fn_80010EC0,
    (void *)fn_80010EBC,
    (void *)TObjContainerAbeEnemy__vt77,
    (void *)TObjContainerAbeEnemy__vt78,
    (void *)TObjContainerAbeEnemy__vt79,
    (void *)TObjContainerAbeEnemy__vt80,
};
}

extern "C" {

void TObjContainerItem__vt78(void *arg0);
void *__dt__17TObjContainerItemFv(void *arg0, s16 arg1);
void *create__17TObjContainerItemFPv(void *arg0);
void spawn_item__17TObjContainerItemFPvi(u8 *arg0, s32 arg1);
s32 request_box_item_drop(s32, void *, s32, void *);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy_container_object__10TObjPlayerFPvs(void *, s32);

void TObjContainerItem__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x364) != 0) {
            submit_cursor_candidate(arg0, -1);
        }
    case 1:
        return;
    }
}

extern void *tl_05;

void *create__17TObjContainerItemFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerItem__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__17TObjContainerItem[];

void *__dt__17TObjContainerItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjContainerItem;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
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
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&forest_box_collision_body_parts.value) + 4));
    return arg0;
}

void spawn_item__17TObjContainerItemFPvi(u8 *arg0, s32 arg1) {
    request_box_item_drop(arg1, arg0 + 0x38, *(s32 *)((s8 *)arg0 + 0x360), arg0);
}
void play_container_break_sound(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
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
