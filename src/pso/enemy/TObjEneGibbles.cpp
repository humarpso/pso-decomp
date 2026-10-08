#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_802D9EB4 { f32 x, y, z; };

struct Stack_802D7ACC {
    M2C_UNK sp8;
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

typedef s32 M2C_UNK;
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

extern "C" {
f32 calc_xz_distance_sq__10TObjPlayerFiUiPv(void *, void *, Vec_802D9EB4 *);
s32 get_field_0c__10TObjPlayerFPv(void *);
f32 get_pos_x__10TObjPlayerFPv(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
extern const f64 TObjEneGibbles__data_80472798;
extern u32 TObjEneGibbles__data_805D68AC;
extern const f32 lbl_805DE834;
extern const f32 lbl_805DE85C;
s32 is_target_in_attack_range__14TObjEneGibblesFPv(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
s16 get_id__10TObjPlayerFPv(void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(u32);
s32 get_enemy_entity();
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
u32 get_player_by_client_id(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
void TObjEneGibbles__sub_802D7DAC(s32 arg0);
int TObjEneGibbles__sub_802D7F94(void *, int);
void update_move_state__14TObjEneGibblesFPv(void *arg0);
void TObjEneGibbles__sub_802D9644(void *, int, f32);
void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1);
extern u32 TObjEneGibbles__data_805D68AC;
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 lbl_805DE834;
extern const f32 lbl_805DE838;
void TObjEneGibbles__sub_802D8E8C(u8 *arg0);
void attach_particle_model(void *, s32, s32, s32, s32, f32);
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
s32 get_particle_model__13TParticleCtrlFi(s32);
int get_instance__13TParticleCtrlFv(void);
s32 * csnVectorUnder(M2C_UNK *, s32, M2C_UNK, f32);
M2C_UNK spawn_particle_effect(void *, int);
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7E8;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 lbl_805DE7F0;
M2C_UNK spawn_ground_impact_effects__14TObjEneGibblesFPvPvf(void *arg0, void *pos, f32 farg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK set_position_from__14TBoss4DarkFalzFPvPv(void *, void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
s32 TObjEneGibbles__sub_802D7BE0(s32 arg0);
int TObjEneGibbles__sub_802D7F94(void *, int);
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 TObjEneGibbles__data_805DE7F8;
extern const f32 TObjEneGibbles__data_805DE830;
extern const f32 lbl_805DE874;
void TObjEneGibbles__sub_802DA7A4(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *, int);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK enemy_move_toward(void *, s32, void *, int, f32);
s32 select_enemy_destination(void *, Vec_802DA0BC *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_802DA0BC *);
f32 horizontal_distance_squared(int, void *);
M2C_UNK advance_animation_playback();
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
void TObjEneGibbles__sub_802D7DAC(s32 arg0);
extern u8 *TObjEneGibbles__data_805D68B4;
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 lbl_805DE860;
extern const f32 lbl_805DE864;
void TObjEneGibbles__sub_802DA0BC(u8 *arg0);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, void *, s32);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
void update_position__14TObjEneGibblesFPv(u8 *arg0);
s32 set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void update_spawn_timer__14TObjEneGibblesFv(void);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 TObjEneGibbles__data_805D68BC;
extern s32 TObjEneGibbles__data_805D68C0;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
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
s32 get_field_3e4__10TObjPlayerFPv(u32);
s32 get_enemy_entity();
u32 get_player_by_client_id(void *);
s32 is_valid_and_active__10TObjPlayerFUi();
extern M2C_UNK lbl_80472768[];
extern M2C_UNK lbl_80472774[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805DE824;
M2C_UNK apply_actor_gravity(void *, int, f32);
void move_with_wall_slide(void *);
void enemy_set_heading_velocity(void *, s32, f32);
void calc_velocity_toward_destination(void *, Vec_802DA0BC, Vec_802DA0BC, f32);
s32 select_enemy_destination(void *, Vec_802DA0BC *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_802DA0BC *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(u32);
f32 newton_sqrtf(f32);
s32 TObjEneGibbles__sub_800D8988(void *);
s32 get_enemy_entity();
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK submit_cursor_candidate(void *, int);
u32 get_player_by_client_id(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
void set_min_clamped_entry_value__14TObjEneGibblesFiif(M2C_UNK arg0, s32 arg1, f32 farg0);
void TObjEneGibbles__sub_802D7A54(void *arg0);
s32 TObjEneGibbles__sub_802D7BE0(s32 arg0);
int TObjEneGibbles__sub_802D7F94(void *, int);
s32 TObjEneGibbles__sub_802D9A04(void *arg0);
void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1);
f32 subtract_vector(void *, void *);
extern u8 *TObjEneGibbles__data_805D68B4;
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
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
u8 *load_resource_from_descriptor(void *, int, void *, int, int, int);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
u8 *alloc_buffer__11TOBoss4RockFPv(u32);
void spawn_npc_enemy__6TLobbyFsiiiff(s16, s32, s32, Spawn_802DB7C0 *, f32, f32);
extern Spawn_802DB7C0 lbl_80472758;
extern s32 lbl_805D68A8;
extern u32 TObjEneGibbles__data_805D68AC;
extern s32 lbl_805D68B0;
extern u8 *TObjEneGibbles__data_805D68B4;
extern u32 TObjEneGibbles__data_805D68B8;
extern s32 TObjEneGibbles__data_805D68BC;
extern s32 TObjEneGibbles__data_805D68C0;
extern const f32 TObjEneGibbles__data_805DE7E4;
void load_resources__14TObjEneGibblesFv(void);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void copy_position__20TBoss3VoloptHiraisinFi(u8 *);
void init_position_vectors__10TObjPlayerFi(void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
void set_param__12TObjEneLappyFPvi(void *, int);
void initialize_enemy_photon_effect(void *);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
void initialize__9TObjEnemyFPv(void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, int);
void *construct_collider_proxy__10TObjPlayerFPv(void *, int);
void * __nw__7TObjectFUl(int);
void update_shadow_height__14TObjEneGibblesFPv(void *arg0);
void update_position__14TObjEneGibblesFPv(u8 *arg0);
void init_params__14TObjEneGibblesFPv(void *arg0);
void __construct_array(void *, void *, void *, int, int);
void TObjPlayer__sub_800D7C58(void);
void init_and_activate__10TObjPlayerFPv(void);
extern s32 lbl_805D3F60;
extern s32 lbl_805D68A8;
extern u32 TObjEneGibbles__data_805D68AC;
extern s32 lbl_805D68B0;
extern u32 TObjEneGibbles__data_805D68B8;
extern const f32 TObjEneGibbles__data_805DE7EC;
u8 *TObjEneGibbles__ct(u8 *arg0, void *arg1, s32 arg2);
}

extern "C" {

struct Stack_802D7BE0 {
    M2C_UNK sp8;
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
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802D7ED4_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_802D7A2C_lbl_804E28B0
{
  M2C_UNK value;
  u8 remaining[0x13C];
};

typedef struct RecoveredGlobal_802D7A2C_lbl_804E28B0 RecoveredGlobal_802D7A2C_lbl_804E28B0;

typedef char RecoveredGlobal_802D7A2C_lbl_804E28B0_size[((sizeof(RecoveredGlobal_802D7A2C_lbl_804E28B0)) == 0x140) ? (1) : (-1)];

typedef char RecoveredGlobal_802D7ED4_lbl_80472780_size[sizeof(RecoveredGlobal_802D7ED4_lbl_80472780) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_802D7ED4_lbl_8058D490_size[sizeof(RecoveredGlobal_802D7ED4_lbl_8058D490) == 0x30 ? 1 : -1];

typedef struct Stack_802D8140 Stack_802D8140;

struct GibBase_802da394_802D87D8 { char pad[0x14]; };

struct GibVObj_802da394_802D87D8 : GibBase_802da394_802D87D8 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

struct VBase802DAAC8_802daac8_802D87D8 { char pad[0x14]; };

struct VObj802DAAC8_802daac8_802D87D8 : VBase802DAAC8_802daac8_802D87D8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

struct E_802DBC94 { s32 a; s32 b; s32 c; s32 d; };

struct G_802DBC94 { u8 pad[0x42c]; E_802DBC94 *e; };

struct O_802DBC94 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct VBase800A64E8_800a64e8_800A4288 { char pad[0x14]; };

struct VObj800A64E8_800a64e8_800A4288 : VBase800A64E8_800a64e8_800A4288 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

struct RecoveredGlobal_800A6BE0_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800A6BE0_lbl_80500978 {
    M2C_UNK value;
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
    virtual M2C_UNK m21(s32, struct Hit_802D9B80 *, M2C_UNK, M2C_UNK, M2C_UNK);
    virtual void m22();
    virtual M2C_UNK m23(s32);
};

s32 get_main_phase();
f32 calc_boss4_scale__10TObjPlayerFi(void *, int);
M2C_UNK apply_actor_gravity(void *, int, f32);
f32 enemy_wander_home(void *, s32, f32, f32, f32);
f32 calc_distance_to_client__10TObjPlayerFiUsUi(void *, u16, Vec_802D8828 *);
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
s16 get_id__10TObjPlayerFPv(void *);
u8 * get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);
s32 is_split_screen();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK queue_destruction__7TObjectFv();
void TLobby__sub_8001FE7C(void*, int);
void copy_position__20TBoss3VoloptHiraisinFi(u8 *);
M2C_UNK set_position_from__14TBoss4DarkFalzFPvPv(void *, void *);
void TCameraCtrl__sub_8006A044(s32, f32);
s32 * csnVectorUnder(M2C_UNK *, s32, M2C_UNK, f32);
u8 * csnVecterUnder(void *, s32);
M2C_UNK rotate_xz_pair_by_angle(f32 *, f32 *, s32, f32);
s32 check_demo_mode__10TObjPlayerFv();
s32 test_action_mask__10TObjPlayerFPvi(void *, int);
M2C_UNK spawn_particle_effect(void *, int);
f32 get_pos_x__14TObjEneGibblesFPv(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 TObjEneGibbles__sub_800D8988(void *);
M2C_UNK spawn_effect_at_ground__10TObjPlayerFPvi(f32 *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800D93C4(f32 *, M2C_UNK);
void * TObjControl__ct(void *, void *);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
f32 horizontal_distance_squared(int, void *);
s32 angle_difference_abs(s32, s32);
s32 angle_diff_s16(s32, s32);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
void free__11TOBoss4RockFUi(void*);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
u32 get_player_by_client_id(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
void * __nw__7TObjectFUl(int);
s32 is_valid_and_active__10TObjPlayerFUi();
void set_min_clamped_entry_value__14TObjEneGibblesFiif(M2C_UNK arg0, s32 arg1, f32 farg0);
void TObjEneGibbles__sub_802D7A54(void *arg0);
s32 TObjEneGibbles__sub_802D7BE0(s32 arg0);
void play_distance_sound__14TObjEneGibblesFi(s32 arg0);
void TObjEneGibbles__sub_802D7DAC(s32 arg0);
void TObjEneGibbles__sub_802D7E3C(void);
void update_shadow_height__14TObjEneGibblesFPv(void *arg0);
void update_position__14TObjEneGibblesFPv(u8 *arg0);
void render_and_get_joint_pos__14TObjEneGibblesFPvii(u8 *arg0, s32 arg1, s32 arg2);
int TObjEneGibbles__sub_802D7F94(void *, int);
void TObjEneGibbles__sub_802D8034(void);
void sync_state__14TObjEneGibblesFPv(void *arg0);
void update_move_state__14TObjEneGibblesFPv(void *arg0);
void TObjEneGibbles__sub_802D8140(u8 *arg0);
void set_motion__14TObjEneGibblesFPv(void *arg0);
void update_action_state__14TObjEneGibblesFPv(u8 *arg0);
void TObjEneGibbles__sub_802D8580(u8 *);
void set_state_dead__14TObjEneGibblesFPv(void *arg0);
s32 find_facing_player__14TObjEneGibblesFPv(u8 *arg0);
struct Gib_802D9110;
void TObjEneGibbles__sub_802D9110(Gib_802D9110 *);
s32 TObjEneGibbles__sub_802D9A04(void *arg0);
void TObjEneGibbles__sub_802D9D64(u8 *arg0);
void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0);
void update_spawn_state__14TObjEneGibblesFPv(u8 *arg0);
void update_wander__14TObjEneGibblesFPv(u8 *arg0);
void init_state__14TObjEneGibblesFPv(u8 *arg0);
void TObjEneGibbles__sub_802DAAC8(u8 *arg0);
void turn_toward_target__14TObjEneGibblesFPv(Obj_800A6B14 *self);
void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1);
void update_spawn_timer__14TObjEneGibblesFv(void);
void run_task__14TObjEneGibblesFPv(u8 *arg0);
void init_params__14TObjEneGibblesFPv(void *arg0);
void * create__14TObjEneGibblesFPv(void *arg0);
void free_static__14TObjEneGibblesFv(void);
void* TObjEneGibbles__sub_802DBC8C(void* p);
void TObjEneGibbles__sub_802DBC94(O_802DBC94 *self, s32 i);
M2C_UNK vec3_add_to(f32 *, void *);
s32 matrix_mult_vec(int, void *, void *);
s32 set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
s32 rotate_matrix_y(int, int);
f32 subtract_vector(void *, void *);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();

extern const f64 TObjEneGibbles__data_80472798;
extern u32 TObjEneGibbles__data_805D68AC;
extern u32 TObjEneGibbles__data_805D68B8;
extern s32 TObjEneGibbles__data_805D68BC;
extern s32 TObjEneGibbles__data_805D68C0;
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7E8;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 TObjEneGibbles__data_805DE7F4;
extern const f32 TObjEneGibbles__data_805DE7F8;
extern const f32 TObjEneGibbles__data_805DE81C;
extern const f32 TObjEneGibbles__data_805DE830;
extern RecoveredGlobal_802D7ED4_lbl_80472780 lbl_80472780;
extern RecoveredGlobal_802D7ED4_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D53A0;
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
void TObjEneGibbles__sub_802DABD0();
}
extern "C" {
void TObjEneGibbles__sub_802DAC90();
}
extern "C" {
struct Gib_802DB920;
Gib_802DB920 *TObjEneGibbles__sub_802DB920(Gib_802DB920 *self, s16 arg1);
}
extern "C" {
void TObjPlayer__sub_8000FF3C();
}
extern "C" {
void TObjPlayer__sub_80010A80();
}
extern "C" {
void TObjPlayer__sub_800111D8();
}
extern "C" {
void TObjPlayer__sub_80014830();
}
extern "C" {
void TObjPlayer__sub_80014838();
}
extern "C" {
void TObjPlayer__sub_80014840();
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
void calc_distance_accuracy_penalty__10TObjPlayerFv();
}
extern "C" {
void call_vt78__10TObjPlayerFPv();
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
void fn_800F5D80();
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
void update_object_view_visibility();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
extern void *lbl_804E2828[2];
extern void *lbl_804E2830[11];
extern void *lbl_804E286C[2];
extern void *lbl_804E2874[11];
void update_state__14TObjEneGibblesFPv(void *arg0);
__declspec(section ".data") void *lbl_804E2828[2] = {
    (void *)&lbl_80472628, (void *)0x0,
};
void *lbl_804E2830[11] = {
    (void *)&lbl_80472638, (void *)&lbl_80472650, (void *)&lbl_80472668, (void *)&lbl_8047267C,
    (void *)&lbl_80472690, (void *)&lbl_804726A4, (void *)&lbl_804726B8, (void *)&lbl_804726D0,
    (void *)&lbl_804726E4, (void *)&lbl_804726F8, (void *)0x0,
};
void *lbl_804E285C[4] = {
    (void *)&lbl_8047270C, (void *)&lbl_804E2828, (void *)&lbl_804E2830, (void *)0x1000a,
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
    (void *)&reset_actor_action_state, (void *)&TObjEneGibbles__sub_802DBC8C, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&update_target__14TObjEneGibblesFPv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__14TObjEneGibblesFPv, (void *)&find_facing_player__14TObjEneGibblesFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&TObjEneGibbles__sub_802DAC90, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&TObjEneGibbles__sub_802DABD0,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjEneGibbles__sub_802DAAC8, (void *)&update_state__14TObjEneGibblesFPv,
    (void *)&TObjEneGibbles__sub_802D9D64, (void *)&set_state_dead__14TObjEneGibblesFPv, (void *)&TObjEneGibbles__sub_802D8464, (void *)&set_motion__14TObjEneGibblesFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80,
};
#define lbl_804E28B0 (*(RecoveredGlobal_802D7A2C_lbl_804E28B0 *)lbl_804E28B0)

extern "C" {
void TObjEneGibbles__sub_802DBC94(O_802DBC94 *self, s32 i);
}

void set_min_clamped_entry_value__14TObjEneGibblesFiif(M2C_UNK arg0, s32 arg1, f32 farg0) {
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
    if ((get_main_phase() == 0xF || is_split_screen() == 0) && (r = get_player_by_client_id((void *)lbl_805D53A0)) != 0) {
        t = get_stat_by_key_state__10TObjPlayerFPv((void *)r);
        u = get_stat_by_key_state__10TObjPlayerFPv(arg0);
        if (u == t) {
            TCameraCtrl__sub_8006A044(0x1E, lbl_805DE7E0);
        }
    }
}

M2C_UNK spawn_ground_impact_effects__14TObjEneGibblesFPvPvf(void *arg0, void *pos, f32 farg0) {
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
    hit = (s32 *)csnVectorUnder((M2C_UNK *)&v, (s32)arg0 + 0x120, 5, y);
    if ((hit != NULL) && (hit[0] & 4)) {
        p = (u8 *)spawn_particle_effect((void *)(hit[1] + 0x38), 0x49);
        if (p != NULL) {
            attach_particle_model(p, get_particle_model__13TParticleCtrlFi(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneGibbles__data_805DE7EC);
            set_position_xy__10TObjPlayerFPvff(p, farg0, TObjEneGibbles__data_805DE7EC);
        }
        p = (u8 *)spawn_particle_effect((void *)(hit[1] + 0x38), 0xA4);
        if (p != NULL) {
            set_position_xy__10TObjPlayerFPvff(p, farg0, lbl_805DE7F0);
        }
        return 1;
    }
    return 0;
}

s32 TObjEneGibbles__sub_802D7BE0(s32 arg0) {
    Stack_802D7BE0 stack;
    f32 temp_f1;
    s32 *temp_r3;
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    temp_f1 = stack.spC;
    stack.spC = temp_f1 + TObjEneGibbles__data_805DE7E8;
    temp_r3 = (s32 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15, temp_f1));
    if (temp_r3 != NULL) {
        if (*temp_r3 & 4) {
            spawn_ground_impact_effects__14TObjEneGibblesFPvPvf((void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)), (f32) (TObjEneGibbles__data_805DE7F4));
            return 0;
        }
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0x20E));
        return 1;
    }
    return 2;
}

void play_distance_sound__14TObjEneGibblesFi(s32 arg0) {
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneGibbles__data_805DE7F8)) != 0) {
        if (((s32)spawn_ground_impact_effects__14TObjEneGibblesFPvPvf((void *)((void *)arg0), (void *)((void *)(arg0 + 0x38)), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A83D))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
        return;
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE7FC)) != 0) {
        if (((s32)spawn_ground_impact_effects__14TObjEneGibblesFPvPvf((void *)((void *)arg0), (void *)((void *)(arg0 + 0x38)), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A83E))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
        return;
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE800)) != 0) {
        if (((s32)spawn_ground_impact_effects__14TObjEneGibblesFPvPvf((void *)((void *)arg0), (void *)((void *)(arg0 + 0x38)), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A83F))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
    }
}

void TObjEneGibbles__sub_802D7DAC(s32 arg0) {
    if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE804)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE808)) != 0)) {
        if (((s32)spawn_ground_impact_effects__14TObjEneGibblesFPvPvf((void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)), (f32) (TObjEneGibbles__data_805DE7F4))) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A82B))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
    }
}

