#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct O_800A846C {
    u8 pad0[0x18];
    void *vptr;
    u8 pad1c[0x3C4 - 0x1C];
    void *objs[2];
} O_800A846C;

struct VBase_18_c99286 { char pad[0x18]; };
struct VObj_18_c99286 : VBase_18_c99286 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78();
    virtual M2C_UNK m79(s32);
    virtual M2C_UNK m80();
};

struct Anim_800A8118 { s32 motions; void *actions; s32 initial_action; s32 counts; };
struct Ids_800A8118 { s16 v[3]; };
struct Pair_800A8118 { s32 a; s32 b; };
struct Bodies_800A8118 { s32 a; s32 b; s32 model; s32 textures; };
struct Res_800A8118 { u8 pad[0x42C]; Bodies_800A8118 *bodies; Pair_800A8118 *motions; };
struct Act_800A8118 { s32 a; s32 idx; f32 c; s32 d; };
struct Part_800A8118 { u8 pad[0xC]; f32 radius; u8 pad10[0x1C]; };
struct Sub_800A8530 { u8 b[0x1C]; };
struct Self_800A8530 { u8 pad[0x3CC]; Sub_800A8530 subs[4]; };

extern "C" {
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 check_v2_mode__9TObjEneDDFv();
u8 *load_enemy_bml_resource_named(void *, void *);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void draw_trail_with_colors(void *, s32, s32, s32, s32);
void *init_trail_buffer__11TBoss4Type3FPvifff(void *, s32, f32, f32, f32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
void spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern Ids_800A8118 lbl_8043AA8C[];
extern Anim_800A8118 lbl_8043AA94[];
extern u8 lbl_8043AAA4[];
extern s32 lbl_80500988[];
extern s32 lbl_80500994[];
extern const f32 lbl_805D9AA4;
extern const f32 lbl_805D9AB8;
extern const f32 lbl_805D9AC0;
extern const f32 lbl_805D9AC4;
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void init_position_vectors__10TObjPlayerFi(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void TObjPlayer__sub_800A7B54(void *);
void fn_800A884C(void *, s32);
void init_enemy_base__10TObjPlayerFPv(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
s32 create__12TObjEneSaverFPvPv(s32, s32);
void initialize_enemy_photon_effect(void *);
void update_prev_position__10TObjPlayerFPv(void *);
void bind_enemy_combat_stats(void *, s32, s32, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, s32);
void __construct_array(void *, void *, void *, int, int);
void init_and_activate__10TObjPlayerFPv();
extern s32 lbl_805D29F0;
extern const f32 lbl_805D9AC8;
extern const f32 lbl_805D9ACC;
extern const f32 lbl_805D9AD0;
}

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void unlink_enemy_group_relations(void *);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_800A05B8(void *, int);
extern u8 TObjPlayer__sub_800D7C58[];
O_800A846C *TObjPlayer__sub_800A846C(O_800A846C *arg0, s16 arg1);
}

extern "C" {

void * create__15TObjEneDimedianFPv(void *arg0);
void free_boss_objects__15TObjEneDimedianFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneDimedian__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);

extern void *tl_04;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_80092A7C();
extern "C" void TObjPlayer__sub_800A77D0();
extern "C" void TObjPlayer__sub_800A77D4();
extern "C" void TObjPlayer__sub_800A7820();
extern "C" void TObjPlayer__sub_800A786C();
extern "C" void TObjPlayer__sub_800A78B8();
extern "C" void TObjPlayer__sub_800A7988();
extern "C" void TObjPlayer__sub_800A7A14();
extern "C" void TObjPlayer__sub_800A7BEC();
extern "C" void TObjPlayer__sub_800A7CA4();
extern "C" void TObjPlayer__sub_800C53B4();
extern "C" void TObjPlayer__sub_800C5B10();
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
extern "C" void beast_enter_approach();
extern "C" void beast_idle_update();
extern "C" void beast_select_target();
extern "C" void beast_start_attack();
extern "C" void beast_update_approach();
extern "C" void beast_update_attack();
extern "C" void beast_update_dead();
extern "C" void beast_update_group_chase();
extern "C" void beast_update_hurt();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_vt78__10TObjPlayerFPv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_flag_0x100__10TObjPlayerFPv();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void enter_state7__10TObjPlayerFPv();
extern "C" void enter_state_8__10TObjPlayerFPv();
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
extern "C" void is_lying_down__12TObjEneBeastFv();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_8043A8D8[];
extern "C" u8 lbl_8043A8EC[];
extern "C" u8 lbl_8043A904[];
extern "C" u8 lbl_8043A918[];
extern "C" u8 lbl_8043A934[];
extern "C" u8 lbl_8043A950[];
extern "C" u8 lbl_8043A96C[];
extern "C" u8 lbl_8043A988[];
extern "C" u8 lbl_8043A9A4[];
extern "C" u8 lbl_8043A9C0[];
extern "C" u8 lbl_8043A9DC[];
extern "C" u8 lbl_8043A9F8[];
extern "C" u8 lbl_8043AA10[];
extern "C" u8 lbl_8043AA2C[];
extern "C" u8 lbl_8043AA48[];
extern "C" u8 lbl_8043AA64[];
extern "C" void play_hit_sound__10TObjPlayerFi();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void request_stand_action__12TObjEneBeastFPv();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void run_task__12TObjEneBeastFPv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void set_dead_and_check_destroy__10TObjPlayerFPv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void tick_freeze_and_reset_appearance();
extern "C" void tick_freeze_state__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold__12TObjEneBeastFPv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_80490D10[4];
extern void *lbl_80490D20[13];
void *lbl_80490D10[4] = {
    (void *)&lbl_8043A8D8, (void *)&lbl_8043A8EC, (void *)&lbl_8043A904, (void *)0x0,
};
void *lbl_80490D20[13] = {
    (void *)&lbl_8043A918, (void *)&lbl_8043A934, (void *)&lbl_8043A950, (void *)&lbl_8043A96C,
    (void *)&lbl_8043A988, (void *)&lbl_8043A9A4, (void *)&lbl_8043A9C0, (void *)&lbl_8043A9DC,
    (void *)&lbl_8043A9F8, (void *)&lbl_8043AA10, (void *)&lbl_8043AA2C, (void *)&lbl_8043AA48,
    (void *)0x0,
};
void *lbl_80490D54[4] = {
    (void *)&lbl_8043AA64, (void *)&lbl_80490D10, (void *)&lbl_80490D20, (void *)0x3000c,
};
void *lbl_80490D64[44] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f19999a, (void *)0x1,
    (void *)0x20000, (void *)0x7, (void *)0x3f19999a, (void *)0x20,
    (void *)0x10002, (void *)0xb, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f800000, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f800000, (void *)0x4,
    (void *)0x10000, (void *)0x8, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x3, (void *)0x3f800000, (void *)0x8,
    (void *)0x20000, (void *)0xa, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x10,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20000, (void *)0x6, (void *)0x3f19999a, (void *)0x20,
};
void *lbl_80490E14[21] = {
    (void *)0x43610000, (void *)0x3f400000, (void *)0x400, (void *)0x0,
    (void *)0x1e0000, (void *)0x1, (void *)0x0, (void *)0x437a0000,
    (void *)0x3f666666, (void *)0x400, (void *)0x0, (void *)0x1e0000,
    (void *)0x1, (void *)0x0, (void *)0x43960000, (void *)0x3f800000,
    (void *)0x400, (void *)0x0, (void *)0x1e0000, (void *)0x1,
    (void *)0x0,
};
void *lbl_80490E68[33] = {
    (void *)0x0, (void *)0x41480000, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41480000, (void *)0x0, (void *)0x40e00000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x41000000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_80490EEC[103] = {
    (void *)0x0, (void *)0x0, (void *)&TObjPlayer__sub_800A846C, (void *)&run_task__12TObjEneBeastFPv,
    (void *)&TObjPlayer__sub_800A7CA4, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&beast_select_target, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&is_lying_down__12TObjEneBeastFv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold__12TObjEneBeastFPv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&tick_freeze_and_reset_appearance,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&tick_freeze_state__10TObjPlayerFPv, (void *)&beast_enter_approach,
    (void *)&beast_start_attack, (void *)&clear_flag_0x100__10TObjPlayerFPv, (void *)&enter_state7__10TObjPlayerFPv, (void *)&enter_state_8__10TObjPlayerFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjPlayer__sub_800A7BEC,
    (void *)&beast_idle_update, (void *)&TObjPlayer__sub_800C5B10, (void *)&beast_update_approach, (void *)&beast_update_group_chase,
    (void *)&beast_update_attack, (void *)&TObjPlayer__sub_800C53B4, (void *)&beast_update_hurt, (void *)&beast_update_dead,
    (void *)&set_dead_and_check_destroy__10TObjPlayerFPv, (void *)&TObjPlayer__sub_800A7A14, (void *)&TObjPlayer__sub_800A7988, (void *)&play_hit_sound__10TObjPlayerFi,
    (void *)&TObjPlayer__sub_800A78B8, (void *)&TObjPlayer__sub_800A786C, (void *)&TObjPlayer__sub_800A7820, (void *)&TObjPlayer__sub_800A77D4,
    (void *)&TObjPlayer__sub_80092A7C, (void *)&TObjPlayer__sub_800A77D0, (void *)&request_stand_action__12TObjEneBeastFPv,
};
#define lbl_80490EEC ((u8 *)lbl_80490EEC)

void * create__15TObjEneDimedianFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x43C);
    if (o2 != NULL) {
        o2 = TObjEneDimedian__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D5070;
extern u32 lbl_805D5074;
extern u32 lbl_805D5078;
extern u32 lbl_805D507C;
extern u32 lbl_805D5080;
extern u32 lbl_805D5084;
extern u32 lbl_805D5088;

void free_boss_objects__15TObjEneDimedianFv(void) {
    if ((u32) lbl_805D5070 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5070);
        lbl_805D5070 = 0U;
    }
    if ((u32) lbl_805D5074 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5074);
        lbl_805D5074 = 0U;
    }
    if ((u32) lbl_805D5078 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5078);
        lbl_805D5078 = 0U;
    }
    if ((u32) lbl_805D507C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D507C);
        lbl_805D507C = 0U;
    }
    if ((u32) lbl_805D5088 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5088, 1);
        lbl_805D5088 = 0U;
    }
    if ((u32) lbl_805D5084 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5084, 1);
        lbl_805D5084 = 0U;
    }
    if ((u32) lbl_805D5080 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5080, 1);
        lbl_805D5080 = 0U;
    }
}

