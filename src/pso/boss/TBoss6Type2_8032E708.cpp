#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8032EAE4
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct Stack_8032FE50 {
    s32 sp8;
    s32 spC;
    f32 sp10;
    f32 sp14;
};

struct RecoveredGlobal_803300C8_lbl_80477404 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_803300C8_lbl_80477428 {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct Ent_8032FFC0 { s32 a; s32 next; s32 c; f32 d; };
struct Anim_8032FFC0 { s32 a; u32 count; };

struct O_8032FFC0 {
    u8 pad[0x3D4];
    s32 f3d4;
    s32 mode;
    Anim_8032FFC0 *anim;
    f32 t;
    f32 speed;
    f32 f3e8;
    f32 f3ec;
};

struct RecoveredGlobal_803300C8_lbl_804EDD94 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_8032FF24_lbl_804EDD94 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredFields_8032F174_arg0
{
  u8 unknown_0[0x3C];
  f32 field_3C;
  u8 unknown_40[0x340];
  s32 field_380;
  u8 unknown_384[0x84];
  u16 field_408;
};

#include "pso/boss/TBoss6Type2.h"
union MemberActionStorage_803301B8 { s32 words[3]; void (TBoss6Type2::*action)(); };

struct RecoveredGlobal_803301B8_lbl_804EF028 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

struct T_8032E748 { u8 pad[0x380]; s32 phase; };

struct T_8032EA10 { u8 pad[0x43C]; s32 arr[4]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct In_80330178 { s32 w[7]; };

struct S_80330178 { s32 a; s32 b; In_80330178 c; };

struct T_8032F2C4 { u8 pad[0x3B8]; f32 v[2]; };

struct V3_8032E7B4 { s32 x; s32 y; s32 z; };

struct O_8032E7B4 { u8 pad[0x38]; V3_8032E7B4 pos; u8 pad2[0x43C - 0x44]; u32 arr[4]; };

struct E_8032E7B4 { s32 a; s32 b; };

struct V3_8032F304 { f32 x; f32 y; f32 z; };

struct O_8032F304 { u8 pad[0x414]; s32 n; V3_8032F304 v[4]; s32 pad2; u8 mine[1]; };

struct V3_8032F360 { f32 x; f32 y; f32 z; };

struct O_8032F360 { u8 pad[0x410]; s32 z; s32 n; V3_8032F360 v[3]; };

struct V3_8032FB84 { f32 x; f32 y; f32 z; };

struct O_8032FB84 { u8 pad[0x38]; V3_8032FB84 pos; u8 pad2[0x60 - 0x44]; s32 f60; u8 pad3[0x378 - 0x64]; void *p378; u8 pad4[0x384 - 0x37C]; s32 f384; };

struct V3_8032E834 { f32 x; f32 y; f32 z; };

struct E_8032E834 { s32 a; s32 b; };

struct O_8032E834 { u8 pad[0x38]; V3_8032E834 pos; u8 pad2[0x43C - 0x44]; u32 h[4]; V3_8032E834 v[4]; };

struct V3_8032F5FC { f32 x; f32 y; f32 z; };

struct O_8032F5FC { u8 pad[0x38]; V3_8032F5FC pos; u8 pad2[0x5C - 0x44]; s32 f5c; s32 f60; u8 pad3[0x378 - 0x64]; s32 f378; u8 pad4[0x3C4 - 0x37C]; f32 f3c4; };

struct Vec_8032EF34 { f32 x, y, z; };

struct Ent_8032FCA4 { s16 f0; s16 v[5]; };

struct Obj_8032FCA4 { u8 pad[0x31C]; Ent_8032FCA4 *ent; u8 pad2[0x394 - 0x320]; u8 local[0x20]; s16 max; s16 min; };

struct T_8032E748;
struct O_8032E7B4;
struct Obj_8032E8DC { u8 pad[0x38]; u8 sw[0x340]; s32 f378; u8 pad2[0x3C8 - 0x37C]; s32 f3C8; };

struct V3_8032EBB4 { f32 x; f32 y; f32 z; };

struct O_8032EBB4 { u8 pad[0x38]; V3_8032EBB4 pos; u8 pad2[0x378 - 0x44]; void *p378; };

struct V3_8032F034 { f32 x; f32 y; f32 z; };

struct O_8032F034 {
    u8 pad[0x60]; s32 f60;
    u8 pad2[0x3B8 - 0x64]; f32 f3b8;
    u8 pad3[0x408 - 0x3BC]; u16 f408;
    u8 pad4[0x44C - 0x40A]; V3_8032F034 home;
};

typedef struct Vec_8032ECE0 { f32 x; f32 y; f32 z; } Vec_8032ECE0;

typedef struct Vec_8032F690 { f32 x; f32 y; f32 z; } Vec_8032F690;

typedef struct Vec_8032F418 { f32 x; f32 y; f32 z; } Vec_8032F418;

typedef s32 M2C_UNK;
struct Vec_8032EF34;
struct V3_8032F824 { f32 x; f32 y; f32 z; };

struct O_8032F824 {
    u8 pad[0x38];
    V3_8032F824 pos;
    u8 pad2[0x5C - 0x44];
    s32 f5c;
    s32 f60;
    u8 pad3[0x378 - 0x64];
    void *p378;
    u8 pad4[0x384 - 0x37C];
    s32 f384;
};

struct T_8033053C { u8 pad[4]; };
typedef void (T_8033053C::*Fn_8033053C)();
struct Ent_8033053C { u8 pad[0x18]; Fn_8033053C fn; };
#pragma readonly_strings on
extern "C" {
const char *lbl_805D4220 = "TBoss6Mag";
extern const E_8032E7B4 lbl_804773BC[4] = { {555, -1}, {556, -1}, {537, -1}, {542, 0} };
extern const u32 lbl_804773DC[8] = { 3, 0, 0, 0, 0xFFFFFFFF, 0, 0, 0 };
extern const u32 lbl_804773FC[2] = { 0xFFFF0000, 1 };
extern const RecoveredGlobal_803300C8_lbl_80477404 lbl_80477404 = { 0 };
extern const RecoveredGlobal_803300C8_lbl_80477428 lbl_80477428 = { 0, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x3D, 0x88, 0x88, 0x89 } };
extern const s32 lbl_80477444[3] = { -0x2000, 0, 0x2000 };
extern const char lbl_80477450[8] = { 0 };
}
struct P_80330240 { s32 a; s32 b; };
struct O_80330240 { u8 pad[0x388]; s32 f388; };
extern "C" {
void *fn_8033068C(void *arg0, s16 arg1);
void update_main__11TBoss6Type2FPv(u8 *arg0);
void TObjPlayer__sub_8033051C(void* p);
f32 get_conditional_rate__10TObjPlayerFPv(void *arg0);
f32 fn_80330240(O_80330240 *arg0, void *arg1, P_80330240 *arg2, void *arg3, void *arg4, void *arg5);
void spawn_ground_effect__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_8033030C(u8 *arg0);
void TLobby__sub_801A1FD8();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_80011010();
void TObjPlayer__sub_800111D8();
void TObjPlayer__sub_80014830();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_8001488C();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014898();
void apply_slow_status__10TObjPlayerFPv();
void update_shock_clock__10TObjPlayerFPv();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void TObjPlayer__sub_80019568();
void TObjPlayer__sub_800F65D0();
void TObjPlayer__sub_800F673C();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_defense_stat_status__10TObjPlayerFv();
void apply_knockback_from_attacker();
void apply_movement_ailment__10TObjPlayerFv();
void apply_object_set_data();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_set_data__9TObjEnemyFPvPv();
void apply_shock_status__10TObjPlayerFv();
void apply_switch_attack__10TObjPlayerFi();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void call_vt78__10TObjPlayerFPv();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void fn_800F5D80();
void get_actor_body_center();
void get_actor_level_index();
void get_enemy_name__14TObjEnePanarmsFPv();
void get_pos__10TObjPlayerFii();
void has_flag_0x800__10TObjPlayerFPv();
void is_actor_cadence_frame();
void is_target_in_attack_range__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void render_actor_shadows_default();
void reset_actor_action_state();
void reset_pose__10TObjPlayerFPv();
void roll_physical_accuracy__10TObjPlayerFv();
void select_melee_contact_body__10TObjPlayerFv();
void test_flag30_512__10TObjPlayerFPv();
void test_flag_1000__10TObjPlayerFPv();
void test_flag_256__10TObjPlayerFPv();
void trigger_switch_attack__10TObjPlayerFi();
void try_start_action__10TObjPlayerFPvii();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility();
void update_poison_status__10TObjPlayerFv();
void *lbl_804EDD68[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41f00000,
    (void *)0x0, (void *)0x0, (void *)0x807b, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
Ent_8032FFC0 lbl_804EDD94[5] = {
    {0x0, 0x0, 0x36, 0.8f},
    {0x0, 0x1, 0x31, 0.8f},
    {0x2, 0x3, 0x3, 0.4f},
    {0x0, 0x3, 0x32, 0.4f},
    {0x2, 0x0, 0xc, 0.5f},
};
__declspec(section ".data") void *lbl_804EDDE4[2] = {
    (void *)0x0, (void *)0x0,
};
void *lbl_804EDDEC[83] = {

    (void *)0x0, (void *)0x0, (void *)fn_8033068C, (void *)update_main__11TBoss6Type2FPv,
    (void *)TObjPlayer__sub_8033051C, (void *)render_actor_shadows_default, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data,
    (void *)reset_actor_action_state, (void *)get_actor_body_center, (void *)update_object_view_visibility, (void *)classify_actor_view_detail,
    (void *)get_enemy_name__14TObjEnePanarmsFPv, (void *)TObjPlayer__sub_80019568, (void *)add_actor_exp, (void *)TObjPlayer__sub_800111D8,
    (void *)get_actor_level_index, (void *)update_actor_ground_y, (void *)TObjPlayer__sub_80018E6C, (void *)is_actor_cadence_frame,
    (void *)select_melee_contact_body__10TObjPlayerFv, (void *)calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)get_conditional_rate__10TObjPlayerFPv, (void *)fn_80330240,
    (void *)receive_weapon_special_attack__10TObjPlayerFv, (void *)apply_knockback_from_attacker, (void *)try_start_action__10TObjPlayerFPvii, (void *)roll_physical_accuracy__10TObjPlayerFv,
    (void *)TObjPlayer__sub_80011010, (void *)TObjPlayer__sub_8000FF3C, (void *)is_target_in_attack_range__10TObjPlayerFv, (void *)test_flag_256__10TObjPlayerFPv,
    (void *)test_flag30_512__10TObjPlayerFPv, (void *)has_flag_0x800__10TObjPlayerFPv, (void *)test_flag_1000__10TObjPlayerFPv, (void *)update_poison_status__10TObjPlayerFv,
    (void *)update_action_hold_status__10TObjPlayerFv, (void *)update_action_timer__10TObjPlayerFPv, (void *)update_flag30_timer__10TObjPlayerFPv, (void *)update_movement_status__10TObjPlayerFv,
    (void *)update_shock_clock__10TObjPlayerFPv, (void *)update_attack_stat_status, (void *)update_defense_stat_status, (void *)TObjPlayer__sub_800172CC,
    (void *)apply_poison_status__10TObjPlayerFv, (void *)apply_paralysis__10TObjPlayerFv, (void *)apply_slow_status__10TObjPlayerFPv, (void *)apply_confusion_status__10TObjPlayerFv,
    (void *)apply_movement_ailment__10TObjPlayerFv, (void *)apply_shock_status__10TObjPlayerFv, (void *)clear_harmful_statuses__10TObjPlayerFv, (void *)apply_attack_stat_status__10TObjPlayerFv,
    (void *)apply_defense_stat_status__10TObjPlayerFv, (void *)cure_poison_ailment, (void *)cure_paralysis__10TObjPlayerFv, (void *)clear_all_status_effects,
    (void *)apply_action_hold_status, (void *)apply_anti_technique__10TObjPlayerFv, (void *)TObjPlayer__sub_80014898, (void *)TObjPlayer__sub_80014894,
    (void *)TObjPlayer__sub_80014890, (void *)TObjPlayer__sub_8001488C, (void *)spawn_ground_effect__10TObjPlayerFPv, (void *)TObjPlayer__sub_8033030C,
    (void *)reset_pose__10TObjPlayerFPv, (void *)TObjPlayer__sub_80014840, (void *)TObjPlayer__sub_80014838, (void *)TObjPlayer__sub_80014830,
    (void *)get_pos__10TObjPlayerFii, (void *)apply_switch_attack__10TObjPlayerFi, (void *)enemy_spawn_jellen_effect, (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect, (void *)TObjPlayer__sub_80010A80, (void *)TObjPlayer__sub_800F65D0, (void *)fn_80010EC8,
    (void *)fn_80010EC4, (void *)fn_80010EC0, (void *)fn_80010EBC, (void *)call_vt78__10TObjPlayerFPv,
    (void *)TObjPlayer__sub_800F673C, (void *)apply_set_data__9TObjEnemyFPvPv, (void *)fn_800F5D80,
};

}

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
f32 vec3_add_to(void *, int);
f32 vector_length(void *);
f32 subtract_vector(void *, int);
f32 normalize_vector(void *);
void enforce_min_distance__11TBoss6Type2FPv(u8 *arg0);
void TBoss6Type2__sub_8032F5C4(void *arg0);
void update_segment_angles__11TBoss6Type2FPv(void *arg0);
M2C_UNK apply_damage__11TBoss6Type2FPvi(s32, s32);
void sync_hp_apply_damage__11TBoss6Type2FPv(void *arg0);
void sync_hp__11TBoss6Type2FPv(void *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK set_draw_callback_list__8TObjFishFPv(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_model_blend_motion(s32, s32 *, f32);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
void draw_model_motion_blend__8TObjFishFPv(void *arg0);
s32 get_bml_motion(int, int);

extern Ent_8032FFC0 lbl_804EDD94[];
void TBoss6Type2__sub_803300C8(u8 *arg0);
void copy_state__11TBoss6Type2FPvPv(void* p, void* q);
s32 get_bml_motion(int, int);
extern Ent_8032FFC0 lbl_804EDD94[];
void TBoss6Type2__sub_8032FF24(u8 *arg0, s32 arg1);
void TBoss6Type2__sub_8032FD78(void *arg0);
s32 request_destroy__11TBoss4Type2FUi(int);
void TBoss6Type2__sub_8032E770(s32 arg0, s32 arg1);
void TBoss6Type2__sub_8032E770(s32 arg0, s32 arg1);
void update_all_parts__11TBoss6Type2FPv(s32 arg0);
s32 TBoss6Type2__sub_8032F174(u8 *arg0);
void TBoss6Type2__sub_8032FF24(u8 *arg0, s32 arg1);
extern Ent_8033053C lbl_804EF028[];
void set_action__11TBoss6Type2FPvi(u8 *arg0, s32 arg1);
s32 TBoss6Type2__sub_8032E748(T_8032E748 *self);
void TBoss6Type2__sub_8032EA10(T_8032EA10 *self);
int TBoss6Type2__sub_80330178(s32 _w0, s32 _w1);
extern void *lbl_804EDDE4[];
void TBoss6Type2__sub_8032F3E0(s32 i, void *pts, s32 n);
void TBoss6Type2__sub_8032F2F0(void* p, void* q);

void TBoss6Type2__sub_8032F2C4(T_8032F2C4 *self);
u32 create_particle_emitter(void *, s32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);

void TBoss6Type2__sub_8032E7B4(O_8032E7B4 *arg0, s32 arg1);
void TBoss6MagMine__sub_80369598(void *, void *);
void TBoss6Type2__sub_8032F304(O_8032F304 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void set_action__11TBoss6Type2FPvi(u8 *arg0, s32 arg1);
void TBoss6Type2__sub_8032F360(O_8032F360 *arg0, V3_8032F360 *arg1, s32 arg2);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss6Type2__sub_802BD378(void *, s32, void *, void *);
s32 TBoss6Type2__sub_8032FB84(O_8032FB84 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);

void TBoss6Type2__sub_8032E834(O_8032E834 *arg0);
s32 angle_difference_abs(s32, s32);
s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1);
s32 TBoss6Type2__sub_8032EA34(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 get_state__11TBoss6Type2FPv(int);
void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
f32 vec3_add_to(void *, int);
void TBoss6Type2__sub_8032F5FC(O_8032F5FC *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TBoss5GryphonLightningWing__sub_80324CEC(f32);
f32 vector_length(void *);
f32 normalize_vector(void *);

s32 calc_dir_angles__11TBoss6Type2FPvPvPvPv(void *arg0, s32 *arg1, s32 *arg2, Vec_8032EF34 *arg3);
void copy_entry__6TLobbyFPvPv(void *, void *);
void update_segment_angles__11TBoss6Type2FPv(void *arg0);
void TBoss6Type2__sub_8032FCA4(Obj_8032FCA4 *arg0);
void spawn_particle_effect_with_flags(void *, s32, s32);
s32 get_state__11TBoss6Type2FPv(int);
s32 is_active__11TBoss6Type2FPv(int);
s32 TBoss6Type2__sub_8032E748(T_8032E748 *self);
void TBoss6Type2__sub_8032E770(s32 arg0, s32 arg1);
void TBoss6Type2__sub_8032E7B4(O_8032E7B4 *arg0, s32 arg1);
void TBoss6Type2__sub_8032E8DC(Obj_8032E8DC *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss6Type2__sub_802BD2D0(void *, void *, void *);
f32 vector_length(void *);
f32 subtract_vector(void *, int);
f32 normalize_vector(void *);
void TBoss6Type2__sub_8032EBB4(O_8032EBB4 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
u8 *get_player_by_client_id(s32);
f32 sin_table_lookup(void *);
f32 cos_table_lookup(void *);
f32 xyz_distance(void *, void *);

s32 is_target_in_front_range__11TBoss6Type2FPv(O_8032F034 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void copy_pos_59c__11TBoss6Type2Fii(void *, void *);
f32 vec3_add_to(void *, int);
f32 vector_length(void *);
f32 subtract_vector(void *, int);
f32 normalize_vector(void *);
void push_out_from_target__11TBoss6Type2FPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 approach_angle_limited(s32, s32, s32);
s32 project_actor_to_ground(void *, void *, s32);
u8 *get_player_by_client_id(s32);
s32 get_state__11TBoss6Type2FPv(int);
s32 TBoss6Type2__sub_8032EA34(void *arg0, s32 arg1, s32 arg2, s32 arg3);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
s32 calc_dir_angles__11TBoss6Type2FPvPvPvPv(void *arg0, s32 *arg1, s32 *arg2, Vec_8032EF34 *arg3);
f32 sin_table_lookup(void *);
f32 cos_table_lookup(void *);
f32 subtract_vector(void *, int);
void turn_toward_target__11TBoss6Type2FPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss6Rock__sub_80353C60(void *, f32);
void TBoss6Type2__sub_80356E88(s32, void *, s32);
s32 rand(void);
f32 sin_table_lookup(void *);
f32 cos_table_lookup(void *);

void spawn_falling_rocks__11TBoss6Type2FPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 approach_angle_limited(s32, s32, s32);
s32 project_actor_to_ground(void *, void *, s32);
void TBoss6Type2__sub_802BD378(void *, s32, void *, void *);
s32 TBoss6Type2__sub_8032EA34(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
s32 calc_dir_angles__11TBoss6Type2FPvPvPvPv(void *arg0, s32 *arg1, s32 *arg2, Vec_8032EF34 *arg3);
f32 sin_table_lookup(void *);
f32 cos_table_lookup(void *);
f32 vec3_add_to(void *, int);
f32 vector_length(void *);
f32 subtract_vector(void *, int);
f32 normalize_vector(void *);

s32 fly_toward_target__11TBoss6Type2FPv(O_8032F824 *o);
}

extern "C" {

void TBoss6Type2__sub_8032E708(void* p, s32 v);
s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1);
void TBoss6Type2__sub_8032F2F0(void* p, void* q);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v);
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v);
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2);
void update_rotation_ramp__11TBoss6Type2FPv(void *arg0);
f32 sin_table_lookup(void *);
f32 cos_table_lookup(void *);
s32 TLobby__sub_800C6C10();
f32 get_random_float__8TObjFishFv(f32);
s32 get_rotation_timer__11TBoss6Type2FPv(u32);

void TBoss6Type2__sub_8032E708(void* p, s32 v) { *(s32*)((char*)p + 0x40c) = v; }
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v) { *(s16*)((char*)p + 0x408) = v; }
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0x2e4) = a1; *(void**)((char*)p + 0x390) = a2; update_segment_angles__11TBoss6Type2FPv((void *)(p)); }
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v) { *(s32*)((char*)p + 0x37c) = v; }

s32 TBoss6Type2__sub_8032E748(T_8032E748 *self) {
    switch (self->phase) {
    case 4:
    case 5:
        return 0;
    }
    return 1;
}

#pragma push
#pragma opt_common_subs off
void TBoss6Type2__sub_8032E770(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    temp_r3 = M2C_FIELD(temp_r31, u32 *, 0x43C);
    if (temp_r3 != 0U) {
        request_destroy__11TBoss4Type2FUi((int) (temp_r3));
        M2C_FIELD(temp_r31, u32 *, 0x43C) = 0U;
    }
}
#pragma pop

void TBoss6Type2__sub_8032E7B4(O_8032E7B4 *arg0, s32 arg1) {
    if (arg0->arr[arg1] == 0) {
        V3_8032E7B4 v = arg0->pos;
        arg0->arr[arg1] = create_particle_emitter(&v, lbl_804773BC[arg1].a);
        if (arg0->arr[arg1] != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)arg0->arr[arg1], 0x40);
        }
    }
}