void TObjEneGibbles__sub_802D7E3C(void) {  }

void update_shadow_height__14TObjEneGibblesFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

void update_position__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;

    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneGibbles__data_805DE7E8);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 2:
    case 6:
    case 0xA:
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + M2C_FIELD(arg0, f32 *, 0x38C));
        break;
    }
}

void render_and_get_joint_pos__14TObjEneGibblesFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_802D7ED4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802D7ED4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802D7ED4, sp10) == 0x8) ? 1 : -1];
    Stack_802D7ED4 stack;
    set_global_flag__10TObjPlayerFv();
    push_matrix_from((void *) (&lbl_8058D490.value));
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_monitor_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x68));
    set_global_flag__10TObjPlayerFv();
    render_anim_model__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    push_matrix_from((void *) (anim_model_matrix_array + (arg2 * 0x30)));
    stack.sp8 = M2C_FIELD(&lbl_80472780.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80472780.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80472780.value, s32 *, 8);
    matrix_mult_vec((int) (0), (void *) (&stack.sp8), (void *) (arg1));
    pop_matrix();
    clear_global_state__10TObjPlayerFv();
}

int TObjEneGibbles__sub_802D7F94(void *, int) { return 0; }

void TObjEneGibbles__sub_802D8034(void) {  }

void sync_state__14TObjEneGibblesFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380);
    switch (temp_r0) {
    case 0x0:
        break;
    default:
        update_move_state__14TObjEneGibblesFPv((void *)(arg0));
    case 0x107:
    case 0x10E:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 4) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != (s32) M2C_FIELD(arg0, s32 *, 0x380)) {
                M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg0, s32 *, 0x380);
            }
        }
        break;
    }
}

