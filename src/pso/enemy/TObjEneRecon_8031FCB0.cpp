#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual void m79();
    virtual void m80();
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
    virtual void m84();
    virtual void m85();
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct Obj_8031FE14 { u8 pad[0x18]; void *vt; };

struct VBase_18_b2458f { char pad[0x18]; };

struct VObj_18_b2458f : VBase_18_b2458f {
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
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual M2C_UNK m86();
};

struct Sub_8031FE98 { u8 b[0x1C]; };

struct Self_8031FE98 { u8 pad[0x3FC]; s32 f3fc[4]; u8 pad40c[0x418 - 0x40C]; u16 f418[6]; u16 f424[30]; Sub_8031FE98 subs[4]; };

void VecCopy__FP3VecPC3Vec(void *, void *);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
void __dt__9TObjEneDDFv(void *, int);
void init_object__9TObjEneDDFPv(void *, s32, void *);
void reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
void initialize_enemy_state__9TObjEneDDFPv(void *, int);
void check_state_flag_4__9TObjEneDDFPv(void *);
void init_model__9TObjEneDDFPv(void *, void *, int);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
M2C_UNK transition_enemy_state(void *, int);
void init_position_vectors__9TObjEneDDFPv(void *);
void TObjEneMe3SinowZoa__sub_800D758C(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
void TObjPlayer__sub_800D7C58();
void init_and_activate__10TObjPlayerFPv();
void set_animation__10TObjPlayerFPvs(void *, s16);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
M2C_UNK update_floor_probe__12TObjEneReconFPv(void *);
s32 handle_death_state__12TObjEneReconFPvi(void *, void *);
s32 TObjEneRecon__sub_8031F408(void *, void *);
s32 handle_action_state__12TObjEneReconFPvi(void *, void *);
s32 update_state__12TObjEneReconFPvi(void *, void *);
s32 TObjEneRecon__sub_8031F600(void *, void *);
s32 TObjEneRecon__sub_8031F6C0(void *, void *);
s32 handle_state__12TObjEneReconFPvi(void *, void *);
void TObjEneRecon__sub_8031F800(void *);
M2C_UNK restore_position__12TObjEneReconFPv(void *);
void dispatch_state__12TObjEneReconFiUii(s32 arg0, u32 arg1, s32 arg2);
void fn_8031FD3C(u8 *arg0);
Obj_8031FE14 * fn_8031FE14(Obj_8031FE14 *arg0, s16 arg1);
void __destroy_arr(void *, void *, int, int);
void __construct_array(void *, void *, void *, int, int);

extern u8 *TObjEneRecobox__static_instance;
extern s32 lbl_805D4138;
extern s32 recobox_boss_register_id;
extern s32 lbl_805D6B14;
extern s32 TObjEneRecobox__shared_object_handle;
extern const f32 lbl_805DF464;
extern const f32 lbl_805DF468;
extern const f32 lbl_805DF46C;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
extern "C" void TObjEneDD__vt86();
extern "C" void TObjEneDD__vt87();
extern "C" void TObjEneDD__vt88();
extern "C" void TObjEneDD__vt89();
extern "C" void TObjEneDD__vt90();
extern "C" void TObjEneDD__vt91();
extern "C" void TObjEneDD__vt92();
extern "C" void TObjEneDD__vt93();
extern "C" void TObjEneDD__vt94();
extern "C" void TObjEneDD__vt95();
extern "C" void TObjEneDD__vt96();
extern "C" void TObjEneDD__vt97();
extern "C" void TObjEneDD__vt98();
extern "C" void TObjEneDD__vt99();
extern "C" void TObjEneEpsilon__vt101();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void draw_with_debug_info__12TObjEneReconFPv();
extern "C" void render__12TObjEneReconFPv();
extern "C" void TObjEneRecon__sub_8031FB6C();
extern "C" void TObjEneRecon__sub_8031FC58();
extern "C" void TObjEneRecon__sub_8031FC5C();
extern "C" void TObjEneRecon__sub_8031FCAC();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
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
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void clear_lobby_object_state();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_80476118[];
extern "C" u8 lbl_80476124[];
extern "C" u8 lbl_80476134[];
extern "C" u8 lbl_80476144[];
extern "C" u8 lbl_8047615C[];
extern "C" u8 lbl_80476174[];
extern "C" u8 lbl_8047618C[];
extern "C" u8 lbl_804761A4[];
extern "C" u8 lbl_804761C0[];
extern "C" u8 lbl_804761D8[];
extern "C" u8 lbl_804761F4[];
extern "C" u8 lbl_80476208[];
extern "C" u8 lbl_80476220[];
extern "C" u8 lbl_80476234[];
extern "C" u8 lbl_8047624C[];
extern "C" u8 lbl_80476260[];
extern "C" u8 lbl_80476274[];
extern "C" u8 lbl_80476288[];
extern "C" u8 lbl_80476298[];
extern "C" u8 lbl_804762AC[];
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void set_state_6__12TObjEneReconFPv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_if_800BB858__12TObjEneReconFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_804EC6B0[7];
extern void *lbl_804EC6CC[11];
extern void *lbl_804EC708[7];
extern void *lbl_804EC724[11];
void *lbl_804EC668[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804EC684[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41200000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804EC6B0[7] = {
    (void *)&lbl_80476118, (void *)&lbl_80476124, (void *)&lbl_80476134, (void *)&lbl_80476144,
    (void *)&lbl_8047615C, (void *)&lbl_80476174, (void *)0x0,
};
void *lbl_804EC6CC[11] = {
    (void *)&lbl_8047618C, (void *)&lbl_804761A4, (void *)&lbl_804761C0, (void *)&lbl_804761D8,
    (void *)&lbl_804761F4, (void *)&lbl_80476208, (void *)&lbl_80476220, (void *)&lbl_80476234,
    (void *)&lbl_8047624C, (void *)&lbl_80476260, (void *)0x0,
};
void *lbl_804EC6F8[4] = {
    (void *)&lbl_80476274, (void *)&lbl_804EC6B0, (void *)&lbl_804EC6CC, (void *)0x6000a,
};
void *lbl_804EC708[7] = {
    (void *)&lbl_80476288, (void *)&lbl_80476298, (void *)&lbl_80476134, (void *)&lbl_80476144,
    (void *)&lbl_8047615C, (void *)&lbl_80476174, (void *)0x0,
};
void *lbl_804EC724[11] = {
    (void *)&lbl_8047618C, (void *)&lbl_804761A4, (void *)&lbl_804761C0, (void *)&lbl_804761D8,
    (void *)&lbl_804761F4, (void *)&lbl_80476208, (void *)&lbl_80476220, (void *)&lbl_80476234,
    (void *)&lbl_8047624C, (void *)&lbl_80476260, (void *)0x0,
};
void *lbl_804EC750[4] = {
    (void *)&lbl_804762AC, (void *)&lbl_804EC708, (void *)&lbl_804EC724, (void *)0x6000a,
};
void *lbl_804EC760[16] = {
    (void *)0x10000, (void *)0x1, (void *)0x3dcccccd, (void *)0x0,
    (void *)0x30000, (void *)0x2, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10000, (void *)0x3, (void *)0x3dcccccd, (void *)0x0,
    (void *)0x30000, (void *)0x0, (void *)0x3f19999a, (void *)0x0,
};
void *lbl_804EC7A0[107] = {
    (void *)0x0, (void *)0x0, (void *)&fn_8031FE14, (void *)&fn_8031FD3C,
    (void *)&render__12TObjEneReconFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneRecon__sub_8031FCAC, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneRecon__sub_8031FC58, (void *)&TObjEneRecon__sub_8031FC5C, (void *)&set_state_6__12TObjEneReconFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&dispatch_state__12TObjEneReconFiUii,
    (void *)&TObjEneRecon__sub_8031FB6C, (void *)&TObjEneDD__vt86, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneEpsilon__vt101, (void *)&update_if_800BB858__12TObjEneReconFPv, (void *)&draw_with_debug_info__12TObjEneReconFPv,
};
#define lbl_804EC668 ((u8 *)lbl_804EC668)
#define lbl_804EC684 ((u8 *)lbl_804EC684)
#define lbl_804EC760 ((u8 *)lbl_804EC760)
#define lbl_804EC7A0 ((u8 *)lbl_804EC7A0)

void dispatch_state__12TObjEneReconFiUii(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneRecon__sub_8031F6C0((void *) (arg0), (void *) (arg2));
        return;
    case 1:
        handle_state__12TObjEneReconFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TObjEneRecon__sub_8031F600((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        update_state__12TObjEneReconFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        handle_action_state__12TObjEneReconFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjEneRecon__sub_8031F408((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        handle_death_state__12TObjEneReconFPvi((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

void fn_8031FD3C(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    } else if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 1) {
        transition_enemy_state((void *) (arg0), (int) (0));
    }
    ((VObj_18 *)(arg0))->m86();
    restore_position__12TObjEneReconFPv((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
    update_floor_probe__12TObjEneReconFPv((void *) (arg0));
}

Obj_8031FE14 *fn_8031FE14(Obj_8031FE14 *arg0, s16 arg1) {
    if (arg0 != 0) {
        arg0->vt = lbl_804EC7A0;
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x460, ((u8 *)TObjPlayer__sub_800D7C58), 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3C0, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneRecobox__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    Self_8031FE98 *S = (Self_8031FE98 *)arg0;
    s32 i;
    s32 n;
    init_object__9TObjEneDDFPv(arg0, arg1, arg2);
    M2C_FIELD(arg0, u8 **, 0x18) = lbl_804EC7A0;
    init_common__18TObjEneMe3SinowZoaFPv(arg0 + 0x3C0);
    __construct_array(arg0 + 0x460, (void *)&init_and_activate__10TObjPlayerFPv, (void *)&TObjPlayer__sub_800D7C58, 0x1C, 4);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D4138;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(TObjEneRecobox__static_instance, u8 **, 0x42C), s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD(TObjEneRecobox__static_instance, u8 **, 0x42C), s32 *, 0x1C);
    init_model__9TObjEneDDFPv(arg0, lbl_804EC684, 1);
    M2C_FIELD(arg0, f32 *, 0x300) = lbl_805DF464 + M2C_FIELD(arg0, f32 *, 0x3C);
    ((VObj_18_b2458f *)arg0)->m86();
    set_field_d8__10TObjPlayerFPvi(arg0, lbl_804EC760);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(TObjEneRecobox__static_instance, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    reset_hp__9TObjEneDDFPv(arg0, recobox_boss_register_id, lbl_805D6B14, TObjEneRecobox__shared_object_handle);
    check_state_flag_4__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, u8 **, 0x350) = lbl_804EC668;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x43);
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805DF468;
    TObjEneRecon__sub_8031F800(arg0);
    n = M2C_FIELD(arg2, s16 *, 2);
    if (n <= 1) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    } else if (M2C_FIELD(arg0, s32 *, 0x3F4) >= n) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = n - 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3F8) > M2C_FIELD(arg0, s32 *, 0x3F4)) {
        M2C_FIELD(arg0, s32 *, 0x3F8) = M2C_FIELD(arg0, s32 *, 0x3F4);
    }
    for (i = 0; i < 4; i++) {
        S->f3fc[i] = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x40C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40C) |= 1;
    TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3C0);
    M2C_FIELD(arg0, s32 *, 0x410) = 0;
    M2C_FIELD(arg0, s32 *, 0x414) = 0;
    for (i = 0; i < 30; i++) {
        S->f424[i] = 0xFFFF;
    }
    for (i = 0; i < 6; i++) {
        S->f418[i] = 0xFFFF;
    }
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&S->subs[i]);
    }
    M2C_FIELD(arg0, s32 *, 0x4D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x3E4, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x4E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4EC) = 0;
    M2C_FIELD(arg0, f32 *, 0x4F0) = lbl_805DF46C;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    ((VObj_18_b2458f *)arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
    return arg0;
}

}

#define TObjEneRecobox__static_instance (*(int *)&TObjEneRecobox__static_instance)

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
u32 remap_area_sound_id__14TObjEneRecoboxFUi(u32 arg0);
}

extern "C" {

int TObjEneRecobox__sub_803201D0(void);

u32 remap_area_sound_id__14TObjEneRecoboxFUi(u32 arg0) {
    u32 ret;
    if (((s32)(arg0 & 0xBFFF00FF) >> 16 << 16) != 0x30000) {
        return arg0;
    }
    ret = get_global_state__14TOKeyMachine01Fv();
    switch (ret) {
    case 0x22:
        ret = arg0 - 0x40010000 + 0x4E19;
        break;
    case 0x23:
        ret = arg0 - 0x40010000 + 0x4E28;
        break;
    default:
        return arg0;
    }
    ret |= arg0 & 0x8FFFFF00;
    return ret;
}

int TObjEneRecobox__sub_803201D0(void) {  return TObjEneRecobox__static_instance; }

}

#undef TObjEneRecobox__static_instance

#define TObjEneRecobox__static_instance (*(u32 *)&TObjEneRecobox__static_instance)
#define TObjEneRecobox__ct ((void *(*)(void *, void *, void *))TObjEneRecobox__ct)

extern "C" {

void *TObjEneRecobox__create(void *arg0);
void release_static_instance__14TObjEneRecoboxFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *__nw__7TObjectFUl(int);
M2C_UNK release_static_instance__12TObjEneReconFv();

void release_static_instance__14TObjEneRecoboxFv(void) {
    release_static_instance__12TObjEneReconFv();
    if ((u32) TObjEneRecobox__static_instance != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneRecobox__static_instance, 1);
        TObjEneRecobox__static_instance = 0U;
    }
}

extern void *tl_04;

void *TObjEneRecobox__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F4);
    if (o != NULL) {
        o = TObjEneRecobox__ct(o, tl_04, arg0);
    }
    return o;
}