void TBoss6Type2__sub_8032E834(O_8032E834 *arg0) {
    s32 i;
    E_8032E834 *e = ((E_8032E834 *)&lbl_804773BC);
    for (i = 0; i < 4; i++) {
        V3_8032E834 p = arg0->pos;
        E_8032E834 *ep = &e[i];
        if (arg0->h[i] != 0) {
            if (ep->b >= 0) {
                VecCopy__FP3VecPC3Vec(&p, &arg0->v[ep->b]);
            }
            copy_pos__11TNowLoadingFPvPv(arg0->h[i], &p);
        }
    }
}

void TBoss6Type2__sub_8032E8DC(Obj_8032E8DC *arg0) {
    switch (get_state__11TBoss6Type2FPv(arg0->f378)) {
    case 14:
    case 24:
    case 25:
    case 26:
        if (TBoss6Type2__sub_8032E748((T_8032E748 *)arg0) != 0) {
            TBoss6Type2__sub_8032E7B4((O_8032E7B4 *)arg0, 1);
        } else {
            TBoss6Type2__sub_8032E770((s32)arg0, 1);
        }
        TBoss6Type2__sub_8032E770((s32)arg0, 2);
        break;
    case 5:
    case 9:
    case 10:
    case 11:
        TBoss6Type2__sub_8032E770((s32)arg0, 1);
        TBoss6Type2__sub_8032E7B4((O_8032E7B4 *)arg0, 2);
        break;
    default:
        TBoss6Type2__sub_8032E770((s32)arg0, 1);
        TBoss6Type2__sub_8032E770((s32)arg0, 2);
        break;
    }
    if (!(arg0->f3C8 & 0x1F) && is_active__11TBoss6Type2FPv(arg0->f378) != 0) {
        spawn_particle_effect_with_flags(arg0->sw, 0x224, 0x2040);
    }
}

