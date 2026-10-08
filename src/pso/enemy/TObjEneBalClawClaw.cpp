#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80091E08 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80091E08_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80091E08_lbl_8058D490_size[sizeof(RecoveredGlobal_80091E08_lbl_8058D490) == 0x30 ? 1 : -1];

struct RecoveredGlobal_80091B98_lbl_8048F148 { M2C_UNK value; u8 remaining[0x148]; };

struct VBase_18_f05d67 { char pad[0x18]; };

struct VObj_18_f05d67 : VBase_18_f05d67 {
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
};

struct RecoveredGlobal_80091C58_lbl_8048F148 {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct Vec_80091EA4 { f32 x, y, z; };

struct VBase_80091EA4 { char pad[0x18]; };

struct VObj_80091EA4 : VBase_80091EA4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_80091EA4 *, Vec_80091EA4 *);
};

struct Obj_80091EA4 {
    u8 pad0[0x38];
    Vec_80091EA4 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xB8 - 0x64];
    s16 state;
    u8 padBA[0xC0 - 0xBA];
    f32 frame;
    u8 padC4[0x3A8 - 0xC4];
    VObj_80091EA4 *effects[2];
};

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
    u32 pad18;
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
struct Vec_8009211C { f32 x, y, z; };
struct Obj_8009211C : VObj_18 {
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x2FC - 0x64];
    Vec_8009211C f2FC;
    u8 pad308[0x326 - 0x308];
    s16 f326;
    u8 pad328[0x380 - 0x328];
    f32 f380;
    u8 pad384[0x3B0 - 0x384];
    VObj_14 fades[4];
};

struct VBase_18_b31a3c { char pad[0x18]; };
struct VObj_18_b31a3c : VBase_18_b31a3c {
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
    virtual M2C_UNK m80();
};
extern "C" {
void set_param__12TObjEneLappyFPvi(void *, s32);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK reset_photon_effect__12TBoss3VoloptFPv(void *);
M2C_UNK clear_attack_flag__18TObjEneBalClawClawFPv(void *);
M2C_UNK TObjPlayer__sub_80090418(void *, int);
M2C_UNK TObjEneBalClawClaw__sub_80090824(void *);
M2C_UNK bind_enemy_combat_stats(void *, s32, s32, s32);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, s16);
M2C_UNK init_collision_body_parts(void *, void *, int);
extern s32 lbl_805D2978;
extern u8 *lbl_805D4F20;
extern s32 lbl_805D4F28;
extern s32 lbl_805D4F2C;
extern s32 lbl_805D4F30;
extern const f32 lbl_805D9688;
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D96D0;
extern const f32 lbl_805D96D4;
void select_subtype__12TObjEneBeastFPv(u8 *arg0);
s32 spawn_effect_at_ground__10TObjPlayerFPvi(void *, int);
s32 spawn_dead_spot_type2__10TObjPlayerFii(void *, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_80091E08_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805D96D8;
extern const f32 lbl_805D96DC;
extern const f32 lbl_805D96E0;
void spawn_death_fire__12TObjEneBeastFPv(u8 *arg0);
u8 * TObjEneBalClaw__ct(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjEneBalClawClaw__sub_80090798(void *);
M2C_UNK TObjEneBalClawClaw__ct(void *);
u8 *TObjEneBalClawClaw__sub_80091B98(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 _w7);
u8 * TObjEneBalClaw__ct(void *);
M2C_UNK TObjEneBalClawClaw__ct(void *);
s32 TObjEnemyCustom__sub_800C7860(void *);
u8 *TObjEneBalClawClaw__sub_80091C58(u8 *arg0, M2C_UNK arg1, u8 *arg2);
s32 update_chase_state__18TObjEneBalClawClawFPv(void *);
s32 TObjEneBalClawClaw__sub_8009060C(void *);
s32 update_drop__18TObjEneBalClawClawFPv(void *);
s32 update_move_to_target__18TObjEneBalClawClawFPv(void *);
s32 update_follow_parent__18TObjEneBalClawClawFPv(void *);
s32 TObjEneBalClawClaw__sub_80090D3C(void *);
s32 action__18TObjEneBalClawClawFPv(void *);
s32 TObjEneBalClawClaw__sub_80090ECC(void *);
s32 TObjEneBalClawClaw__sub_80091134(void *);
s32 TObjEneBalClawClaw__sub_80091200(void *);
s32 update_chase__18TObjEneBalClawClawFPv(void *);
void update_state__18TObjEneBalClawClawFPv(u8 *arg0);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
void mult_vec_array__10TObjPlayerFUii(int, u32, void *, int);
void set_matrix_identity__10TObjPlayerFPv(void *);
s32 rotate_matrix_y(int, int);
void push_matrix(void);
s32 pop_matrix();
f32 post_translate_matrix(void *);
extern void *lbl_805D4F4C;
extern void *lbl_805D4F50;
extern const f32 lbl_805D96E4;
void update_claw_trail__12TObjEneBeastFPv(Obj_80091EA4 *self);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
M2C_UNK set_indexed_flags(void *, int, int);
s32 play_sound_effect(s32, s32, s32, s32);
void update_appearance__12TObjEneBeastFPv(u8 *arg0);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 check_v2_mode__9TObjEneDDFv();
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D96E8;
extern const f32 lbl_805D96EC;
extern const f32 lbl_805D96F0;
extern const f32 lbl_805D96F4;
extern const f32 lbl_805D96F8;
extern const f32 lbl_805D96FC;

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjEneBalClaw__sub_8008D68C();
M2C_UNK TObjEneBalClaw__sub_8008D79C(void *);
M2C_UNK update_claw_angle__14TObjEneBalClawFPv(void *);
M2C_UNK TObjEneBalClawClaw__sub_80090824(void *);
M2C_UNK TObjEneBalClawClaw__sub_800914A4(void *);
void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0);
void update_state__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK release_destroyed_target__10TObjPlayerFPv(void *);
s32 find_active_entity_by_id(int);
s32 find_entity_by_id(int);
M2C_UNK submit_cursor_candidate(void *, int, int, f32, f32);
M2C_UNK minimap_render_dot(void *, int, int, int);
void TObjEneBalClawClaw__sub_8009173C(u8 *arg0);
}

