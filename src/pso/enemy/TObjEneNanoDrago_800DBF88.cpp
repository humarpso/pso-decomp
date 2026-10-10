#include "pso/enemy/TObjEneNanoDrago.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_14 { char pad[0x14]; };

struct VObj_14 : VBase_14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual s32 m8();
};

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
    virtual s32 m9(f32, f32, f32);
};

struct Vec_800DBABC { f32 x, y, z; };

struct Fade_800DBABC { u8 b[0x1C]; };

struct Nano_800DBABC { u8 pad[0x40C]; Fade_800DBABC fades[2]; };

extern "C" {
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 updateFromCamera__15RenderFadeStateFPCf(int, void *);
M2C_UNK update_obstruction_fade(int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA3FC;
extern const f32 lbl_805DA40C;
extern const f32 lbl_805DA41C;
extern const f32 lbl_805DA45C;
extern const f32 lbl_805DA468;
extern const f32 lbl_805DA46C;
void render_enemy_with_fade__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

struct Stack_800DC028 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_800DC028_lbl_8043C8D4 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef char RecoveredGlobal_800DC028_lbl_8043C8D4_size[sizeof(RecoveredGlobal_800DC028_lbl_8043C8D4) == 0x10 ? 1 : -1];

struct RecoveredGlobal_800DC028_lbl_80494B4C {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef char RecoveredGlobal_800DC028_lbl_80494B4C_size[sizeof(RecoveredGlobal_800DC028_lbl_80494B4C) == 0x10 ? 1 : -1];

struct Obj_800DC0FC { u8 pad0[0x18]; void *vt; };

struct VBase_18_fe72f9 { char pad[0x18]; };

struct VObj_18_fe72f9 : VBase_18_fe72f9 {
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
    virtual M2C_UNK m79(void *);
    virtual M2C_UNK m80();
};

struct Sub_800DC180 { u8 b[0x1C]; };

struct Self_800DC180 { u8 pad[0x40C]; Sub_800DC180 subs[4]; };

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void obj_setFlags30(void *, u32);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
void TLobby__sub_8001FE7C(void*, int);
u8 * load_resource_from_descriptor(void *, s32, M2C_UNK *, s32, s32, s32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void set_flags_30__19TBoss3VoloptMonitorFPv(void *);
u8 * alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK release_destroyed_target__10TObjPlayerFPv(void *);
void TObjEnemyCustom__sub_800C7860(void *);
void update_state_machine__15TObjEnemyCustomFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void TObjEnemyCustom__ct(void *, s32, void *);
s32 __dt__18TObjEneMe3SinowZoaFPvs(void *, s16);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
void TObjPlayer__sub_800D7C58();
void init_and_activate__10TObjPlayerFPv();
s32 find_active_entity_by_id(int);
M2C_UNK TObjPlayer__sub_800D9E08(void *);
void update_death_state__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_800DA2A0(void *);
M2C_UNK update_death_sequence__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_800DA7E4();
M2C_UNK TObjPlayer__sub_800DAA24();
M2C_UNK TObjPlayer__sub_800DAB98();
M2C_UNK TObjPlayer__sub_800DB0F8();
M2C_UNK TObjPlayer__sub_800DB390();

M2C_UNK TObjPlayer__sub_800DB970();
void TObjPlayer__sub_800DBAB8(void);
void dispatch_action_state__10TObjPlayerFPv(u8 *arg0);
void update__10TObjPlayerFPv(u8 *arg0);
void * create__16TObjEneNanoDragoFPv(void *arg0);
void free_global_window__6TLobbyFv(void);
void TLobby__sub_800DC028(void);
Obj_800DC0FC * fn_800DC0FC(Obj_800DC0FC *arg0, s16 arg1);
u8 * TObjEneNanoDrago__ct(u8 *arg0, s32 arg1, u8 *arg2);
void TObjPlayer__sub_800DC444(void);
void load_entry_params_nanodrago__10TObjPlayerFPvi(void *, s32);
void set_param__12TObjEneLappyFPvi(void *, s32);
void initialize_enemy_photon_effect(void *);
void * TObjControl__ct(void *, void *);
void update_prev_position__10TObjPlayerFPv(void *);
void bind_enemy_combat_stats(void *, s32, s32, s32);
f32 xz_distance_squared(void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
s32 free_collision_body_parts(void *);
void init_collision_body_parts(void *, void *, s32);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
void __destroy_arr(void *, void *, int, int);
void __construct_array(void *, void *, void *, int, int);

extern RecoveredGlobal_800DC028_lbl_8043C8D4 lbl_8043C8D4;
extern s32 lbl_805D2AA8;
extern s32 lbl_805D5248;
extern s32 lbl_805D524C;
extern s32 lbl_805D5250;
extern s32 lbl_805D5254;
extern u32 nano_drago_entry_params_resource;
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA408;
extern const f32 lbl_805DA41C;
extern const f32 lbl_805DA448;
extern const f32 lbl_805DA45C;
extern const f32 lbl_805DA470;
extern const f32 lbl_805DA474;
extern void *tl_04;

extern "C" {
void TBoss3Volopt__sub_800C762C();
}
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjEneNanoDrago__sub_800DC410();
}
extern "C" {
void TObjEneNanoDrago__sub_800DC414();
}
extern "C" {
void TObjEneNanoDrago__sub_800DC418();
}
extern "C" {
void TObjEneNanoDrago__sub_800DC41C();
}
extern "C" {
void TObjEnemyCustom__sub_800C7DF4();
}
extern "C" {
void TObjPlayer__sub_8000FF3C();
}
extern "C" {
void TObjPlayer__sub_80010A80();
}
extern "C" {
void consume_timer_field__10TObjPlayerFPvi();
}
extern "C" {
void TObjPlayer__sub_80014830();
}
extern "C" {
void TObjPlayer__sub_80014838();
}
extern "C" {
void apply_slow_status__10TObjPlayerFPv();
}
extern "C" {
void update_shock_clock__10TObjPlayerFPv();
}
extern "C" {
void TObjPlayer__sub_800172CC();
}
extern "C" {
void TObjPlayer__sub_80018E6C();
}
extern "C" {
void TObjPlayer__sub_80019568();
}
extern "C" {
void TObjPlayer__sub_800D9C34();
}
extern "C" {
void enter_state_5__10TObjPlayerFPv();
}
extern "C" {
}
extern "C" {
void TObjPlayer__sub_800F65D0();
}
extern "C" {
void apply_hit_message_flags__10TObjPlayerFPvPv();
}
extern "C" {
void add_actor_exp();
}
extern "C" {
void apply_action_hold_status();
}
extern "C" {
void apply_anti_technique__10TObjPlayerFv();
}
extern "C" {
void apply_attack_stat_status__10TObjPlayerFv();
}
extern "C" {
void apply_confusion_status__10TObjPlayerFv();
}
extern "C" {
void apply_defense_stat_status__10TObjPlayerFv();
}
extern "C" {
void apply_knockback_from_attacker();
}
extern "C" {
void apply_movement_ailment__10TObjPlayerFv();
}
extern "C" {
void apply_object_set_data();
}
extern "C" {
void apply_paralysis__10TObjPlayerFv();
}
extern "C" {
void apply_poison_status__10TObjPlayerFv();
}
extern "C" {
void apply_set_data__9TObjEnemyFPvPv();
}
extern "C" {
void apply_shock_status__10TObjPlayerFv();
}
extern "C" {
void apply_switch_attack__10TObjPlayerFi();
}
extern "C" {
void begin_action4__10TObjPlayerFPv();
}
extern "C" {
void calc_distance_accuracy_penalty__10TObjPlayerFv();
}
extern "C" {
void call_player_preserving_field__15TObjEnemyCustomFPv();
}
extern "C" {
void classify_actor_view_detail();
}
extern "C" {
void clear_all_status_effects();
}
extern "C" {
void clear_harmful_statuses__10TObjPlayerFv();
}
extern "C" {
void cure_paralysis__10TObjPlayerFv();
}
extern "C" {
void cure_poison_ailment();
}
extern "C" {
void enemy_spawn_jellen_effect();
}
extern "C" {
void enemy_spawn_zalure_effect();
}
extern "C" {
void fn_80010EBC();
}
extern "C" {
void fn_80010EC0();
}
extern "C" {
void fn_80010EC4();
}
extern "C" {
void fn_80010EC8();
}
extern "C" {
void clear_lobby_object_state();
}
extern "C" {
void get_actor_body_center();
}
extern "C" {
void get_actor_level_index();
}
extern "C" {
void get_enemy_name__14TObjEnePanarmsFPv();
}
extern "C" {
void get_pos__10TObjPlayerFii();
}
extern "C" {
void has_flag_0x800__10TObjPlayerFPv();
}
extern "C" {
void is_actor_cadence_frame();
}
extern "C" {
void is_target_in_attack_range__10TObjPlayerFv();
}
extern "C" {
extern u8 lbl_8043C760[];
}
extern "C" {
extern u8 lbl_8043C774[];
}
extern "C" {
extern u8 lbl_8043C78C[];
}
extern "C" {
extern u8 lbl_8043C7A8[];
}
extern "C" {
extern u8 lbl_8043C7C4[];
}
extern "C" {
extern u8 lbl_8043C7E0[];
}
extern "C" {
extern u8 lbl_8043C7FC[];
}
extern "C" {
extern u8 lbl_8043C814[];
}
extern "C" {
extern u8 lbl_8043C82C[];
}
extern "C" {
extern u8 lbl_8043C844[];
}
extern "C" {
extern u8 lbl_8043C860[];
}
extern "C" {
extern u8 lbl_8043C878[];
}
extern "C" {
extern u8 lbl_8043C890[];
}
extern "C" {
extern u8 lbl_8043C8A8[];
}
extern "C" {
void receive_direct_attack__10TObjPlayerFv();
}
extern "C" {
void receive_physical_attack__10TObjPlayerFv();
}
extern "C" {
void receive_weapon_special_attack__10TObjPlayerFv();
}
extern "C" {
void render_actor_shadows_default();
}
extern "C" {
void reset_actor_action_state();
}
extern "C" {
void reset_pose__10TObjPlayerFPv();
}
extern "C" {
void roll_physical_accuracy__10TObjPlayerFv();
}
extern "C" {
void select_melee_contact_body__10TObjPlayerFv();
}
extern "C" {
void test_flag30_512__10TObjPlayerFPv();
}
extern "C" {
void test_flag_1000__10TObjPlayerFPv();
}
extern "C" {
void test_flag_256__10TObjPlayerFPv();
}
extern "C" {
void trigger_switch_attack__10TObjPlayerFi();
}
extern "C" {
void try_start_action__10TObjPlayerFPvii();
}
extern "C" {
void update_action_timer__10TObjPlayerFPv();
}
extern "C" {
void update_actor_ground_y();
}
extern "C" {
void update_attack_stat_status();
}
extern "C" {
void update_defense_stat_status();
}
extern "C" {
void update_flag30_timer__10TObjPlayerFPv();
}
extern "C" {
void update_movement_status__10TObjPlayerFv();
}
extern "C" {
void update_object_view_visibility();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
extern void *lbl_80494B10[2];
extern void *lbl_80494B18[13];
__declspec(section ".data") void *lbl_80494B10[2] = {
    (void *)&lbl_8043C760, (void *)0x0,
};
void *lbl_80494B18[13] = {
    (void *)&lbl_8043C774, (void *)&lbl_8043C78C, (void *)&lbl_8043C7A8, (void *)&lbl_8043C7C4,
    (void *)&lbl_8043C7E0, (void *)&lbl_8043C7FC, (void *)&lbl_8043C814, (void *)&lbl_8043C82C,
    (void *)&lbl_8043C844, (void *)&lbl_8043C860, (void *)&lbl_8043C878, (void *)&lbl_8043C890,
    (void *)0x0,
};
void *lbl_80494B4C[4] = {
    (void *)&lbl_8043C8A8, (void *)&lbl_80494B10, (void *)&lbl_80494B18, (void *)0x1000c,
};
void *lbl_80494B5C[48] = {
    (void *)0x20000, (void *)0xa, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x10001, (void *)0xb, (void *)0x3f4ccccd, (void *)0x1,
    (void *)0x20000, (void *)0x0, (void *)0x3f333333, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x8,
    (void *)0x30004, (void *)0x3, (void *)0x3f000000, (void *)0x10,
    (void *)0x20000, (void *)0x6, (void *)0x3f4ccccd, (void *)0x1,
    (void *)0x20007, (void *)0x9, (void *)0x3f666666, (void *)0x1,
    (void *)0x10007, (void *)0x5, (void *)0x3fb33333, (void *)0x1,
    (void *)0x20000, (void *)0x7, (void *)0x3fb33333, (void *)0x1,
    (void *)0x20007, (void *)0x8, (void *)0x3f333333, (void *)0x4,
    (void *)0x20007, (void *)0x1, (void *)0x3f4ccccd, (void *)0x8,
    (void *)0x3000b, (void *)0x4, (void *)0x3f000000, (void *)0x10,
};
void *lbl_80494C1C[7] = {
    (void *)0x43160000, (void *)0x3eed097b, (void *)0x300, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *lbl_80494C38[22] = {
    (void *)0x0, (void *)0x41700000, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x0, (void *)0x8001, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41700000, (void *)0x0, (void *)0x41400000, (void *)0x0,
    (void *)0x0, (void *)0xa000002, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_80494C90[83] = {
    (void *)0x0, (void *)0x0, (void *)&fn_800DC0FC, (void *)&update__10TObjPlayerFPv,
    (void *)&render_enemy_with_fade__10TObjPlayerFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEnemyCustom__sub_800C7DF4, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&TObjPlayer__sub_800D9C34, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjEneNanoDrago__sub_800DC410, (void *)&TObjEneNanoDrago__sub_800DC418,
    (void *)&TObjEneNanoDrago__sub_800DC414, (void *)&TObjEneNanoDrago__sub_800DC41C, (void *)&begin_action4__10TObjPlayerFPv, (void *)&enter_state_5__10TObjPlayerFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TBoss3Volopt__sub_800C762C, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state,
};
#define lbl_80494B4C (*(RecoveredGlobal_800DC028_lbl_80494B4C *)lbl_80494B4C)
#define lbl_80494B5C ((u8 *)lbl_80494B5C)
#define lbl_80494C1C ((u8 *)lbl_80494C1C)
#define lbl_80494C38 ((u8 *)lbl_80494C38)
#define lbl_80494C90 ((u8 *)lbl_80494C90)

void TObjPlayer__sub_800DBAB8(void) {  }

#pragma push
#pragma fp_contract on
void render_enemy_with_fade__10TObjPlayerFPv(u8 *arg0) {
    Vec_800DBABC v;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    s32 var_r29;
    s32 temp_r3;
    s32 var_r28;
    var_r29 = 0;
    if (is_split_screen() != 0) {
        var_r29 = get_camera_mode__11TCameraCtrlFv();
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (temp_r3 = ((VObj_18 *)(arg0))->m9(lbl_805DA468, lbl_805DA40C, lbl_805DA3FC), ((temp_r3 == 0) == 0)) && ((check_demo_mode__10TObjPlayerFv() == 1) || !(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000))) {
        lbl_805D5660 = some_id_805c6f74;
        var_r29 = (s32)&((Nano_800DBABC *)arg0)->fades[var_r29];
        update_obstruction_fade((int) (((u8 *)var_r29)));
        if (updateFromCamera__15RenderFadeStateFPCf((int) (((u8 *)var_r29)), (void *) (arg0 + 0x2FC)) != 0) {
            ((VObj_14 *)(((u8 *)var_r29)))->m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) != 0) {
                some_id_805c6f74 = lbl_805D5660;
                return;
            }
        }
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        select_actor_lighting((void *) (arg0));
        toggle_particle_effect__10TObjPlayerFv();
        var_r28 = 1;
        push_matrix();
        translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x404) + (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E4))), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x68);
        scale_matrix((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
        some_id_805c6f74 &= 0xFFFFFBFF;
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        } else if (M2C_FIELD(arg0, s32 *, 0x388) & 4) {
            if (((VObj_14 *)(arg0 + 0x3E8))->m8() != 0) {
                ((VObj_14 *)(arg0 + 0x3E8))->m6();
                if (temp_r3 == 1) {
                    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
                } else {
                    render_world_model__10TObjPlayerFPv((void *) (arg0));
                }
                ((VObj_14 *)(arg0 + 0x3E8))->m7();
            } else {
                var_r28 = 0;
            }
        } else if (temp_r3 == 1) {
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
        } else {
            render_world_model__10TObjPlayerFPv((void *) (arg0));
        }
        pop_matrix();
        restore_scene_lighting();
        end_effect_render__13TParticleCtrlFv();
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && (var_r28 != 0)) {
            temp_f0 = -(lbl_805DA46C * M2C_FIELD(arg0, f32 *, 0x404) - lbl_805DA41C) * (lbl_805DA45C * M2C_FIELD(arg0, f32 *, 0x68));
            v.z = temp_f0;
            v.y = temp_f0;
            v.x = temp_f0;
            render_with_position_override__10TObjPlayerFPvPvi((void *) (arg0), &v, 0);
        }
        ((VObj_14 *)(((u8 *)var_r29)))->m7();
        some_id_805c6f74 = lbl_805D5660;
    }
}
#pragma pop

void dispatch_action_state__10TObjPlayerFPv(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        TObjPlayer__sub_800DB970();
        return;
      case 1:
        ((TObjEneNanoDrago *)arg0)->update_circling_state();
        return;
      case 2:
        TObjPlayer__sub_800DC444();
        return;
      case 3:
        update_state_machine__15TObjEnemyCustomFPv(arg0);
        return;
      case 4:
        TObjPlayer__sub_800DA7E4();
        return;
      case 5:
        update_death_sequence__10TObjPlayerFPv();
        return;
      case 9:
        TObjPlayer__sub_800DB0F8();
        return;
      case 10:
        TObjPlayer__sub_800DB390();
        return;
      case 11:
        TObjPlayer__sub_800DAB98();
        return;
      case 12:
        TObjPlayer__sub_800DAA24();
        return;
      case 7:
        update_death_state__10TObjPlayerFPv(arg0);
        break;
    }
  }
}