void update_all_parts__11TBoss6Type2FPv(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        TBoss6Type2__sub_8032E770(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

void TBoss6Type2__sub_8032EA10(T_8032EA10 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

s32 TBoss6Type2__sub_8032EA34(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 t;
    TBoss6Type2__sub_8032EAB8(arg0, arg3);
    if (angle_difference_abs(arg2, arg1) <= arg3) {
        return arg2;
    }
    t = arg1 + TBoss6Type2__sub_8032EAB8(arg0, arg3);
    if (angle_difference_abs(arg2, t) <= arg3) {
        return arg2;
    }
    return t;
}

s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) == 0) {
        return arg1;
    }
    return -arg1;
}

f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0) {
        return -farg0;
    }
    return farg0;
}

typedef struct Stack_8032EAE4 Stack_8032EAE4;
void enforce_min_distance__11TBoss6Type2FPv(u8 *arg0) {
  Stack_8032EAE4 stack;
  f32 temp_f1;
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0x37C)))) != 0U)
  {
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    subtract_vector((void *) (&stack.sp8), (int) ((*((u32 *) (((s8 *) arg0) + 0x37C))) + 0x38));
    temp_f1 = vector_length((void *) (&stack.sp8));
    if (!(temp_f1 >= (4e+01f)))
    {
      if (temp_f1 <= (1e-05f))
      {
        stack.sp8 = apply_direction_sign__11TBoss6Type2FPvf((void *) arg0, (f32) (1.0f));
      }
      normalize_vector((void *) (&stack.sp8));
      stack.sp8 *= (4e+01f);
      stack.spC = (0.0f);
      stack.sp10 *= (4e+01f);
      vec3_add_to((void *) (&stack.sp8), (int) ((*((u32 *) (((s8 *) arg0) + 0x37C))) + 0x38));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    }
  }
}