void update_move_state__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x38A);
    temp_r6 = M2C_FIELD(arg0, s16 *, 0x388);
    if (temp_r0 == temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x101;
        return;
    }
    if ((lbl_805DE80C * (f32) temp_r0) < (f32) temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x102;
        return;
    }
    if (temp_r6 > 0) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x103;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
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
      play_sound_effect((int)((void *) ((M2C_UNK)TObjEneGibbles__sub_802D7F94((void *)(arg0), (int)(0x3A333)))), (void *)(arg0 + 0x38), (int)(0), (int)(0));
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
      spawn_effect_at_ground__10TObjPlayerFPvi(&stack.sp8, 0x46);
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

void set_motion__14TObjEneGibblesFPv(void *arg0) {
    void *temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9) {
        M2C_FIELD(arg0, s16 *, 0x326) = 9;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

void update_action_state__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;

    advance_animation_playback();
    ((M2C_UNK (*)(void *, int))clamp_angle__14TObjEneGibblesFPvi)((void *) (arg0), (int) (0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        play_sound_effect(TObjEneGibbles__sub_802D7F94((void *)((void *) (arg0)), (int)((int) (0x3AD34))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjEneGibbles__data_805DE7E4;
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjEneGibbles__data_805DE7E4;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
        break;
    case 3:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF9FF);
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0), (int) (temp_r4)) < M2C_FIELD(arg0, f32 *, 0x398)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 6;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 0x90);
        }
        break;
    }
    check_object_collisions__10TObjPlayerFPv((void *) (arg0));
    check_enemy_body_collisions((void *) (arg0));
    update_enemy_collision_flags__10TObjPlayerFPv((void *) (arg0));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