extern "C" {
struct V3_80320260 { f32 x, y, z; };
struct Spawn_80320260 { s32 a, b, c, d; };
struct Inner_80320260 { u8 pad[0x18]; s32 f18; s32 f1C; };
struct Box_80320260 { u8 pad[0x42C]; Inner_80320260 *f42C; s32 f430; };
struct Sub_80320260 { u8 pad[0xC]; f32 f0C; };
struct Area_80320260 { u8 pad[0x1C]; Sub_80320260 sub; u8 pad2[0x90 - 0x2C]; u8 f90[0xE8 - 0x90]; u8 fE8[4]; };

s32 is_split_screen(void *);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_boss__6TLobbyFPv(s32);
u32 load_enemy_bml_resource(void *);
void spawn_npc_enemy__6TLobbyFsiiiff(s16, s32, s32, void *, f32, f32);
void load_resources__12TObjEneReconFv(void);
extern Spawn_80320260 lbl_804762D4;
extern "C" u8 lbl_80476118[];
extern "C" u8 lbl_80476124[];
extern "C" u8 lbl_80476134[];
extern "C" u8 lbl_80476144[];
extern "C" u8 lbl_8047615C[];
extern "C" u8 lbl_80476174[];
extern "C" u8 lbl_8047618C[];
extern "C" u8 lbl_804761A4[];
extern "C" u8 lbl_804761C0[];
extern "C" u8 lbl_804761D8[];
extern "C" u8 lbl_804761F4[];
extern "C" u8 lbl_80476208[];
extern "C" u8 lbl_80476220[];
extern "C" u8 lbl_80476234[];
extern "C" u8 lbl_8047624C[];
extern "C" u8 lbl_80476260[];
extern "C" u8 lbl_80476274[];
extern "C" u8 lbl_80476288[];
extern "C" u8 lbl_80476298[];
extern "C" u8 lbl_804762AC[];
#undef lbl_804EC684
#define lbl_804EC684 (*(Sub_80320260 *)lbl_804EC684)
extern V3_80320260 lbl_80543000;
extern s32 recobox_boss_register_id;
extern s32 lbl_805D6B14;
extern s32 TObjEneRecobox__shared_object_handle;
extern s32 lbl_805D6B1C;
extern const f32 lbl_805DF46C;

#pragma dont_inline off
#pragma inline_depth(4)
static inline f32 getf_80320260(Sub_80320260 *p) { return p->f0C; }
void load_resources__14TObjEneRecoboxFv(void) {
    Box_80320260 *box;

    lbl_80543000.x = lbl_805DF46C;
    lbl_80543000.y = lbl_805DF46C;
    lbl_80543000.z = lbl_805DF46C;
    {
        u32 res;
        if (is_split_screen(&lbl_80543000) != 0) {
            res = load_enemy_bml_resource(lbl_804EC750);
        } else {
            res = load_enemy_bml_resource(lbl_804EC6F8);
        }
        TObjEneRecobox__static_instance = res;
    }
    recobox_boss_register_id = register_boss__6TLobbyFPv(0x41);
    lbl_805D6B14 = dispatch_shared_handler_b__6TLobbyFPv(0x41);
    TObjEneRecobox__shared_object_handle = register_object__6TLobbyFPv(0x41);
    lbl_805D6B1C = dispatch_shared_handler_a__6TLobbyFPv(0x41);
    load_resources__12TObjEneReconFv();
    {
        Sub_80320260 *sp = &lbl_804EC684;
        Spawn_80320260 s = lbl_804762D4;
        box = (Box_80320260 *)TObjEneRecobox__static_instance;
        s.a = box->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0xD, box->f42C->f18, box->f42C->f1C, &s, getf_80320260(sp), lbl_805DF46C);
    }
}

}
}