extern "C" {

struct VObjBase_800914a8 { char pad_[0x18]; };
struct VObj_800914a8 : VObjBase_800914a8 {
    virtual M2C_UNK m00(); virtual M2C_UNK m01(); virtual M2C_UNK m02(); virtual M2C_UNK m03();
    virtual M2C_UNK m04(); virtual M2C_UNK m05(); virtual M2C_UNK m06(); virtual M2C_UNK m07();
    virtual M2C_UNK m08(); virtual M2C_UNK m09(); virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14(); virtual M2C_UNK m15();
    virtual M2C_UNK m16(); virtual M2C_UNK m17(M2C_UNK);
};

void on_attack_cooldown_expired__12TObjEneBeastFv(void);
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0);
void * create__18TObjEneBalClawClawFPv(void *arg0);
void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);
void *deleting_dtor__18TObjEneBalClawClawFPvs(void *arg0, s16 arg1);
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0);
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0);
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
void *TObjControl__ct(void *, void *);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__14TObjEneBalClawFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_attack_flag__18TObjEneBalClawClawFPv(void *);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
f32 xz_distance_squared(void *, void *);
s32 play_effect_if_v2__10TObjPlayerFi(s32);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *);
M2C_UNK set_attack_distance_flag__10TObjPlayerFPv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);

extern const f32 lbl_805D969C;
extern const f32 lbl_805D96B8;
extern const f32 lbl_805D96BC;
extern const f32 lbl_805D96C0;
extern const f32 lbl_805D96C4;
extern const f32 lbl_805D96C8;