void set_state_dead__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    void *temp_r5;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 7) && (temp_r0 != 6)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF99BFFFF);
}

s32 find_facing_player__14TObjEneGibblesFPv(u8 *arg0) {
    Vec_802D8828 v;
    u8 *pl;
    s32 i;
    s32 flags;
    flags = M2C_FIELD(arg0, s32 *, 0x374);
    if (flags & 0x20) {
        return 1;
    }
    if ((flags & 4) && M2C_FIELD(arg0, s16 *, 0x326) != 6 && M2C_FIELD(arg0, s16 *, 0x388) > 0) {
        for (i = 0; i < lbl_805D586C; i++) {
            pl = get_player_data__10TObjPlayerFi(i);
            if (pl != NULL && !(M2C_FIELD(pl, s32 *, 0x30) & 0x800)
                && calc_distance_to_client__10TObjPlayerFiUsUi(arg0, i, &v) < lbl_805DE824
                && angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TObjEneGibbles__data_80472798 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) < 0x2AAA
                && test_action_mask__10TObjPlayerFPvi(pl, 0xE0) != 0) {
                VecCopy__FP3VecPC3Vec((Vec_800A6B14 *) &v, (Vec_800A6B14 *) (arg0 + 0x2FC));
                subtract_vector(&v, pl + 0x2FC);
                if (angle_difference_abs(M2C_FIELD(pl, s32 *, 0x60), (s32) (TObjEneGibbles__data_80472798 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) < 0x2AAA) {
                    M2C_FIELD(arg0, u8 **, 0x3B0) = pl;
                    M2C_FIELD(arg0, s32 *, 0x374) |= 0x20;
                    return 1;
                }
            }
        }
    }
    return 0;
}

#pragma push
#pragma opt_loop_invariants off

