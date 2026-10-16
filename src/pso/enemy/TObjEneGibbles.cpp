#include "types.h"
#include "pso/enemy/TUnk_80494938.h"
#include "pso/object/TObjMotion.h"
#include "pso/enemy/TObjEneGibbles.h"
#include <stddef.h>
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/misc/RenderFadeState.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct Vec_802D9EB4 { f32 x, y, z; };

struct Stack_802D7ACC {
    s32 sp8;
    f32 spC;
};

struct Vec_802D7ACC { f32 x, y, z; };

struct V_802DA7A4Base { u8 pad[0x14]; };

struct V_802DA7A4 : V_802DA7A4Base {
    virtual void v0();
    virtual void v1();
    virtual void m2();
    virtual void v3();
    virtual s32 m4();
};

struct Obj_800A6B14;
struct Vec_802DA0BC { s32 x, y, z; };

struct FadeBase_802DB200 { char pad[0x14]; };

struct Fade_802DB200 : FadeBase_802DB200 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8();
    char pad2[4];
};

struct ObjBase_802DB200 { char pad[0x18]; };

struct Obj_802DB200 : ObjBase_802DB200 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
    char pad1[0x3C0 - 0x1C];
    Fade_802DB200 sub;
    Fade_802DB200 fades[4];
};

struct VBase_802DAD50 { char pad[0x18]; };

struct VObj_802DAD50 : VBase_802DAD50 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16();
    virtual s32 m17(s32);
};

struct Sub_802D8984 { u8 pad[0x18]; u32 f18; };

struct Prm_802D8984 { u8 pad[0xC]; f32 fC; u8 pad10[8]; s32 f18; };

struct Spawn_802DB7C0 { s32 a; s32 b; s32 c; s32 d; };

struct O_802DBC94;
struct VBase_14_802DBA18 { char pad[0x14]; };

struct VObj_14_802DBA18 : VBase_14_802DBA18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
};

struct VBase_18_802DBA18 { char pad[0x18]; };

struct VObj_18_802DBA18 : VBase_18_802DBA18 {
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
    virtual void m79(s32);
    virtual void m80();
};

struct Part_802DBA18 { u8 pad[0x1C]; };

struct G_802DBA18 { u8 pad[0x3DC]; Part_802DBA18 parts[4]; };

struct Base14 { char pad[0x14]; };

struct VObj14 : Base14 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
};

extern "C" {
f32 calc_xz_distance_sq__10TObjPlayerFiUiPv(void *, void *, Vec_802D9EB4 *);
f64 atan2_float(f32, f32);
s32 angle_difference_abs(s32, s32);
extern const f64 TObjEneGibbles__data_80472798;
extern u32 gibbles_combat_stat_entries;
extern const f32 lbl_805DE834;
extern const f32 lbl_805DE85C;
s32 is_target_in_attack_range__14TObjEneGibblesFv(u8 *arg0);
s32 apply_actor_gravity(void *, int, f32);
s16 get_attack_params_atp_min(void *);
s32 get_current_floor();
s32 get_enemy_entity();
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
s32 check_enemy_body_collisions(void *);
s32 submit_cursor_candidate(void *, int);
u32 get_player_by_client_id(void *);
s32 minimap_render_dot(void *, int, int, int);
s32 play_sound_effect(int, void *, int, int);
void TObjEneGibbles__sub_802D7DAC(s32 arg0);
void TObjEneGibbles__sub_802D9644(void *, int, f32);
extern u32 gibbles_combat_stat_entries;
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 lbl_805DE834;
extern const f32 lbl_805DE838;
void TObjEneGibbles__sub_802D8E8C(u8 *arg0);
void attach_particle_model(void *, s32, s32, s32, s32, f32);
s32 * csnVectorUnder(s32 *, s32, s32, f32);
s32 spawn_particle_effect(void *, int);
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7E8;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 lbl_805DE7F0;
s32 apply_actor_gravity(void *, int, f32);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
s32 play_sound_effect(int, void *, int, int);
s32 TObjEneGibbles__sub_802D7BE0(s32 arg0);
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 TObjEneGibbles__data_805DE7F8;
extern const f32 TObjEneGibbles__data_805DE830;
extern const f32 lbl_805DE874;
void TObjEneGibbles__sub_802DA7A4(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *, int);
s32 apply_actor_gravity(void *, int, f32);
s32 enemy_move_toward(void *, s32, void *, int, f32);
s32 select_enemy_destination(void *, Vec_802DA0BC *, int);
s32 copy_position_if_valid__10TObjPlayerFii(void *, Vec_802DA0BC *);
f32 horizontal_distance_squared(int, void *);
s32 advance_animation_playback();
s32 check_enemy_body_collisions(void *);
s32 submit_cursor_candidate(void *, int);
s32 minimap_render_dot(void *, int, int, int);
void TObjEneGibbles__sub_802D7DAC(s32 arg0);
extern u8 *TObjEneGibbles__ai_parameters;
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 lbl_805DE860;
extern const f32 lbl_805DE864;
void TObjEneGibbles__sub_802DA0BC(u8 *arg0);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 update_obstruction_fade(void *);
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 scale_matrix_vec3(int, void *);
s32 translate_matrix_vec3(int, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
void gibbles_render_node_callback(void);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 TObjEneGibbles__render_node_index;
extern s32 TObjEneGibbles__render_rotation_x;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern const f32 lbl_805DE87C;
extern const f32 lbl_805DE880;
extern const f32 lbl_805DE884;
void draw_model__14TObjEneGibblesFPv(u8 *arg0);
f32 subtract_vector(void *, void *);
s32 check_path_obstructed(void *, void *);
u8 * get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
s32 get_current_floor();
s32 get_enemy_entity();
u32 get_player_by_client_id(void *);
s32 is_valid_and_active__10TObjPlayerFUl();
extern s32 lbl_80472768[];
extern s32 lbl_80472774[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805DE824;
s32 apply_actor_gravity(void *, int, f32);
void move_with_wall_slide(void *);
void enemy_set_heading_velocity(void *, s32, f32);
void calc_velocity_toward_destination(void *, Vec_802DA0BC, Vec_802DA0BC, f32);
s32 select_enemy_destination(void *, Vec_802DA0BC *, int);
s32 copy_position_if_valid__10TObjPlayerFii(void *, Vec_802DA0BC *);
s32 get_current_floor();
f32 newton_sqrtf(f32);
s32 TObjEneGibbles__sub_800D8988(void *);
s32 get_enemy_entity();
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
s32 submit_cursor_candidate(void *, int);
u32 get_player_by_client_id(void *);
s32 minimap_render_dot(void *, int, int, int);
s32 play_sound_effect(int, void *, int, int);
void TObjEneGibbles__sub_802D7A54(void *arg0);
s32 TObjEneGibbles__sub_802D7BE0(s32 arg0);
s32 TObjEneGibbles__sub_802D9A04(void *arg0);
f32 subtract_vector(void *, void *);
extern u8 *TObjEneGibbles__ai_parameters;
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7E8;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 TObjEneGibbles__data_805DE7F8;
extern f32 lbl_805DE80C;
extern const f32 lbl_805DE814;
extern const f32 lbl_805DE828;
extern const f32 lbl_805DE82C;
extern const f32 TObjEneGibbles__data_805DE830;
void TObjEneGibbles__sub_802D8984(u8 *arg0);
s32 is_split_screen();
s32 dispatch_shared_handler_a__6TLobbyFl(int);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
u8 *load_resource_from_descriptor(void *, int, void *, int, int, int);
u8 *alloc__23TAdSinglePlyChrSelectGCFv(u32);
u8 *mem_alloc(u32);
extern Spawn_802DB7C0 gibbles_resource_binding_desc;
extern s32 gibbles_boss_stat_handle;
extern u32 gibbles_combat_stat_entries;
extern s32 gibbles_combat_stats_handle;
extern u8 *TObjEneGibbles__ai_parameters;
extern u32 TObjEneGibbles__resource_bundle;
extern s32 TObjEneGibbles__render_node_index;
extern s32 TObjEneGibbles__render_rotation_x;
extern const f32 TObjEneGibbles__data_805DE7E4;
void copy_position__20TBoss3VoloptHiraisinFi(u8 *);
void initialize_enemy_photon_effect(void *);
s32 bind_enemy_combat_stats(void *, int, int, int);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, int);
void *construct_collider_proxy__13TUnk_804AF8A0Fv(void *, int);
void * __nw__7TObjectFUl(int);
void __construct_array(void *, void *, void *, int, int);
void TObjPlayer__sub_800D7C58(void);
void init_and_activate__10TObjPlayerFv(void);
extern s32 lbl_805D3F60;
extern s32 gibbles_boss_stat_handle;
extern u32 gibbles_combat_stat_entries;
extern s32 gibbles_combat_stats_handle;
extern u32 TObjEneGibbles__resource_bundle;
extern const f32 TObjEneGibbles__data_805DE7EC;
u8 *TObjEneGibbles__ct(u8 *arg0, void *arg1, s32 arg2);
s32 update_movement_status__10TObjPlayerFv();
s32 obj_clearFlags30(void *, int);
s32 update_movement_status__14TObjEneGibblesFv(u8 *arg0);
s32 update_action_hold_status__10TObjPlayerFv();
s32 obj_clearFlags30(void *, int);
s32 update_action_hold_status__14TObjEneGibblesFv(u8 *arg0);
u32 copy_target_state__14TObjEnePanarmsFPv(void *, u32);

}

extern "C" {

struct Stack_802D7BE0 {
    s32 sp8;
    f32 spC;
};

struct Stack_802D8140
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct Stack_802D7ED4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_802D7ED4_lbl_80472780 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802D7ED4_lbl_8058D490 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_802D7A2C_lbl_804E28B0
{
  s32 value;
  u8 remaining[0x13C];
};

typedef struct RecoveredGlobal_802D7A2C_lbl_804E28B0 RecoveredGlobal_802D7A2C_lbl_804E28B0;

typedef char RecoveredGlobal_802D7A2C_lbl_804E28B0_size[((sizeof(RecoveredGlobal_802D7A2C_lbl_804E28B0)) == 0x140) ? (1) : (-1)];

typedef char RecoveredGlobal_802D7ED4_lbl_80472780_size[sizeof(RecoveredGlobal_802D7ED4_lbl_80472780) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_802D7ED4_lbl_8058D490_size[sizeof(RecoveredGlobal_802D7ED4_lbl_8058D490) == 0x30 ? 1 : -1];

typedef struct Stack_802D8140 Stack_802D8140;

struct GibBase_802da394_802D87D8 { char pad[0x14]; };

struct GibVObj_802da394_802D87D8 : GibBase_802da394_802D87D8 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
};

struct VBase802DAAC8_802daac8_802D87D8 { char pad[0x14]; };

struct VObj802DAAC8_802daac8_802D87D8 : VBase802DAAC8_802daac8_802D87D8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8();
};

struct E_802DBC94 { s32 a; s32 b; s32 c; s32 d; };

struct G_802DBC94 { u8 pad[0x42c]; E_802DBC94 *e; };

struct O_802DBC94 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct VBase800A64E8_800a64e8_800A4288 { char pad[0x14]; };

struct VObj800A64E8_800a64e8_800A4288 : VBase800A64E8_800a64e8_800A4288 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8();
};

struct RecoveredGlobal_800A6BE0_lbl_804FF5E8 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800A6BE0_lbl_80500978 {
    s32 value;
    u8 remaining[0xC];
};

struct Vec_800A6B14 { f32 x, y, z; };

struct Tgt_800A6B14 { u8 pad[0x2fc]; Vec_800A6B14 pos; };

struct Obj_800A6B14 {
    u8 pad[0x60]; s32 angle;
    u8 pad2[0x2a8 - 0x64]; Tgt_800A6B14 *target;
    u8 pad3[0x2fc - 0x2ac]; Vec_800A6B14 pos;
};

struct Vec_800A6B14;

struct Vec_802D8828 { f32 x, y, z; };

struct Vec_802D9D64 { f32 x, y, z; };

typedef char RecoveredGlobal_800A6BE0_lbl_804FF5E8_size[sizeof(RecoveredGlobal_800A6BE0_lbl_804FF5E8) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_800A6BE0_lbl_80500978_size[sizeof(RecoveredGlobal_800A6BE0_lbl_80500978) == 0x10 ? 1 : -1];

struct Arg_802D9A04 { s32 a; f32 b; };

struct VBase_802D9A04 { char pad[0x18]; };

struct VObj_802D9A04 : VBase_802D9A04 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual f32 m21(void *, Arg_802D9A04 *, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *);
};

struct Hit_802D9B80 { s32 x; f32 y; };

struct Vec_802D9B80 { f32 x, y, z; };

struct VBase_18_22e4b0 { char pad[0x18]; };

struct VObj_18_22e4b0 : VBase_18_22e4b0 {
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
    virtual s32 m21(s32, struct Hit_802D9B80 *, s32, s32, s32);
    virtual void m22();
    virtual s32 m23(s32);
};