void TBoss6Type2__sub_8032EBB4(O_8032EBB4 *arg0) {
    V3_8032EBB4 v;
    V3_8032EBB4 pts[2];
    s32 i;
    f32 len;
    f32 f;
    if (arg0->p378 != 0) {
        TBoss6Type2__sub_802BD2D0(arg0->p378, &pts[0], &pts[1]);
        for (i = 0; i < 2; i++) {
            VecCopy__FP3VecPC3Vec(&v, &pts[i]);
            ((f32 (*)(void *, void *))subtract_vector)(&v, &arg0->pos);
            if (v.y < 0.0f || v.y > 50.0f) {
                continue;
            }
            v.y = 0.0f;
            len = vector_length(&v);
            if (len > 50.0f) {
                continue;
            }
            if (len <= 0.00001f) {
                v.x = 1.0f;
            }
            normalize_vector(&v);
            f = 50.0f - len;
            if (f > 1.0f) {
                f *= 0.25f;
            }
            v.x *= f;
            v.z *= f;
            ((f32 (*)(void *, void *))subtract_vector)(&arg0->pos, &v);
        }
    }
}

void push_out_from_target__11TBoss6Type2FPv(u8 *arg0) {
    Vec_8032ECE0 b;
    Vec_8032ECE0 a;
    Vec_8032ECE0 c;
    Vec_8032ECE0 d;
    f32 dist;
    f32 len;
    if (M2C_FIELD(arg0, void **, 0x378) == NULL) {
        return;
    }
    copy_pos_59c__11TBoss6Type2Fii(M2C_FIELD(arg0, void **, 0x378), &a);
    VecCopy__FP3VecPC3Vec(&b, arg0 + 0x38);
    ((f32 (*)(void *, void *))subtract_vector)(&b, &a);
    len = vector_length(&b);
    if (len >= (5e+01f)) {
        return;
    }
    if (len <= (1e-05f)) {
        b.x = (1.0f);
    }
    normalize_vector(&b);
    b.x *= (5e+01f);
    b.y *= (5e+01f);
    b.z *= (5e+01f);
    ((f32 (*)(void *, void *))vec3_add_to)(&b, &a);
    VecCopy__FP3VecPC3Vec(&c, arg0 + 0x38);
    ((f32 (*)(void *, void *))subtract_vector)(&c, arg0 + 0x44);
    dist = vector_length(&c);
    VecCopy__FP3VecPC3Vec(&d, &b);
    ((f32 (*)(void *, void *))subtract_vector)(&d, arg0 + 0x44);
    len = vector_length(&d);
    if (dist <= (1e-05f) || len <= (1e-05f)) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &b);
        return;
    }
    normalize_vector(&c);
    normalize_vector(&d);
    ((f32 (*)(void *, void *))vec3_add_to)(&d, &c);
    if (vector_length(&d) <= (1e-05f)) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &b);
        return;
    }
    normalize_vector(&d);
    d.x *= dist;
    d.y *= dist;
    d.z *= dist;
    ((f32 (*)(void *, void *))vec3_add_to)(&d, arg0 + 0x44);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, &d);
}

void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f31 = -sin_table_lookup((void *) (arg3));
    temp_f30 = (1.0f) - get_random_float__8TObjFishFv((f32) (temp_f31));
    M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_f30 * sin_table_lookup((void *) (arg2)));
    M2C_FIELD(arg1, f32 *, 4) = temp_f31;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f30 * cos_table_lookup((void *) (arg2)));
}

typedef struct RecoveredFields_8032F174_arg0 RecoveredFields_8032F174_arg0;

s32 calc_dir_angles__11TBoss6Type2FPvPvPvPv(void *arg0, s32 *arg1, s32 *arg2, Vec_8032EF34 *arg3) {
    Vec_8032EF34 v;
    VecCopy__FP3VecPC3Vec(&v, arg3);
    if (vector_length(&v) <= (1e-05f)) {
        return 0;
    }
    normalize_vector(&v);
    if (v.y < (-0.99999f)) {
        *arg1 = 0;
        *arg2 = 0x7FFF;
        return 1;
    }
    if (v.y > (0.99999f)) {
        *arg1 = 0;
        *arg2 = -0x7FFF;
        return 1;
    }
    *arg1 = (10430.38043493439) * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
    *arg2 = (10430.38043493439) * TBoss5GryphonLightningWing__sub_80324CEC(-v.y);
    return 1;
}

#pragma push
#pragma fp_contract on
s32 is_target_in_front_range__11TBoss6Type2FPv(O_8032F034 *arg0) {
    u8 *p = 0;
    if (arg0->f408 != 0xFFFF) {
        p = get_player_by_client_id(arg0->f408);
    }
    if (p == 0) {
        return 0;
    }
    V3_8032F034 a;
    VecCopy__FP3VecPC3Vec(&a, p + 0x38);
    a.y = 0.0f;
    V3_8032F034 b = arg0->home;
    if (0.0f == arg0->f3b8) {
        if (angle_difference_abs(arg0->f60, (s32)((10430.38043493439) * get_ad_end_text_start__10TObjPlayerFv(a.x - b.x, a.z - b.z))) > 0x2000) {
            return 0;
        }
    }
    V3_8032F034 c;
    VecCopy__FP3VecPC3Vec(&c, &b);
    c.x += 90.0f * sin_table_lookup((void *)arg0->f60);
    c.y = 0.0f;
    c.z += 90.0f * cos_table_lookup((void *)arg0->f60);
    if (xyz_distance(&c, &a) <= 100.0f) {
        return 1;
    }
    return 0;
}
#pragma pop