#define F_802D(off, T) M2C_FIELD(arg0, T *, off)

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
#define PRM ((Prm_802D8984 *)TObjEneGibbles__data_805D68B4)
void TObjEneGibbles__sub_802D8984(u8 *arg0) {
    Gib_802D8984 *o = (Gib_802D8984 *)arg0;
    if (o->idx < 0x1000) {
        Gib_802D8984 *p = (Gib_802D8984 *)get_player_by_client_id((void *)o->idx);
        if (p != NULL && get_field_3e4__10TObjPlayerFPv((u32)p) == get_current_floor()) {
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
    ((M2C_UNK (*)(void *))advance_animation_playback)(o);
    clamp_angle__14TObjEneGibblesFPvi(o, 0);
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
            set_min_clamped_entry_value__14TObjEneGibblesFiif((M2C_UNK)o, 6, PRM->fC);
        } else {
            o->f3A8 = PRM->f18;
            set_min_clamped_entry_value__14TObjEneGibblesFiif((M2C_UNK)o, 6, PRM->fC);
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
                    play_sound_effect(TObjEneGibbles__sub_802D7F94(o, 0x3A82F), &o->pos, 0, 0);
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
                play_sound_effect(TObjEneGibbles__sub_802D7F94(o, 0x3AD32), &o->pos, 0, 0);
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
        if (p != 0 && get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
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
    M2C_FIELD(temp_r5, s32 *, 0x18) |= 1;
    F_802D(0x30, s32) &= 0xF9FBFFFF;
    TObjEneGibbles__sub_802D7DAC((s32)arg0);
    ((void (*)(void *))advance_animation_playback)(arg0);
    clamp_angle__14TObjEneGibblesFPvi(arg0, 0);
    switch (F_802D(0x328, s16)) {
    case 0:
        F_802D(0x328, s16) = 1;
        apply_actor_gravity(arg0, 0, TObjEneGibbles__data_805DE7E4);
        F_802D(0x374, s32) |= 0x100;
        play_sound_effect(TObjEneGibbles__sub_802D7F94(arg0, 0x3AD2E), arg0 + 0x38, 0, 0);
        break;
    case 1:
    case 2:
        if (!(F_802D(0x30, s32) & 0x800000)) {
            apply_actor_gravity(arg0, 0, TObjEneGibbles__data_805DE7E4);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805DE834) != 0) {
            play_sound_effect(TObjEneGibbles__sub_802D7F94(arg0, 0x3A82D), arg0 + 0x2FC, 0, 0);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805DE838) != 0) {
            F_802D(0x328, s16) = 2;
        }
        if (F_802D(0x328, s16) == 1) {
            TObjEneGibbles__sub_802D9644(arg0, 1, get_id__10TObjPlayerFPv(M2C_FIELD(TObjEneGibbles__data_805D68AC, void **, 8)));
        }
        if (F_802D(0xB4, u32) != 4) {
            F_802D(0x328, s16) = 3;
            F_802D(0x37E, s16)++;
        }
        break;
    case 3:
        update_move_state__14TObjEneGibblesFPv(arg0);
        if (F_802D(0x37E, s16) >= 2) {
            F_802D(0x37E, s16) = 0;
            F_802D(0x374, s32) &= ~0x108;
        }
        F_802D(0x30, s32) &= 0xFFDFFFFF;
        break;
    }
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
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

s32 update_angle__10TObjPlayerFPviPv(void *, s32, void *);
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
        if (p != 0 && get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
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
            diff = update_angle__10TObjPlayerFPviPv(self, self->param->turn, &d);
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
            play_sound_effect(TObjEneGibbles__sub_802D7F94(self, 0x3AD34), self->snd, 0, 0);
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
            play_sound_effect(TObjEneGibbles__sub_802D7F94(self, 0x3AD34), self->snd, 0, 0);
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
            play_sound_effect(TObjEneGibbles__sub_802D7F94(self, 0x3AD34), self->snd, 0, 0);
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
            self->timer = (s16)*(f32 *)(TObjEneGibbles__data_805D68B4 + 4);
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
    play_distance_sound__14TObjEneGibblesFi((s32)self);
    ((void (*)(void *))advance_animation_playback)(self);
    clamp_angle__14TObjEneGibblesFPvi(self, 0);
    check_object_collisions__10TObjPlayerFPv(self);
    check_enemy_body_collisions(self);
    update_enemy_collision_flags__10TObjPlayerFPv(self);
    minimap_render_dot(self->snd, -0x5DB4, 1, 0);
    submit_cursor_candidate(self, -1);
}

s32 TObjEneGibbles__sub_802D9A04(void *arg0) {
    s32 i;
    VObj_802D9A04 *pl;

    for (i = 0; i < lbl_805D5868; i++) {
        pl = ((VObj_802D9A04 * (*)(s32))get_player_data__10TObjPlayerFi)(i);
        if (is_valid_and_active__10TObjPlayerFUi() != 0 && obj_getField1c(pl) < 0x1000U) {
            f32 dist = horizontal_distance_squared((int) ((u8 *) pl + 0x2FC), (void *) ((s32) arg0 + 0x38));
            if (dist <= get_pos_x__14TObjEneGibblesFPv(M2C_FIELD(TObjEneGibbles__data_805D68AC, void **, 4)) * get_pos_x__14TObjEneGibblesFPv(M2C_FIELD(TObjEneGibbles__data_805D68AC, void **, 4))) {
                Arg_802D9A04 tmp;
                tmp.a = 0;
                tmp.b = get_id__10TObjPlayerFPv(M2C_FIELD(TObjEneGibbles__data_805D68AC, void **, 4));
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
        ((M2C_UNK (*)(s32, void *, int))render_and_get_joint_pos__14TObjEneGibblesFPvii)(arg0, &v, 0x35);
    } else if (arg1 == 0x1F) {
        ((M2C_UNK (*)(s32, void *, int))render_and_get_joint_pos__14TObjEneGibblesFPvii)(arg0, &v, 0x1F);
    } else {
        return;
    }
    v.y += lbl_805DE808;
    if (csnVecterUnder(&v, 0x16EF) != 0) {
        if (((s32 (*)(s32, void *, f32))spawn_ground_impact_effects__14TObjEneGibblesFPvPvf)(arg0, &v, lbl_805DE858) == 0) {
            v.y += TObjEneGibbles__data_805DE81C;
            spawn_particle_effect(&v, 0x64);
        }
        for (i = 0; i < lbl_805D5868; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (((s32 (*)(void *))is_valid_and_active__10TObjPlayerFUi)(p) != 0 && obj_getField1c(p) < 0x1000) {
                d = horizontal_distance_squared((int)(p + 0x2FC), &v);
                if (d <= get_pos_x__14TObjEneGibblesFPv(*(void **)TObjEneGibbles__data_805D68AC) * get_pos_x__14TObjEneGibblesFPv(*(void **)TObjEneGibbles__data_805D68AC)) {
                    a.x = 0;
                    a.y = get_id__10TObjPlayerFPv(*(void **)TObjEneGibbles__data_805D68AC);
                    Hit_802D9B80 h = a;
                    ((VObj_18_22e4b0 *)p)->m21(arg0, &h, 0, -1, -1);
                    ((VObj_18_22e4b0 *)p)->m23(arg0);
                }
            }
        }
    }
}

void TObjEneGibbles__sub_802D9D64(u8 *arg0) {
    Vec_802D9D64 v;
    switch (M2C_FIELD(arg0, s16 *, 0x37C)) {
    case 0:
    default: {
        VecCopy__FP3VecPC3Vec((Vec_800A6B14 *) &v, (Vec_800A6B14 *) (M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC));
        subtract_vector(&v, arg0 + 0x2FC);
        f64 t = get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        if ((s32) (TObjEneGibbles__data_80472798 * t) < 0x10) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        } else {
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        }
        break;
    }
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 6;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFFFF7F);
        break;
    }
    bind_enemy_combat_stats(arg0, 0, ((s32 *) TObjEneGibbles__data_805D68AC)[M2C_FIELD(arg0, s16 *, 0x37C)], 0);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) |= 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
}

#define TGT_802D9EB4 (((void **)TObjEneGibbles__data_805D68AC)[M2C_FIELD(arg0, s16 *, 0x37C)])
s32 is_target_in_attack_range__14TObjEneGibblesFPv(u8 *arg0) {
    Vec_802D9EB4 v;
    f32 rad;
    f32 dist;
    s32 ang;
    u8 *obj;
    u8 *sub;
    if (M2C_FIELD(arg0, s16 *, 0x326) >= 3) {
        obj = M2C_FIELD(arg0, u8 **, 0x2A8);
        if (obj != NULL && M2C_FIELD(arg0, u32 *, 0x318) != 0 && !(M2C_FIELD(obj, s32 *, 0x30) & 0x02000800)) {
            dist = calc_xz_distance_sq__10TObjPlayerFiUiPv(arg0, obj, &v);
            ang = angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32)(TObjEneGibbles__data_80472798 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
            sub = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2A8), u8 **, 0xA4);
            if (sub != NULL) {
                rad = M2C_FIELD(sub, f32 *, 0xC);
            } else {
                rad = lbl_805DE834;
            }
            if (M2C_FIELD(arg0, s32 *, 0x374) & 8) {
                M2C_FIELD(arg0, s16 *, 0x37C) = 2;
                if (dist <= (rad + get_pos_x__10TObjPlayerFPv(TGT_802D9EB4)) * (rad + get_pos_x__10TObjPlayerFPv(TGT_802D9EB4)) && ang <= get_field_0c__10TObjPlayerFPv(TGT_802D9EB4)) {
                    return 1;
                }
            } else if (M2C_FIELD(arg0, s32 *, 0x374) & 0x10) {
                M2C_FIELD(arg0, s16 *, 0x37C) = 1;
                if (dist <= (lbl_805DE85C + rad) * (lbl_805DE85C + rad) && ang <= 0xAAA) {
                    return 1;
                }
            } else {
                M2C_FIELD(arg0, s16 *, 0x37C) = 0;
                if (dist <= (rad + get_pos_x__10TObjPlayerFPv(TGT_802D9EB4)) * (rad + get_pos_x__10TObjPlayerFPv(TGT_802D9EB4)) && ang <= get_field_0c__10TObjPlayerFPv(TGT_802D9EB4)) {
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
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), u32 *, 0x18) |= 1;
    M2C_FIELD(arg0, u32 *, 0x30) &= 0xF9DBFFFF;
    if (M2C_FIELD(arg0, u8 **, 0x2A8) == NULL) {
        return;
    }
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 2:
        break;
    case 0: {
        Vec_802DA0BC v = *(Vec_802DA0BC *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
        if (select_enemy_destination(arg0, &v, 7) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            {
                Vec_802DA0BC v2 = *(Vec_802DA0BC *)(arg0 + 0x2FC);
                copy_position_if_valid__10TObjPlayerFii(arg0, &v2);
            }
            apply_actor_gravity(arg0, 0, TObjEneGibbles__data_805DE7E4);
            M2C_FIELD(arg0, f32 *, 0x3A0) = TObjEneGibbles__data_805DE7E4;
        } else {
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, u32 *, 0x30) &= 0xF99BFFFF;
        }
        break;
    }
    case 1:
        {
            f32 dt = M2C_FIELD(TObjEneGibbles__data_805D68B4, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0x3A0) += dt;
            Vec_802DA0BC v = *(Vec_802DA0BC *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            enemy_move_toward(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &v, 0, dt);
        }
        d = horizontal_distance_squared((int)(arg0 + 0x29C), arg0 + 0x38);
        {
            Vec_802DA0BC v = *(Vec_802DA0BC *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            ok = select_enemy_destination(arg0, &v, 1);
        }
        if (d >= lbl_805DE860 && ok != 0) {
            M2C_FIELD(arg0, u32 *, 0x374) |= 0x10;
        } else if (M2C_FIELD(arg0, f32 *, 0x3A0) >= lbl_805DE864) {
            M2C_FIELD(arg0, f32 *, 0x3A0) = TObjEneGibbles__data_805DE7E4;
            if (((f32 (*)(void *))calc_boss4_scale__10TObjPlayerFi)(arg0) < M2C_FIELD(arg0, f32 *, 0x394) && ok != 0) {
                M2C_FIELD(arg0, u32 *, 0x374) |= 0x10;
            } else {
                M2C_FIELD(arg0, u32 *, 0x374) &= ~0x10;
            }
        } else {
            M2C_FIELD(arg0, u32 *, 0x374) &= ~0x10;
        }
        {
            f32 r = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC);
            if (d < r * r) {
                M2C_FIELD(arg0, s16 *, 0x328) = 3;
            }
        }
        break;
    case 3:
        M2C_FIELD(arg0, u32 *, 0x374) &= ~0x10;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        break;
    }
    TObjEneGibbles__sub_802D7DAC((s32)arg0);
    ((void (*)(void *))advance_animation_playback)(arg0);
    turn_toward_target__14TObjEneGibblesFPv((Obj_800A6B14 *)arg0);
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    submit_cursor_candidate(arg0, -1);
}

void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_r0;
    s32 temp_r3;
    u8 *temp_r4;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    ((M2C_UNK (*)(int))advance_animation_playback)((int)((int) (arg0)));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x3C0));
        M2C_FIELD(arg0, f32 *, 0x38C) = (f32) lbl_805DE868;
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneGibbles__data_805DE830;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 1:
        if (((struct GibVObj_802da394_802D87D8 *) (arg0 + 0x3C0))->m5() != 0) {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38C) - M2C_FIELD(arg0, f32 *, 0x390));
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) (M2C_FIELD(arg0, f32 *, 0x390) + TObjEneGibbles__data_805DE830);
        } else {
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DE86C;
        }
        temp_f2 = M2C_FIELD(arg0, f32 *, 0xC4);
        if (((s32 (*)(void *, f32, f32))objInBand__FP7GameObjf)((void *) (arg0), (f32) ((temp_f2 - TObjEneGibbles__data_805DE7EC) - M2C_FIELD(arg0, f32 *, 0xC8)), (f32) (temp_f2)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) TObjEneGibbles__data_805DE7E4;
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneGibbles__data_805DE7E4;
            temp_r3 = TObjEneGibbles__sub_802D9A04((void *) (arg0));
            switch (temp_r3) {
            case 0:
                TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
                break;
            default:
            case 1:
                ((M2C_UNK (*)(void *, void *, int, int))play_sound_effect)((void *) ((M2C_UNK (*)(void *, int))TObjEneGibbles__sub_802D7F94)((void *) (arg0), (int) (0x3AD32)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                break;
            }
            ((M2C_UNK (*)(void *))TObjEneGibbles__sub_802D7A54)((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
        break;
    case 3:
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0xC4);
        if (((s32 (*)(void *, f32, f32))objInBand__FP7GameObjf)((void *) (arg0), (f32) ((temp_f2_2 - TObjEneGibbles__data_805DE7EC) - M2C_FIELD(arg0, f32 *, 0xC8)), (f32) (temp_f2_2)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 4);
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

void update_spawn_state__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0xFFFFFFFE);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        apply_actor_gravity((void *) arg0, (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        return;
    case 1:
        if (horizontal_distance_squared((int) (M2C_FIELD(arg0, s32 *, 0x2A8) + 0x2FC), (void *) (arg0 + 0x2FC)) < lbl_805DE870) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
    case 2:
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 2);
        break;
    }
}

void update_state__14TObjEneGibblesFPv(void *arg0)
{
  s16 temp_r0;
  s32 temp_r4;
  void *temp_r3;
  void *temp_r3_2;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  switch (temp_r0)
  {
    default:
      temp_r4 = *((s32 *) (((s8 *) arg0) + 0x374));
      if (temp_r4 & 4)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 3;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 1;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xF9FBFFFF);
    }
    else
      if (temp_r4 & 1)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
    }
      temp_r3 = *((void **) (((s8 *) arg0) + 0xA4));
      *((s32 *) (((s8 *) temp_r3) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3) + 0x18))) | 1);
      return;

    case 1:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 2)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
    }
      return;

    case 2:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 4)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 3;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 1;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xF9FBFFFF);
      return;
    }
      break;

    case 3:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 3)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
      *((s32 *) (((s8 *) arg0) + 0x374)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x374))) & 0xFFFF0000);
      *((s32 *) (((s8 *) arg0) + 0x374)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x374))) | 1);
      temp_r3_2 = *((void **) (((s8 *) arg0) + 0xA4));
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
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & ~0x107);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    ((M2C_UNK (*)(void *, void *))advance_animation_playback)(arg0, temp_r4);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    default:
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        M2C_FIELD(arg0, f32 *, 0x38C) = (f32) TObjEneGibbles__data_805DE7E4;
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) lbl_805DE874;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 1:
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneGibbles__data_805DE7F8)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            TObjEneGibbles__sub_802D7BE0((s32) (arg0));
            play_sound_effect((int)(TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A82F))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            ((V_802DA7A4 *)(arg0 + 0x3C0))->m2();
        }
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 2:
        if (((V_802DA7A4 *)(arg0 + 0x3C0))->m4() == 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        } else {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38C) + M2C_FIELD(arg0, f32 *, 0x390));
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) (M2C_FIELD(arg0, f32 *, 0x390) - TObjEneGibbles__data_805DE830);
        }
        break;
    case 3:
        set_position_from__14TBoss4DarkFalzFPvPv((void *) (arg0), (void *) (arg0 + 0x50));
        update_prev_position__10TObjPlayerFPv((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) TObjEneGibbles__data_805DE7EC;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) TObjEneGibbles__data_805DE7EC;
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) TObjEneGibbles__data_805DE7EC;
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 1);
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
    ((M2C_UNK (*)(int))advance_animation_playback)((int)(arg0));
    if ((u32) M2C_FIELD(var_r31, u32 *, 0x2A8) != 0U) {
        var_r3 = (u8 *)((void *)3);
        M2C_FIELD(var_r31, s16 *, 0x326) = 3;
        var_r3 = (u8 *)(var_r31);
        var_r4 = (u8 *)((void *)0x06240000);
        M2C_FIELD(var_r31, s16 *, 0x328) = 0;
        obj_clearFlags30((void *)((int) (var_r3)), (int)((int) (0x06240000)));
        M2C_FIELD(var_r31, s32 *, 0x374) = (s32) (M2C_FIELD(var_r31, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(var_r31, s32 *, 0x374) = (s32) (M2C_FIELD(var_r31, s32 *, 0x374) | 4);
        var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xA4));
        M2C_FIELD(var_r3, s32 *, 0x18) = (s32) (M2C_FIELD(var_r3, s32 *, 0x18) | 1);
    } else {
        M2C_FIELD(var_r31, s32 *, 0x374) = (s32) (M2C_FIELD(var_r31, s32 *, 0x374) & 0xFFFFFFFB);
    }
    var_f2 = (*(const f32 *)&lbl_805DE878);
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x350));
    var_f3 = var_f2;
    var_f1 = M2C_FIELD(var_r4, f32 *, 4);
    var_r4 = (u8 *)(M2C_FIELD(var_r4, u8 **, 8));
    enemy_wander_home(var_r3, (s32) var_r4, var_f1, var_f2, var_f3);
    var_r3 = (u8 *)(var_r31);
    refresh_collision_body_centers((void *)((int) (var_r3)));
    var_r3 = (u8 *)(var_r31);
    ((M2C_UNK (*)(int))check_object_collisions__10TObjPlayerFPv)((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    ((M2C_UNK (*)(int))check_enemy_body_collisions)((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    ((M2C_UNK (*)(int))update_enemy_collision_flags__10TObjPlayerFPv)((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)((void *)0x200000);
    obj_clearFlags30((void *)((int) (var_r3)), (int)((int) (0x200000)));
    var_r3 = (u8 *)(var_r31);
    ((M2C_UNK (*)(int))TObjEneGibbles__sub_802D7DAC)((int) (var_r3));
    var_r3 = (u8 *)(var_r31 + 0x38);
    var_r4 = (u8 *)((void *)-0x5DB4);
    var_r5 = 1;
    var_r6 = 0;
    minimap_render_dot((void *)(var_r3), (int)(-0x5DB4), (int)(1), (int)(0));
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)((void *)-1);
    ((M2C_UNK (*)(int, int))submit_cursor_candidate)((int) (var_r3), (int) (-1));
}

void init_state__14TObjEneGibblesFPv(u8 *arg0) {
    u8 *temp_r3;

    set_position_from__14TBoss4DarkFalzFPvPv((void *) arg0, (void *) (arg0 + 0x50));
    refresh_collision_body_centers((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
}

void TObjEneGibbles__sub_802DAAC8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if (((VObj802DAAC8_802daac8_802D87D8 *)(arg0 + 0x3C0))->m8() != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            obj_clearFlags30((void *) (arg0), (int) (0x200000));
            obj_setFlags30((void *) (arg0), (int) (0x06040000));
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
        }
    case 6:
    case 11:
        return;
    case 10:
        if (!(M2C_FIELD(arg0, s32 *, 0x374) & 0x40)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            return;
        }
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF99BFFFF);
        break;
    }
}

#define P_802DAD50(p) ((Obj_802DAD50 *)(p))
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
            if (((s32 (*)(u8 *))is_valid_and_active__10TObjPlayerFUi)(p) != 0 && p != (u8 *)self) {
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
                if (get_field_3e4__10TObjPlayerFPv((u32)q) == get_current_floor()) {
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
            if (get_field_3e4__10TObjPlayerFPv((u32)p) != get_current_floor()) continue;
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
    clamp_angle__14TObjEneGibblesFPvi(self,
        angle_diff_s16(self->angle, (s32)(TObjEneGibbles__data_80472798 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z))));
}

void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < -0x238E) {
        var_r4 = -0x238E;
    } else if (var_r4 > 0x238E) {
        var_r4 = 0x238E;
    }
    M2C_FIELD(arg0, s32 *, 0x3BC) = lerp_angle_half__10TObjPlayerFUsUs(M2C_FIELD(arg0, s32 *, 0x3BC), var_r4);
}