s32 get_main_phase();
f32 calc_boss4_scale__10TObjPlayerFi(void *, int);
s32 apply_actor_gravity(void *, int, f32);
f32 enemy_wander_home(void *, s32, f32, f32, f32);
f32 calc_distance_to_client__10TObjPlayerFlUsUl(void *, u16, Vec_802D8828 *);
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
s16 get_attack_params_atp_min(void *);
u8 * get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
s32 obj_clearFlags30(void *, int);
s32 obj_setFlags30(void *, int);
s32 is_split_screen();
f64 atan2_float(f32, f32);
s32 queue_destruction__7TObjectFv();
void TLobby__sub_8001FE7C(void*, int);
void copy_position__20TBoss3VoloptHiraisinFi(u8 *);
void TCameraCtrl__sub_8006A044(s32, f32);
s32 * csnVectorUnder(s32 *, s32, s32, f32);
u8 * csnVecterUnder(void *, s32);
s32 rotate_xz_pair_by_angle(f32 *, f32 *, s32, f32);
s32 test_action_mask__10TObjPlayerFl(void *, int);
s32 spawn_particle_effect(void *, int);
f32 get_pos_x__14TObjEneGibblesFPv(void *);
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 TObjEneGibbles__sub_800D8988(void *);
s32 TObjPlayer__sub_800D93C4(f32 *, s32);
void * TObjControl__ct(void *, void *);
s32 bind_enemy_combat_stats(void *, int, int, int);
f32 horizontal_distance_squared(int, void *);
s32 angle_difference_abs(s32, s32);
s32 angle_diff_s16(s32, s32);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
void mem_free(void*);
s32 refresh_collision_body_centers(void *);
s32 check_enemy_body_collisions(void *);
s32 get_stat_by_key_state__10TObjPlayerFv(void *);
s32 submit_cursor_candidate(void *, int);
u32 get_player_by_client_id(void *);
s32 minimap_render_dot(void *, int, int, int);
s32 send_entity_set_flags__6TLobbyFPv(void *);
s32 play_sound_effect(int, void *, int, int);
void * __nw__7TObjectFUl(int);
s32 is_valid_and_active__10TObjPlayerFUl();
void TObjEneGibbles__sub_802D7A54(void *arg0);
s32 TObjEneGibbles__sub_802D7BE0(s32 arg0);
void TObjEneGibbles__sub_802D7DAC(s32 arg0);
void TObjEneGibbles__sub_802D7E3C(void);
void render_and_get_joint_pos__14TObjEneGibblesFPvii(u8 *arg0, s32 arg1, s32 arg2);
void TObjEneGibbles__sub_802D8034(void);
void TObjEneGibbles__sub_802D8140(u8 *arg0);
void vfunc_63__14TObjEneGibblesFv(void *arg0);
void TObjEneGibbles__sub_802D8580(u8 *);
void vfunc_61__14TObjEneGibblesFv(void *arg0);
s32 test_flag_256__14TObjEneGibblesFv(u8 *arg0);
struct Gib_802D9110;
void TObjEneGibbles__sub_802D9110(Gib_802D9110 *);
s32 TObjEneGibbles__sub_802D9A04(void *arg0);
void vfunc_60__14TObjEneGibblesFv(u8 *arg0);
void update_wander__14TObjEneGibblesFPv(u8 *arg0);
void vfunc_58__14TObjEneGibblesFv(u8 *arg0);
void turn_toward_target__14TObjEneGibblesFPv(Obj_800A6B14 *self);
void gibbles_render_node_callback(void);
void run_task__14TObjEneGibblesFPv(u8 *arg0);
void* vfunc_9__14TObjEneGibblesFv(void* p);
void TObjEneGibbles__sub_802DBC94(O_802DBC94 *self, s32 i);
s32 vec3_add_to(f32 *, void *);
s32 matrix_mult_vec(int, void *, void *);
s32 scale_matrix_vec3(int, void *);
s32 rotate_matrix_y(int, int);
f32 subtract_vector(void *, void *);
s32 rotate_matrix_x(s32, s32);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 post_translate_matrix(void *);

extern const f64 TObjEneGibbles__data_80472798;
extern u32 gibbles_combat_stat_entries;
extern u32 TObjEneGibbles__resource_bundle;
extern s32 TObjEneGibbles__render_node_index;
extern s32 TObjEneGibbles__render_rotation_x;
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7E8;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 TObjEneGibbles__data_805DE7F4;
extern const f32 TObjEneGibbles__data_805DE7F8;
extern const f32 TObjEneGibbles__data_805DE81C;
extern const f32 TObjEneGibbles__data_805DE830;
extern RecoveredGlobal_802D7ED4_lbl_80472780 gibbles_joint_zero_vec;
extern RecoveredGlobal_802D7ED4_lbl_8058D490 identity_matrix;
extern s32 local_client_id;
extern s32 anim_model_matrix_array;
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern const f32 lbl_805DE7E0;
extern const f32 lbl_805DE7FC;
extern const f32 lbl_805DE800;
extern const f32 lbl_805DE804;
extern const f32 lbl_805DE808;
extern f32 lbl_805DE80C;
extern const f32 lbl_805DE810;
extern const f32 lbl_805DE814;
extern const f32 lbl_805DE824;
extern const f32 lbl_805DE858;
extern const f32 lbl_805DE868;
extern const f32 lbl_805DE86C;
extern const f32 lbl_805DE870;
extern f32 lbl_805DE878;
extern void *tl_04;

struct Obj_802DAD50 : VObj_802DAD50 {
    u16 f1C;
    u8 pad1E[0x30 - 0x1E];
    u32 f30;
    u8 pad34[0x2A8 - 0x34];
    u8 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_800A6B14 pos;
    u8 pad308[0x338 - 0x308];
    u16 f338;
    u8 pad33A[0x350 - 0x33A];
    f32 *range;
    u8 pad354[0x374 - 0x354];
    u32 f374;
    u32 f378;
};

struct Gib_802D8984 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[4];
    Vec_800A6B14 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xA4 - 0x64];
    Sub_802D8984 *fA4;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    f32 fC4;
    f32 fC8;
    u8 padCC[0x290 - 0xCC];
    Vec_802DA0BC f290;
    Vec_802DA0BC f29C;
    Gib_802D8984 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_802DA0BC f2FC;
    u8 pad308[0x326 - 0x308];
    s16 mode;
    s16 sub;
    u8 pad32A[0x338 - 0x32A];
    u16 idx;
    u8 pad33A[0x374 - 0x33A];
    u32 f374;
    u8 pad378[0x38C - 0x378];
    f32 f38C;
    f32 f390;
    u8 pad394[0x3A4 - 0x394];
    s32 f3A4;
    s32 f3A8;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
}

extern "C" {
void turn_toward_target__14TObjEneGibblesFPv(Obj_800A6B14 *self);
}

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
}

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
void update_target__14TObjEneGibblesFPv(Obj_802DAD50 *self);
}

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
}

extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjEneGibbles__sub_802D8464();
}
extern "C" {
}
extern "C" {
}
extern "C" {
struct Gib_802DB920;
Gib_802DB920 *TObjEneGibbles__sub_802DB920(Gib_802DB920 *self, s16 arg1);
}
extern "C" {
void vfunc_29__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_73__13TUnk_804806E8Fv();
}
extern "C" {
void consume_timer_field__10TObjPlayerFPvi();
}
extern "C" {
void vfunc_67__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_66__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_65__13TUnk_804806E8Fll();
}
extern "C" {
void apply_slow_status__13TUnk_804806E8Fv();
}
extern "C" {
void update_shock_clock__10TObjPlayerFPv();
}
extern "C" {
void vfunc_43__13TUnk_804806E8Fv();
}
extern "C" {
void TObjPlayer__sub_80018E6C();
}
extern "C" {
void vfunc_13__13TUnk_804AF8A0Fl();
}
extern "C" {
void vfunc_74__9TObjEnemyFl();
}
extern "C" {
void apply_hit_message_flags__9TObjEnemyFPv();
}
extern "C" {
void add_actor_exp();
}
extern "C" {
void apply_action_hold_status();
}
extern "C" {
void apply_anti_technique__13TUnk_804806E8Fl();
}
extern "C" {
void apply_attack_stat_status__13TUnk_804806E8FPv();
}
extern "C" {
void apply_confusion_status__13TUnk_804806E8Fv();
}
extern "C" {
}
extern "C" {
void apply_knockback_from_attacker();
}
extern "C" {
void apply_movement_ailment__13TUnk_804806E8Fl();
}
extern "C" {
void apply_object_set_data();
}
extern "C" {
void apply_paralysis__13TUnk_804806E8Fv();
}
extern "C" {
void apply_poison_status__13TUnk_804806E8Fv();
}
extern "C" {
void apply_set_data__9TObjEnemyFPv();
}
extern "C" {
void apply_shock_status__13TUnk_804806E8Fv();
}
extern "C" {
void apply_switch_attack__10TObjPlayerFi();
}
extern "C" {
void calc_distance_accuracy_penalty__10TObjPlayerFv();
}
extern "C" {
void vfunc_79__9TObjEnemyFv();
}
extern "C" {
void classify_actor_view_detail();
}
extern "C" {
void clear_all_status_effects();
}
extern "C" {
void clear_harmful_statuses__13TUnk_804806E8Fv();
}
extern "C" {
void cure_paralysis__13TUnk_804806E8Fv();
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
void vfunc_78__13TUnk_804806E8Fl();
}
extern "C" {
void vfunc_77__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_76__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_75__13TUnk_804806E8Ff();
}
extern "C" {
void clear_lobby_object_state__9TObjEnemyFv();
}
extern "C" {
void get_actor_level_index();
}
extern "C" {
void vfunc_12__9TObjEnemyFv();
}
extern "C" {
void get_pos__13TUnk_804806E8Fl();
}
extern "C" {
}
extern "C" {
void is_actor_cadence_frame();
}
extern "C" {
extern u8 lbl_80472628[];
}
extern "C" {
extern u8 lbl_80472638[];
}
extern "C" {
extern u8 lbl_80472650[];
}
extern "C" {
extern u8 lbl_80472668[];
}
extern "C" {
extern u8 lbl_8047267C[];
}
extern "C" {
extern u8 lbl_80472690[];
}
extern "C" {
extern u8 lbl_804726A4[];
}
extern "C" {
extern u8 lbl_804726B8[];
}
extern "C" {
extern u8 lbl_804726D0[];
}
extern "C" {
extern u8 lbl_804726E4[];
}
extern "C" {
extern u8 lbl_804726F8[];
}
extern "C" {
extern u8 lbl_8047270C[];
}
extern "C" {
extern u8 lbl_80472720[];
}
extern "C" {
extern u8 lbl_80472730[];
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
void reset_motion_fields__13TUnk_804806E8Fv();
}
extern "C" {
void reset_pose__13TUnk_804806E8Fv();
}
extern "C" {
void roll_physical_accuracy__13TUnk_804806E8FPvlf();
}
extern "C" {
void select_melee_contact_body__10TObjPlayerFv();
}
extern "C" {
}
extern "C" {
}
extern "C" {
void trigger_switch_attack__10TObjPlayerFi();
}
extern "C" {
void try_start_action__13TUnk_804806E8Fll();
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
void update_object_view_visibility__13TUnk_804B9870Fff();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
extern void *TObjEneGibbles__model_filenames[2];
extern void *TObjEneGibbles__motion_names_and_resource_descriptor[11];
extern void *lbl_804E286C[2];
extern void *lbl_804E2874[11];
void vfunc_59__14TObjEneGibblesFv(void *arg0);
__declspec(section ".data") void *TObjEneGibbles__model_filenames[2] = {
    (void *)&lbl_80472628, (void *)0x0,
};
void *TObjEneGibbles__motion_names_and_resource_descriptor[11] = {
    (void *)&lbl_80472638, (void *)&lbl_80472650, (void *)&lbl_80472668, (void *)&lbl_8047267C,
    (void *)&lbl_80472690, (void *)&lbl_804726A4, (void *)&lbl_804726B8, (void *)&lbl_804726D0,
    (void *)&lbl_804726E4, (void *)&lbl_804726F8, (void *)0x0,
};
void *lbl_804E285C[4] = {
    (void *)&lbl_8047270C, (void *)&TObjEneGibbles__model_filenames, (void *)&TObjEneGibbles__motion_names_and_resource_descriptor, (void *)0x1000a,
};
__declspec(section ".data") void *lbl_804E286C[2] = {
    (void *)&lbl_80472720, (void *)0x0,
};
void *lbl_804E2874[11] = {
    (void *)&lbl_80472638, (void *)&lbl_80472650, (void *)&lbl_80472668, (void *)&lbl_8047267C,
    (void *)&lbl_80472690, (void *)&lbl_804726A4, (void *)&lbl_804726B8, (void *)&lbl_804726D0,
    (void *)&lbl_804726E4, (void *)&lbl_804726F8, (void *)0x0,
};
void *lbl_804E28A0[4] = {
    (void *)&lbl_80472730, (void *)&lbl_804E286C, (void *)&lbl_804E2874, (void *)0x1000a,
};
void *lbl_804E28B0[40] = {
    (void *)0x10000, (void *)0x8, (void *)0x3e99999a, (void *)0x1,
    (void *)0x10000, (void *)0x9, (void *)0x3f000000, (void *)0x1,
    (void *)0x20000, (void *)0x0, (void *)0x3f333333, (void *)0x4,
    (void *)0x20000, (void *)0x7, (void *)0x3f19999a, (void *)0x4,
    (void *)0x10000, (void *)0x5, (void *)0x3e99999a, (void *)0x4,
    (void *)0x20006, (void *)0x4, (void *)0x3f333333, (void *)0x4,
    (void *)0x10000, (void *)0x6, (void *)0x3f333333, (void *)0x4,
    (void *)0x10000, (void *)0x3, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x20000, (void *)0x1, (void *)0x3f4ccccd, (void *)0x8,
    (void *)0x30000, (void *)0x2, (void *)0x3f333333, (void *)0x10,
};
void *lbl_804E2950[7] = {
    (void *)0x437a0000, (void *)0x3fa00000, (void *)0x400, (void *)0x0,
    (void *)0x64, (void *)0x0, (void *)0x0,
};
void *lbl_804E296C[33] = {
    (void *)0x0, (void *)0x41700000, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x41700000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x41f00000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_804E29F0[83] = {
    (void *)0x0, (void *)0x0, (void *)&TObjEneGibbles__sub_802DB920, (void *)&run_task__14TObjEneGibblesFPv,
    (void *)&draw_model__14TObjEneGibblesFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__14TObjEneGibblesFv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&update_target__14TObjEneGibblesFPv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__14TObjEneGibblesFv, (void *)&test_flag_256__14TObjEneGibblesFv,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__14TObjEneGibblesFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__14TObjEneGibblesFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__14TObjEneGibblesFv, (void *)&vfunc_59__14TObjEneGibblesFv,
    (void *)&vfunc_60__14TObjEneGibblesFv, (void *)&vfunc_61__14TObjEneGibblesFv, (void *)&TObjEneGibbles__sub_802D8464, (void *)&vfunc_63__14TObjEneGibblesFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__13TUnk_804806E8Fll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__9TObjEnemyFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv,
};
#define lbl_804E28B0 (*(RecoveredGlobal_802D7A2C_lbl_804E28B0 *)lbl_804E28B0)

extern "C" {
void TObjEneGibbles__sub_802DBC94(O_802DBC94 *self, s32 i);
}

void TObjEneGibbles::set_min_clamped_entry_value(s32 arg0, s32 arg1, f32 farg0) {
  f32 var_f1;
  u8 *new_var;
  var_f1 = farg0;
  if (var_f1 < lbl_805DE7E0)
  {
    var_f1 = lbl_805DE7E0;
  }
  new_var = (u8 *) (&lbl_804E28B0.value);
  new_var = new_var + (arg1 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}

void TObjEneGibbles__sub_802D7A54(void *arg0) {
    s16 t;
    s16 u;
    u32 r;
    if ((get_main_phase() == 0xF || is_split_screen() == 0) && (r = get_player_by_client_id((void *)local_client_id)) != 0) {
        t = get_stat_by_key_state__10TObjPlayerFv((void *)r);
        u = get_stat_by_key_state__10TObjPlayerFv(arg0);
        if (u == t) {
            TCameraCtrl__sub_8006A044(0x1E, lbl_805DE7E0);
        }
    }
}

s32 TObjEneGibbles::spawn_ground_impact_effects(void *pos, f32 farg0) {
    Vec_802D7ACC v;
    f32 y;
    s32 *hit;
    u8 *p;
    if (farg0 <= TObjEneGibbles__data_805DE7E4) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((Vec_800A6B14 *)&v, (const Vec_800A6B14 *)pos);
    y = v.y;
    v.y = y + TObjEneGibbles__data_805DE7E8;
    hit = (s32 *)csnVectorUnder((s32 *)&v, (s32)this + 0x120, 5, y);
    if ((hit != NULL) && (hit[0] & 4)) {
        p = (u8 *)spawn_particle_effect((void *)(hit[1] + 0x38), 0x49);
        if (p != NULL) {
            attach_particle_model(p, TParticleCtrl::get_particle_model(2), TParticleCtrl::get_instance(), 0, 1, TObjEneGibbles__data_805DE7EC);
            ((TObjPlayer *)p)->set_position_xy(farg0, TObjEneGibbles__data_805DE7EC);
        }
        p = (u8 *)spawn_particle_effect((void *)(hit[1] + 0x38), 0xA4);
        if (p != NULL) {
            ((TObjPlayer *)p)->set_position_xy(farg0, lbl_805DE7F0);
        }
        return 1;
    }
    return 0;
}

s32 TObjEneGibbles__sub_802D7BE0(s32 arg0) {
    Stack_802D7BE0 stack;
    f32 temp_f1;
    s32 *temp_r3;
    ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    temp_f1 = stack.spC;
    stack.spC = temp_f1 + TObjEneGibbles__data_805DE7E8;
    temp_r3 = (s32 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15, temp_f1));
    if (temp_r3 != NULL) {
        if (*temp_r3 & 4) {
            ((TObjEneGibbles *)arg0)->spawn_ground_impact_effects((void *)((void *) (arg0 + 0x38)), (f32) (TObjEneGibbles__data_805DE7F4));
            return 0;
        }
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0x20E));
        return 1;
    }
    return 2;
}