extern "C" void TBoss3Volopt__sub_800C762C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneBalClawClaw__sub_80090828();
extern "C" void TObjEneBalClaw__vt28();
extern "C" void TObjEneBalClaw__vt34();
extern "C" void TObjEneBalClaw__vt37();
extern "C" void TObjEneBalClaw__vt57();
extern "C" void TObjEneBalClaw__vt59();
extern "C" void TObjEneBalClaw__vt60();
extern "C" void TObjEnemyCustom__sub_800C789C();
extern "C" void TObjEnemyCustom__sub_800C7DF4();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
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
extern "C" void call_player_preserving_field__15TObjEnemyCustomFPv();
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
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render__18TObjEneBalClawClawFPv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_gigue__15TObjEnemyCustomFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
void *lbl_8048F090[28] = {
    (void *)0x10000, (void *)0xf, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0xf, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0xa, (void *)0x3f4ccccd, (void *)0x4,
    (void *)0x20000, (void *)0xb, (void *)0x3f333333, (void *)0x8,
    (void *)0x30000, (void *)0xc, (void *)0x3f000000, (void *)0x10,
    (void *)0x10000, (void *)0xd, (void *)0x3f333333, (void *)0x1,
    (void *)0x10000, (void *)0xe, (void *)0x3f333333, (void *)0x1,
};
void *lbl_8048F100[7] = {
    (void *)0x43160000, (void *)0x3f0e38e3, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *lbl_8048F11C[11] = {
    (void *)0x0, (void *)0x41900000, (void *)0x0, (void *)0x40a00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_8048F148[83] = {
    (void *)0x0, (void *)0x0, (void *)&deleting_dtor__18TObjEneBalClawClawFPvs, (void *)&TObjEneBalClawClaw__sub_8009173C,
    (void *)&render__18TObjEneBalClawClawFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEnemyCustom__sub_800C7DF4, (void *)&TObjPlayer__sub_8000FF3C, (void *)&TObjEneBalClaw__vt28, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&TObjEneBalClaw__vt34, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&TObjEneBalClaw__vt37,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjEneBalClawClaw__sub_80090828, (void *)&TObjEneBalClaw__vt57,
    (void *)&update_gigue__15TObjEnemyCustomFPv, (void *)&TObjEneBalClaw__vt59, (void *)&TObjEneBalClaw__vt60, (void *)&TObjEnemyCustom__sub_800C789C,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TBoss3Volopt__sub_800C762C, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80,
};
#define lbl_8048F148 ((M2C_UNK *)lbl_8048F148)

void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r31;
    u32 temp_r3;

    if (((VObj_800914a8 *) arg0)->m17(0x1E) != 0) {
        find_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) (lbl_805D96B8));
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 8:
    case 0:
        if (((VObj_800914a8 *) arg0)->m17(0x1E) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (1));
                M2C_FIELD(arg0, s32 *, 0x38C) = 2;
                return;
            }
            if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805D96BC) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
                return;
            }
            reset_active_state__18TObjEneBalClawClawFPv((void *) (arg0));
        }
        return;
    case 1:
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x2A8);
        if (temp_r3 != 0U) {
            temp_f1 = xz_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38));
            temp_r31 = M2C_FIELD(arg0, s32 *, 0x38C);
            switch (temp_r31) {
            case 0:
                if (temp_f1 > lbl_805D96C0) {
                    M2C_FIELD(arg0, s32 *, 0x38C) = 1;
                }
                break;
            case 1:
                if (temp_f1 < lbl_805D969C) {
                    clear_attack_flag__18TObjEneBalClawClawFPv((void *) (arg0));
                    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
                } else if (temp_f1 > lbl_805D96C4) {
                    M2C_FIELD(arg0, s32 *, 0x38C) = 2;
                }
                break;
            case 2:
                if (temp_f1 < lbl_805D96C8) {
                    set_attack_distance_flag__10TObjPlayerFPv((void *) (arg0));
                    M2C_FIELD(arg0, s32 *, 0x38C) = 1;
                }
                break;
            }
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x38C);
            if (temp_r31 != temp_r0_2) {
                switch (temp_r0_2) {
                case 0:
                    update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (2));
                    return;
                case 1:
                    clear_attack_flag__18TObjEneBalClawClawFPv((void *) (arg0));
                    return;
                case 2:
                    set_attack_distance_flag__10TObjPlayerFPv((void *) (arg0));
                    return;
                }
            }
        } else {
            update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
        }
        break;
    }
}

extern void *tl_04;