void update_spawn_timer__14TObjEneGibblesFv(void) {
    if ((s32) TObjEneGibbles__data_805D68BC == 0x18) {
        rotate_matrix_x(0, TObjEneGibbles__data_805D68C0);
    }
    TObjEneGibbles__data_805D68BC += 1;
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
    if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
        vis = self->m9(600.0f, 600.0f, 30.0f);
    } else {
        vis = self->m9(lbl_805DE884, lbl_805DE87C, lbl_805DE880);
    }
    if (vis != 0) {
        update_obstruction_fade(&self->fades[cam]);
        fade = updateFromCamera__15RenderFadeStateFPCf(&self->fades[cam], arg0 + 0x2FC);
        select_actor_lighting(arg0);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        push_matrix_from(0);
        VecCopy__FP3VecPC3Vec(&v, (Vec_800A6B14 *)(arg0 + 0x38));
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 2:
        case 6:
        case 10:
            v.y += M2C_FIELD(arg0, f32 *, 0x38C);
            break;
        }
        set_position_vec3__10TObjPlayerFPvPv(0, &v);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_monitor_position_vec3__10TObjPlayerFPvPv(0, arg0 + 0x68);
        TObjEneGibbles__data_805D68BC = 0;
        TObjEneGibbles__data_805D68C0 = M2C_FIELD(arg0, s32 *, 0x3BC);
        set_global_state__16TObjEneRe7BeruraFi((void *)update_spawn_timer__14TObjEneGibblesFv);
        toggle_particle_effect__10TObjPlayerFv();
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            break;
        case 1:
        case 2:
        case 10:
            if (self->sub.m8() != 0) {
                lbl_805D5660 = some_id_805c6f74;
                lbl_805D5664 = lbl_805D7784;
                lbl_805D5668 = lbl_805D7780;
                some_id_805c6f74 |= 1;
                self->sub.m6();
                if (toggle_flag_9__10TObjPlayerFPv(arg0) == 0) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                }
                self->sub.m7();
                lbl_805D7784 = lbl_805D5664;
                lbl_805D7780 = lbl_805D5668;
                some_id_805c6f74 = lbl_805D5660;
            }
            break;
        default:
            if (fade != 0) {
                lbl_805D5660 = some_id_805c6f74;
                lbl_805D5664 = lbl_805D7784;
                lbl_805D5668 = lbl_805D7780;
                self->fades[cam].m6();
                if (toggle_flag_9__10TObjPlayerFPv(arg0) == 0) {
                    if (vis == 1) {
                        draw__16TObjEneRe7BeruraFPv(arg0);
                    } else {
                        render_world_model__10TObjPlayerFPv(arg0);
                    }
                }
                self->fades[cam].m7();
                lbl_805D7784 = lbl_805D5664;
                lbl_805D7780 = lbl_805D5668;
                some_id_805c6f74 = lbl_805D5660;
            } else if (vis == 1) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            } else {
                render_world_model__10TObjPlayerFPv(arg0);
            }
            break;
        }
        end_effect_render__13TParticleCtrlFv();
        set_global_state__16TObjEneRe7BeruraFi(NULL);
        pop_matrix();
        restore_scene_lighting();
        if (!(M2C_FIELD(arg0, s32 *, 0x374) & 1)) {
            render_with_position_override__10TObjPlayerFPvPvi(arg0, 0, 0);
        }
    } else {
        update_position__14TObjEneGibblesFPv(arg0);
    }
}

