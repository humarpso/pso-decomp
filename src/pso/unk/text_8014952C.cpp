#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8014952C { char pad[0x18]; };

struct VObj_8014952C : VBase_8014952C {
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
    virtual M2C_UNK m79(s32);
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(M2C_UNK, M2C_UNK);
};

struct Tbl_8014952C { u8 anim[0x20]; u8 anim2[0x58]; u8 vt[4]; };

extern "C" {
void set_motion_params__10TObjPlayerFPvPv(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void init_position_vectors__10TObjPlayerFi(void *);
void update_prev_position__10TObjPlayerFPv(void *);
void init_npc_animation__10TObjPlayerFPvPvPvPv(void *, void *, s32, s32);
void TObjNpcBase__ct(void *, void *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void init_collision_body_parts(void *, void *, s32);
extern u8 lbl_804A7CB8[];
extern u8 lbl_804A7CDC[];
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TNpcPlayer__sub_80149448();
extern "C" void TObjNpcBringer__sub_801494D4();
extern "C" void draw_debug_info__12TObjNpcEnemyFPv();
extern "C" void TObjNpcFemaleBase__sub_80147CD4();
extern "C" void TObjNpcFemaleBase__sub_801480F4();
extern "C" void TObjNpcFemaleBase__sub_801480F8();
extern "C" void TObjNpcFemaleBase__sub_801483C0();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
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
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void TObjPlayer__sub_800F673C();
extern "C" void TObjPlayer__sub_80148D80();
extern "C" void deactivateIdleMode__11TObjNpcBaseFv();
extern "C" void activate_idle_mode__11TObjNpcBaseFPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_set_params__11TObjNpcBaseFv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_vt78__10TObjPlayerFPv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void draw_model__10TObjPlayerFPv();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void fn_800F5D80();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void handle_message_event__17TObjNpcFemaleBaseFPvUs();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void play_voice__11TObjNpcBaseFi();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void run_task__11TObjNpcBaseFPv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_battle_target__10TObjPlayerFPv();
extern "C" void update_conversation__11TObjNpcBaseFPv();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern "C" void update_standing__11TObjNpcBaseFPv();
extern "C" void update_wandering__11TObjNpcBaseFPv();
extern s32 lbl_805D2D28;
extern u8 *TObjEneDf2Bringer__data_805D4FB8;
u8 *TObjNpcBringer__ct(u8 *self, void *parent, s32 arg2);
}

extern "C" {

void *lbl_804A7EA0[8] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f4ccccd, (void *)0x1,
    (void *)0x10000, (void *)0xa, (void *)0x3f800000, (void *)0x1,
};
void *lbl_804A7EC0[22] = {
    (void *)0x0, (void *)0x41a00000, (void *)0x40a00000, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x30203, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41a00000, (void *)0xc0a00000, (void *)0x40e00000, (void *)0x0,
    (void *)0x0, (void *)0x10003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_804A7F18[94] = {
    (void *)0x0, (void *)0x0, (void *)&TObjNpcBringer__sub_801494D4, (void *)&run_task__11TObjNpcBaseFPv,
    (void *)&draw_model__10TObjPlayerFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&handle_message_event__17TObjNpcFemaleBaseFPvUs, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&update_battle_target__10TObjPlayerFPv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&TObjNpcFemaleBase__sub_80147CD4, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&deactivateIdleMode__11TObjNpcBaseFv, (void *)&activate_idle_mode__11TObjNpcBaseFPv,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjPlayer__sub_8001488C, (void *)&TObjPlayer__sub_80014888, (void *)&TObjPlayer__sub_80014884,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjPlayer__sub_80148D80,
    (void *)&update_standing__11TObjNpcBaseFPv, (void *)&update_wandering__11TObjNpcBaseFPv, (void *)&update_conversation__11TObjNpcBaseFPv, (void *)&apply_set_params__11TObjNpcBaseFv,
    (void *)&TNpcPlayer__sub_80149448, (void *)&TObjNpcFemaleBase__sub_801483C0, (void *)&play_voice__11TObjNpcBaseFi, (void *)&TObjNpcFemaleBase__sub_801480F8,
    (void *)&TObjNpcFemaleBase__sub_801480F4, (void *)&draw_debug_info__12TObjNpcEnemyFPv,
};
u8 *TObjNpcBringer__ct(u8 *self, void *parent, s32 arg2) {
    TObjNpcBase__ct(self, parent);
    *(u8 **)(self + 0x18) = (u8 *)lbl_804A7F18;
    *(s32 *)(self + 0) = lbl_805D2D28;
    ((VObj_8014952C *)self)->m79(arg2);
    init_position_vectors__10TObjPlayerFi(self);
    ((VObj_8014952C *)self)->m85(0, 1);
    *(s32 *)(self + 0x34) = get_bml_model(TObjEneDf2Bringer__data_805D4FB8, 0);
    *(s32 *)(self + 0x24) = TObjFish__sub_8001EDB0(TObjEneDf2Bringer__data_805D4FB8, 0);
    init_npc_animation__10TObjPlayerFPvPvPvPv(self, lbl_804A7EA0, *(s32 *)(TObjEneDf2Bringer__data_805D4FB8 + 0x430), *(s16 *)(self + 0xB8));
    *(u8 **)(self + 0x350) = lbl_804A7CDC;
    set_motion_params__10TObjPlayerFPvPv(self, lbl_804A7CB8);
    init_collision_body_parts(self, lbl_804A7EC0, 2);
    reset_photon_effect__10TObjPlayerFPv(self);
    update_prev_position__10TObjPlayerFPv(self);
    copy_position__20TBoss3VoloptHiraisinFi(self);
    return self;
}

}