s32 TBoss6Type2__sub_8032F174(u8 *arg0) {
  if (((((RecoveredFields_8032F174_arg0 *) arg0)->field_380 == 2) && (((RecoveredFields_8032F174_arg0 *) arg0)->field_408 != ((-1) & 0xFFFF))) && (((RecoveredFields_8032F174_arg0 *) arg0)->field_3C <= (75.0f)))
  {
    return 1;
  }
  return 0;
}

void update_rotation_ramp__11TBoss6Type2FPv(void *arg0) {
    if ((TBoss6Type2__sub_8032F174((u8 *)(arg0)) == 0) || (is_target_in_front_range__11TBoss6Type2FPv((O_8032F034 *)(arg0)) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (0.0f);
        M2C_FIELD(arg0, f32 *, 0x3B8) += (-0.06666667f);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) < (0.0f)) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (0.0f);
        }
    } else if ((1.0f) == M2C_FIELD(arg0, f32 *, 0x3B8)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) += (0.033333335f);
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > (1.0f)) {
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (1.0f);
        }
        if ((1.0f) == M2C_FIELD(arg0, f32 *, 0x3BC)) {
            if (TLobby__sub_800C6C10() != 0) {
                u32 tmp378 = (u32) M2C_FIELD(arg0, u32 *, 0x378);
                if (tmp378 != 0U) {
                    if (get_rotation_timer__11TBoss6Type2FPv(tmp378) == 0) {
                        spawn_falling_rocks__11TBoss6Type2FPv((u8 *)(arg0));
                    }
                }
            }
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (0.0f);
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (0.0f);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (0.0f);
        M2C_FIELD(arg0, f32 *, 0x3B8) += (0.06666667f);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) > (1.0f)) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (1.0f);
        }
    }
}

void TBoss6Type2__sub_8032F2C4(T_8032F2C4 *self) {
    TBoss6Type2__sub_8032F2F0((void*)(self->v), (void*)(lbl_80477450));
}

void TBoss6Type2__sub_8032F2F0(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

void TBoss6Type2__sub_8032F304(O_8032F304 *arg0) {
    void *m = arg0->mine;
    s32 i;
    for (i = 0; i < arg0->n; i++) {
        TBoss6MagMine__sub_80369598(m, &arg0->v[i]);
    }
}

void TBoss6Type2__sub_8032F360(O_8032F360 *arg0, V3_8032F360 *arg1, s32 arg2) {
    s32 i;
    s32 n = arg2;
    arg0->z = 0;
    if (n > 3) {
        n = 3;
    }
    for (i = 0; i < n; i++) {
        VecCopy__FP3VecPC3Vec(&arg0->v[i], &arg1[i]);
    }
    arg0->n = n;
    set_action__11TBoss6Type2FPvi((u8 *)arg0, 3);
}

void TBoss6Type2__sub_8032F3E0(s32 i, void *pts, s32 n) {
    void *p = lbl_804EDDE4[i];
    if (p != 0) {
        TBoss6Type2__sub_8032F360((O_8032F360 *)((void *)(p)), (V3_8032F360 *)((void *)(pts)), (s32)((s32)(n)));
    }
}

#pragma push
#pragma fp_contract on
void spawn_falling_rocks__11TBoss6Type2FPv(u8 *arg0) {
    Vec_8032F418 pts[3];
    Vec_8032F418 *p;
    s32 i;
    s32 ang;
    f32 r;
    s32 d;
    for (i = 0; i < 3; i++) {
        ang = M2C_FIELD(arg0, s32 *, 0x60) + lbl_80477444[i] + (s32)((4096.0f) * ((0.5f) - (3.0517578e-05f) * (f32)rand()));
        r = (4e+01f) * ((3.0517578e-05f) * (f32)rand()) + (8e+01f);
        p = &pts[i];
        VecCopy__FP3VecPC3Vec(p, arg0 + 0x44C);
        p->x = r * ((f32 (*)(s32))sin_table_lookup)(ang) + p->x;
        p->y = (0.0f);
        p->z = r * ((f32 (*)(s32))cos_table_lookup)(ang) + p->z;
        TBoss6Rock__sub_80353C60(p, (1e+01f));
    }
    TBoss6Type2__sub_80356E88(M2C_FIELD(arg0, s32 *, 0x384), pts, 3);
}
#pragma pop

void TBoss6Type2__sub_8032F5C4(void *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4 & ~0xA00);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s32 *, 0x38C);
    sync_hp__11TBoss6Type2FPv((void *)((s32)((s32) arg0)));
}

void TBoss6Type2__sub_8032F5FC(O_8032F5FC *arg0) {
    V3_8032F5FC v;
    f32 k;
    compute_random_dir_vec__11TBoss6Type2FiPvii((s32)arg0, (u8 *)&v, arg0->f60, arg0->f5c);
    k = (1.3333334f);
    if (get_state__11TBoss6Type2FPv(arg0->f378) == 0xE) {
        k *= arg0->f3c4;
    }
    v.x = v.x * k;
    v.y = v.y * k;
    v.z = v.z * k;
    vec3_add_to(&arg0->pos, (int)&v);
}