void run_task__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((void (*)(u8 *))TObjEneGibbles__sub_802D7E3C)(arg0);
        return;
    }
    {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            init_state__14TObjEneGibblesFPv(arg0);
            break;
        case 1:
            update_spawn_state__14TObjEneGibblesFPv(arg0);
            break;
        case 2:
            update_death_sequence__14TObjEneGibblesFPv(arg0);
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
            update_action_state__14TObjEneGibblesFPv(arg0);
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
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x30) & 0x02000800)) {
        M2C_FIELD(arg0, s16 *, 0x37E) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    update_position__14TObjEneGibblesFPv(arg0);
    ((void (*)(u8 *))update_shadow_height__14TObjEneGibblesFPv)(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    ((void (*)(u8 *))sync_state__14TObjEneGibblesFPv)(arg0);
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x2B4) + TObjEneGibbles__data_805DE7EC);
}

void init_params__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = (s16) (lbl_805DE878 + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, s16 *, 0x388) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x38A) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x39C);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 0;
    } else if (temp_r0_2 > 8) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 8;
    }
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = (s32) (M2C_FIELD(arg0, s32 *, 0x378) | (1 << M2C_FIELD(arg0, s32 *, 0x39C)));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x35C);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x360);
}

void * create__14TObjEneGibblesFPv(void *arg0) {
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

void free_static__14TObjEneGibblesFv(void) {
    if ((u32) TObjEneGibbles__data_805D68AC != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneGibbles__data_805D68AC);
        TObjEneGibbles__data_805D68AC = 0U;
    }
    if ((u32) TObjEneGibbles__data_805D68B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneGibbles__data_805D68B8, 1);
        TObjEneGibbles__data_805D68B8 = 0U;
    }
}