#define lbl_805D5070 (*(s32 **)&lbl_805D5070)
#define lbl_805D5074 (*(s32 **)&lbl_805D5074)
#define lbl_805D5078 (*(s32 **)&lbl_805D5078)
#define lbl_805D507C (*(s32 **)&lbl_805D507C)
#define lbl_805D5080 (*(u8 **)&lbl_805D5080)
#define lbl_805D5084 (*(void **)&lbl_805D5084)
#define lbl_805D5088 (*(void **)&lbl_805D5088)

#undef M2C_FIELD
#define M2C_FIELD(expr, type, offset) (*(type *)((s8 *)(expr) + (offset)))
#define RES_800A8118 ((Res_800A8118 *)lbl_805D5080)
#define lbl_80490D54 ((u8 *)lbl_80490D54)
#define lbl_80490D64 ((Act_800A8118 *)lbl_80490D64)
#define lbl_80490E68 ((Part_800A8118 *)lbl_80490E68)
#define CHAIN_800A8118(p) M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(p, u8 *, 0x2C), u8 *, 0x30), u8 *, 0x30), u8 *, 4), s32, 4)

void TLobby__sub_800A8118(void) {
    u8 *r;
    void *p;
    s32 i;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D5080 = load_enemy_bml_resource_named(lbl_80490D54, lbl_8043AAA4);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_80490D54, 0, 0, 0);
        }
        lbl_805D5080 = (u8 *)p;
    }
    r = M2C_FIELD(lbl_805D5080, u8 *, 0x42C);
    lbl_80500988[0] = CHAIN_800A8118(M2C_FIELD(r, u8 *, 0x8));
    lbl_80500988[1] = CHAIN_800A8118(M2C_FIELD(r, u8 *, 0x18));
    lbl_80500988[2] = CHAIN_800A8118(M2C_FIELD(r, u8 *, 0x28));
    lbl_80500994[0] = 0;
    lbl_80500994[1] = 0;
    lbl_80500994[2] = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9AC0, lbl_805D9AA4, lbl_805D9AB8);
    }
    lbl_805D5084 = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9AC0, lbl_805D9AA4, lbl_805D9AB8);
    }
    lbl_805D5088 = p;
    draw_trail_with_colors(lbl_805D5084, RES_800A8118->bodies->model,
        RES_800A8118->motions[lbl_80490D64[3].idx].b, 5, 8);
    draw_trail_with_colors(lbl_805D5088, RES_800A8118->bodies->model,
        RES_800A8118->motions[lbl_80490D64[4].idx].b, 0xA, 0xD);
    lbl_805D5070 = alloc_buffer__11TOBoss4RockFPv(0xC);
    lbl_805D5074 = alloc_buffer__11TOBoss4RockFPv(0xC);
    lbl_805D5078 = alloc_buffer__11TOBoss4RockFPv(0xC);
    lbl_805D507C = alloc_buffer__11TOBoss4RockFPv(0xC);
    lbl_805D5070[0] = register_boss__6TLobbyFPv(0x53);
    lbl_805D5070[1] = register_boss__6TLobbyFPv(0x54);
    lbl_805D5070[2] = register_boss__6TLobbyFPv(0x55);
    lbl_805D5074[0] = dispatch_shared_handler_b__6TLobbyFPv(0x5A);
    lbl_805D5074[1] = dispatch_shared_handler_b__6TLobbyFPv(0x5B);
    lbl_805D5074[2] = dispatch_shared_handler_b__6TLobbyFPv(0x5C);
    lbl_805D5078[0] = register_object__6TLobbyFPv(0x52);
    lbl_805D5078[1] = register_object__6TLobbyFPv(0x53);
    lbl_805D5078[2] = register_object__6TLobbyFPv(0x54);
    lbl_805D507C[0] = dispatch_shared_handler_a__6TLobbyFPv(0x52);
    lbl_805D507C[1] = dispatch_shared_handler_a__6TLobbyFPv(0x53);
    lbl_805D507C[2] = dispatch_shared_handler_a__6TLobbyFPv(0x54);
    {
        s16 ids[3] = { 0x1B, 0x1C, 0x1D };
        Anim_800A8118 anim = { (s32)RES_800A8118->motions, lbl_80490D64, 2, 0xC0000 };
        for (i = 0; i < 3; i++) {
            u8 *b = M2C_FIELD(lbl_805D5080, u8 *, 0x42C) + i * 0x10;
            spawn_npc_enemy__6TLobbyFsiiiff(ids[i], M2C_FIELD(b, s32, 8), M2C_FIELD(b, s32, 0xC), &anim,
                lbl_80490E68[i].radius, lbl_805D9AC4);
        }
    }
}
#undef CHAIN_800A8118
#undef RES_800A8118
#undef lbl_80490D54
#undef lbl_80490D64
#undef lbl_80490E68
#undef M2C_FIELD
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
O_800A846C *TObjPlayer__sub_800A846C(O_800A846C *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = lbl_80490EEC;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        unlink_enemy_group_relations(arg0);
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x3CC, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800A05B8((u8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define lbl_80490D64 ((u8 *)lbl_80490D64)
#define lbl_80490E14 ((u8 *)lbl_80490E14)
#define lbl_80490E68 ((u8 *)lbl_80490E68)
#define arg0 ((u8 *)arg0_)
#define arg1 ((s32)arg1_)
#define arg2 ((s32)arg2_)
void *TObjEneDimedian__ct(void *arg0_, void *arg1_, void *arg2_) {
    f32 f;
    s32 color;
    s32 i;
    ((void (*)(void *, s32, s32))init_enemy_base__10TObjPlayerFPv)(arg0, arg1, arg2);
    M2C_FIELD(arg0, u8 **, 0x18) = lbl_80490EEC;
    init_vtable_and_field18__10TObjPlayerFPv(arg0 + 0x3A8);
    __construct_array(arg0 + 0x3CC, (void *)&init_and_activate__10TObjPlayerFPv, (void *)&TObjPlayer__sub_800D7C58, 0x1C, 4);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D29F0;
    ((VObj_18_c99286 *)arg0)->m79(arg2);
    init_position_vectors__10TObjPlayerFi(arg0);
    M2C_FIELD(arg0, s32 *, 0x334) = M2C_FIELD(arg0, s32 *, 0x368);
    TObjPlayer__sub_800A7B54(arg0);
    fn_800A884C(arg0, M2C_FIELD(arg0, s32 *, 0x368));
    M2C_FIELD(arg0, u8 **, 0xD8) = lbl_80490D64;
    set_field_d8__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, u8 **, 0xD8));
    M2C_FIELD(arg0, s32 *, 0xDC) = M2C_FIELD(lbl_805D5080, s32 *, 0x430);
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    init_collision_body_parts(arg0, lbl_80490E68 + M2C_FIELD(arg0, s32 *, 0x334) * 0x2C, 1);
    bind_enemy_combat_stats(arg0, lbl_805D5070[M2C_FIELD(arg0, s32 *, 0x334)],
        lbl_805D5074[M2C_FIELD(arg0, s32 *, 0x334)], lbl_805D5078[M2C_FIELD(arg0, s32 *, 0x334)]);
    M2C_FIELD(arg0, u8 **, 0x350) = lbl_80490E14 + M2C_FIELD(arg0, s32 *, 0x334) * 0x1C;
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    update_prev_position__10TObjPlayerFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    initialize_enemy_photon_effect(arg0);
    f = lbl_805D9ACC * calc_boss4_scale__10TObjPlayerFi(arg0);
    M2C_FIELD(arg0, s32 *, 0x2AC) = (s32)(lbl_805D9AC8 * f);
    M2C_FIELD(arg0, s16 *, 0x33A) = 0xF;
    M2C_FIELD(arg0, s16 *, 0x33C) = M2C_FIELD(arg0, s16 *, 0x33A);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0x374) = 0;
    M2C_FIELD(arg0, s16 *, 0x376) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 8);
    M2C_FIELD(arg0, u32 *, 0x30) |= 0x40000;
    M2C_FIELD(arg0, f32 *, 0x388) = lbl_805D9AD0;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        switch (M2C_FIELD(arg0, s32 *, 0x334)) {
        case 0:
        default:
            color = 0xFF20FF20;
            break;
        case 1:
            color = 0xFFFF0040;
            break;
        case 2:
            color = 0xFFFFFF00;
            break;
        }
    } else {
        switch (M2C_FIELD(arg0, s32 *, 0x334)) {
        default:
            color = 0xFF0000FF;
            break;
        case 1:
            color = 0xFFFF0000;
            break;
        case 2:
            color = 0xFFFFFF00;
            break;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = create__12TObjEneSaverFPvPv(0xA0303030, color);
    M2C_FIELD(arg0, s32 *, 0x3C8) = create__12TObjEneSaverFPvPv(0xA0303030, color);
    M2C_FIELD(arg0, s32 *, 0x390) = 1;
    M2C_FIELD(arg0, f32 *, 0x398) = ((f32 **)lbl_805D507C)[M2C_FIELD(arg0, s32 *, 0x334)][0];
    M2C_FIELD(arg0, f32 *, 0x3A0) = ((f32 **)lbl_805D507C)[M2C_FIELD(arg0, s32 *, 0x334)][1];
    M2C_FIELD(arg0, f32 *, 0x39C) = ((f32 **)lbl_805D507C)[M2C_FIELD(arg0, s32 *, 0x334)][2];
    M2C_FIELD(arg0, f32 *, 0x3A4) = ((f32 **)lbl_805D507C)[M2C_FIELD(arg0, s32 *, 0x334)][3];
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&((Self_800A8530 *)arg0)->subs[i]);
    }
    ((VObj_18_c99286 *)arg0)->m80();
    return arg0;
}
#undef arg0
#undef arg1
#undef arg2

}