void update_state__18TObjEneBalClawClawFPv(u8 *arg0) {
  s16 temp_r0;
  void *new_var;
  void *new_var2;
  new_var = (void *) arg0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        new_var2 = new_var;
        TObjEneBalClawClaw__sub_80090D3C(new_var2);
        return;
      case 1:
        update_chase__18TObjEneBalClawClawFPv(new_var);
        return;
      case 2:
        TObjEneBalClawClaw__sub_80090ECC(new_var);
        return;
      case 4:
        TObjEneBalClawClaw__sub_80091200(new_var);
        return;
      case 5:
        TObjEneBalClawClaw__sub_80091134(new_var);
        return;
      case 7:
        new_var = arg0;
        action__18TObjEneBalClawClawFPv((void *) new_var);
        return;
      case 9:
        update_drop__18TObjEneBalClawClawFPv(new_var = new_var);
        return;
      case 10:
        update_follow_parent__18TObjEneBalClawClawFPv(new_var);
        return;
      case 11:
        TObjEneBalClawClaw__sub_8009060C(new_var);
        return;
      case 8:
        update_move_to_target__18TObjEneBalClawClawFPv(new_var);
        return;
      case 12:
        update_chase_state__18TObjEneBalClawClawFPv(new_var);
        break;
    }
  }
}

void TObjEneBalClawClaw__sub_8009173C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    u8 *temp_r5;
    TObjEneBalClaw__sub_8008D68C();
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjEneBalClawClaw__sub_80090824((void *) (arg0));
        TObjEneBalClawClaw__sub_800914A4((void *) (arg0));
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
    if (temp_r3 & 0x20000000) {
        update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (0xA));
    } else if (temp_r3 & 0x10000000) {
        update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (9));
    } else {
        update_attack_distance_state__18TObjEneBalClawClawFPv(arg0);
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            update_state__18TObjEneBalClawClawFPv(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2A8) = find_active_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x338)));
    release_destroyed_target__10TObjPlayerFPv((void *) (arg0));
    update_state__18TObjEneBalClawClawFPv(arg0);
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r3_2 & 0x10000000)) {
        if (temp_r3_2 & 0x20000000) {
            M2C_FIELD(arg0, f32 *, 0x3BC) = (0.2f + M2C_FIELD(arg0, f32 *, 0x3BC) < 10.0f) ? 0.2f + M2C_FIELD(arg0, f32 *, 0x3BC) : 10.0f;
        } else {
            TObjEneBalClaw__sub_8008D79C((void *) (arg0));
        }
        update_claw_angle__14TObjEneBalClawFPv((void *) (arg0));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x300);
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (temp_f2 + (M2C_FIELD(arg0, f32 *, 0x3B4) + M2C_FIELD(arg0, f32 *, 0x3BC)));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3B4);
        temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r5, f32 *, 4) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x3BC));
        submit_cursor_candidate((void *) (arg0), (int) (-1), (int) (temp_r5), (f32) (temp_f1), (f32) (temp_f2));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
        return;
    }
    temp_r3_3 = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x3C6)));
    if (temp_r3_3 != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (temp_r3_3 + 0x38));
    }
}

void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = TObjEneBalClawClaw__sub_80091B98((u8 *)(o2), (M2C_UNK)(o), (u8 *)(arg0), (s32)(arg1), (s32)(arg2), (u8 *)(arg3), (s32)(arg4), (s32)(arg5));
    }
    return o2;
}

extern void *tl_04;

void * create__18TObjEneBalClawClawFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = TObjEneBalClawClaw__sub_80091C58((u8 *)(o2), (M2C_UNK)(o), (u8 *)(arg0));
    }
    return o2;
}

void *deleting_dtor__18TObjEneBalClawClawFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048F148;
        free_collision_body_parts(arg0);
        __dt__14TObjEneBalClawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