#pragma push
#pragma fp_contract on
struct Vec_8032EF34;
void turn_toward_target__11TBoss6Type2FPv(u8 *arg0) {
    Vec_8032F690 v;
    s32 a;
    s32 b;
    s32 turn;
    u8 *p;
    u16 id;
    p = NULL;
    id = M2C_FIELD(arg0, u16 *, 0x408);
    if (id != 0xFFFF) {
        p = ((u8 *(*)(u16))get_player_by_client_id)(id);
    }
    if (p == NULL) {
        if (M2C_FIELD(arg0, u8 **, 0x378) == NULL) {
            VecCopy__FP3VecPC3Vec(&v, arg0 + 0x50);
        } else {
            s32 ang;
            u8 *t;
            ang = (s32)((12288.0f) * apply_direction_sign__11TBoss6Type2FPvf(arg0, (1.0f)) + (f32)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x378), s32 *, 0x60));
            t = M2C_FIELD(arg0, u8 **, 0x378);
            VecCopy__FP3VecPC3Vec(&v, t + 0x38);
            v.x += (5e+01f) * ((f32 (*)(s32))sin_table_lookup)(ang);
            v.z += (5e+01f) * ((f32 (*)(s32))cos_table_lookup)(ang);
        }
        v.y = (3e+01f);
    } else {
        VecCopy__FP3VecPC3Vec(&v, p + 0x38);
        v.y = (3e+01f);
    }
    if (project_actor_to_ground(arg0, &v, 0) != 0) {
        v.y += (3e+01f);
    }
    ((f32 (*)(void *, void *))subtract_vector)(&v, arg0 + 0x38);
    turn = 0x1B4;
    if (get_state__11TBoss6Type2FPv(M2C_FIELD(arg0, s32 *, 0x378)) == 0xE) {
        turn = 0x6D0;
    }
    calc_dir_angles__11TBoss6Type2FPvPvPvPv((void *)(arg0), (s32 *)(&a), (s32 *)(&b), (Vec_8032EF34 *)((struct Vec_8032EF34 *)&v));
    M2C_FIELD(arg0, s32 *, 0x60) = TBoss6Type2__sub_8032EA34(arg0, M2C_FIELD(arg0, s32 *, 0x60), a, turn);
    M2C_FIELD(arg0, s32 *, 0x5C) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x5C), b, 0x1B4);
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 fly_toward_target__11TBoss6Type2FPv(O_8032F824 *o) {
    V3_8032F824 tgt;
    V3_8032F824 d;
    V3_8032F824 h;
    V3_8032F824 a;
    V3_8032F824 r;
    s32 t;
    s32 rx;
    s32 ry;
    f32 len;
    if (o->p378 == 0) {
        return 0;
    }
    TBoss6Type2__sub_802BD378(o->p378, o->f384, &tgt, &t);
    tgt.y += (35.0f);
    VecCopy__FP3VecPC3Vec(&d, &tgt);
    subtract_vector(&d, (int)&o->pos);
    if (!(vector_length(&d) > (3e+01f))) {
        d.x *= (0.25f);
        d.y *= (0.25f);
        d.z *= (0.25f);
        if (vector_length(&d) > (4.4444447f)) {
            normalize_vector(&d);
            d.x *= (4.4444447f);
            d.y *= (4.4444447f);
            d.z *= (4.4444447f);
        }
        vec3_add_to(&o->pos, (int)&d);
        o->f60 = TBoss6Type2__sub_8032EA34(o, o->f60, t, 0x5B0);
        o->f5c = approach_angle_limited(o->f5c, 0, 0x5B0);
        return 1;
    }
    VecCopy__FP3VecPC3Vec(&h, &d);
    h.y = (0.0f);
    len = vector_length(&h);
    if (!(len < (1e+02f))) {
        f32 dy;
        o->f60 = TBoss6Type2__sub_8032EA34(o, o->f60, (s32)((10430.38043493439) * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z)), 0x5B0);
        o->f5c = approach_angle_limited(o->f5c, 0, 0x5B0);
        VecCopy__FP3VecPC3Vec(&a, &o->pos);
        a.x += (4.4444447f) * sin_table_lookup((void *)o->f60);
        a.z += (4.4444447f) * cos_table_lookup((void *)o->f60);
        if (project_actor_to_ground(o, &a, 0) == 0) {
            o->pos.x = a.x;
            o->pos.z = a.z;
            return 0;
        }
        a.y += (5e+01f);
        o->pos.x = a.x;
        o->pos.z = a.z;
        dy = 0.25f * (a.y - o->pos.y);
        if (dy < -4.4444447f) {
            dy = -4.4444447f;
        } else if (dy > 4.4444447f) {
            dy = 4.4444447f;
        }
        o->pos.y += dy;
        return 0;
    }
    if (len < (1e+01f)) {
        s32 ang;
        o->f60 = TBoss6Type2__sub_8032EA34(o, o->f60, t, 0x5B0);
        ang = 0x7FFF;
        if (tgt.y > o->pos.y) {
            ang *= -1;
        }
        o->f5c = approach_angle_limited(o->f5c, ang, 0x5B0);
    } else {
        calc_dir_angles__11TBoss6Type2FPvPvPvPv(o, &rx, &ry, (Vec_8032EF34 *)&d);
        o->f60 = TBoss6Type2__sub_8032EA34(o, o->f60, rx, 0x5B0);
        o->f5c = approach_angle_limited(o->f5c, ry, 0x5B0);
    }
    compute_random_dir_vec__11TBoss6Type2FiPvii((s32)o, (u8 *)&r, o->f60, o->f5c);
    r.x *= (4.4444447f);
    r.y *= (4.4444447f);
    r.z *= (4.4444447f);
    vec3_add_to(&o->pos, (int)&r);
    return 0;
}
#pragma pop

s32 TBoss6Type2__sub_8032FB84(O_8032FB84 *arg0) {
    V3_8032FB84 v;
    s32 t;
    if (arg0->p378 == 0) {
        return 0;
    }
    TBoss6Type2__sub_802BD378(arg0->p378, arg0->f384, &v, &t);
    v.y += (35.0f);
    VecCopy__FP3VecPC3Vec(&arg0->pos, &v);
    arg0->f60 = t;
    return 1;
}

void update_segment_angles__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x3B4);
    M2C_FIELD(arg0, s16 *, 0x39E) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39C) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39A) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x398) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x396) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390);
    switch (temp_r0_2) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x396) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x398) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x39A) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x39C) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 5:
        M2C_FIELD(arg0, s16 *, 0x39E) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(arg0, s16 *, 0x396);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(arg0, s16 *, 0x39A);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(arg0, s16 *, 0x398);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(arg0, s16 *, 0x39E);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(arg0, s16 *, 0x39C);
}

void TBoss6Type2__sub_8032FCA4(Obj_8032FCA4 *arg0) {
    Ent_8032FCA4 *e = arg0->ent;
    s32 lo;
    s32 hi;
    hi = e->v[0];
    lo = hi;
    if (lo > e->v[1]) {
        lo = e->v[1];
    } else if (hi < e->v[1]) {
        hi = e->v[1];
    }
    if (lo > e->v[2]) {
        lo = e->v[2];
    } else if (hi < e->v[2]) {
        hi = e->v[2];
    }
    if (lo > e->v[3]) {
        lo = e->v[3];
    } else if (hi < e->v[3]) {
        hi = e->v[3];
    }
    if (lo > e->v[4]) {
        lo = e->v[4];
    } else if (hi < e->v[4]) {
        hi = e->v[4];
    }
    arg0->min = lo;
    arg0->max = hi;
    copy_entry__6TLobbyFPvPv(arg0->local, arg0->ent);
    arg0->ent = (Ent_8032FCA4 *)arg0->local;
    update_segment_angles__11TBoss6Type2FPv(arg0);
}

#pragma push
#pragma opt_common_subs off
void TBoss6Type2__sub_8032FD78(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3F8) += (-0.06666667f);
    if (M2C_FIELD(arg0, f32 *, 0x3F8) < (0.0f)) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (0.0f);
    }
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) ((f32) M2C_FIELD(arg0, s16 *, 0x32C) / (f32) M2C_FIELD(arg0, s16 *, 0x33E));
}
#pragma pop

void sync_hp_apply_damage__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x32C);
    if (temp_r4 != temp_r0) {
        if (temp_r4 < temp_r0) {
            sync_hp__11TBoss6Type2FPv((void *)((s32)(arg0)));
            return;
        }
        apply_damage__11TBoss6Type2FPvi(M2C_FIELD(arg0, s32 *, 0x378), temp_r4 - temp_r0);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}