void TObjEneGibbles::play_distance_sound() {
    s32 arg0 = (s32)this;
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneGibbles__data_805DE7F8)) != 0) {
        if (((s32)spawn_ground_impact_effects((void *)((void *)(arg0 + 0x38)), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)((TObjEneGibbles*)((void *)((void *) (arg0))))->resolve_sound_id((u32)((int) (0x3A83D)))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
        return;
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE7FC)) != 0) {
        if (((s32)spawn_ground_impact_effects((void *)((void *)(arg0 + 0x38)), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)((TObjEneGibbles*)((void *)((void *) (arg0))))->resolve_sound_id((u32)((int) (0x3A83E)))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
        return;
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE800)) != 0) {
        if (((s32)spawn_ground_impact_effects((void *)((void *)(arg0 + 0x38)), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)((TObjEneGibbles*)((void *)((void *) (arg0))))->resolve_sound_id((u32)((int) (0x3A83F)))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
    }
}

void TObjEneGibbles__sub_802D7DAC(s32 arg0) {
    if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE804)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE808)) != 0)) {
        if (((s32)((TObjEneGibbles *)arg0)->spawn_ground_impact_effects((void *)((void *) (arg0 + 0x38)), (f32) (TObjEneGibbles__data_805DE7F4))) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)((TObjEneGibbles*)((void *)((void *) (arg0))))->resolve_sound_id((u32)((int) (0x3A82B)))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
    }
}

void TObjEneGibbles__sub_802D7E3C(void) {  }

void TObjEneGibbles::update_shadow_height() {
    *(f32 *)((s8 *)(this->m_a4) + 4) = (f32) (this->m_300 - this->position[1]);
}

void TObjEneGibbles::update_position() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;

    ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, arg0 + 0x38);
    this->m_300 = (f32) (this->m_300 + TObjEneGibbles__data_805DE7E8);
    temp_r0 = this->mode;
    switch (temp_r0) {
    case 2:
    case 6:
    case 0xA:
        this->m_300 = (f32) (this->m_300 + this->m_38c);
        break;
    }
}

void render_and_get_joint_pos__14TObjEneGibblesFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_802D7ED4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802D7ED4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802D7ED4, sp10) == 0x8) ? 1 : -1];
    Stack_802D7ED4 stack;
    TObjPlayer::set_global_flag();
    push_matrix_from((void *) (&identity_matrix.value));
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    scale_matrix_vec3((int) (0), (void *) (arg0 + 0x68));
    TObjPlayer::set_global_flag();
    ((TObjPlayer *)arg0)->render_anim_model((f32) (*(f32 *)((s8 *)arg0 + 0xC0)));
    TObjPlayer::clear_global_state();
    pop_matrix();
    push_matrix_from((void *) (anim_model_matrix_array + (arg2 * 0x30)));
    stack.sp8 = *(s32 *)((s8 *)(&gibbles_joint_zero_vec.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&gibbles_joint_zero_vec.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&gibbles_joint_zero_vec.value) + 8);
    matrix_mult_vec((int) (0), (void *) (&stack.sp8), (void *) (arg1));
    pop_matrix();
    TObjPlayer::clear_global_state();
}

}

u32 TObjEneGibbles::resolve_sound_id(u32 sound_id) {
  s32 iVar1;
  u32 pvVar2;
  iVar1 = TOKeyMachine01::get_global_state();
  if (sound_id == 0x3a83d) {
    pvVar2 = (u32)(0x4003a321);
    if (iVar1 != 0x23) {
      pvVar2 = sound_id;
    }
  }
  else if (sound_id == 0x3a83e) {
    pvVar2 = (u32)(0x4003a322);
    if (iVar1 != 0x23) {
      pvVar2 = sound_id;
    }
  }
  else if (sound_id == 0x3a83f) {
    pvVar2 = (u32)(0x4003a323);
    if (iVar1 != 0x23) {
      pvVar2 = sound_id;
    }
  }
  else {
    pvVar2 = (u32)(copy_target_state__14TObjEnePanarmsFPv((void *) (this), sound_id));
  }
  return pvVar2;
}

extern "C" {

void TObjEneGibbles__sub_802D8034(void) {  }

void TObjEneGibbles::sync_state() {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = this->m_380;
    switch (temp_r0) {
    case 0x0:
        break;
    default:
        update_move_state();
    case 0x107:
    case 0x10E:
        if (this->m_374 & 4) {
            if ((s32) *(s32 *)((s8 *)this + 0x384) != (s32) this->m_380) {
                *(s32 *)((s8 *)this + 0x384) = this->m_380;
            }
        }
        break;
    }
}

void TObjEneGibbles::update_move_state() {
    s16 temp_r0;
    s16 temp_r6;

    temp_r0 = *(s16 *)((s8 *)this + 0x38A);
    temp_r6 = this->m_388;
    if (temp_r0 == temp_r6) {
        this->m_380 = 0x101;
        return;
    }
    if ((lbl_805DE80C * (f32) temp_r0) < (f32) temp_r6) {
        this->m_380 = 0x102;
        return;
    }
    if (temp_r6 > 0) {
        this->m_380 = 0x103;
        return;
    }
    this->m_380 = 0;
}

void TObjEneGibbles__sub_802D8140(u8 *arg0) {
  Stack_802D8140 stack;
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x328));
  switch (temp_r0)
  {
    case 0:
      *((s16 *) (((s8 *) arg0) + 0x328)) = 1;
      *((f32 *) (((s8 *) arg0) + 0x3A0)) = (f32) TObjEneGibbles__data_805DE7E4;
      apply_actor_gravity((void *)((void *) arg0), (int)(0), TObjEneGibbles__data_805DE7E4);
      play_sound_effect((int)((void *) ((s32)((TObjEneGibbles*)((void *)((void *)(arg0))))->resolve_sound_id((u32)((int)(0x3A333))))), (void *)(arg0 + 0x38), (int)(0), (int)(0));
      return;
    case 1:
      advance_animation_playback();
      if ((*((s32 *) (((s8 *) arg0) + 0xB0))) & 0x10)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 4;
      stack.sp8 = TObjEneGibbles__data_805DE7E4;
      stack.spC = TObjEneGibbles__data_805DE7E4;
      stack.sp10 = lbl_805DE810;
      rotate_xz_pair_by_angle(&stack.sp8, &stack.sp10, *((s32 *) (((s8 *) arg0) + 0x60)), TObjEneGibbles__data_805DE7E4);
      vec3_add_to(&stack.sp8, arg0 + 0x38);
      TObjPlayer__sub_800D93C4(&stack.sp8, 0xA);
      ((TObjPlayer *)(&stack.sp8))->spawn_effect_at_ground(0x46);
    }
    case 2:
      return;
    case 4:
      *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3C))) - lbl_805DE7E0);
      *((f32 *) (((s8 *) arg0) + 0x3A0)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3A0))) + lbl_805DE7E0);
      if ((*((f32 *) (((s8 *) arg0) + 0x3A0))) > lbl_805DE814)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 3;
      return;
    }
      break;
    case 3:
      queue_destruction__7TObjectFv();
      break;
    return;
  }
}

void TObjEneGibbles::vfunc_63() {
    void *temp_r4;

    if ((s16) *(s16 *)((s8 *)this + 0x326) != 9) {
        *(s16 *)((s8 *)this + 0x326) = 9;
        *(s16 *)((s8 *)this + 0x328) = 0;
        *(s16 *)((s8 *)this + 0xB8) = 9;
        temp_r4 = *(void **)((s8 *)this + 0xA4);
        *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFFE);
        ((TObjPlayer *)this)->refresh_lobby_state();
        send_entity_set_flags__6TLobbyFPv(this);
    }
}