void load_resources__14TObjEneGibblesFv(void) {
    u8 *p;
    if (is_split_screen() != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_804E28A0, 0, 0, 0);
        }
        TObjEneGibbles__data_805D68B8 = (u32) p;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_804E285C, 0, 0, 0);
        }
        TObjEneGibbles__data_805D68B8 = (u32) p;
    }
    TObjEneGibbles__data_805D68BC = 0;
    TObjEneGibbles__data_805D68C0 = 0;
    TObjEneGibbles__data_805D68AC = (u32) alloc_buffer__11TOBoss4RockFPv(0xC);
    lbl_805D68A8 = register_boss__6TLobbyFPv(0x3D);
    ((s32 *) TObjEneGibbles__data_805D68AC)[0] = dispatch_shared_handler_b__6TLobbyFPv(0x3D);
    ((s32 *) TObjEneGibbles__data_805D68AC)[2] = dispatch_shared_handler_b__6TLobbyFPv(0x3E);
    ((s32 *) TObjEneGibbles__data_805D68AC)[1] = dispatch_shared_handler_b__6TLobbyFPv(0x3F);
    lbl_805D68B0 = register_object__6TLobbyFPv(0x3D);
    (*(s32 *)&TObjEneGibbles__data_805D68B4) = dispatch_shared_handler_a__6TLobbyFPv(0x3D);
    Spawn_802DB7C0 s = lbl_80472758;
    s.a = M2C_FIELD(TObjEneGibbles__data_805D68B8, s32 *, 0x430);
    spawn_npc_enemy__6TLobbyFsiiiff(0x44,
        M2C_FIELD(M2C_FIELD(TObjEneGibbles__data_805D68B8, u8 **, 0x42C), s32 *, 8),
        M2C_FIELD(M2C_FIELD(TObjEneGibbles__data_805D68B8, u8 **, 0x42C), s32 *, 0xC),
        &s, ((f32 *)lbl_804E296C)[3], TObjEneGibbles__data_805DE7E4);
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
    initialize__9TObjEnemyFPv(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *)lbl_804E29F0;
    init_common__18TObjEneMe3SinowZoaFPv(arg0 + 0x3C0);
    __construct_array(arg0 + 0x3DC, (void *)init_and_activate__10TObjPlayerFPv, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3F60;
    ((VObj_18_802DBA18 *)arg0)->m79(arg2);
    init_position_vectors__10TObjPlayerFi(arg0);
    M2C_FIELD(arg0, f32 *, 0x68) = M2C_FIELD(arg0, f32 *, 0x6C) = M2C_FIELD(arg0, f32 *, 0x70) = TObjEneGibbles__data_805DE7EC;
    init_params__14TObjEneGibblesFPv(arg0);
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s32 *, 0x368) = 0;
    set_param__12TObjEneLappyFPvi(arg0, 0x3D);
    M2C_FIELD(arg0, s32 *, 0x334) = 0;
    TObjEneGibbles__sub_802DBC94((O_802DBC94 *)arg0, M2C_FIELD(arg0, s32 *, 0x368));
    M2C_FIELD(arg0, void **, 0xD8) = (void *)&lbl_804E28B0;
    set_field_d8__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, void **, 0xD8));
    M2C_FIELD(arg0, s32 *, 0xDC) = M2C_FIELD(TObjEneGibbles__data_805D68B8, s32 *, 0x430);
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    init_collision_body_parts(arg0, lbl_804E296C, 1);
    M2C_FIELD(arg0, s16 *, 0x37C) = 0;
    M2C_FIELD(arg0, s16 *, 0x37E) = 0;
    M2C_FIELD(arg0, void **, 0x350) = (void *)lbl_804E2950;
    bind_enemy_combat_stats(arg0, lbl_805D68A8, ((s32 *)TObjEneGibbles__data_805D68AC)[M2C_FIELD(arg0, s16 *, 0x37C)], lbl_805D68B0);
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    update_position__14TObjEneGibblesFPv(arg0);
    update_shadow_height__14TObjEneGibblesFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    initialize_enemy_photon_effect(arg0);
    M2C_FIELD(arg0, s32 *, 0x374) = 1;
    M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 0x11);
    M2C_FIELD(arg0, u32 *, 0x30) |= 0x06040000;
    M2C_FIELD(arg0, s32 *, 0x380) = 0x101;
    M2C_FIELD(arg0, s32 *, 0x384) = 0x101;
    p = __nw__7TObjectFUl(0xAC);
    if (p != NULL) {
        p = construct_collider_proxy__10TObjPlayerFPv(p, 0);
    }
    M2C_FIELD(arg0, void **, 0x3B4) = p;
    init_collision_body_parts(M2C_FIELD(arg0, void **, 0x3B4), (u8 *)lbl_804E296C + 0x2C, 1);
    p = __nw__7TObjectFUl(0xAC);
    if (p != NULL) {
        p = construct_collider_proxy__10TObjPlayerFPv(p, 0);
    }
    M2C_FIELD(arg0, void **, 0x3B8) = p;
    init_collision_body_parts(M2C_FIELD(arg0, void **, 0x3B8), (u8 *)lbl_804E296C + 0x58, 1);
    ((VObj_14_802DBA18 *)(arg0 + 0x3C0))->m3();
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&((G_802DBA18 *)arg0)->parts[i]);
    }
    ((VObj_18_802DBA18 *)arg0)->m80();
    return arg0;
}

void* TObjEneGibbles__sub_802DBC8C(void* p) { return (char*)p + 0x2fc; }

void TObjEneGibbles__sub_802DBC94(O_802DBC94 *self, s32 i) {
    self->f34 = (*(G_802DBC94 * *)&TObjEneGibbles__data_805D68B8)->e[i].c;
    self->f24 = (*(G_802DBC94 * *)&TObjEneGibbles__data_805D68B8)->e[i].d;
}

}