void sync_hp__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}
void draw_model_motion_blend__8TObjFishFPv(void *arg0) {
    Stack_8032FE50 stack;
    s32 temp_r31;
    s32 temp_r31_2;
    set_global_flag__10TObjPlayerFv();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 1);
    temp_r31_2 = get_bml_model(M2C_FIELD(arg0, s32 *, 0x374), 1);
    set_global_param__8TObjFishFi(temp_r31);
    if ((0.0f) == M2C_FIELD(arg0, f32 *, 0x3E8)) {
        set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, s32 *, 0x458));
        draw_model_motion(temp_r31_2, M2C_FIELD(arg0, s32 *, 0x3DC), M2C_FIELD(arg0, f32 *, 0x3E0));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x458));
    } else {
        stack.sp8 = M2C_FIELD(arg0, s32 *, 0x3F0);
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x3F4);
        stack.spC = M2C_FIELD(arg0, s32 *, 0x3DC);
        stack.sp14 = M2C_FIELD(arg0, f32 *, 0x3E0);
        set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, s32 *, 0x458));
        draw_model_blend_motion(temp_r31_2, &stack.sp8, M2C_FIELD(arg0, f32 *, 0x3E8));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x458));
    }
    clear_global_state__10TObjPlayerFv();
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8032FF24_lbl_804EDD94_size[sizeof(RecoveredGlobal_8032FF24_lbl_804EDD94) == 0x50 ? 1 : -1];
void TBoss6Type2__sub_8032FF24(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3;
    if ((arg1 != -1) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x3D4))) {
        M2C_FIELD(arg0, s32 *, 0x3D4) = arg1;
        temp_r31 = arg1 * 0x10;
        M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8032FF24_lbl_804EDD94 *)&lbl_804EDD94).value) + temp_r31), s32 *, 0);
        temp_r3 = get_bml_motion((int) (M2C_FIELD(arg0, s32 *, 0x374)), (int) (M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8032FF24_lbl_804EDD94 *)&lbl_804EDD94).value) + temp_r31), s32 *, 8)));
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) M2C_FIELD(arg0, f32 *, 0x3EC);
        M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(arg0, s32 *, 0x3DC);
        M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) M2C_FIELD(arg0, f32 *, 0x3E0);
        M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8032FF24_lbl_804EDD94 *)&lbl_804EDD94).value) + temp_r31), f32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0x3DC) = temp_r3;
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (0.0f);
    }
}
#pragma pop
void TBoss6Type2__sub_8032FFC0(O_8032FFC0 *arg0) {
    f32 n;
    f32 lim;

    n = (f32)arg0->anim->count;
    arg0->t += arg0->speed;
    switch (arg0->mode) {
    case 0:
        if (arg0->t >= n) {
            arg0->t -= n;
        }
        break;
    case 1:
        break;
    case 2:
        lim = n - 1.0f;
        if (arg0->t >= lim) {
            arg0->t = lim;
            TBoss6Type2__sub_8032FF24((u8 *)arg0, lbl_804EDD94[arg0->f3d4].next);
        }
        break;
    }
    if (0.0f != arg0->f3e8) {
        if ((arg0->f3e8 += arg0->f3ec) >= 1.0f) {
            arg0->f3e8 = 0.0f;
        }
    }
}

void TBoss6Type2__sub_803300C8(u8 *arg0) {
    s32 temp_r3;
    TBoss6Type2__sub_80330178((s32)((s32)((void *) (arg0 + 0x3D4))), (s32)((s32)((void *) (&lbl_80477404.value))));
    copy_state__11TBoss6Type2FPvPv((void*)((void *) (arg0 + 0x3DC)), (void*)((void *) (&lbl_80477428.value)));
    temp_r3 = get_bml_motion((int) (M2C_FIELD(arg0, s32 *, 0x374)), (int) (M2C_FIELD(&(*(RecoveredGlobal_803300C8_lbl_804EDD94 *)lbl_804EDD94).value, s32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x3DC) = temp_r3;
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) M2C_FIELD(&(*(RecoveredGlobal_803300C8_lbl_804EDD94 *)lbl_804EDD94).value, f32 *, 0xC);
}
void copy_state__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

typedef char MemberActionStorage_803301B8_size[sizeof(MemberActionStorage_803301B8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_803301B8_lbl_804EF028_size[sizeof(RecoveredGlobal_803301B8_lbl_804EF028) == 0xD8 ? 1 : -1];

int TBoss6Type2__sub_80330178(s32 _w0, s32 _w1) {
    S_80330178 *d = (S_80330178 *)_w0;
    S_80330178 *s = (S_80330178 *)_w1;
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    return _w0;
}

void set_action__11TBoss6Type2FPvi(u8 *arg0, s32 arg1) {
    MemberActionStorage_803301B8 member_action;
    u8 *temp_r31;
    M2C_FIELD(arg0, s32 *, 0x380) = arg1;
    temp_r31 = (u8 *)((void *)((u8 *)(lbl_804EF028) + (M2C_FIELD(arg0, s32 *, 0x380) * 0x24)));
    TBoss6Type2__sub_8032FF24((u8 *)((void *) (arg0)), (s32)((int) (M2C_FIELD(temp_r31, s32 *, 4))));
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) M2C_FIELD(temp_r31, s32 *, 8);
    member_action.words[0] = M2C_FIELD(temp_r31, s32 *, 0xC);
    member_action.words[1] = M2C_FIELD(temp_r31, s32 *, 0x10);
    member_action.words[2] = M2C_FIELD(temp_r31, s32 *, 0x14);
    if (member_action.action != 0) {
        (((TBoss6Type2 *)((void *) (arg0)))->*member_action.action)();
    }
}

typedef char RecoveredGlobal_803300C8_lbl_80477404_size[sizeof(RecoveredGlobal_803300C8_lbl_80477404) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_803300C8_lbl_80477428_size[sizeof(RecoveredGlobal_803300C8_lbl_80477428) == 0x1C ? 1 : -1];
typedef char RecoveredGlobal_803300C8_lbl_804EDD94_size[sizeof(RecoveredGlobal_803300C8_lbl_804EDD94) == 0x50 ? 1 : -1];

}
extern "C" {
f32 receive_direct_attack__10TObjPlayerFv(void *, void *, P_80330240, void *, void *, void *);
s32 query_teammate_state__9TObjEneDDFPv();

f32 fn_80330240(O_80330240 *arg0, void *arg1, P_80330240 *arg2, void *arg3, void *arg4, void *arg5) {
    while (arg0->f388 == 0) {
        if (arg2->a != 0x14 && query_teammate_state__9TObjEneDDFPv() == 0) {
            return (0.0f);
        }
        break;
    }
    return receive_direct_attack__10TObjPlayerFv(arg0, arg1, *arg2, arg3, arg4, arg5);
}
}
extern "C" {
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802BD340(int);
void TObjPlayer__sub_8033030C(u8 *arg0);
f32 get_conditional_rate__10TObjPlayerFPv(void *arg0);
f32 receive_physical_attack__10TObjPlayerFv();

f32 get_conditional_rate__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) != 0) {
        return receive_physical_attack__10TObjPlayerFv();
    }
    return (0.0f);
}
void TObjPlayer__sub_8033030C(u8 *arg0) {
    switch (M2C_FIELD(arg0, s32 *, 0x380)) {
    case 3:
    case 4:
    case 5:
        return;
    default:
        TBoss6Type2__sub_802BD340((int) (M2C_FIELD(arg0, s32 *, 0x378)));
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (1.0f);
        set_action__11TBoss6Type2FPvi((u8 *) (arg0), (int) (4));
        play_sound_effect((int) (0x69E17), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    }
}
void spawn_ground_effect__10TObjPlayerFPv(u8 *arg0);

void spawn_ground_effect__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (1.0f);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    play_sound_effect(0x6A816, arg0 + 0x38, 0, 0);
    M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (0.0f);
}
}

extern "C" {
void toggle_particle_effect__10TObjPlayerFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void update_camera_target__14TBoss6PlotFalzFv(void);
void TBoss6PlotFalz__sub_802AC008(f32, f32);
void TBoss6PlotFalz__sub_802AC040(f32, f32, f32, f32);
s32 pop_matrix(void);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK push_matrix();
M2C_UNK post_translate_matrix(void *);
void TObjPlayer__sub_8033040C(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK add_radar_scaled_marker(void *, int, int, int, f32);
s32 TBoss6PlotFalz__sub_802ABA9C();
M2C_UNK break_rocks_in_radius__10TBoss6RockFPvf(void *, f32);
void TObjPlayer__sub_8033051C(void* p);
void save_position__10TObjPlayerFi(s32 arg0);
void spawn_trap_by_stat__10TObjPlayerFPv(u8 *arg0);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);

void save_position__10TObjPlayerFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x2FC), (void *)(arg0 + 0x38));
}