void TObjEneGibbles::update_action_state() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    u8 *temp_r4;

    advance_animation_playback();
    clamp_angle((int) (0));
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        play_sound_effect(((TObjEneGibbles*)((void *)((void *)((void *) (arg0)))))->resolve_sound_id((u32)((int)((int) (0x3AD34)))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 1:
        this->m_310 = (f32) TObjEneGibbles__data_805DE7E4;
        (*(f32 *)&this->unk_308) = (f32) TObjEneGibbles__data_805DE7E4;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        if ((u32) this->m_b4 != 8U) {
            *(s16 *)((s8 *)arg0 + 0x328) = 3;
        }
        break;
    case 3:
        if (!((*(s32 *)&this->actorFlags) & 0x800000)) {
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        }
        (*(s32 *)&this->actorFlags) = (s32) ((*(s32 *)&this->actorFlags) & 0xFFFFF9FF);
        temp_r4 = (unsigned char *) (this->m_a4);
        *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFBFFFFFF);
        this->referenceHp = (s16) this->hp;
        if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0), (int) (temp_r4)) < *(f32 *)((s8 *)arg0 + 0x398)) {
            this->mode = 6;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s16 *)((s8 *)arg0 + 0xB8) = 4;
            this->m_374 = (s32) (this->m_374 | 0x90);
        }
        break;
    }
    ((TObjPlayer *)arg0)->check_object_collisions();
    check_enemy_body_collisions((void *) (arg0));
    ((TObjPlayer *)arg0)->update_enemy_collision_flags();
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    (*(s32 *)&this->actorFlags) = (s32) ((*(s32 *)&this->actorFlags) & 0xFFDFFFFF);
}

void TObjEneGibbles::vfunc_61() {
    s16 temp_r0;
    void *temp_r5;

    temp_r0 = *(s16 *)((s8 *)this + 0x326);
    if ((temp_r0 != 7) && (temp_r0 != 6)) {
        *(s16 *)((s8 *)this + 0x326) = 7;
        *(s16 *)((s8 *)this + 0x328) = 0;
        *(s16 *)((s8 *)this + 0xB8) = 7;
    }
    temp_r5 = *(void **)((s8 *)this + 0xA4);
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 1);
    *(s32 *)((s8 *)this + 0x30) = (s32) (*(s32 *)((s8 *)this + 0x30) & 0xF99BFFFF);
}

int TObjEneGibbles::test_flag_256() {
    u8 *arg0 = (u8 *)this;
    Vec_802D8828 v;
    u8 *pl;
    s32 i;
    s32 flags;
    flags = *(s32 *)((s8 *)arg0 + 0x374);
    if (flags & 0x20) {
        return 1;
    }
    if ((flags & 4) && *(s16 *)((s8 *)arg0 + 0x326) != 6 && *(s16 *)((s8 *)arg0 + 0x388) > 0) {
        for (i = 0; i < lbl_805D586C; i++) {
            pl = get_player_data__10TObjPlayerFi(i);
            if (pl != NULL && !(*(s32 *)((s8 *)pl + 0x30) & 0x800)
                && calc_distance_to_client__10TObjPlayerFlUsUl(arg0, i, &v) < lbl_805DE824
                && angle_difference_abs(*(s32 *)((s8 *)arg0 + 0x60), (s32) (TObjEneGibbles__data_80472798 * atan2_float(v.x, v.z))) < 0x2AAA
                && test_action_mask__10TObjPlayerFl(pl, 0xE0) != 0) {
                VecCopy__FP3VecPC3Vec((Vec_800A6B14 *) &v, (Vec_800A6B14 *) (arg0 + 0x2FC));
                subtract_vector(&v, pl + 0x2FC);
                if (angle_difference_abs(*(s32 *)((s8 *)pl + 0x60), (s32) (TObjEneGibbles__data_80472798 * atan2_float(v.x, v.z))) < 0x2AAA) {
                    *(u8 **)((s8 *)arg0 + 0x3B0) = pl;
                    *(s32 *)((s8 *)arg0 + 0x374) |= 0x20;
                    return 1;
                }
            }
        }
    }
    return 0;
}

#pragma push
#pragma opt_loop_invariants off

#define F_802D(off, T) (*(T *)((s8 *)(arg0) + (off)))

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline void to_idle_802D8984(Gib_802D8984 *o) {
    enemy_set_heading_velocity(o, o->angle, TObjEneGibbles__data_805DE7E4);
    o->f374 &= ~0x100;
    o->mode = 3;
    o->sub = 0;
    o->fB8 = 1;
    o->f30 &= 0xF9FBFFFF;
}
#define PRM ((Prm_802D8984 *)TObjEneGibbles__ai_parameters)
void TObjEneGibbles__sub_802D8984(u8 *arg0) {
    Gib_802D8984 *o = (Gib_802D8984 *)arg0;
    if (o->idx < 0x1000) {
        Gib_802D8984 *p = (Gib_802D8984 *)get_player_by_client_id((void *)o->idx);
        if (p != NULL && ((TObjPlayer *)p)->get_field_3e4() == get_current_floor()) {
            o->target = p;
        } else {
            o->target = NULL;
        }
    } else if (o->idx < 0x4000) {
        o->target = (Gib_802D8984 *)get_enemy_entity();
    } else {
        o->idx = 0xFFFF;
        o->target = NULL;
    }
    ((s32 (*)(void *))advance_animation_playback)(o);
    ((TObjEneGibbles *)o)->clamp_angle(0);
    switch (o->sub) {
    case 2:
        break;
    case 0:
        o->f38C = TObjEneGibbles__data_805DE7E4;
        if (!(o->f30 & 0x800000)) {
            apply_actor_gravity(o, 0, TObjEneGibbles__data_805DE7E4);
        }
        o->f3A4 = 0;
        if (o->f374 & 0x80) {
            o->f3A8 = PRM->f18;
            TObjEneGibbles::set_min_clamped_entry_value((s32)o, 6, PRM->fC);
        } else {
            o->f3A8 = PRM->f18;
            TObjEneGibbles::set_min_clamped_entry_value((s32)o, 6, PRM->fC);
        }
        o->sub = 4;
        o->f30 &= 0xF9FFFFFF;
        o->f374 &= ~0x80;
        o->f374 |= 0x100;
        break;
    case 4:
        o->f3A4++;
        if (o->f3A4 >= o->f3A8) {
            if (o->target != NULL) {
                Vec_800A6B14 v;
                Vec_802DA0BC t = o->target->f2FC;
                if (select_enemy_destination(o, &t, 1) != 0) {
                    f32 dist;
                    o->sub = 1;
                    {
                        Vec_802DA0BC q = o->f2FC;
                        copy_position_if_valid__10TObjPlayerFii(o, &q);
                    }
                    VecCopy__FP3VecPC3Vec(&v, (Vec_800A6B14 *)&o->f29C);
                    subtract_vector(&v, &o->f2FC);
                    dist = newton_sqrtf(v.x * v.x + v.z * v.z);
                    dist -= TObjEneGibbles__data_805DE7E8;
                    calc_velocity_toward_destination(o, o->f290, o->f29C, lbl_805DE828 * dist);
                    play_sound_effect(((TObjEneGibbles*)((void *)(o)))->resolve_sound_id((u32)(0x3A82F)), &o->pos, 0, 0);
                    o->f390 = lbl_805DE82C;
                    o->fB8 = 5;
                    o->f30 |= 0x06000000;
                    o->fA4->f18 &= ~1;
                    goto done;
                }
            }
            ((void (*)(f32, void *, s32))enemy_set_heading_velocity)(TObjEneGibbles__data_805DE7E4, o, o->angle);
            o->f374 &= ~0x100;
            o->mode = 3;
            o->sub = 0;
            o->fB8 = 1;
            o->f30 &= 0xF9FBFFFF;
        done:
            TObjEneGibbles__sub_802D7BE0((s32)o);
        }
        submit_cursor_candidate(o, -1);
        break;
    case 1:
        if (o->fC0 >= TObjEneGibbles__data_805DE7F8) {
            move_with_wall_slide(o);
            o->f38C += o->f390;
            if (o->fC0 >= lbl_805DE814) {
                o->f390 -= TObjEneGibbles__data_805DE830;
            } else {
                o->f390 -= lbl_805DE80C;
            }
        }
        if (objInBand__FP7GameObjf(o, o->fC4 - TObjEneGibbles__data_805DE7EC - o->fC8) != 0) {
            o->sub = 3;
            o->f38C = TObjEneGibbles__data_805DE7E4;
            switch (TObjEneGibbles__sub_802D9A04(o)) {
            case 0:
                TObjEneGibbles__sub_800D8988(&o->pos);
                break;
            case 1:
            default:
                play_sound_effect(((TObjEneGibbles*)((void *)(o)))->resolve_sound_id((u32)(0x3AD32)), &o->pos, 0, 0);
                break;
            }
            o->f30 &= 0xF9FFFFFF;
            o->fA4->f18 |= 1;
            o->f374 &= ~0x10;
            o->fB8 = 6;
            TObjEneGibbles__sub_802D7A54(o);
        }
        break;
    case 3:
        if (!(o->f30 & 0x800000)) {
            apply_actor_gravity(o, 0, TObjEneGibbles__data_805DE7E4);
        }
        if (objInBand__FP7GameObjf(o, o->fC4 - TObjEneGibbles__data_805DE7EC - o->fC8) != 0) {
            o->f30 &= ~0x200000;
            to_idle_802D8984(o);
        }
        submit_cursor_candidate(o, -1);
        break;
    }
    minimap_render_dot(&o->pos, -0x5DB4, 1, 0);
}
#pragma pop

void TObjEneGibbles__sub_802D8E8C(u8 *arg0) {
    u32 p;
    u16 id;
    u8 *temp_r5;
    id = F_802D(0x338, u16);
    if (id < 0x1000) {
        p = get_player_by_client_id((void *)id);
        if (p != 0 && ((TObjPlayer *)p)->get_field_3e4() == get_current_floor()) {
            F_802D(0x2A8, u32) = p;
        } else {
            F_802D(0x2A8, u32) = 0;
        }
    } else if (id < 0x4000) {
        F_802D(0x2A8, s32) = get_enemy_entity();
    } else {
        F_802D(0x338, u16) = 0xFFFF;
        F_802D(0x2A8, s32) = 0;
    }
    temp_r5 = F_802D(0xA4, u8 *);
    *(s32 *)((s8 *)temp_r5 + 0x18) |= 1;
    F_802D(0x30, s32) &= 0xF9FBFFFF;
    TObjEneGibbles__sub_802D7DAC((s32)arg0);
    ((void (*)(void *))advance_animation_playback)(arg0);
    ((TObjEneGibbles *)arg0)->clamp_angle(0);
    switch (F_802D(0x328, s16)) {
    case 0:
        F_802D(0x328, s16) = 1;
        apply_actor_gravity(arg0, 0, TObjEneGibbles__data_805DE7E4);
        F_802D(0x374, s32) |= 0x100;
        play_sound_effect(((TObjEneGibbles*)((void *)(arg0)))->resolve_sound_id((u32)(0x3AD2E)), arg0 + 0x38, 0, 0);
        break;
    case 1:
    case 2:
        if (!(F_802D(0x30, s32) & 0x800000)) {
            apply_actor_gravity(arg0, 0, TObjEneGibbles__data_805DE7E4);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805DE834) != 0) {
            play_sound_effect(((TObjEneGibbles*)((void *)(arg0)))->resolve_sound_id((u32)(0x3A82D)), arg0 + 0x2FC, 0, 0);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805DE838) != 0) {
            F_802D(0x328, s16) = 2;
        }
        if (F_802D(0x328, s16) == 1) {
            TObjEneGibbles__sub_802D9644(arg0, 1, get_attack_params_atp_min(*(void **)((s8 *)gibbles_combat_stat_entries + 8)));
        }
        if (F_802D(0xB4, u32) != 4) {
            F_802D(0x328, s16) = 3;
            F_802D(0x37E, s16)++;
        }
        break;
    case 3:
        ((TObjEneGibbles *)arg0)->update_move_state();
        if (F_802D(0x37E, s16) >= 2) {
            F_802D(0x37E, s16) = 0;
            F_802D(0x374, s32) &= ~0x108;
        }
        F_802D(0x30, s32) &= 0xFFDFFFFF;
        break;
    }
    ((TObjPlayer *)arg0)->check_object_collisions();
    check_enemy_body_collisions(arg0);
    ((TObjPlayer *)arg0)->update_enemy_collision_flags();
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    submit_cursor_candidate(arg0, -1);
}

struct Vec_802D9110 { f32 x, y, z; };
struct Param_802D9110 { u8 pad0[4]; f32 speed; s32 turn; };
struct Gib_802D9110 {
    u8 pad0[0x30];
    u32 flags30;
    u8 pad34[0x38 - 0x34];
    u8 snd[0xA4 - 0x38];
    u8 *fA4;
    u8 padA8[0xB8 - 0xA8];
    s16 motion;
    u8 padBA[0xC0 - 0xBA];
    f32 frame;
    f32 frameEnd;
    f32 frameStep;
    u8 padCC[0x2A8 - 0xCC];
    Gib_802D9110 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_802D9110 pos;
    Vec_802D9110 vel;
    u8 pad314[0x328 - 0x314];
    s16 state;
    u8 pad32A[0x338 - 0x32A];
    u16 targetId;
    s16 timer;
    u8 pad33C[0x350 - 0x33C];
    Param_802D9110 *param;
    u8 pad354[0x374 - 0x354];
    u32 flags374;
};

