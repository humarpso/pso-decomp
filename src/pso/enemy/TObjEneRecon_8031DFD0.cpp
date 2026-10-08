#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VBase_18_825e13 { char pad[0x18]; };

struct VObj_18_825e13 : VBase_18_825e13 {
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
    virtual M2C_UNK m72(M2C_UNK);
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
    virtual void m86();
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

struct VBase_14_2f517b { char pad[0x14]; };

struct VObj_14_2f517b : VBase_14_2f517b {
    virtual void m0();
    virtual void m1();
    virtual M2C_UNK m2();
};

struct VBase_18_be4a70 { char pad[0x18]; };

struct VObj_18_be4a70 : VBase_18_be4a70 {
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
};

M2C_UNK set_hp_clamped__10TObjPlayerFPvs(void *, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void obj_setFlags30(void *, u32);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 check_demo_mode__10TObjPlayerFv(void);
u8 * create_particle_emitter(void *, M2C_UNK);
void enable__13TParticleCtrlFPv(void *);
M2C_UNK enemy_init_validate_period(void *, int);
M2C_UNK enemy_init_acquire_period(void *, int);
void __dt__9TObjEneDDFv(void *, int);
s32 check_v2_mode__9TObjEneDDFv(void);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, void *, int, void *);
M2C_UNK initialize_enemy_state__9TObjEneDDFPv(void *, int);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
M2C_UNK check_state_flag_4__9TObjEneDDFPv(void *);
M2C_UNK init_model__9TObjEneDDFPv(void *, void *, int, int);
M2C_UNK set_active__9TObjEneDDFPv(void *);
int set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK init_position_vectors__9TObjEneDDFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
s32 find_entity_by_id(int);
void free_collision_body_parts(void *);
void send_entity_set_flags__6TLobbyFPv(void *);
void __dl__7TObjectFPv(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK update_ground_probe__12TObjEneReconFPv(void *);
s32 handle_message__12TObjEneReconFPvi(void *, void *);
s32 TObjEneRecon__sub_8031C364(void *, void *);
s32 TObjEneRecon__sub_8031C624(void *, void *);
s32 run_task__12TObjEneReconFPvi(void *, void *);
s32 TObjEneRecon__sub_8031C920(void *, void *);
s32 TObjEneRecon__sub_8031CCFC(void *, void *);
s32 TObjEneRecon__sub_8031CF30(void *, void *);
s32 TObjEneRecon__sub_8031D380(void *, void *);
s32 TObjEneRecon__sub_8031D4B0(void *, void *);
M2C_UNK update_position_from_offsets__12TObjEneReconFPv(void *);
void TObjEneRecon__vt85(s32 arg0, u32 arg1, s32 arg2);
void run_task__12TObjEneReconFv(u8 *arg0);
void * __dt__12TObjEneReconFv(void *arg0, s16 arg1);
s32 is_anim_6__12TObjEneReconFPv(int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);

extern s32 TObjEneRecon__data_805D6AF4;
extern u8 *TObjEneRecon__data_805D6B00;
extern const f32 TObjEneRecon__data_805DF3C0;
extern const f32 TObjEneRecon__data_805DF3C4;
extern const f32 TObjEneRecon__data_805DF3D4;
extern s32 lbl_805D6AF0;
extern s32 lbl_805D6AF8;
extern const f32 lbl_805DF400;
extern const f32 lbl_805DF424;
extern const f32 lbl_805DF428;
extern const f32 lbl_805DF42C;
extern const f32 lbl_805DF430;
extern const f32 lbl_805DF434;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
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
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjEneRecon__vt102();
extern "C" void TObjEneRecon__vt103();
extern "C" void TObjEneRecon__vt104();
extern "C" void TObjEneRecon__vt26();
extern "C" void TObjEneRecon__vt59();
extern "C" void TObjEneRecon__vt60();
extern "C" void TObjEneRecon__vt61();
extern "C" void TObjEneRecon__vt86();
extern "C" void TObjEneRecon__vt87();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
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
extern "C" void TObjPlayer__sub_800F673C();
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
extern "C" void fn_800F5D80();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render__12TObjEneReconFv();
extern "C" void render_shadows__12TObjEneReconFv();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
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
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
void *lbl_804EC3F0[7] = {
    (void *)0x43610000, (void *)0x3f6d097b, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804EC40C[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40a00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804EC438[24] = {
    (void *)0x10000, (void *)0x8, (void *)0x3f333333, (void *)0x0,
    (void *)0x10001, (void *)0x9, (void *)0x3f333333, (void *)0x0,
    (void *)0x30002, (void *)0x4, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30003, (void *)0x5, (void *)0x3f333333, (void *)0x0,
    (void *)0x30004, (void *)0x6, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10005, (void *)0x7, (void *)0x3f333333, (void *)0x0,
};
void *__vt__12TObjEneRecon[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__12TObjEneReconFv, (void *)&run_task__12TObjEneReconFv,
    (void *)&render__12TObjEneReconFv, (void *)&render_shadows__12TObjEneReconFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneRecon__vt26, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneRecon__vt59, (void *)&TObjEneRecon__vt60, (void *)&TObjEneRecon__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TObjEneRecon__vt85,
    (void *)&TObjEneRecon__vt86, (void *)&TObjEneRecon__vt87, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneRecon__vt102, (void *)&TObjEneRecon__vt103, (void *)&TObjEneRecon__vt104,
};
#define __vt__12TObjEneRecon ((M2C_UNK *)__vt__12TObjEneRecon)

void TObjEneRecon__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneRecon__sub_8031D4B0((void *) (arg0), (void *) (arg2));
        return;
    case 1:
        TObjEneRecon__sub_8031D380((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TObjEneRecon__sub_8031CF30((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TObjEneRecon__sub_8031CCFC((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        TObjEneRecon__sub_8031C920((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneRecon__sub_8031C624((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        TObjEneRecon__sub_8031C364((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        run_task__12TObjEneReconFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        handle_message__12TObjEneReconFPvi((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

void run_task__12TObjEneReconFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f31;
    f32 var_f30;
    s16 temp_r0;
    s16 temp_r0_2;
    s32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_825e13 *)(arg0))->m103();
        return;
    }
    temp_r3 = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x434)));
    if ((temp_r3 == 0) || (all_parents_unqueued_for_destruction__7TObjectFv() == 0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 8) && (temp_r0 != 7) && (is_anim_6__12TObjEneReconFPv((int) (temp_r3)) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x2DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2DC) | 4);
        set_hp_clamped__10TObjPlayerFPvs((void *) (arg0), (int) (0));
        obj_setFlags30(arg0, 0xA00U);
        ((VObj_18_825e13 *)(arg0))->m72(0);
    }
    if (((VObj_18_825e13 *)(arg0))->m81() != 4) {
        ((VObj_18_825e13 *)(arg0))->m83();
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x478));
        if (temp_r3_2 == NULL) {
            M2C_FIELD(arg0, u8 **, 0x478) = create_particle_emitter(arg0 + 0x2FC, 0x217);
            temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x478));
            if (temp_r3_3 != NULL) {
                enable__13TParticleCtrlFPv(temp_r3_3);
            }
        } else {
            temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x326);
            if ((temp_r0_2 == 8) || (temp_r0_2 == 7)) {
                enable__13TParticleCtrlFPv(temp_r3_2);
            } else {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
                    var_f30 = lbl_805DF400;
                    M2C_FIELD(arg0, s32 *, 0x47C) = 1;
                } else {
                    var_f30 = lbl_805DF428;
                    M2C_FIELD(arg0, s32 *, 0x47C) = 0;
                }
                if (check_v2_mode__9TObjEneDDFv() != 0) {
                    var_f30 *= lbl_805DF400;
                }
                temp_f31 = var_f30 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
                temp_f2 = var_f30 * -sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x478), f32 *, 0x60) = (f32) (M2C_FIELD(arg0, f32 *, 0x2FC) + temp_f31);
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x478), f32 *, 0x64) = (f32) (lbl_805DF424 + M2C_FIELD(arg0, f32 *, 0x300));
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x478), f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x304) + temp_f2);
            }
        }
    } else {
        temp_r3_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x478));
        if (temp_r3_4 != NULL) {
            enable__13TParticleCtrlFPv(temp_r3_4);
        }
    }
    update_position_from_offsets__12TObjEneReconFPv((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv(arg0);
    ((VObj_18_825e13 *)(arg0))->m98();
    update_ground_probe__12TObjEneReconFPv((void *) (arg0));
}

void *__dt__12TObjEneReconFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjEneRecon;
        send_entity_set_flags__6TLobbyFPv(arg0);
        free_collision_body_parts(arg0);
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478)); M2C_FIELD(arg0, M2C_UNK *, 0x478) = 0; }
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x480, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
void init_state__12TObjEneReconFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r5;
    u8 *temp_r6;

    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneRecon__data_805D6B00, u8 **, 0x42C), s32 *, 8);
    temp_r6 = (u8 *)(M2C_FIELD(TObjEneRecon__data_805D6B00, u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r6, s32 *, 0xC);
    init_model__9TObjEneDDFPv((void *) (arg0), (void *) lbl_804EC40C, (int) (1), (int) (temp_r6));
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) lbl_804EC438);
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(TObjEneRecon__data_805D6B00, s32 *, 0x430)));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (void *) (lbl_805D6AF0), (int) (TObjEneRecon__data_805D6AF4), (void *) (lbl_805D6AF8));
    check_state_flag_4__9TObjEneDDFPv((void *) (arg0));
    M2C_FIELD(arg0, void **, 0x350) = (void *) lbl_804EC3F0;
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x44));
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) TObjEneRecon__data_805DF3D4;
    enemy_init_acquire_period((void *) (arg0), (int) (0xA));
    enemy_init_validate_period((void *) (arg0), (int) (0xA));
    set_active__9TObjEneDDFPv((void *) (arg0));
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r5;
    M2C_FIELD(arg0, s32 *, 0x444) = 2;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x448) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x44C) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x450) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x454) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x458) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, s32 *, 0x45C) = 0;
    M2C_FIELD(arg0, f32 *, 0x460) = (f32) ((lbl_805DF430 * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + lbl_805DF42C);
    M2C_FIELD(arg0, f32 *, 0x464) = (f32) ((lbl_805DF430 * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + TObjEneRecon__data_805DF3C0);
    M2C_FIELD(arg0, f32 *, 0x468) = (f32) ((TObjEneRecon__data_805DF3D4 * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + lbl_805DF434);
    M2C_FIELD(arg0, s32 *, 0x474) = 0;
    M2C_FIELD(arg0, s32 *, 0x478) = 0;
    M2C_FIELD(arg0, s32 *, 0x47C) = 0;
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x41C), (void *) (arg0 + 0x38));
    ((VObj_14_2f517b *)((u8 *)(arg0) + (1152)))->m2();
    M2C_FIELD(arg0, s32 *, 0x46C) = 0;
    M2C_FIELD(arg0, s32 *, 0x470) = 0;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x40C), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x400) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x404) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, f32 *, 0x408) = (f32) TObjEneRecon__data_805DF3C4;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    ((VObj_18_be4a70 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
}
extern int fold_flush_0;
#pragma pop

}