void TObjPlayer__sub_8033040C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 var_r31;
    toggle_particle_effect__10TObjPlayerFv();
    push_matrix();
    post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3F8);
    var_r31 = 0;
    if (temp_f1 > (0.0f)) {
        TBoss6PlotFalz__sub_802AC008(temp_f1, M2C_FIELD(arg0, f32 *, 0x3FC));
        var_r31 = 1;
    } else {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x400);
        if (temp_f1_2 > (0.0f)) {
            TBoss6PlotFalz__sub_802AC040(temp_f1_2, (0.5f), (0.5f), (0.5f));
            var_r31 = 1;
        }
    }
    draw_model_motion_blend__8TObjFishFPv(arg0);
    if (var_r31 != 0) {
        update_camera_target__14TBoss6PlotFalzFv();
    }
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

void spawn_trap_by_stat__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK var_r3;

    var_r3 = 0x4006C919;
    if (M2C_FIELD(arg0, f32 *, 0x3B8) > (0.0f)) {
        var_r3 = 0x6B015;
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > (0.0f)) {
            var_r3 = 0x6B518;
        }
    }
    play_persistent_sound(var_r3, arg0, arg0 + 0x38, 0, 0);
}

void TObjPlayer__sub_8033051C(void* p) { TObjPlayer__sub_8033040C((u8 *)(p)); }

void update_main__11TBoss6Type2FPv(u8 *arg0) {
    M2C_UNK var_r4;

    if (check_demo_mode__10TObjPlayerFv() == 0) {
        if (TBoss6PlotFalz__sub_802ABA9C() == 0) {
            M2C_FIELD(arg0, s32 *, 0x378) = 0;
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
        {
            Fn_8033053C fn = lbl_804EF028[M2C_FIELD(arg0, s32 *, 0x380)].fn;
            if (fn) {
                (((T_8033053C *)arg0)->*fn)();
            }
        }
        update_rotation_ramp__11TBoss6Type2FPv((void *) (arg0));
        TBoss6Type2__sub_8032FFC0((O_8032FFC0 *) (arg0));
        save_position__10TObjPlayerFi((s32) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x388) != 0) {
            update_collisions__10TObjPlayerFPv((void *) (arg0));
            submit_cursor_candidate((void *) (arg0), (int) (-1));
        }
        break_rocks_in_radius__10TBoss6RockFPvf((void *) (arg0 + 0x38), (f32) (1e+01f));
        var_r4 = 0xFF7F5126;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x388) != 0) {
            var_r4 = -0x5DB4;
        }
        add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (var_r4), (int) (1), (int) (1), (f32) (2.0f));
        TBoss6Type2__sub_8032FD78((void *) (arg0));
        sync_hp_apply_damage__11TBoss6Type2FPv((void *) (arg0));
        spawn_trap_by_stat__10TObjPlayerFPv(arg0);
        TBoss6Type2__sub_8032E8DC((Obj_8032E8DC *) (arg0));
        TBoss6Type2__sub_8032E834((O_8032E834 *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) + 1);
    }
}
M2C_UNK init_state_1__8TObjFishFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK __dl__7TObjectFPv(void *);

void *fn_8033068C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = lbl_804EDDEC;
        update_all_parts__11TBoss6Type2FPv((s32)arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x458) != 0U) {
            init_state_1__8TObjFishFPv(M2C_FIELD(arg0, void **, 0x458));
            M2C_FIELD(arg0, u32 *, 0x458) = 0U;
        }
        free_collision_body_parts(arg0);
        lbl_804EDDE4[M2C_FIELD(arg0, s32 *, 0x384)] = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}
struct VBase_18_9b9a88 { char pad[0x18]; };
struct VObj_18_9b9a88 : VBase_18_9b9a88 {
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
struct Key_80330724 { s32 a; s16 b; s16 c; s32 d; s32 e; };

extern "C" {
void initialize__9TObjEnemyFPv(void *, s32, void *);
s32 exchange_object_state__6TLobbyFPvis(void *, Key_80330724 *, s32);
s32 get_fish_count__8TObjFishFv();
void init_collision_body_parts(void *, void *, s32);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
f32 *dispatch_shared_handler_a__6TLobbyFPv(int);
void bind_enemy_combat_stats(void *, s32, s32, s32);
void reset_photon_effect__12TBoss3VoloptFPv(void *);
void set_param__12TObjEneLappyFPvi(void *, s32);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
s32 TObjFish__sub_800E3124(void *, void *);
void TBoss6Mag__sub_803309C4(void *, void *);

u8 *TBoss6Mag__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    Key_80330724 key;
    f32 *d;
    s32 prm;
    initialize__9TObjEnemyFPv(arg0, arg1, arg2);
    M2C_FIELD(arg0, u8 **, 0x18) = (u8 *)lbl_804EDDEC;
    M2C_FIELD(arg0, s32 *, 0) = (s32)lbl_805D4220;
    M2C_FIELD(arg0, s32 *, 0x378) = M2C_FIELD(arg2, s32 *, 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg2 + 0x44);
    M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(arg2, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg2, s32 *, 0x54);
    lbl_804EDDE4[M2C_FIELD(arg0, s32 *, 0x384)] = arg0;
    ((VObj_18_9b9a88 *)arg0)->m79(arg2);
    if (exchange_object_state__6TLobbyFPvis(arg0, &key, 1) != 0) {
        key.a = 0;
        key.c = 0;
        exchange_object_state__6TLobbyFPvis(arg0, &key, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x374) = get_fish_count__8TObjFishFv();
    M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, (void *)VecCopy__FP3VecPC3Vec(arg0 + 0x50, (void *)VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    init_collision_body_parts(arg0, lbl_804EDD68, 1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x310) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x30C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x308) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    bind_enemy_combat_stats(arg0, register_boss__6TLobbyFPv(0x2E), dispatch_shared_handler_b__6TLobbyFPv(0x2E),
        register_object__6TLobbyFPv(0x2E));
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    M2C_FIELD(arg0, s32 *, 0x38C) = M2C_FIELD(arg0, s16 *, 0x32C);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    set_param__12TObjEneLappyFPvi(arg0, (M2C_FIELD(arg0, s32 *, 0x384) == 1) ? 0x56 : 0x55);
    add_flags_2e4__10TObjPlayerFPvUi(arg0, M2C_FIELD(arg2, u32 *, 0x58));
    M2C_FIELD(arg0, s32 *, 0x390) = M2C_FIELD(arg2, s32 *, 0x5C);
    TBoss6Type2__sub_8032FCA4((Obj_8032FCA4 *)arg0);
    TBoss6Type2__sub_803300C8(arg0);
    M2C_FIELD(arg0, s32 *, 0x458) = TObjFish__sub_800E3124((void *)lbl_804773DC, arg0 + 0x44C);
    TBoss6Mag__sub_803309C4(arg0 + 0x408, (void *)lbl_804773FC);
    d = dispatch_shared_handler_a__6TLobbyFPv(0x2E);
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32)d[0];
    if ((f32)M2C_FIELD(arg0, s32 *, 0x3C0) <= 0.0f) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0x96;
    }
    M2C_FIELD(arg0, f32 *, 0x3C4) = d[1];
    if (M2C_FIELD(arg0, f32 *, 0x3C4) <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x3C4) = 2.0f;
    }
    TBoss6Type2__sub_8032F2C4((T_8032F2C4 *)arg0);
    M2C_FIELD(arg0, f32 *, 0x3F8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x3FC) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x400) = 0.0f;
    sync_hp__11TBoss6Type2FPv(arg0);
    TBoss6Type2__sub_8032EA10((T_8032EA10 *)arg0);
    set_action__11TBoss6Type2FPvi(arg0, 0);
    return arg0;
}

}
