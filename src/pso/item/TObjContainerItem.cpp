#include "types.h"
#include "pso/player/TUnk_804B6C24.h"
extern "C" void vfunc_27__13TUnk_804B6C24FPvlf();
#include "pso/item/TObjContainerItem.h"
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
}

extern "C" {
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
void vfunc_21__13TUnk_804B6C24FPvPvPvf();
void vfunc_22__21TObjContainerAbeEnemyFPvf();
void receive_technique_hit__17TObjContainerBaseFlPl();
void vfunc_24__13TUnk_804B6C24FPvPv();
void vfunc_25__13TUnk_804B6C24FPUc();
void vfunc_26__13TUnk_804B6C24Fll();
void TObjPlayer__sub_80011010();
void TObjPlayer__sub_8000FF3C();
void is_target_in_attack_range__10TObjPlayerFv();
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
    (void *)vfunc_21__13TUnk_804B6C24FPvPvPvf,
    (void *)vfunc_22__21TObjContainerAbeEnemyFPvf,
    (void *)receive_technique_hit__17TObjContainerBaseFlPl,
    (void *)vfunc_24__13TUnk_804B6C24FPvPv,
    (void *)vfunc_25__13TUnk_804B6C24FPUc,
    (void *)vfunc_26__13TUnk_804B6C24Fll,
    (void *)&vfunc_27__13TUnk_804B6C24FPvlf,
    (void *)TObjPlayer__sub_80011010,
    (void *)TObjPlayer__sub_8000FF3C,
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
    (void *)TObjPlayer__sub_800172CC,
    (void *)apply_poison_status__10TObjPlayerFv,
    (void *)apply_paralysis__10TObjPlayerFv,
    (void *)apply_slow_status__10TObjPlayerFPv,
    (void *)apply_confusion_status__10TObjPlayerFv,
    (void *)apply_movement_ailment__10TObjPlayerFv,
    (void *)apply_shock_status__10TObjPlayerFv,
    (void *)clear_harmful_statuses__10TObjPlayerFv,
    (void *)apply_attack_stat_status__10TObjPlayerFv,
    (void *)TObjPlayer::apply_defense_stat_status,
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

void vfunc_80__17TObjContainerItemFv(void *arg0);
void *__dt__17TObjContainerItemFv(void *arg0, s16 arg1);
s32 request_box_item_drop__13TUnk_804806E8FPvs(s32, void *, s32, void *);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
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

extern s32 __vt__17TObjContainerItem[];

void *__dt__17TObjContainerItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjContainerItem;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        ((TObjPlayer *)arg0)->destroy_container_object(0);
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
    u32 temp_r3;
    temp_r3 = TOKeyMachine01::get_global_state();
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