s32 update_angle__10TObjPlayerFlPv(void *, s32, void *);
void TObjEneGibbles__sub_802D9824(void *, int, f32);
void slam_damage_players__14TObjEneGibblesFii(s32 arg0, s32 arg1);
extern const f32 lbl_805DE7FC;
extern const f32 lbl_805DE800;
extern const f32 TObjEneGibbles__data_805DE81C;
extern const f32 lbl_805DE838;
extern const f32 lbl_805DE83C;
extern const f32 lbl_805DE840;
extern const f32 lbl_805DE844;
extern const f32 lbl_805DE848;
extern const f32 lbl_805DE84C;
extern const f32 lbl_805DE850;
extern const f32 lbl_805DE854;

void TObjEneGibbles__sub_802D9110(Gib_802D9110 *self) {

    u8 *t = self->fA4;
    *(s32 *)(t + 0x18) |= 1;
    self->flags30 &= 0xF9FBFFFF;
    u16 id = self->targetId;
    if (id < 0x1000) {
        u32 p = get_player_by_client_id((void *)id);
        if (p != 0 && ((TObjPlayer *)p)->get_field_3e4() == get_current_floor()) {
            self->target = (Gib_802D9110 *)p;
        } else {
            self->target = NULL;
        }
    } else if (id < 0x4000) {
        self->target = (Gib_802D9110 *)get_enemy_entity();
    } else {
        self->targetId = 0xFFFF;
        self->target = NULL;
    }
    switch (self->state) {
    case 0:
        if (self->target == NULL) {
            self->state = 0;
            self->flags30 &= 0xFFDFFFFF;
            self->timer = 0;
        } else {
            Vec_802D9110 d;
            s32 diff;
            VecCopy__FP3VecPC3Vec((Vec_800A6B14 *)&d, (const Vec_800A6B14 *)&self->target->pos);
            subtract_vector(&d, &self->pos);
            diff = update_angle__10TObjPlayerFlPv(self, self->param->turn, &d);
            if (!(self->flags30 & 0x800000)) {
                apply_actor_gravity(self, 0, TObjEneGibbles__data_805DE7E4);
            }
            if (diff < 0x10) {
                self->flags374 |= 0x100;
                self->state = 1;
                self->motion = 2;
                if (check_path_obstructed(self, &self->target->pos) == 1) {
                    self->vel.x = self->vel.y = self->vel.z = TObjEneGibbles__data_805DE7E4;
                } else {
                    ((void (*)(void *, Vec_802D9110, Vec_802D9110, f32))calc_velocity_toward_destination)(self, self->pos, self->target->pos, self->param->speed);
                }
            }
        }
        break;
    case 1:
        self->motion = 2;
        if (objInBand__FP7GameObjf(self, TObjEneGibbles__data_805DE81C) != 0) {
            self->state = 2;
            play_sound_effect(((TObjEneGibbles*)((void *)(self)))->resolve_sound_id((u32)(0x3AD34)), self->snd, 0, 0);
        }
        break;
    case 2:
        self->motion = 2;
        if (objInBand__FP7GameObjf(self, TObjEneGibbles__data_805DE7F8) != 0) {
            slam_damage_players__14TObjEneGibblesFii((s32)self, 0x1F);
        } else {
            TObjEneGibbles__sub_802D9644(self, 0, TObjEneGibbles__data_805DE7E4);
        }
        if (lbl_805DE83C <= self->frame && self->frame <= lbl_805DE840) {
            ((void (*)(void *))TObjEneGibbles__sub_802D8034)(self);
        }
        if (objInBand__FP7GameObjf(self, TObjEneGibbles__data_805DE7E8) != 0) {
            self->state = 3;
        }
        break;
    case 3:
        self->motion = 2;
        move_with_wall_slide(self);
        if (objInBand__FP7GameObjf(self, lbl_805DE840) != 0) {
            self->state = 4;
            play_sound_effect(((TObjEneGibbles*)((void *)(self)))->resolve_sound_id((u32)(0x3AD34)), self->snd, 0, 0);
        }
        break;
    case 4:
        self->motion = 2;
        if (objInBand__FP7GameObjf(self, lbl_805DE7FC) != 0) {
            slam_damage_players__14TObjEneGibblesFii((s32)self, 0x35);
        } else {
            TObjEneGibbles__sub_802D9824(self, 0, TObjEneGibbles__data_805DE7E4);
        }
        if (lbl_805DE838 <= self->frame && self->frame <= lbl_805DE844) {
            ((void (*)(void *))TObjEneGibbles__sub_802D8034)(self);
        }
        if (objInBand__FP7GameObjf(self, lbl_805DE848) != 0) {
            self->state = 5;
        }
        break;
    case 5:
        self->motion = 2;
        move_with_wall_slide(self);
        if (objInBand__FP7GameObjf(self, lbl_805DE84C) != 0) {
            self->state = 6;
            play_sound_effect(((TObjEneGibbles*)((void *)(self)))->resolve_sound_id((u32)(0x3AD34)), self->snd, 0, 0);
        }
        break;
    case 6:
        self->motion = 2;
        if (objInBand__FP7GameObjf(self, lbl_805DE800) != 0) {
            slam_damage_players__14TObjEneGibblesFii((s32)self, 0x1F);
        } else {
            TObjEneGibbles__sub_802D9644(self, 0, TObjEneGibbles__data_805DE7E4);
        }
        if (lbl_805DE850 <= self->frame && self->frame <= lbl_805DE854) {
            ((void (*)(void *))TObjEneGibbles__sub_802D8034)(self);
        }
        if (((s32 (*)(void *, f32, f32))objInBand__FP7GameObjf)(self, (self->frameEnd - TObjEneGibbles__data_805DE7EC) - self->frameStep, self->frameEnd) != 0) {
            self->motion = 0;
            self->state = 7;
            self->timer = (s16)*(f32 *)(TObjEneGibbles__ai_parameters + 4);
        }
        break;
    case 7:
        if (--self->timer < 0) {
            self->motion = 1;
            self->state = 0;
            self->flags30 &= 0xFFDFFFFF;
            self->timer = 0;
            self->flags374 &= ~0x100;
        }
        break;
    }
    ((TObjEneGibbles *)self)->play_distance_sound();
    ((void (*)(void *))advance_animation_playback)(self);
    ((TObjEneGibbles *)self)->clamp_angle(0);
    ((TObjPlayer *)self)->check_object_collisions();
    check_enemy_body_collisions(self);
    ((TObjPlayer *)self)->update_enemy_collision_flags();
    minimap_render_dot(self->snd, -0x5DB4, 1, 0);
    submit_cursor_candidate(self, -1);
}

s32 TObjEneGibbles__sub_802D9A04(void *arg0) {
    s32 i;
    VObj_802D9A04 *pl;

    for (i = 0; i < lbl_805D5868; i++) {
        pl = ((VObj_802D9A04 * (*)(s32))get_player_data__10TObjPlayerFi)(i);
        if (is_valid_and_active__10TObjPlayerFUl() != 0 && obj_getField1c(pl) < 0x1000U) {
            f32 dist = horizontal_distance_squared((int) ((u8 *) pl + 0x2FC), (void *) ((s32) arg0 + 0x38));
            if (dist <= get_pos_x__14TObjEneGibblesFPv(*(void **)((s8 *)gibbles_combat_stat_entries + 4)) * get_pos_x__14TObjEneGibblesFPv(*(void **)((s8 *)gibbles_combat_stat_entries + 4))) {
                Arg_802D9A04 tmp;
                tmp.a = 0;
                tmp.b = get_attack_params_atp_min(*(void **)((s8 *)gibbles_combat_stat_entries + 4));
                Arg_802D9A04 a = tmp;
                f32 res = pl->m21(arg0, &a, 0, -1, -1);
                pl->m23(arg0);
                if (res > TObjEneGibbles__data_805DE7E4) {
                    obj_setFlags30(pl, 0x600);
                }
            }
        }
    }
    return ((s32 (*)(void *))TObjEneGibbles__sub_802D7BE0)(arg0);
}
extern int fold_flush_0;
#pragma pop

void slam_damage_players__14TObjEneGibblesFii(s32 arg0, s32 arg1) {
    Vec_802D9B80 v;
    Hit_802D9B80 a;
    f32 d;
    s32 i;
    u8 *p;

    if (arg1 == 0x35) {
        ((s32 (*)(s32, void *, int))render_and_get_joint_pos__14TObjEneGibblesFPvii)(arg0, &v, 0x35);
    } else if (arg1 == 0x1F) {
        ((s32 (*)(s32, void *, int))render_and_get_joint_pos__14TObjEneGibblesFPvii)(arg0, &v, 0x1F);
    } else {
        return;
    }
    v.y += lbl_805DE808;
    if (csnVecterUnder(&v, 0x16EF) != 0) {
        if (((TObjEneGibbles *)arg0)->spawn_ground_impact_effects(&v, lbl_805DE858) == 0) {
            v.y += TObjEneGibbles__data_805DE81C;
            spawn_particle_effect(&v, 0x64);
        }
        for (i = 0; i < lbl_805D5868; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (((s32 (*)(void *))is_valid_and_active__10TObjPlayerFUl)(p) != 0 && obj_getField1c(p) < 0x1000) {
                d = horizontal_distance_squared((int)(p + 0x2FC), &v);
                if (d <= get_pos_x__14TObjEneGibblesFPv(*(void **)gibbles_combat_stat_entries) * get_pos_x__14TObjEneGibblesFPv(*(void **)gibbles_combat_stat_entries)) {
                    a.x = 0;
                    a.y = get_attack_params_atp_min(*(void **)gibbles_combat_stat_entries);
                    Hit_802D9B80 h = a;
                    ((VObj_18_22e4b0 *)p)->m21(arg0, &h, 0, -1, -1);
                    ((VObj_18_22e4b0 *)p)->m23(arg0);
                }
            }
        }
    }
}

void TObjEneGibbles::vfunc_60() {
    u8 *arg0 = (u8 *)this;
    Vec_802D9D64 v;
    switch (*(s16 *)((s8 *)arg0 + 0x37C)) {
    case 0:
    default: {
        VecCopy__FP3VecPC3Vec((Vec_800A6B14 *) &v, (Vec_800A6B14 *) (*(u8 **)((s8 *)arg0 + 0x2A8) + 0x2FC));
        subtract_vector(&v, arg0 + 0x2FC);
        f64 t = atan2_float(v.x, v.z);
        *(s16 *)((s8 *)arg0 + 0x326) = 4;
        if ((s32) (TObjEneGibbles__data_80472798 * t) < 0x10) {
            *(s16 *)((s8 *)arg0 + 0x328) = 1;
            *(s16 *)((s8 *)arg0 + 0xB8) = 2;
        } else {
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        }
        break;
    }
    case 2:
        *(s16 *)((s8 *)arg0 + 0x326) = 5;
        *(s16 *)((s8 *)arg0 + 0x328) = 0;
        *(s16 *)((s8 *)arg0 + 0xB8) = 3;
        break;
    case 1:
        *(s16 *)((s8 *)arg0 + 0x326) = 6;
        *(s16 *)((s8 *)arg0 + 0x328) = 0;
        *(s16 *)((s8 *)arg0 + 0xB8) = 4;
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFFFF7F);
        break;
    }
    bind_enemy_combat_stats(arg0, 0, ((s32 *) gibbles_combat_stat_entries)[*(s16 *)((s8 *)arg0 + 0x37C)], 0);
    *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0x18) |= 1;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xF9FBFFFF);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x200000);
}