void update__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_800D9E08((void *) (arg0));
        ((M2C_UNK (*)(void *))TObjPlayer__sub_800DBAB8)((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2A8) = find_active_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x338)));
    release_destroyed_target__10TObjPlayerFPv((void *) (arg0));
    TObjPlayer__sub_800DA2A0((void *) (arg0));
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            ((M2C_UNK (*)(void *))dispatch_action_state__10TObjPlayerFPv)((void *) (arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    ((M2C_UNK (*)(void *))dispatch_action_state__10TObjPlayerFPv)((void *) (arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        ((M2C_UNK (*)(void *))dispatch_action_state__10TObjPlayerFPv)((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + (lbl_805DA448 + M2C_FIELD(arg0, f32 *, 0x404)));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (lbl_805DA448 + M2C_FIELD(arg0, f32 *, 0x404));
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        submit_cursor_candidate((void *) (arg0), (int) (-1));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3DC);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x3DC) = (s32) (temp_r3 - 1);
    }
    temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) & 0xFFFFFFF9);
    if (M2C_FIELD(arg0, f32 *, 0x404) > lbl_805DA45C) {
        temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 4);
    } else {
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x18) | 2);
    }
    if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x44)) > lbl_805DA470) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x44));
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
}

void * create__16TObjEneNanoDragoFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x47C);
    if (o2 != NULL) {
        o2 = ((void * (*)(void *, void *, void *))TObjEneNanoDrago__ct)(o2, o, arg0);
    }
    return o2;
}

