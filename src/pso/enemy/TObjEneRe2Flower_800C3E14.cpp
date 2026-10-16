#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/animation/ActorAnimationState.h"
#include "pso/enemy/TObjEneRe2Flower.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct VBase_14_2f517b { char pad[0x14]; };

struct VObj_14_2f517b : VBase_14_2f517b {
    virtual void m0();
    virtual void m1();
    virtual s32 m2();
};

struct VBase_18_6eb1ad { char pad[0x18]; };

struct VObj_18_6eb1ad : VBase_18_6eb1ad {
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
    virtual s32 m83();
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
    virtual s32 m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual s32 m103();
};

struct Stack_800C44C4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};
struct RecoveredGlobal_800C44C4_lbl_8043BB90 {
    s32 value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800C44C4_lbl_8043BB90_size[sizeof(RecoveredGlobal_800C44C4_lbl_8043BB90) == 0x10 ? 1 : -1];
struct RecoveredGlobal_800C44C4_lbl_8043BBE0 {
    s32 value;
    u8 remaining[0x10];
};
typedef char RecoveredGlobal_800C44C4_lbl_8043BBE0_size[sizeof(RecoveredGlobal_800C44C4_lbl_8043BBE0) == 0x14 ? 1 : -1];
struct RecoveredGlobal_800C44C4_lbl_8043BBF4 {
    s32 value;
    u8 remaining[0x14];
};
typedef char RecoveredGlobal_800C44C4_lbl_8043BBF4_size[sizeof(RecoveredGlobal_800C44C4_lbl_8043BBF4) == 0x18 ? 1 : -1];

struct VBase_18_0ab400 { char pad[0x18]; };

struct VObj_18_0ab400 : VBase_18_0ab400 {
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
    virtual s32 m19(s32, void *, s32);
};

extern "C" {
u8 *load_enemy_bml_resource_named(s32 *, s32 *);
u8 *load_enemy_bml_resource(s32 *);
s32 TObjPlayer__sub_800F0928();
extern RecoveredGlobal_800C44C4_lbl_8043BB90 lbl_8043BB90;
extern RecoveredGlobal_800C44C4_lbl_8043BBE0 lbl_8043BBE0;
extern RecoveredGlobal_800C44C4_lbl_8043BBF4 lbl_8043BBF4;
extern s32 lbl_805D5178;
extern s32 lbl_805D517C;
extern s32 lbl_805D5180;
extern const f32 lbl_805D9FAC;
extern const f32 lbl_805D9FBC;
void TObjPlayer__sub_800C44C4(void);
s32 transition_enemy_state(void * a0, s32 a1);
s32 sub_800C3DC4__16TObjEneRe2FlowerFv(void *);
void TObjEneRe2Flower__sub_800C3F70(u8 *arg0);
s32 TObjEneDD__sub_800C2628(void *, void *);
s32 fn_800C2A88(void *, void *);
s32 fn_800C2AC4(void *, void *);
s32 TObjEneRe2Flower__sub_800C2E64(void *, void *);
s32 fn_800C3088(void *, void *);
s32 fn_800C32DC(void *, void *);
s32 handle_flower_state_change(void *, void *);
void dispatch_action__16TObjEneRe2FlowerFiUii(s32 arg0, u32 arg1, s32 arg2);
s32 obj_is_hit_receivable(void *);
f32 fabs_float(f32);
s32 is_area_attack_target_eligible(s32, s32);
s32 attack_target_history_add(s32, s32);
s32 mark_enemy_body_contacts(void *);
s32 update_body_contact_flag__10TObjPlayerFPvf(void *, f32);
extern const f32 lbl_805DA000;
s32 hit_area_targets__10TObjPlayerFPvPviUif(u8 *arg0, u8 *arg1, s32 arg2, u32 arg3, f32 farg0);
}

extern "C" {

void vfunc_61__16TObjEneRe2FlowerFv(void);
void vfunc_28__16TObjEneRe2FlowerFv(void);
void *destroy__16TObjEneRe2FlowerFPvs(void *arg0, s16 arg1);
void vfunc_63__16TObjEneRe2FlowerFv(void *arg0);
void vfunc_62__16TObjEneRe2FlowerFv(void *arg0);
s32 clear_attack_receipts(void * a0 = 0);
void TLobby__sub_8001FE7C(void*, int);
s32 transition_enemy_state(void * a0 = 0, s32 a1 = 0);
void free_collision_body_parts(void *);
void *TObjEneRe2Flower__ct(void *, void *, void *);
s32 TObjPlayer__sub_800C4D44();
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEneDDFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 begin_state_242__16TObjEneRe2FlowerFv(void);
void queue_destruction__7TObjectFv(void *);

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__sub_800C2614();
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
extern "C" void update_part_position__16TObjEneRe2FlowerFv();
extern "C" void vfunc_61__16TObjEneRe2FlowerFv();
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
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void TObjPlayer__sub_800C20D0();
extern "C" void TObjPlayer__sub_800C220C();
extern "C" void update_and_send_enemy_hit_state();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
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
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" char lbl_8043BAAC[];
extern "C" char lbl_8043BAC4[];
extern "C" char lbl_8043BADC[];
extern "C" char lbl_8043BAF4[];
extern "C" char lbl_8043BB08[];
extern "C" char lbl_8043BB20[];
extern "C" char lbl_8043BB38[];
extern "C" char lbl_8043BB50[];
extern "C" char lbl_8043BB64[];
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__10TObjPlayerFv();

struct FlowerCollisionPartInit {
    f32 position[3];
    f32 radius;
    u32 unknown10[2];
    u32 flags;
    u32 unknown1c[4];
};
struct FlowerSetupData {
    f32 value00;
    u32 unknown04;
    u32 flags;
    u32 unknown0c[4];
    FlowerCollisionPartInit normalParts[2];
    FlowerCollisionPartInit rareParts[2];
};
typedef char FlowerCollisionPartInit_size[sizeof(FlowerCollisionPartInit) == 0x2C ? 1 : -1];
typedef char FlowerSetupData_size[sizeof(FlowerSetupData) == 0xCC ? 1 : -1];
FlowerSetupData TObjEneRe2Flower__setup_data = {
    225.0f, 0, 0x200, {0, 0, 0, 0},
    {{{0.0f, 0.0f, 0.0f}, 5.0f, {0, 0}, 0x8003, {0, 0, 0, 0}},
     {{0.0f, 0.0f, 0.0f}, 5.0f, {0, 0}, 0x8003, {0, 0, 0, 0}}},
    {{{0.0f, 0.0f, 0.0f}, 10.0f, {0, 0}, 0x8003, {0, 0, 0, 0}},
     {{0.0f, 0.0f, 0.0f}, 20.0f, {0, 0}, 0x8003, {0, 0, 0, 0}}}
};
__declspec(section ".data") const char *bm_ene_re2_flower_model_names[2] = {
    lbl_8043BAAC, NULL
};
const char *bm_ene_re2_flower_motion_names[8] = {
    lbl_8043BAC4, lbl_8043BADC, lbl_8043BAF4, lbl_8043BB08,
    lbl_8043BB20, lbl_8043BB38, lbl_8043BB50, NULL
};
BmlResourceDescriptor TObjEneRe2Flower__resource_descriptor = {
    lbl_8043BB64, bm_ene_re2_flower_model_names,
    bm_ene_re2_flower_motion_names, 1, 7
};
AnimationAction TObjEneRe2Flower__animation_descriptors[8] = {
    {3, 0, 0, 0.6f, 0}, {1, 0, 4, 0.3f, 0},
    {1, 0, 5, 0.5f, 0}, {2, 2, 6, 0.6f, 0},
    {3, 0, 1, 0.5f, 0}, {3, 0, 2, 0.5f, 0},
    {1, 0, 3, 0.6f, 0}, {1, 0, 0, 2.0f, 0}
};
void *__vt__16TObjEneRe2Flower[107] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__16TObjEneRe2FlowerFPvs, (void *)&TObjEneRe2Flower__sub_800C3F70,
    (void *)&TObjPlayer__sub_800C220C, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&vfunc_28__16TObjEneRe2FlowerFv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&vfunc_61__16TObjEneRe2FlowerFv, (void *)&vfunc_62__16TObjEneRe2FlowerFv, (void *)&vfunc_63__16TObjEneRe2FlowerFv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&dispatch_action__16TObjEneRe2FlowerFiUii,
    (void *)&update_part_position__16TObjEneRe2FlowerFv, (void *)&TObjEneDD__vt86, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneEpsilon__vt101, (void *)&TObjEneDD__sub_800C2614, (void *)&TObjPlayer__sub_800C20D0,
};

void TObjEneRe2Flower::vfunc_61() {  }
void TObjEneRe2Flower::vfunc_62() {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)this + 0x326);
    if (temp_r0 != 9) {
        if (temp_r0 == 8) {
            begin_state_242__16TObjEneRe2FlowerFv();
            clear_attack_receipts(this);
            return;
        }
        transition_enemy_state(this, 9);
    }
}
void TObjEneRe2Flower::vfunc_63() {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)this + 0x326);
    if ((temp_r0 != 0xA) && (temp_r0 != 0xB)) {
        transition_enemy_state(this, 0xA);
    }
}
void TObjEneRe2Flower::vfunc_28() {  }