#define TGT_802D9EB4 (((void **)gibbles_combat_stat_entries)[(*(s16 *)((s8 *)(arg0) + 0x37C))])
s32 TObjEneGibbles::is_target_in_attack_range() {
    u8 *arg0 = (u8 *)this;
    Vec_802D9EB4 v;
    f32 rad;
    f32 dist;
    s32 ang;
    u8 *obj;
    u8 *sub;
    if (*(s16 *)((s8 *)arg0 + 0x326) >= 3) {
        obj = *(u8 **)((s8 *)arg0 + 0x2A8);
        if (obj != NULL && *(u32 *)((s8 *)arg0 + 0x318) != 0 && !(*(s32 *)((s8 *)obj + 0x30) & 0x02000800)) {
            dist = calc_xz_distance_sq__10TObjPlayerFiUiPv(arg0, obj, &v);
            ang = angle_difference_abs(*(s32 *)((s8 *)arg0 + 0x60), (s32)(TObjEneGibbles__data_80472798 * atan2_float(v.x, v.z)));
            sub = *(u8 **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x2A8)) + 0xA4);
            if (sub != NULL) {
                rad = *(f32 *)((s8 *)sub + 0xC);
            } else {
                rad = lbl_805DE834;
            }
            if (*(s32 *)((s8 *)arg0 + 0x374) & 8) {
                *(s16 *)((s8 *)arg0 + 0x37C) = 2;
                if (dist <= (rad + ((TObjPlayer *)TGT_802D9EB4)->get_pos_x()) * (rad + ((TObjPlayer *)TGT_802D9EB4)->get_pos_x()) && ang <= ((TObjPlayer *)TGT_802D9EB4)->get_field_0c()) {
                    return 1;
                }
            } else if (*(s32 *)((s8 *)arg0 + 0x374) & 0x10) {
                *(s16 *)((s8 *)arg0 + 0x37C) = 1;
                if (dist <= (lbl_805DE85C + rad) * (lbl_805DE85C + rad) && ang <= 0xAAA) {
                    return 1;
                }
            } else {
                *(s16 *)((s8 *)arg0 + 0x37C) = 0;
                if (dist <= (rad + ((TObjPlayer *)TGT_802D9EB4)->get_pos_x()) * (rad + ((TObjPlayer *)TGT_802D9EB4)->get_pos_x()) && ang <= ((TObjPlayer *)TGT_802D9EB4)->get_field_0c()) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void TObjEneGibbles__sub_802DA0BC(u8 *arg0) {
    f32 d;
    s32 ok;
    *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0x18) |= 1;
    *(u32 *)((s8 *)arg0 + 0x30) &= 0xF9DBFFFF;
    if (*(u8 **)((s8 *)arg0 + 0x2A8) == NULL) {
        return;
    }
    switch (*(s16 *)((s8 *)arg0 + 0x328)) {
    case 2:
        break;
    case 0: {
        Vec_802DA0BC v = *(Vec_802DA0BC *)(*(u8 **)((s8 *)arg0 + 0x2A8) + 0x2FC);
        if (select_enemy_destination(arg0, &v, 7) != 0) {
            *(s16 *)((s8 *)arg0 + 0x328) = 1;
            {
                Vec_802DA0BC v2 = *(Vec_802DA0BC *)(arg0 + 0x2FC);
                copy_position_if_valid__10TObjPlayerFii(arg0, &v2);
            }
            apply_actor_gravity(arg0, 0, TObjEneGibbles__data_805DE7E4);
            *(f32 *)((s8 *)arg0 + 0x3A0) = TObjEneGibbles__data_805DE7E4;
        } else {
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s16 *)((s8 *)arg0 + 0x326) = 0xB;
            *(s16 *)((s8 *)arg0 + 0xB8) = 1;
            *(u32 *)((s8 *)arg0 + 0x30) &= 0xF99BFFFF;
        }
        break;
    }
    case 1:
        {
            f32 dt = *(f32 *)((s8 *)TObjEneGibbles__ai_parameters + 8);
            *(f32 *)((s8 *)arg0 + 0x3A0) += dt;
            Vec_802DA0BC v = *(Vec_802DA0BC *)(*(u8 **)((s8 *)arg0 + 0x2A8) + 0x2FC);
            enemy_move_toward(arg0, *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x350)) + 8), &v, 0, dt);
        }
        d = horizontal_distance_squared((int)(arg0 + 0x29C), arg0 + 0x38);
        {
            Vec_802DA0BC v = *(Vec_802DA0BC *)(*(u8 **)((s8 *)arg0 + 0x2A8) + 0x2FC);
            ok = select_enemy_destination(arg0, &v, 1);
        }
        if (d >= lbl_805DE860 && ok != 0) {
            *(u32 *)((s8 *)arg0 + 0x374) |= 0x10;
        } else if (*(f32 *)((s8 *)arg0 + 0x3A0) >= lbl_805DE864) {
            *(f32 *)((s8 *)arg0 + 0x3A0) = TObjEneGibbles__data_805DE7E4;
            if (((f32 (*)(void *))calc_boss4_scale__10TObjPlayerFi)(arg0) < *(f32 *)((s8 *)arg0 + 0x394) && ok != 0) {
                *(u32 *)((s8 *)arg0 + 0x374) |= 0x10;
            } else {
                *(u32 *)((s8 *)arg0 + 0x374) &= ~0x10;
            }
        } else {
            *(u32 *)((s8 *)arg0 + 0x374) &= ~0x10;
        }
        {
            f32 r = *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x350)) + 4) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0xC);
            if (d < r * r) {
                *(s16 *)((s8 *)arg0 + 0x328) = 3;
            }
        }
        break;
    case 3:
        *(u32 *)((s8 *)arg0 + 0x374) &= ~0x10;
        *(s16 *)((s8 *)arg0 + 0x328) = 0;
        break;
    }
    TObjEneGibbles__sub_802D7DAC((s32)arg0);
    ((void (*)(void *))advance_animation_playback)(arg0);
    turn_toward_target__14TObjEneGibblesFPv((Obj_800A6B14 *)arg0);
    ((TObjPlayer *)arg0)->check_object_collisions();
    check_enemy_body_collisions(arg0);
    ((TObjPlayer *)arg0)->update_enemy_collision_flags();
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    submit_cursor_candidate(arg0, -1);
}

void TObjEneGibbles::update_death_sequence() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_r0;
    s32 temp_r3;
    u8 *temp_r4;

    (*(s32 *)&this->actorFlags) = (s32) ((*(s32 *)&this->actorFlags) & 0xFFDFFFFF);
    (*(s32 *)&this->actorFlags) = (s32) ((*(s32 *)&this->actorFlags) | 0x06040000);
    temp_r4 = (unsigned char *) (this->m_a4);
    *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFFE);
    ((s32 (*)(int))advance_animation_playback)((int)((int) (arg0)));
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        *(s16 *)((s8 *)arg0 + 0xB8) = 5;
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x3C0));
        this->m_38c = (f32) lbl_805DE868;
        *(f32 *)((s8 *)arg0 + 0x390) = (f32) TObjEneGibbles__data_805DE830;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 1:
        if (((struct GibVObj_802da394_802D87D8 *) (arg0 + 0x3C0))->m5() != 0) {
            this->m_38c = (f32) (this->m_38c - *(f32 *)((s8 *)arg0 + 0x390));
            *(f32 *)((s8 *)arg0 + 0x390) = (f32) (*(f32 *)((s8 *)arg0 + 0x390) + TObjEneGibbles__data_805DE830);
        } else {
            this->m_c0 = (f32) lbl_805DE86C;
        }
        temp_f2 = *(f32 *)((s8 *)arg0 + 0xC4);
        if (((s32 (*)(void *, f32, f32))objInBand__FP7GameObjf)((void *) (arg0), (f32) ((temp_f2 - TObjEneGibbles__data_805DE7EC) - this->m_c8), (f32) (temp_f2)) != 0) {
            this->m_38c = (f32) TObjEneGibbles__data_805DE7E4;
            *(f32 *)((s8 *)arg0 + 0x390) = (f32) TObjEneGibbles__data_805DE7E4;
            temp_r3 = TObjEneGibbles__sub_802D9A04((void *) (arg0));
            switch (temp_r3) {
            case 0:
                TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
                break;
            default:
            case 1:
                ((s32 (*)(void *, void *, int, int))play_sound_effect)((void *) ((TObjEneGibbles*)arg0)->resolve_sound_id(0x3AD32), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                break;
            }
            ((s32 (*)(void *))TObjEneGibbles__sub_802D7A54)((void *) (arg0));
            *(s16 *)((s8 *)arg0 + 0x328) = 3;
        }
        break;
    case 3:
        temp_f2_2 = *(f32 *)((s8 *)arg0 + 0xC4);
        if (((s32 (*)(void *, f32, f32))objInBand__FP7GameObjf)((void *) (arg0), (f32) ((temp_f2_2 - TObjEneGibbles__data_805DE7EC) - this->m_c8), (f32) (temp_f2_2)) != 0) {
            this->m_374 = (s32) (this->m_374 & 0xFFFF0000);
            this->m_374 = (s32) (this->m_374 | 4);
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

void TObjEneGibbles::update_spawn_state() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;

    (*(s32 *)&this->actorFlags) = (s32) ((*(s32 *)&this->actorFlags) & 0xFFDFFFFF);
    (*(s32 *)&this->actorFlags) = (s32) ((*(s32 *)&this->actorFlags) | 0x06040000);
    *(s32 *)((s8 *)(this->m_a4) + 0x18) = (s32) (*(s32 *)((s8 *)(this->m_a4) + 0x18) & 0xFFFFFFFE);
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        apply_actor_gravity((void *) arg0, (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        return;
    case 1:
        if (horizontal_distance_squared((int) ((*(s32 *)&this->target) + 0x2FC), (void *) (arg0 + 0x2FC)) < lbl_805DE870) {
            *(s16 *)((s8 *)arg0 + 0x328) = 3;
        }
    case 2:
        return;
    case 3:
        this->m_374 = (s32) (this->m_374 & 0xFFFF0000);
        this->m_374 = (s32) (this->m_374 | 2);
        break;
    }
}

void TObjEneGibbles::vfunc_59() {
  s16 temp_r0;
  s32 temp_r4;
  void *temp_r3;
  void *temp_r3_2;
  temp_r0 = *((s16 *) (((s8 *) this) + 0x326));
  switch (temp_r0)
  {
    default:
      temp_r4 = *((s32 *) (((s8 *) this) + 0x374));
      if (temp_r4 & 4)
    {
      *((s16 *) (((s8 *) this) + 0x326)) = 3;
      *((s16 *) (((s8 *) this) + 0x328)) = 0;
      *((s16 *) (((s8 *) this) + 0xB8)) = 1;
      *((s32 *) (((s8 *) this) + 0x30)) = (s32) ((*((s32 *) (((s8 *) this) + 0x30))) & 0xF9FBFFFF);
    }
    else
      if (temp_r4 & 1)
    {
      *((s16 *) (((s8 *) this) + 0x326)) = 1;
      *((s16 *) (((s8 *) this) + 0x328)) = 0;
      *((s32 *) (((s8 *) this) + 0x30)) = (s32) ((*((s32 *) (((s8 *) this) + 0x30))) | 0x06040000);
    }
      temp_r3 = *((void **) (((s8 *) this) + 0xA4));
      *((s32 *) (((s8 *) temp_r3) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3) + 0x18))) | 1);
      return;

    case 1:
      if ((*((s32 *) (((s8 *) this) + 0x374))) & 2)
    {
      *((s16 *) (((s8 *) this) + 0x326)) = 2;
      *((s16 *) (((s8 *) this) + 0x328)) = 0;
      *((s32 *) (((s8 *) this) + 0x30)) = (s32) ((*((s32 *) (((s8 *) this) + 0x30))) | 0x06040000);
    }
      return;

    case 2:
      if ((*((s32 *) (((s8 *) this) + 0x374))) & 4)
    {
      *((s16 *) (((s8 *) this) + 0x326)) = 3;
      *((s16 *) (((s8 *) this) + 0x328)) = 0;
      *((s16 *) (((s8 *) this) + 0xB8)) = 1;
      *((s32 *) (((s8 *) this) + 0x30)) = (s32) ((*((s32 *) (((s8 *) this) + 0x30))) & 0xF9FBFFFF);
      return;
    }
      break;

    case 3:
      if ((*((s32 *) (((s8 *) this) + 0x374))) & 3)
    {
      *((s16 *) (((s8 *) this) + 0x326)) = 1;
      *((s16 *) (((s8 *) this) + 0x328)) = 0;
      *((s32 *) (((s8 *) this) + 0x30)) = (s32) ((*((s32 *) (((s8 *) this) + 0x30))) | 0x06040000);
      *((s32 *) (((s8 *) this) + 0x374)) = (s32) ((*((s32 *) (((s8 *) this) + 0x374))) & 0xFFFF0000);
      *((s32 *) (((s8 *) this) + 0x374)) = (s32) ((*((s32 *) (((s8 *) this) + 0x374))) | 1);
      temp_r3_2 = *((void **) (((s8 *) this) + 0xA4));
      *((s32 *) (((s8 *) temp_r3_2) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3_2) + 0x18))) | 1);
      return;
    }
      break;

  }

  return;
}

void TObjEneGibbles__sub_802DA7A4(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x06040000);
    *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & ~0x107);
    temp_r4 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
    *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFFE);
    ((s32 (*)(void *, void *))advance_animation_playback)(arg0, temp_r4);
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    default:
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        *(s16 *)((s8 *)arg0 + 0xB8) = 5;
        *(f32 *)((s8 *)arg0 + 0x38C) = (f32) TObjEneGibbles__data_805DE7E4;
        *(f32 *)((s8 *)arg0 + 0x390) = (f32) lbl_805DE874;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 1:
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneGibbles__data_805DE7F8)) != 0) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
            TObjEneGibbles__sub_802D7BE0((s32) (arg0));
            play_sound_effect((int)(((TObjEneGibbles*)((void *)((void *) (arg0))))->resolve_sound_id((u32)((int) (0x3A82F)))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            ((V_802DA7A4 *)(arg0 + 0x3C0))->m2();
        }
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 2:
        if (((V_802DA7A4 *)(arg0 + 0x3C0))->m4() == 1) {
            *(s16 *)((s8 *)arg0 + 0x328) = 3;
        } else {
            *(f32 *)((s8 *)arg0 + 0x38C) = (f32) (*(f32 *)((s8 *)arg0 + 0x38C) + *(f32 *)((s8 *)arg0 + 0x390));
            *(f32 *)((s8 *)arg0 + 0x390) = (f32) (*(f32 *)((s8 *)arg0 + 0x390) - TObjEneGibbles__data_805DE830);
        }
        break;
    case 3:
        ((TBoss4DarkFalz *)arg0)->set_position_from((void *) (arg0 + 0x50));
        ((TObjPlayer *)arg0)->update_prev_position();
        *(f32 *)((s8 *)arg0 + 0x70) = (f32) TObjEneGibbles__data_805DE7EC;
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) TObjEneGibbles__data_805DE7EC;
        *(f32 *)((s8 *)arg0 + 0x68) = (f32) TObjEneGibbles__data_805DE7EC;
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) | 1);
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