void free_global_window__6TLobbyFv(void) {
    if ((u32) nano_drago_entry_params_resource != 0U) {
        TLobby__sub_8001FE7C((void*)nano_drago_entry_params_resource, 1);
        nano_drago_entry_params_resource = 0U;
    }
}

void TLobby__sub_800DC028(void) {
    Stack_800DC028 stack;

    u8 *temp_r3;
    u8 *temp_r5;
    u8 *var_r0;

    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &lbl_80494B4C.value, 0, 0, 0));
    }
    nano_drago_entry_params_resource = (u32) var_r0;
    lbl_805D5248 = register_boss__6TLobbyFPv((int) (0x1A));
    lbl_805D524C = dispatch_shared_handler_b__6TLobbyFPv((int) (0x1A));
    lbl_805D5250 = register_object__6TLobbyFPv((int) (0x1A));
    lbl_805D5254 = dispatch_shared_handler_a__6TLobbyFPv((int) (0x1A));
    stack.sp8 = M2C_FIELD(&lbl_8043C8D4.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043C8D4.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043C8D4.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8043C8D4.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(nano_drago_entry_params_resource, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(nano_drago_entry_params_resource, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x22), (int) (M2C_FIELD(temp_r5, s32 *, 8)), (int) (M2C_FIELD(temp_r5, s32 *, 0xC)), (void *) (&stack.sp8), (f32) (lbl_805DA448), (f32) (lbl_805DA3F8));
}