#define self ((u8 *)arg0)
M2C_UNK TObjEneBalClawClaw__ct(void *arg0) {
    M2C_FIELD(self, s32 *, 0) = lbl_805D2978;
    M2C_FIELD(self, s32 *, 0xDC) = M2C_FIELD(lbl_805D4F20, s32 *, 0x430);
    M2C_FIELD(self, u8 **, 0xD8) = (u8 *)lbl_8048F090;
    set_field_d8__10TObjPlayerFPvi(self, M2C_FIELD(self, u8 **, 0xD8));
    init_collision_body_parts(self, lbl_8048F11C, 1);
    M2C_FIELD(self, s32 *, 0x368) = 0;
    M2C_FIELD(self, u8 **, 0x350) = (u8 *)lbl_8048F100;
    bind_enemy_combat_stats(self, lbl_805D4F28, lbl_805D4F2C, lbl_805D4F30);
    TObjEneBalClawClaw__sub_80090824(self);
    M2C_FIELD(self, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(self, M2C_FIELD(self, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(self, M2C_FIELD(self, s16 *, 0xB8));
    M2C_FIELD(self, s16 *, 0x32C) = M2C_FIELD(self, s16 *, 0x2B8);
    M2C_FIELD(self, s16 *, 0x32E) = M2C_FIELD(self, s16 *, 0x2BA);
    M2C_FIELD(self, s16 *, 0x33E) = M2C_FIELD(self, s16 *, 0x32C);
    set_param__12TObjEneLappyFPvi(self, 0x26);
    VecCopy__FP3VecPC3Vec(self + 0x2FC, self + 0x38);
    M2C_FIELD(self, f32 *, 0x300) += lbl_805D96D0;
    reset_photon_effect__12TBoss3VoloptFPv(self);
    TObjPlayer__sub_80090418(self, 2);
    M2C_FIELD(self, s32 *, 0x3B8) = 0;
    M2C_FIELD(self, f32 *, 0x3BC) = TObjEneBalClawClaw__data_805D968C;
    M2C_FIELD(self, f32 *, 0x3AC) = lbl_805D9688;
    M2C_FIELD(self, f32 *, 0x3B0) = lbl_805D96D4;
    M2C_FIELD(self, f32 *, 0x3B4) = M2C_FIELD(self, f32 *, 0x3AC);
    clear_attack_flag__18TObjEneBalClawClawFPv(self);
    VecCopy__FP3VecPC3Vec(self + 0x290, (void *)VecCopy__FP3VecPC3Vec(self + 0x29C, self + 0x38));
    return ((VObj_18_b31a3c *)self)->m80();
}
#undef self
#pragma pop
u8 *TObjEneBalClawClaw__sub_80091B98(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 _w7) {
    TObjEneBalClaw__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80091B98_lbl_8048F148 *)lbl_8048F148).value;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg4;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg2, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg2, s16 *, 0x2A);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg5));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x50), (void *) (arg2 + 0x50));
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = arg6;
    TObjEneBalClawClaw__ct((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x3B8) = (s32) M2C_FIELD(arg2, s32 *, 0x3B8);
    M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) M2C_FIELD(arg2, f32 *, 0x3BC);
    M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) M2C_FIELD(arg2, f32 *, 0x3B4);
    TObjEneBalClawClaw__sub_80090798((void *) (arg0));
    return arg0;
}

typedef char RecoveredGlobal_80091C58_lbl_8048F148_size[sizeof(RecoveredGlobal_80091C58_lbl_8048F148) == 0x14C ? 1 : -1];
u8 *TObjEneBalClawClaw__sub_80091C58(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    TObjEneBalClaw__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80091C58_lbl_8048F148 *)lbl_8048F148).value;
    ((VObj_18_f05d67 *)(arg0))->m79(arg2);
    TObjEneBalClawClaw__ct((void *) (arg0));
    if (M2C_FIELD(arg2, s16 *, 0xA) != 0) {
        TObjEnemyCustom__sub_800C7860((void *) (arg0));
    }
    return arg0;
}