void dispatch_action__16TObjEneRe2FlowerFiUii(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        ((TObjEneRe2Flower *)arg0)->dispatch_action((s32)((void *) (arg2)));
        return;
    case 1:
        ((TObjEneDD *)arg0)->handle_state((s32)((void *) (arg2)));
        return;
    case 2:
        handle_flower_state_change((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        ((TObjEneDD *)arg0)->state_chase_target((s32)((void *) (arg2)));
        return;
    case 4:
        fn_800C32DC((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        fn_800C3088((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        ((TObjEneDD *)arg0)->state_damaged((s32)((void *) (arg2)));
        return;
    case 10:
        fn_800C2AC4((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneRe2Flower__sub_800C2E64((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        ((TObjEneRe2Flower *)arg0)->handle_event((s32)((void *) (arg2)));
        return;
    case 8:
        TObjEneDD__sub_800C2628((void *) (arg0), (void *) (arg2));
        return;
    case 11:
        fn_800C2A88((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

void TObjEneRe2Flower__sub_800C3F70(u8 *arg0) {
    s16 temp_r3;
    if (TObjPlayer::check_demo_mode() != 0) {
        ((VObj_18_6eb1ad *)(arg0))->m103();
        return;
    }
    if (((VObj_18_6eb1ad *)(arg0))->m81() != 4) {
        ((VObj_18_6eb1ad *)(arg0))->m83();
    } else {
        temp_r3 = *(s16 *)((s8 *)arg0 + 0x326);
        if ((temp_r3 == 0) || (temp_r3 == 1)) {
            ((VObj_14_2f517b *)((u8 *)(arg0) + (1012)))->m2();
            transition_enemy_state((void *)((void *) (arg0)), (s32)((int) (2)));
        }
    }
    sub_800C3DC4__16TObjEneRe2FlowerFv((void *) (arg0));
    ((TBoss8Dragon *)arg0)->set_player_state_default();
    ((VObj_18_6eb1ad *)(arg0))->m98();
}

void *destroy__16TObjEneRe2FlowerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = __vt__16TObjEneRe2Flower;
        if (*(void **)((s8 *)arg0 + 0x428) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x428)); *(s32 *)((s8 *)arg0 + 0x428) = 0; }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3F4, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D5174;

void TObjEneRe2Flower::destroy_instance() {
    TObjPlayer__sub_800C4D44();
    if ((u32) lbl_805D5174 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5174, 1);
        lbl_805D5174 = 0U;
    }
}

extern void *tl_04;

void *TObjEneRe2Flower::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = TObjEneRe2Flower__ct(o, tl_04, arg0);
    }
    return o;
}

void TObjPlayer__sub_800C44C4(void) {
    Stack_800C44C4 stack;

    u8 *temp_r5;

    if (TOKeyMachine01::get_global_state() == 0x23) {
        lbl_805D5174 = (u32) load_enemy_bml_resource_named((s32 *)&TObjEneRe2Flower__resource_descriptor, &lbl_8043BBE0.value);
    } else if (TObjEneDD::check_v2_mode() != 0) {
        lbl_805D5174 = (u32) load_enemy_bml_resource_named((s32 *)&TObjEneRe2Flower__resource_descriptor, &lbl_8043BBF4.value);
    } else {
        lbl_805D5174 = (u32) load_enemy_bml_resource((s32 *)&TObjEneRe2Flower__resource_descriptor);
    }
    lbl_805D5178 = 0;
    lbl_805D517C = 0;
    lbl_805D5180 = 0;
    TObjPlayer::create_render_texture();
    TObjPlayer__sub_800F0928();
    stack.sp8 = *(s32 *)((s8 *)(&lbl_8043BB90.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_8043BB90.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_8043BB90.value) + 8);
    stack.sp14 = *(s32 *)((s8 *)(&lbl_8043BB90.value) + 0xC);
    stack.sp8 = *(s32 *)((s8 *)lbl_805D5174 + 0x430);
    temp_r5 = (u8 *)(*(u8 **)((s8 *)lbl_805D5174 + 0x42C));
    TLobby::spawn_npc_enemy((s16)((int) (0x37)), (s32)((int) (*(s32 *)((s8 *)temp_r5 + 8))), (s32)((int) (*(s32 *)((s8 *)temp_r5 + 0xC))), (s32)((void *) (&stack.sp8)), (f32)((f32) (lbl_805D9FBC)), (f32)((f32) (lbl_805D9FAC)));
}
s32 hit_area_targets__10TObjPlayerFPvPviUif(u8 *arg0, u8 *arg1, s32 arg2, u32 arg3, f32 farg0) {
    s32 result;
    s32 flags;
    s32 p;
    s32 i;
    s32 ok;
    result = 0;
    flags = 0;
    if (*(u32 *)((s8 *)arg0 + 0xAC) == 0) {
        return 0;
    }
    TObjPlayer::init_all_slots();
    if (*(s32 *)((s8 *)arg1 + 4) & 1) {
        update_body_contact_flag__10TObjPlayerFPvf(arg0, farg0);
        flags |= 0x80000;
    }
    if (*(s32 *)((s8 *)arg1 + 4) & 2) {
        mark_enemy_body_contacts(arg0);
        flags |= 0x100000;
    }
    if (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0x18) & flags) {
        for (i = 0; i < 0x10; i++) {
            p = TObjPlayer::get_battle_param(i);
            if (p == 0) {
                break;
            }
            if (obj_is_hit_receivable((void *)p) != 0 && (u32)p != *(u32 *)((s8 *)arg0 + 0xAC) &&
                is_area_attack_target_eligible((s32)arg0, *(s32 *)((s8 *)p + 0x30)) != 0 &&
                !(fabs_float(*(f32 *)((s8 *)arg0 + 0xB8) - *(f32 *)((s8 *)p + 0x300)) > lbl_805DA000)) {
                ok = 1;
                if (arg3 != 0 && attack_target_history_add((s32)arg3, p) == 0) {
                    ok = 0;
                }
                if (ok != 0) {
                    ((VObj_18_0ab400 *)(arg0))->m19(p, arg1, arg2);
                    result = 1;
                }
            }
        }
    }
    return result;
}

}