Obj_800DC0FC *fn_800DC0FC(Obj_800DC0FC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->vt = lbl_80494C90;
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x40C, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3E8, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneNanoDrago__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 i;
    TObjEnemyCustom__ct(arg0, arg1, arg2);
    M2C_FIELD(arg0, u8 **, 0x18) = lbl_80494C90;
    init_common__18TObjEneMe3SinowZoaFPv(arg0 + 0x3E8);
    __construct_array(arg0 + 0x40C, (void *)&init_and_activate__10TObjPlayerFPv, (void *)&TObjPlayer__sub_800D7C58, 0x1C, 4);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D2AA8;
    ((VObj_18_fe72f9 *)arg0)->m79(arg2);
    ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x290, ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x29C, arg0 + 0x38));
    M2C_FIELD(arg0, s32 *, 0xDC) = M2C_FIELD((*(u8 * *)&nano_drago_entry_params_resource), s32 *, 0x430);
    M2C_FIELD(arg0, s32 *, 0x368) = 0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, s32 *, 0x36C) = M2C_FIELD(arg2, s16 *, 0x3E);
    load_entry_params_nanodrago__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x368));
    M2C_FIELD(arg0, u8 **, 0xD8) = lbl_80494B5C;
    set_field_d8__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, u8 **, 0xD8));
    init_collision_body_parts(arg0, lbl_80494C38, 2);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), u32 *, 0x44) &= ~1;
    M2C_FIELD(arg0, u8 **, 0x350) = lbl_80494C1C;
    bind_enemy_combat_stats(arg0, lbl_805D5248, lbl_805D524C, lbl_805D5250);
    ((void (*)(void *))TObjPlayer__sub_800D9E08)(arg0);
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, s16 *, 0x32C) = M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x32E) = M2C_FIELD(arg0, s16 *, 0x2BA);
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    update_prev_position__10TObjPlayerFPv(arg0);
    initialize_enemy_photon_effect(arg0);
    M2C_FIELD(arg0, s16 *, 0x38C) = 0;
    M2C_FIELD(arg0, f32 *, 0x68) = lbl_805DA474;
    M2C_FIELD(arg0, f32 *, 0x3D8) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x68);
    ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x50, arg0 + 0x38);
    ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x390, arg0 + 0x38);
    if ((s32)M2C_FIELD(arg0, f32 *, 0x354) == 1) {
        M2C_FIELD(arg0, u32 *, 0x388) |= 0x40000;
        if (M2C_FIELD(arg0, f32 *, 0x358) < lbl_805DA41C) {
            M2C_FIELD(arg0, f32 *, 0x358) = lbl_805DA408;
        }
        set_flags_30__19TBoss3VoloptMonitorFPv(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    set_param__12TObjEneLappyFPvi(arg0, 0xF);
    M2C_FIELD(arg0, f32 *, 0x3E4) = lbl_805DA3F8;
    if (M2C_FIELD(arg2, s16 *, 0xA) != 0 && !(M2C_FIELD(arg0, u32 *, 0x388) & 0x40000)) {
        TObjEnemyCustom__sub_800C7860(arg0);
    }
    M2C_FIELD(arg0, f32 *, 0x404) = lbl_805DA3F8;
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&((Self_800DC180 *)arg0)->subs[i]);
    }
    obj_setFlags30(arg0, 0x1000000);
    ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x44, arg0 + 0x38);
    ((VObj_18_fe72f9 *)arg0)->m80();
    return arg0;
}

}