void update_wander__14TObjEneGibblesFPv(u8 *arg0) {
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    s32 var_r5;
    s32 var_r6;
    u8 *var_r31;
    u8 *var_r3;
    u8 *var_r4;
    var_r31 = (u8 *)(arg0);
    ((s32 (*)(int))advance_animation_playback)((int)(arg0));
    if ((u32) *(u32 *)((s8 *)var_r31 + 0x2A8) != 0U) {
        var_r3 = (u8 *)((void *)3);
        *(s16 *)((s8 *)var_r31 + 0x326) = 3;
        var_r3 = (u8 *)(var_r31);
        var_r4 = (u8 *)((void *)0x06240000);
        *(s16 *)((s8 *)var_r31 + 0x328) = 0;
        obj_clearFlags30((void *)((int) (var_r3)), (int)((int) (0x06240000)));
        *(s32 *)((s8 *)var_r31 + 0x374) = (s32) (*(s32 *)((s8 *)var_r31 + 0x374) & 0xFFFF0000);
        *(s32 *)((s8 *)var_r31 + 0x374) = (s32) (*(s32 *)((s8 *)var_r31 + 0x374) | 4);
        var_r3 = (u8 *)(*(u8 **)((s8 *)var_r31 + 0xA4));
        *(s32 *)((s8 *)var_r3 + 0x18) = (s32) (*(s32 *)((s8 *)var_r3 + 0x18) | 1);
    } else {
        *(s32 *)((s8 *)var_r31 + 0x374) = (s32) (*(s32 *)((s8 *)var_r31 + 0x374) & 0xFFFFFFFB);
    }
    var_f2 = (*(const f32 *)&lbl_805DE878);
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)(*(u8 **)((s8 *)var_r31 + 0x350));
    var_f3 = var_f2;
    var_f1 = *(f32 *)((s8 *)var_r4 + 4);
    var_r4 = (u8 *)(*(u8 **)((s8 *)var_r4 + 8));
    enemy_wander_home(var_r3, (s32) var_r4, var_f1, var_f2, var_f3);
    var_r3 = (u8 *)(var_r31);
    refresh_collision_body_centers((void *)((int) (var_r3)));
    var_r3 = (u8 *)(var_r31);
    ((TObjPlayer *)var_r3)->check_object_collisions();
    var_r3 = (u8 *)(var_r31);
    ((s32 (*)(int))check_enemy_body_collisions)((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    ((TObjPlayer *)var_r3)->update_enemy_collision_flags();
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)((void *)0x200000);
    obj_clearFlags30((void *)((int) (var_r3)), (int)((int) (0x200000)));
    var_r3 = (u8 *)(var_r31);
    ((s32 (*)(int))TObjEneGibbles__sub_802D7DAC)((int) (var_r3));
    var_r3 = (u8 *)(var_r31 + 0x38);
    var_r4 = (u8 *)((void *)-0x5DB4);
    var_r5 = 1;
    var_r6 = 0;
    minimap_render_dot((void *)(var_r3), (int)(-0x5DB4), (int)(1), (int)(0));
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)((void *)-1);
    ((s32 (*)(int, int))submit_cursor_candidate)((int) (var_r3), (int) (-1));
}

void TObjEneGibbles::init_state() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;

    ((TBoss4DarkFalz *)arg0)->set_position_from((void *) (arg0 + 0x50));
    refresh_collision_body_centers((void *) (arg0));
    (*(s32 *)&this->actorFlags) = (s32) ((*(s32 *)&this->actorFlags) & 0xFFDFFFFF);
    (*(s32 *)&this->actorFlags) = (s32) ((*(s32 *)&this->actorFlags) | 0x06040000);
    temp_r3 = (unsigned char *) (this->m_a4);
    *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) & 0xFFFFFFFE);
}

void TObjEneGibbles::vfunc_58() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    u8 *temp_r3;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 0:
        if (((VObj802DAAC8_802daac8_802D87D8 *)(arg0 + 0x3C0))->m8() != 0) {
            *(s16 *)((s8 *)arg0 + 0x326) = 0xA;
            *(s16 *)((s8 *)arg0 + 0x328) = 0;
            *(s16 *)((s8 *)arg0 + 0xB8) = 0;
            obj_clearFlags30((void *) (arg0), (int) (0x200000));
            obj_setFlags30((void *) (arg0), (int) (0x06040000));
            *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
            temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
            *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) & 0xFFFFFFFE);
        }
    case 6:
    case 11:
        return;
    case 10:
        if (!(*(s32 *)((s8 *)arg0 + 0x374) & 0x40)) {
            *(s16 *)((s8 *)arg0 + 0x326) = 0;
            return;
        }
        break;
    default:
        *(s16 *)((s8 *)arg0 + 0x328) = 0;
        *(s16 *)((s8 *)arg0 + 0x326) = 0xB;
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xF99BFFFF);
        break;
    }
}

#define P_802DAD50(p) ((Obj_802DAD50 *)(p))

s32 TObjEneGibbles::update_movement_status() {
    u8 *arg0 = (u8 *)this;
    if (update_movement_status__10TObjPlayerFv() != 0) {
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 0:
        case 1:
        case 2:
        case 0xa:
            if (((VObj14 *)(arg0 + 0x3c0))->m5() == 1) {
                *(s32 *)((s8 *)arg0 + 0x374) &= ~0x143;
                *(s32 *)((s8 *)arg0 + 0x374) |= 4;
                *(s16 *)((s8 *)arg0 + 0x326) = 3;
                *(s16 *)((s8 *)arg0 + 0x328) = 0;
                *(s16 *)((s8 *)arg0 + 0xB8) = 1;
                obj_clearFlags30(arg0, 0x06240000);
            }
            break;
        }
        return 1;
    }
    return 0;
}

s32 TObjEneGibbles::update_action_hold_status() {
    u8 *arg0 = (u8 *)this;
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 0:
        case 1:
        case 2:
        case 0xa:
            if (((VObj14 *)(arg0 + 0x3c0))->m5() == 1) {
                *(s32 *)((s8 *)arg0 + 0x374) &= ~0x143;
                *(s32 *)((s8 *)arg0 + 0x374) |= 4;
                *(s16 *)((s8 *)arg0 + 0x326) = 3;
                *(s16 *)((s8 *)arg0 + 0x328) = 0;
                *(s16 *)((s8 *)arg0 + 0xB8) = 1;
                obj_clearFlags30(arg0, 0x06240000);
            }
            break;
        }
        return 1;
    }
    return 0;
}

void update_target__14TObjEneGibblesFPv(Obj_802DAD50 *self) {
    if (self->f374 & 0x40) {
        self->f338 = 0xFFFF;
        self->target = NULL;
        return;
    }
    if (self->m17(0x1E) == 0) {
        return;
    }
    if (obj_testFlags30(self, 0x10) != 0) {
        s32 best_id;
        s32 i;
        u8 *p;
        s32 id;
        f32 best;
        f32 d;
        u16 tid;
        i = 0;
        best_id = 0xFFFF;
        Vec_800A6B14 v = *(Vec_800A6B14 *)lbl_80472768;
        best = *self->range * *self->range;
        for (; i < lbl_805D586C + lbl_805D5870; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (((s32 (*)(u8 *))is_valid_and_active__10TObjPlayerFUl)(p) != 0 && p != (u8 *)self) {
                id = ((s32 (*)(void *))obj_getField1c)(p);
                if ((u16)id < 0x4000 && (u16)id != self->f1C && !(P_802DAD50(p)->f30 & 0x02000800)) {
                    VecCopy__FP3VecPC3Vec(&v, (Vec_800A6B14 *)(p + 0x2FC));
                    subtract_vector(&v, &self->pos);
                    d = v.x * v.x + v.z * v.z;
                    if (d < best && check_path_obstructed(self, p + 0x2FC) != 1) {
                        best_id = id;
                        best = d;
                    }
                }
            }
        }
        self->f338 = best_id;
        tid = self->f338;
        if (tid < 0x1000U) {
            u8 *q = ((u8 *(*)(u16))get_player_by_client_id)(tid);
            if (q != NULL) {
                if (((TObjPlayer *)q)->get_field_3e4() == get_current_floor()) {
                    self->target = q;
                    return;
                }
            }
            self->target = NULL;
            return;
        }
        if (tid < 0x4000U) {
            self->target = ((u8 *(*)(u16))get_enemy_entity)(tid);
        }
        return;
    }
    {
        s32 best_id2;
        s32 best_id;
        u8 *p;
        u8 *best_p2;
        u8 *best_p;
        s32 i;
        f32 best2;
        f32 best;
        f32 d;
        Vec_800A6B14 v = *(Vec_800A6B14 *)lbl_80472774;
        best_id = 0xFFFF;
        best_p2 = NULL;
        best_id2 = best_id;
        best_p = NULL;
        i = 0;
        best = *self->range * *self->range;
        best2 = best;
        for (; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (p == NULL) continue;
            if ((u16)((s32 (*)(void *))obj_getField1c)(p) >= 0x1000) continue;
            if (((TObjPlayer *)p)->get_field_3e4() != get_current_floor()) continue;
            if (P_802DAD50(p)->f30 & 0x02000800) continue;
            VecCopy__FP3VecPC3Vec(&v, (Vec_800A6B14 *)(p + 0x2FC));
            subtract_vector(&v, &self->pos);
            d = v.x * v.x + v.z * v.z;
            if ((*(u32 *)(p + 0x890) & self->f378) && d < best &&
                check_path_obstructed(self, p + 0x2FC) != 1) {
                best_id = ((s32 (*)(void *))obj_getField1c)(p);
                best = d;
                best_p = p;
            }
            if (d < best2 && check_path_obstructed(self, p + 0x2FC) != 1) {
                best_id2 = ((s32 (*)(void *))obj_getField1c)(p);
                best2 = d;
                best_p2 = p;
            }
        }
        if (best2 < lbl_805DE824 && best_p2 != NULL) {
            self->f338 = best_id2;
            self->target = best_p2;
            return;
        }
        if (best_p != NULL) {
            self->f338 = best_id;
            self->target = best_p;
            return;
        }
        if (best_p2 != NULL) {
            self->f338 = best_id2;
            self->target = best_p2;
            return;
        }
        self->f338 = 0xFFFF;
        self->target = NULL;
    }
}

void turn_toward_target__14TObjEneGibblesFPv(Obj_800A6B14 *self) {
    Vec_800A6B14 d;
    VecCopy__FP3VecPC3Vec(&d, &self->target->pos);
    subtract_vector(&d, &self->pos);
    ((TObjEneGibbles *)self)->clamp_angle(angle_diff_s16(self->angle, (s32)(TObjEneGibbles__data_80472798 * atan2_float(d.x, d.z))));
}

void TObjEneGibbles::clamp_angle(s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < -0x238E) {
        var_r4 = -0x238E;
    } else if (var_r4 > 0x238E) {
        var_r4 = 0x238E;
    }
    this->m_3bc = lerp_angle_half__10TObjPlayerFUsUs(this->m_3bc, var_r4);
}

void gibbles_render_node_callback(void) {
    if ((s32) TObjEneGibbles__render_node_index == 0x18) {
        rotate_matrix_x(0, TObjEneGibbles__render_rotation_x);
    }
    TObjEneGibbles__render_node_index += 1;
}