void on_attack_cooldown_expired__12TObjEneBeastFv(void) {  }
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0) {
    play_sound_effect(0x4003E431, arg0 + 0x38, 0, 0);
}
void render__12TObjEneBeastFPv(Obj_8009211C *o) {
    s32 drawMode;
    s32 fade;
    s32 cam;
    s32 doDraw;

    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    drawMode = o->m9(lbl_805D96E8, lbl_805D96EC, lbl_805D96F0);
    if (drawMode == 0) {
        return;
    }
    fade = 0;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        fade = (s32)&o->fades[cam];
        update_obstruction_fade((void *)fade);
        fade = updateFromCamera__15RenderFadeStateFPCf((void *)fade, &o->f2FC);
    }
    lbl_805D5660 = some_id_805c6f74;
    select_actor_lighting(o);
    set_global_param__8TObjFishFi(o->f24);
    push_matrix();
    translate_matrix(0, lbl_805D96D8, o->f380, lbl_805D96D8);
    post_translate_matrix(o->f38);
    rotate_matrix_y(0, o->f60);
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        draw_chunk_object(o->f34);
    } else {
        toggle_particle_effect__10TObjPlayerFv();
        doDraw = 1;
        if (fade != 0) {
            o->fades[cam].m6();
            if (toggle_flag_9__10TObjPlayerFPv(o) != 0) {
                doDraw = 0;
            }
        }
        if (doDraw != 0) {
            if (drawMode == 1) {
                draw__16TObjEneRe7BeruraFPv(o);
            } else {
                render_world_model__10TObjPlayerFPv(o);
            }
        }
        end_effect_render__13TParticleCtrlFv();
        if (fade != 0) {
            o->fades[cam].m7();
        }
    }
    pop_matrix();
    restore_scene_lighting();
    if (o->f326 >= 10 || o->f326 < 8) {
        Vec_8009211C v;
        v.x = lbl_805D96F4;
        v.y = lbl_805D96F8;
        v.z = lbl_805D96FC;
        render_with_position_override__10TObjPlayerFPvPvi(o, &v, 0);
    }
}
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0) {
    play_sound_effect(0x4003AB2D, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
}
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0) {
    play_sound_effect(0x4003A32E, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0) {
    play_sound_effect(0x4003A62F, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0) {
    play_sound_effect(0x4003A82C, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
}

void spawn_death_fire__12TObjEneBeastFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80091E08, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80091E08, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80091E08, sp10) == 0x8) ? 1 : -1];
    Stack_80091E08 stack;
    stack.sp8 = lbl_805D96D8;
    stack.spC = lbl_805D96DC;
    stack.sp10 = lbl_805D96E0 * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrix();
    vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    spawn_effect_at_ground__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x23));
    spawn_dead_spot_type2__10TObjPlayerFii((void *) (&stack.sp8), (int) (0xF));
}

void update_claw_trail__12TObjEneBeastFPv(Obj_80091EA4 *self) {
    Vec_80091EA4 dir;
    Vec_80091EA4 pos;
    u32 entry;
    s32 idx;
    VObj_80091EA4 *eff;
    if (self->frame < lbl_805D96E4) {
        switch (self->state) {
        case 3:
            entry = lookup_entry_by_value__10TObjPlayerFPvf(lbl_805D4F4C, self->frame);
            idx = 0;
            break;
        case 4:
            entry = lookup_entry_by_value__10TObjPlayerFPvf(lbl_805D4F50, self->frame);
            idx = 1;
            break;
        default:
            entry = 0;
            break;
        }
        if (entry != 0) {
            push_matrix();
            set_matrix_identity__10TObjPlayerFPv(0);
            post_translate_matrix(&self->pos);
            rotate_matrix_y(0, self->angle);
            mult_vec_array__10TObjPlayerFUii(0, entry, &pos, 2);
            pop_matrix();
            eff = self->effects[idx];
            if (eff != NULL) {
                eff->m4(&pos, &dir);
            }
        }
    }
}

void select_subtype__12TObjEneBeastFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x334);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x334) = 0;
    } else if (temp_r0 > 2) {
        M2C_FIELD(arg0, s32 *, 0x334) = 2;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x334);
    switch (temp_r0_2) {
    case 2:
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 0xB);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = 2;
        set_param__12TObjEneLappyFPvi(arg0, 0xA);
        return;
    default:
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 9);
        return;
    }
}
void update_appearance__12TObjEneBeastFPv(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
    default:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        } else {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
            set_indexed_flags((void *) (arg0), (int) (0), (int) (0x0A000000));
            obj_setFlags30((void *) (arg0), (int) (0x04000000));
            play_sound_effect(0x4003AB32, (s32) (arg0 + 0x38), 0, 0);
        }
        break;
    case 1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s32 *, 0x390) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
            obj_clearFlags30((void *) (arg0), (int) (0x04000000));
        }
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        break;
    }
    advance_animation_playback((void *) (arg0));
}

}