void draw_model__14TObjEneGibblesFPv(u8 *arg0) {
    Obj_802DB200 *self = (Obj_802DB200 *)arg0;
    Vec_800A6B14 v;
    s32 fade;
    s32 vis;
    s32 cam;
    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    if (TOKeyMachine01::get_global_state() == 0x23) {
        vis = self->m9(600.0f, 600.0f, 30.0f);
    } else {
        vis = self->m9(lbl_805DE884, lbl_805DE87C, lbl_805DE880);
    }
    if (vis != 0) {
        update_obstruction_fade(&self->fades[cam]);
        fade = ((RenderFadeState *)(&self->fades[cam]))->updateFromCamera((const f32*)(arg0 + 0x2FC));
        select_actor_lighting(arg0);
        TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix_from(0);
        VecCopy__FP3VecPC3Vec(&v, (Vec_800A6B14 *)(arg0 + 0x38));
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 2:
        case 6:
        case 10:
            v.y += *(f32 *)((s8 *)arg0 + 0x38C);
            break;
        }
        translate_matrix_vec3(0, &v);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        scale_matrix_vec3(0, arg0 + 0x68);
        TObjEneGibbles__render_node_index = 0;
        TObjEneGibbles__render_rotation_x = *(s32 *)((s8 *)arg0 + 0x3BC);
        TObjEneRe7Berura::set_global_state((s32)((void *)gibbles_render_node_callback));
        TObjPlayer::toggle_particle_effect();
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 0:
            break;
        case 1:
        case 2:
        case 10:
            if (self->sub.m8() != 0) {
                lbl_805D5660 = model_render_flags;
                lbl_805D5664 = chunk_polygon_flags_and_mask;
                lbl_805D5668 = chunk_polygon_flags_or_mask;
                model_render_flags |= 1;
                self->sub.m6();
                if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) == 0) {
                    ((TObjEneRe7Berura *)arg0)->draw();
                }
                self->sub.m7();
                chunk_polygon_flags_and_mask = lbl_805D5664;
                chunk_polygon_flags_or_mask = lbl_805D5668;
                model_render_flags = lbl_805D5660;
            }
            break;
        default:
            if (fade != 0) {
                lbl_805D5660 = model_render_flags;
                lbl_805D5664 = chunk_polygon_flags_and_mask;
                lbl_805D5668 = chunk_polygon_flags_or_mask;
                self->fades[cam].m6();
                if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) == 0) {
                    if (vis == 1) {
                        ((TObjEneRe7Berura *)arg0)->draw();
                    } else {
                        ((TObjPlayer *)arg0)->render_world_model();
                    }
                }
                self->fades[cam].m7();
                chunk_polygon_flags_and_mask = lbl_805D5664;
                chunk_polygon_flags_or_mask = lbl_805D5668;
                model_render_flags = lbl_805D5660;
            } else if (vis == 1) {
                ((TObjEneRe7Berura *)arg0)->draw();
            } else {
                ((TObjPlayer *)arg0)->render_world_model();
            }
            break;
        }
        TParticleCtrl::end_effect_render();
        TObjEneRe7Berura::set_global_state((s32)NULL);
        pop_matrix();
        restore_scene_lighting();
        if (!(*(s32 *)((s8 *)arg0 + 0x374) & 1)) {
            ((TObjPlayer *)arg0)->render_with_position_override(0, 0);
        }
    } else {
        ((TObjEneGibbles *)arg0)->update_position();
    }
}

void run_task__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;
    if (TObjPlayer::check_demo_mode() == 1) {
        ((void (*)(u8 *))TObjEneGibbles__sub_802D7E3C)(arg0);
        return;
    }
    {
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 0:
            ((TObjEneGibbles *)arg0)->init_state();
            break;
        case 1:
            ((TObjEneGibbles *)arg0)->update_spawn_state();
            break;
        case 2:
            ((TObjEneGibbles *)arg0)->update_death_sequence();
            break;
        case 3:
            TObjEneGibbles__sub_802DA0BC((u8 *)(arg0));
            break;
        case 4:
            TObjEneGibbles__sub_802D9110((Gib_802D9110 *)arg0);
            break;
        case 5:
            TObjEneGibbles__sub_802D8E8C((u8 *)(arg0));
            break;
        case 6:
            TObjEneGibbles__sub_802D8984((u8 *)(arg0));
            break;
        case 7:
            TObjEneGibbles__sub_802D8580(arg0);
            break;
        case 8:
            ((TObjEneGibbles *)arg0)->update_action_state();
            break;
        case 9:
            TObjEneGibbles__sub_802D8140(arg0);
            break;
        case 10:
            TObjEneGibbles__sub_802DA7A4((u8 *)(arg0));
            break;
        case 11:
            update_wander__14TObjEneGibblesFPv(arg0);
            break;
        }
    }
    temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x2A8));
    if ((temp_r4 != NULL) && (*(s32 *)((s8 *)temp_r4 + 0x30) & 0x02000800)) {
        *(s16 *)((s8 *)arg0 + 0x37E) = 0;
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
        *(s32 *)((s8 *)arg0 + 0x374) = (s32) (*(s32 *)((s8 *)arg0 + 0x374) & 0xFFFF0000);
        *(u8 **)((s8 *)arg0 + 0x2A8) = NULL;
    }
    ((TObjEneGibbles *)arg0)->update_position();
    ((TObjEneGibbles *)arg0)->update_shadow_height();
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    ((TObjEneGibbles *)arg0)->sync_state();
    *(f32 *)((s8 *)arg0 + 0x2B4) = (f32) (*(f32 *)((s8 *)arg0 + 0x2B4) + TObjEneGibbles__data_805DE7EC);
}

void TObjEneGibbles::init_params() {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = (s16) (lbl_805DE878 + this->parameters[0]);
    this->m_388 = temp_r0;
    *(s16 *)((s8 *)this + 0x38A) = temp_r0;
    this->m_39c = (s32) *(f32 *)((s8 *)this + 0x358);
    temp_r0_2 = this->m_39c;
    if (temp_r0_2 < 0) {
        this->m_39c = 0;
    } else if (temp_r0_2 > 8) {
        this->m_39c = 8;
    }
    *(s32 *)((s8 *)this + 0x378) = 0;
    *(s32 *)((s8 *)this + 0x378) = (s32) (*(s32 *)((s8 *)this + 0x378) | (1 << this->m_39c));
    this->m_394 = (f32) this->parameters[2];
    *(f32 *)((s8 *)this + 0x398) = (f32) *(f32 *)((s8 *)this + 0x360);
}

void *TObjEneGibbles::create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x44C);
    if (o2 != NULL) {
        o2 = TObjEneGibbles__ct((u8 *)(o2), (void *)(o), (s32)(arg0));
    }
    return o2;
}

void TObjEneGibbles::free_static() {
    if ((u32) gibbles_combat_stat_entries != 0U) {
        mem_free((void*)gibbles_combat_stat_entries);
        gibbles_combat_stat_entries = 0U;
    }
    if ((u32) TObjEneGibbles__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneGibbles__resource_bundle, 1);
        TObjEneGibbles__resource_bundle = 0U;
    }
}

void TObjEneGibbles::load_resources() {
    u8 *p;
    if (is_split_screen() != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_804E28A0, 0, 0, 0);
        }
        TObjEneGibbles__resource_bundle = (u32) p;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_804E285C, 0, 0, 0);
        }
        TObjEneGibbles__resource_bundle = (u32) p;
    }
    TObjEneGibbles__render_node_index = 0;
    TObjEneGibbles__render_rotation_x = 0;
    gibbles_combat_stat_entries = (u32) mem_alloc(0xC);
    gibbles_boss_stat_handle = register_boss__6TLobbyFl(0x3D);
    ((s32 *) gibbles_combat_stat_entries)[0] = dispatch_shared_handler_b__6TLobbyFl(0x3D);
    ((s32 *) gibbles_combat_stat_entries)[2] = dispatch_shared_handler_b__6TLobbyFl(0x3E);
    ((s32 *) gibbles_combat_stat_entries)[1] = dispatch_shared_handler_b__6TLobbyFl(0x3F);
    gibbles_combat_stats_handle = register_object__6TLobbyFl(0x3D);
    (*(s32 *)&TObjEneGibbles__ai_parameters) = dispatch_shared_handler_a__6TLobbyFl(0x3D);
    Spawn_802DB7C0 s = gibbles_resource_binding_desc;
    s.a = *(s32 *)((s8 *)TObjEneGibbles__resource_bundle + 0x430);
    TLobby::spawn_npc_enemy((s16)0x44, (s32)(*(s32 *)((s8 *)(*(u8 **)((s8 *)TObjEneGibbles__resource_bundle + 0x42C)) + 8)), (s32)(*(s32 *)((s8 *)(*(u8 **)((s8 *)TObjEneGibbles__resource_bundle + 0x42C)) + 0xC)), (s32)(&s), (f32)(((f32 *)lbl_804E296C)[3]), (f32)TObjEneGibbles__data_805DE7E4);
}

void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEnemyFv(void *, int);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);

struct PartBase_802DB920 {
    u8 pad0[0x18];
};

struct Part_802DB920 : PartBase_802DB920 {
    virtual ~Part_802DB920();
};

struct Gib_802DB920 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x3B4 - 0x1C];
    Part_802DB920 *p3b4;
    Part_802DB920 *p3b8;
};

Gib_802DB920 *TObjEneGibbles__sub_802DB920(Gib_802DB920 *self, s16 arg1) {
    if (self != NULL) {
        self->vt = lbl_804E29F0;
        if (self->p3b4 != NULL) {
            free_collision_body_parts(self->p3b4);
            delete self->p3b4;
            self->p3b4 = NULL;
        }
        if (self->p3b8 != NULL) {
            free_collision_body_parts(self->p3b8);
            delete self->p3b8;
            self->p3b8 = NULL;
        }
        free_collision_body_parts(self);
        __destroy_arr((u8 *)self + 0x3DC, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)self + 0x3C0, -1);
        __dt__9TObjEnemyFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

u8 *TObjEneGibbles__ct(u8 *arg0, void *arg1, s32 arg2) {
    s32 i;
    void *p;
    ((TObjEnemy *)arg0)->initialize(arg1);
    *(void **)((s8 *)arg0 + 0x18) = (void *)lbl_804E29F0;
    ((TUnk_80494938 *)(arg0 + 0x3C0))->init_common();
    __construct_array(arg0 + 0x3DC, (void *)init_and_activate__10TObjPlayerFv, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3F60;
    ((VObj_18_802DBA18 *)arg0)->m79(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    *(f32 *)((s8 *)arg0 + 0x68) = *(f32 *)((s8 *)arg0 + 0x6C) = *(f32 *)((s8 *)arg0 + 0x70) = TObjEneGibbles__data_805DE7EC;
    ((TObjEneGibbles *)arg0)->init_params();
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s16 *)((s8 *)arg0 + 0x328) = 0;
    *(s32 *)((s8 *)arg0 + 0x368) = 0;
    ((TObjEneLappy *)arg0)->set_param(0x3D);
    *(s32 *)((s8 *)arg0 + 0x334) = 0;
    TObjEneGibbles__sub_802DBC94((O_802DBC94 *)arg0, *(s32 *)((s8 *)arg0 + 0x368));
    *(void **)((s8 *)arg0 + 0xD8) = (void *)&lbl_804E28B0;
    ((TObjPlayer *)arg0)->set_field_d8((s32)(*(void **)((s8 *)arg0 + 0xD8)));
    *(s32 *)((s8 *)arg0 + 0xDC) = *(s32 *)((s8 *)TObjEneGibbles__resource_bundle + 0x430);
    *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    ((TObjMotion *)arg0)->set_field_b8(*(s16 *)((s8 *)arg0 + 0xB8));
    init_collision_body_parts(arg0, lbl_804E296C, 1);
    *(s16 *)((s8 *)arg0 + 0x37C) = 0;
    *(s16 *)((s8 *)arg0 + 0x37E) = 0;
    *(void **)((s8 *)arg0 + 0x350) = (void *)lbl_804E2950;
    bind_enemy_combat_stats(arg0, gibbles_boss_stat_handle, ((s32 *)gibbles_combat_stat_entries)[*(s16 *)((s8 *)arg0 + 0x37C)], gibbles_combat_stats_handle);
    *(s16 *)((s8 *)arg0 + 0x33E) = *(s16 *)((s8 *)arg0 + 0x32C);
    ((TObjEneGibbles *)arg0)->update_position();
    ((TObjEneGibbles *)arg0)->update_shadow_height();
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    initialize_enemy_photon_effect(arg0);
    *(s32 *)((s8 *)arg0 + 0x374) = 1;
    *(s32 *)((s8 *)arg0 + 0x3B0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3BC) = 0;
    ((TObjPlayer *)arg0)->add_flags_2e4(0x11);
    *(u32 *)((s8 *)arg0 + 0x30) |= 0x06040000;
    *(s32 *)((s8 *)arg0 + 0x380) = 0x101;
    *(s32 *)((s8 *)arg0 + 0x384) = 0x101;
    p = __nw__7TObjectFUl(0xAC);
    if (p != NULL) {
        p = construct_collider_proxy__13TUnk_804AF8A0Fv(p, 0);
    }
    *(void **)((s8 *)arg0 + 0x3B4) = p;
    init_collision_body_parts(*(void **)((s8 *)arg0 + 0x3B4), (u8 *)lbl_804E296C + 0x2C, 1);
    p = __nw__7TObjectFUl(0xAC);
    if (p != NULL) {
        p = construct_collider_proxy__13TUnk_804AF8A0Fv(p, 0);
    }
    *(void **)((s8 *)arg0 + 0x3B8) = p;
    init_collision_body_parts(*(void **)((s8 *)arg0 + 0x3B8), (u8 *)lbl_804E296C + 0x58, 1);
    ((VObj_14_802DBA18 *)(arg0 + 0x3C0))->m3();
    for (i = 0; i < 4; i++) {
        ((TObjPlayer *)(&((G_802DBA18 *)arg0)->parts[i]))->activate_and_dispatch();
    }
    ((VObj_18_802DBA18 *)arg0)->m80();
    return arg0;
}

void*TObjEneGibbles::vfunc_9() { return (char*)this + 0x2fc; }

void TObjEneGibbles__sub_802DBC94(O_802DBC94 *self, s32 i) {
    self->f34 = (*(G_802DBC94 * *)&TObjEneGibbles__resource_bundle)->e[i].c;
    self->f24 = (*(G_802DBC94 * *)&TObjEneGibbles__resource_bundle)->e[i].d;
}

}
