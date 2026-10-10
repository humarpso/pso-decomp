#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct TBoss6Type2_802BD014;
typedef void (TBoss6Type2_802BD014::*Fn_802BD014)();
struct Boss_802B9C80;
struct T2_802BB498;
struct T2_802BB554;
struct Obj_802BCD2C;
struct Tb_802BD0C8 { s32 f0; s32 f4; s32 f8; Fn_802BD014 fn; Fn_802BD014 fn2; Fn_802BD014 fn3; };

struct Ent_802BCEF4 { s32 f0; u8 pad4[4]; f32 f8; u8 padC[8]; s32 f14; u8 pad18[4]; };

struct O_802BCEF4 { u8 pad[0x3FC]; s32 model; u8 pad400[0x498 - 0x400]; Ent_802BCEF4 ents[1]; };

struct Tb_802BCEF4 { u8 pad[8]; s32 v[1]; };

struct Hit_802BBAB0 { s32 x; f32 y; };

struct VBase_18_b27ba1 { char pad[0x18]; };

struct VObj_18_b27ba1 : VBase_18_b27ba1 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual M2C_UNK m21(void *, Hit_802BBAB0 *, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Vec_802BBAB0 { f32 x, y, z; };

struct Obj_802BBAB0 {
    u8 pad0[0x3C];
    f32 f3C;
    u8 pad40[0x418 - 0x40];
    s32 f418;
    u8 pad41C[0x4B4 - 0x41C];
    s32 f4B4;
    u8 pad4B8[0x4E8 - 0x4B8];
    f32 f4E8;
    u8 pad4EC[0x59C - 0x4EC];
    Vec_802BBAB0 rock[19];
    Vec_802BBAB0 v680[1];
};

struct Prm_802BCAB8 { s32 a; s32 c; f32 b; f32 d; };

struct Ent_802BCAB8 { s32 a; s32 b; };

struct Obj_802BCAB8 { u8 pad[0x400]; Ent_802BCAB8 ents[2]; };

struct Vec_802BAD90 { f32 x, y, z; };

typedef s32 M2C_UNK;
struct T2_802BA000;
struct Obj_802BC050;
struct T2_802BB768;
struct Obj_802B9D6C;
struct O_802BCEF4;
struct VBase_18_802BE0D4 { char pad[0x18]; };

struct VObj_18_802BE0D4 : VBase_18_802BE0D4 {
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

struct Tmp_802BE0D4 { s32 a; s16 b; s16 c; u8 pad[0x10]; };

struct Ent_802BE0D4 { s32 a; s32 b; };

struct Ents_802BE0D4 { u8 pad[0x400]; Ent_802BE0D4 ents[2]; };

struct Arr_802BE0D4 { u8 pad[0x378]; s32 arr[32]; };

struct Boss_802BD7EC { u8 pad[0x2E4]; s32 f2E4; };

extern "C" {
s32 get_bml_model(s32, M2C_UNK);
s32 collect_and_count__12TBoss3VoloptFUii(int, int);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK add_radar_scaled_marker(void *, int, int, int, f32);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK TObjPlayer__sub_8023DEE0(void *, int, int, int);
M2C_UNK scroll_strips_uv__14TBoss6PlotFalzFPvii(void *, int, int);
s32 is_idle__11TBoss6Type1FPv(int);
void update_footstep_effects__11TBoss6Type2FPv(u8 *arg0);
void update_possess_target__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss6Type2__sub_802BA6DC();
void TBoss6Type2__sub_802BA7BC(u8 *o);
void update_parts_flags__11TBoss6Type2FPv(void *arg0);
M2C_UNK TBoss6Type2__sub_802BBE20(void *);
void advance_position__11TBoss6Type2FPv(u8 *arg0);
void copy_vec_array__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss6Type2__sub_802BC124(void *);
void update_countdown__11TBoss6Type2FPv(void *arg0);
void update_motion_tracks__11TBoss6Type2FPv(Obj_802BCD2C *self);
extern const f32 lbl_805DE4C0;
void run_task__11TBoss6Type2Fv(u8 *arg0);
s32 get_bml_motion(int, int);
void copy_transform__11TBoss6Type2FPvPv(void* p, void* q);
extern u8 lbl_804712BC[];
extern u8 lbl_804712E0[];
extern M2C_UNK TBoss6Type2__motion_table[];
extern const s32 TBoss6Type2__data_805DE4B8;
void init_motion_entries__11TBoss6Type2FPv(O_802BCEF4 *o);
u8 * get_player_by_client_id(u32);
s32 is_active__14TBoss6PlotFalzFPv();
s32 rand_vary_count__14TBoss6PlotFalzFif(s32, f32);
s32 push_players_away__11TBoss6Type2FPvPvf(void *self, void *target, f32 range);
M2C_UNK break_rocks_in_radius__10TBoss6RockFPvf(void *, f32);
f32 xyz_distance(void *, void *);
extern s32 lbl_80471324[];
extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE430;
extern const f32 TBoss6Type2__data_805DE434;
void apply_rock_hits_to_players__11TBoss6Type2FPv(Obj_802BBAB0 *self);
M2C_UNK clear_render_callback__8TObjFishFv(u32);
M2C_UNK set_draw_callback_list__8TObjFishFPv(u32);
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK set_fade_material_color__14TBoss6PlotFalzFf(f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_model_blend_motion(s32, Prm_802BCAB8 *, f32);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;
void draw_body_models__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 * get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
M2C_UNK play_sound_effect(s32, void *, s32, s32);
s32 is_active__14TBoss6PlotFalzFPv();
void spawn__15TBoss6RockChaseFii(void *, void *);
s32 rand(void);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;
extern const f32 TBoss6Type2__data_805DE434;
extern const f32 lbl_805DE464;
extern const f32 TBoss6Type2__data_805DE468;
extern const f32 lbl_805DE46C;
extern const f32 lbl_805DE470;
extern const f32 lbl_805DE474;
void spawn_rocks_around_players__11TBoss6Type2FPv(void *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 exchange_object_state__6TLobbyFPvis(void *, void *, int);
void reset_photon_effect__12TBoss3VoloptFPv(void *);
s32 TObjFish__sub_800E3124(void *, void *);
void set_param__12TObjEneLappyFPvi(void *, int);
void bind_enemy_combat_stats(void *, int, int, int);
void initialize__9TObjEnemyFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
void build_tables__14TBoss6PlotFalzFPvPvi(void *, void *, int);
s32 get_fish_count__8TObjFishFv();
void spawn_particle_slot__11TBoss6Type2FPvi(u8 *arg0, s32 arg1);
void set_fields_554__11TBoss6Type2FPv(void* p);
void cache_fish_params__11TBoss6Type2FPv(void *arg0);
void TBoss6Type2__sub_802BA7B0(void* p);
int TBoss6Type2__sub_802BB694(void);
void TBoss6Type2__sub_802BB818(void *, f32);
void advance_position__11TBoss6Type2FPv(u8 *arg0);
void reset_indices__11TBoss6Type2FPv(void *arg0);
void reset_attack_counter__11TBoss6Type2FPv(void *arg0);
void copy_anim_state__11TBoss6Type2FPv(void *arg0);
void set_screen_pos__11TBoss6Type2FPv(void *arg0);
void load_battle_params__11TBoss6Type2FPv(u8 *arg0);
void init_motion_entries__11TBoss6Type2FPv(O_802BCEF4 *o);
void set_action_state__11TBoss6Type2FPvPv(void *ov, void *vv);
void TBoss6Type2__sub_802BE4E0(s32 *arg0, s32 *arg1);
s32 create_zanzo__11TBoss6Type1FPvPvPv(void *, int, int);
void create_rock_pool__10TBoss6RockFi(void *);
void capture_player_snapshots__11TBoss6Type2Fv();
extern u8 lbl_80471068[];
extern u8 lbl_80471074[];
extern int lbl_804710BC[];
extern u8 lbl_8047113C[];
extern s32 lbl_8047127C[];
extern s32 lbl_8047128C[];
extern u8 lbl_80471294[];
extern s32 lbl_804712AC[];
extern u8 boss6_type2_collision_parts[];
extern u8 __vt__11TBoss6Type2[];
extern s32 lbl_805D3EB8;
extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;
s32 TBoss6Type2__ct(s32 arg0_, s32 arg1, s32 arg2_);
s32 find_index_in_table__11TBoss6Type2FUi(u32 v);
s32 rand(void);
extern const f32 TBoss6Type2__data_805DE468;
extern const f32 lbl_805DE4C4;
s32 pick_random_other_index__11TBoss6Type2FPv(Boss_802BD7EC *o);
int TBoss6Type2__sub_802BB694(void);
void TBoss6Type2__sub_802BD938(u8 *arg0, u8 *arg1);
void send_action_packet_if_idle__11TBoss6Type2FPviPv(void *arg0, s32 arg1, M2C_UNK *arg2);
void send_state_action_packet__11TBoss6Type2FPv(u8 *arg0);
}

extern "C" {

struct Stack_802B9D90
{
  s32 sp8;
  s32 spC;
};

struct Obj_802B9D6C { u8 pad[0x77c]; s32 arr[14]; };

struct Obj_802BA158 { u8 pad[0x55c]; u16 f55c; u8 pad2[0x570 - 0x55e]; s32 f570; u8 pad3[0x58c - 0x574]; s32 f58c; s32 f590; s32 f594; s32 f598; };

struct V3_802B9C00 { s32 x, y, z; };

struct T1_802B9C00 {
    u8 pad0[0x38];
    V3_802B9C00 pos;
};

struct Tbl_802B9C00 { s32 a; s32 b; };

struct Vec_802B9A68 { f32 x, y, z; };

struct Player_802B9A68 { u8 pad[0x38]; Vec_802B9A68 pos; };

struct Ent_802B9F3C { s32 a; s32 b; s32 c; };

struct Boss_802B9F3C {
    u8 pad0[0x38];
    Vec_802B9A68 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x544 - 0x64];
    Ent_802B9F3C e[2];
};

struct V3_802BA078 { s32 x; f32 y; s32 z; };

struct Player_802BA078 { u8 pad0[0x30]; s32 f30; u8 pad34[4]; V3_802BA078 pos; };

struct Boss_802BA078 { u8 pad0[0x4B8]; s32 f4B8; u8 pad4BC[0x55C - 0x4BC]; u16 f55C; };

struct Ent_802B9B20 { u8 pad[0x18]; u32 flags; u8 pad1C[0x2C - 0x1C]; };

struct Boss_802B9B20 { u8 pad[0xA4]; Ent_802B9B20 *list; };

struct Vec_802B9C80 { f32 x, y, z; };

struct Tb_802B9C80 { s32 a; s32 b; };

struct Boss_802B9C80 {
    u8 pad0[0x38];
    Vec_802B9C80 pos;
    u8 pad44[0x77C - 0x44];
    u32 arr[14];
};

struct E_802B9EE4 { s32 *p; s32 a; s32 b; };

struct T2_802B9EE4 { u8 pad0[0x53C]; E_802B9EE4 e[2]; };

struct O_802BA000 { s32 h; s32 y; };

struct T2_802BA000 {
    u8 pad0[0x404];
    O_802BA000 o[2];
    u8 pad414[0x53C - 0x414];
    E_802B9EE4 e[2];
};

typedef struct Stack_802B9D90 Stack_802B9D90;

typedef struct Vec_802BA3B4 { f32 x, y, z; } Vec_802BA3B4;

struct Ent_802BA7BC { s32 idx; s32 arg; f32 lo; };

struct T2_802BA9E4 { u8 pad0[0x38]; u8 f38[0x438]; s32 f470; };

struct Boss_802BA944 { u8 pad[0x4BC]; u32 f4BC; };

struct RecoveredGlobal_802BB180_lbl_804DFAC4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802BB180_lbl_804DFAD0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct T2_802BB498 { u8 pad0[0x374]; s32 f374; };

struct T2_802BB554 { u8 pad0[0x374]; s32 f374; };

struct T2_802BB768 { u8 pad0[0x410]; u32 f410; u32 f414; };

struct T2_802BB7C0 { u8 pad0[0x410]; u32 f410; u32 f414; };

struct Ent_802BBD88 { u8 pad0[0x18]; u32 f; u8 pad1c[0x10]; };

struct T1_802BBD88 { u8 pad0[0xA4]; Ent_802BBD88 *p; };

struct V_802BBF54 { f32 x, y, z; };

struct T2_802BBF54 { u8 pad0[0x59C]; V_802BBF54 a[19]; V_802BBF54 b[19]; };

struct Ent_802BC050 { s16 f0; s16 v[5]; };

struct Obj_802BC050 {
    u8 pad0[0x31C];
    Ent_802BC050 *ent;
    u8 pad320[0x434 - 0x320];
    Ent_802BC050 local;
    u8 pad440[0x454 - 0x440];
    s16 max;
    s16 min;
};

struct Vec_802BAB80 { f32 x, y, z; };

struct Obj_802BAB80 { u8 pad[0x38]; Vec_802BAB80 pos; };

struct Vec_802BB920 { f32 x, y, z; };

typedef char RecoveredGlobal_802BB180_lbl_804DFAC4_size[sizeof(RecoveredGlobal_802BB180_lbl_804DFAC4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_802BB180_lbl_804DFAD0_size[sizeof(RecoveredGlobal_802BB180_lbl_804DFAD0) == 0xC ? 1 : -1];

struct RecoveredGlobal_802BC4CC_lbl_804712FC {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef char RecoveredGlobal_802BC4CC_lbl_804712FC_size[sizeof(RecoveredGlobal_802BC4CC_lbl_804712FC) == 0x10 ? 1 : -1];

struct M2CCopy_C { u8 bytes[0xc]; };

struct Stack_802BDDF8 {
    M2C_UNK sp8;
    s8 spC;
    u8 trailing_storage[0xF];
};

struct RecoveredGlobal_802BC754_lbl_80471080 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredFields_802BC754_arg0 {
    u8 unknown_0[0x4B4];
    s32 field_4B4;
    s32 field_4B8;
    s32 field_4BC;
    s32 field_4C0;
    s32 field_4C4;
    s32 field_4C8;
    s32 field_4CC;
    s32 field_4D0;
    s32 field_4D4;
    f32 field_4D8;
    f32 field_4DC;
    f32 field_4E0;
    f32 field_4E4;
    f32 field_4E8;
    s32 field_4EC;
};

struct RecoveredFields_802BC754_temp_r3 {
    u8 unknown_0[0x4];
    f32 field_4;
    u8 unknown_8[0x8];
    f32 field_10;
    f32 field_14;
    s32 field_18;
    s32 field_1C;
    s32 field_20;
    s32 field_24;
    s32 field_28;
    s32 field_2C;
};

struct RecoveredFields_802BC754_temp_r3_3 {
    f32 field_0;
    f32 field_4;
    f32 field_8;
    f32 field_C;
};

struct RecoveredFields_802BC754_temp_r3_4 {
    u8 unknown_0[0x8];
    f32 field_8;
    f32 field_C;
};

struct Stack_802BD938 {
    u8 sp8;
    u8 sp9;
    u8 pad_A[0x2];
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
};

struct RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C {
    const f32 value;
    u8 remaining[0x8];
};

struct Blk_802BCFD4 { s32 a; s32 b; s32 rest[7]; };

struct Obj_8004D8C8 { u8 pad[0x2D4]; u16 f2d4; u16 f2d6; };

struct Obj_8004D92C { u8 pad[0x2D4]; u16 f2d4; u16 f2d6; };

struct V_802BD378 { f32 x, y, z; };

struct T2_802BD378 { u8 pad0[0x60]; s32 f60; u8 pad64[0x59C - 0x64]; V_802BD378 v[1]; };

struct T1_802BD68C {
    u8 pad0[0x378];
    s32 v[0x20];
};

struct T2_802BD76C { u8 pad0[0x42C]; s32 f42C; };

struct TBoss6Type2_802BD014;

typedef void (TBoss6Type2_802BD014::*Fn_802BD014)();

struct Tb_802BD014 { s32 f0; s32 f4; s32 f8; Fn_802BD014 fn; u8 pad[0x30 - 0x18]; };

struct TBoss6Type2_802BD014 {
    u8 pad0[0x374];
    s32 a[33];
    u8 pad3F8[0x474 - 0x3F8];
    s32 f474;
};

struct Pkt_802BDD6C { u8 d[0x18]; };

typedef char RecoveredGlobal_802BC754_lbl_80471080_size[sizeof(RecoveredGlobal_802BC754_lbl_80471080) == 0x3C ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4B4_offset[offsetof(RecoveredFields_802BC754_arg0, field_4B4) == 0x4B4 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4B8_offset[offsetof(RecoveredFields_802BC754_arg0, field_4B8) == 0x4B8 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4BC_offset[offsetof(RecoveredFields_802BC754_arg0, field_4BC) == 0x4BC ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4C0_offset[offsetof(RecoveredFields_802BC754_arg0, field_4C0) == 0x4C0 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4C4_offset[offsetof(RecoveredFields_802BC754_arg0, field_4C4) == 0x4C4 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4C8_offset[offsetof(RecoveredFields_802BC754_arg0, field_4C8) == 0x4C8 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4CC_offset[offsetof(RecoveredFields_802BC754_arg0, field_4CC) == 0x4CC ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4D0_offset[offsetof(RecoveredFields_802BC754_arg0, field_4D0) == 0x4D0 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4D4_offset[offsetof(RecoveredFields_802BC754_arg0, field_4D4) == 0x4D4 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4D8_offset[offsetof(RecoveredFields_802BC754_arg0, field_4D8) == 0x4D8 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4DC_offset[offsetof(RecoveredFields_802BC754_arg0, field_4DC) == 0x4DC ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4E0_offset[offsetof(RecoveredFields_802BC754_arg0, field_4E0) == 0x4E0 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4E4_offset[offsetof(RecoveredFields_802BC754_arg0, field_4E4) == 0x4E4 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4E8_offset[offsetof(RecoveredFields_802BC754_arg0, field_4E8) == 0x4E8 ? 1 : -1];

typedef char RecoveredFields_802BC754_arg0_4EC_offset[offsetof(RecoveredFields_802BC754_arg0, field_4EC) == 0x4EC ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_4_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_4) == 0x4 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_10_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_10) == 0x10 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_14_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_14) == 0x14 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_18_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_18) == 0x18 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_1C_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_1C) == 0x1C ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_20_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_20) == 0x20 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_24_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_24) == 0x24 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_28_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_28) == 0x28 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_2C_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_2C) == 0x2C ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_3_0_offset[offsetof(RecoveredFields_802BC754_temp_r3_3, field_0) == 0x0 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_3_4_offset[offsetof(RecoveredFields_802BC754_temp_r3_3, field_4) == 0x4 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_3_8_offset[offsetof(RecoveredFields_802BC754_temp_r3_3, field_8) == 0x8 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_3_C_offset[offsetof(RecoveredFields_802BC754_temp_r3_3, field_C) == 0xC ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_4_8_offset[offsetof(RecoveredFields_802BC754_temp_r3_4, field_8) == 0x8 ? 1 : -1];

typedef char RecoveredFields_802BC754_temp_r3_4_C_offset[offsetof(RecoveredFields_802BC754_temp_r3_4, field_C) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C_size[sizeof(RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C) == 0xC ? 1 : -1];

struct Boss_802BC23C {
    u8 pad[0x418];
    s32 f418;
    u8 pad41c[0x4CC - 0x41C];
    s32 f4cc;
    s32 f4d0;
};

f32 receive_physical_attack__10TObjPlayerFv(void *, u32, f32);
u8 * get_attribute_entry__10TObjPlayerFPvi(u32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getArrU16_FC(void *obj, s32 i);
u8 * get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
s32 is_split_screen();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 copy_entry__6TLobbyFPvPv(void *, void *);
u8 * dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
s32 get_game_mode__6TLobbyFv();
void request_follow_camera_offsets(s32, s32, u16);
s32 request_destroy__11TBoss4Type2FUi(int);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
s32 spawn_particle_effect(s32, s32);
u32 create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(u32, int);
void copy_pos__11TNowLoadingFPvPv(s32, Vec_802B9C80 *);
s32 TObjControl__ct(s32, s32);
s32 collect_and_count__12TBoss3VoloptFUii(int, int);
s32 angle_diff_s16(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
M2C_UNK free__11TOBoss4RockFUi(s32 *);
s32 * alloc_buffer__11TOBoss4RockFPv(s32);
s32 project_actor_to_ground(void *, void *, int);
u8 * get_player_by_client_id(u32);
M2C_UNK play_sound_effect(s32, void *, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
void damage_player_hp__14TBoss6PlotFalzFiUi(s32, s32);
int pick_random_active_player__14TBoss6PlotFalzFv(void*);
s32 is_active__14TBoss6PlotFalzFPv();
s32 is_state_1f__14TBoss6PlotFalzFUi(void *);
s32 rand_vary_count__14TBoss6PlotFalzFif(s32, f32);
f32 TBoss6PlotFalz__sub_802AB684(void *);
void apply_radial_effect_to_players__14TBoss6PlotFalzFPvssf(s32, s16, s32, f32);
s32 TBoss6PlotFalz__sub_802AC17C();
s32 get_phase__14TBoss6PlotFalzFv();
void TBoss6PlotFalz__sub_802AC724(void *, void *);
s32 update_and_send__11TBoss6Type2FPv(void *);
s32 init_packet__11TBoss6Type2FPv(void *);
s32 is_idle__11TBoss6Type1FPv(int);
int draw__11TBoss6Type2FPv(void*);
int render_body_effects__11TBoss6Type2FPv(void*);
void render__11TBoss6Type2Fv(void* p);
s32 get_phase__11TBoss6Type2FPv(void* p);
void world_to_grid_pos__11TBoss6Type2FPvPvPv(f32 *arg0, s8 *arg1, s8 *arg2);
void grid_to_world_pos__11TBoss6Type2FccPv(s8 arg0, s8 arg1, f32 *arg2);
void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0);
void unpack_path_entry__11TBoss6Type2FPvPv(u8 *arg0, s32 *arg1);
s32 is_player_in_rock_area__11TBoss6Type2Fi(s32 id);
void spawn_hit_effects__11TBoss6Type2FPv(Boss_802B9B20 *o);
void destroy_part__11TBoss6Type2Fii(s32 arg0, s32 arg1);
void spawn_particle_slot__11TBoss6Type2FPvi(u8 *arg0, s32 arg1);
void update_part_positions__11TBoss6Type2FPv(Boss_802B9C80 *o);
void init_parts__11TBoss6Type2FPv(s32 arg0);
void TBoss6Type2__sub_802B9D6C(Obj_802B9D6C *self);
void update_footstep_effects__11TBoss6Type2FPv(u8 *arg0);
void set_fields_554__11TBoss6Type2FPv(void* p);
void restore_effect_values__11TBoss6Type2FPv(T2_802B9EE4 *arg0);
void sum_offsets__11TBoss6Type2FPv(T2_802B9EE4 *arg0);
void aim_toward_point__11TBoss6Type2FPvPv(Boss_802B9F3C *arg0, Vec_802B9A68 *arg1);
void init_collected_entries__11TBoss6Type2FPv(T2_802BA000 *arg0);
void TBoss6Type2__sub_802BA078(Boss_802BA078 *arg0);
void reset_fish_fields__11TBoss6Type2FPv(Obj_802BA158 *self);
void restore_target_player_state__11TBoss6Type2FPv(u8 *arg0);
void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
s32 grab_player__11TBoss6Type2FPvUs(u8 *arg0, u16 arg1);
int is_falz_ready__11TBoss6Type2FPv(void* p);
void update_possess_target__11TBoss6Type2FPv(u8 *arg0);
void reset_counters__11TBoss6Type2FPv(void *arg0);
void cache_fish_params__11TBoss6Type2FPv(void *arg0);
void update_zako__11TBoss6Type2FPv(void* p);
void TBoss6Type2__sub_802BA7B0(void* p);
void TBoss6Type2__sub_802BA7BC(u8 *o);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *arg0);
s32 is_phase_complete__11TBoss6Type2FPv(void *arg0);
s32 TBoss6Type2__sub_802BA944(Boss_802BA944 *o);
s32 TBoss6Type2__sub_802BA9E4(T2_802BA9E4 *arg0);
void trigger_screen_pos__11TBoss6Type2FPv(void *arg0);
s32 snap_to_ground__11TBoss6Type2FPv(Obj_802BAB80 *self);
void TBoss6Type2__sub_802BAD04(s32 arg0);
void request_default_follow_camera__11TBoss6Type2Fv(void);
void init_range__11TBoss6Type2Fv(void);
struct Obj_802BB1E0 { u8 pad0[0x38]; Vec_802B9A68 pos; };
M2C_UNK request_player_camera_offsets__11TBoss6Type2FPvff(Obj_802BB1E0 *, f32, f32);
f32 get_random_float__8TObjFishFv(f32);
extern Vec_802B9A68 lbl_80471344[];
extern const f32 lbl_805DE480;
extern const f32 lbl_805DE484;
extern const f32 lbl_805DE488;
extern const f32 lbl_805DE48C;
extern const f32 lbl_805DE494;
extern const f32 lbl_805DE498;
extern const f32 lbl_805DE49C;
void TBoss6Type2__sub_802BB498(T2_802BB498 *arg0);
int TBoss6Type2__sub_802BB4DC(void* p);
void update_target__11TBoss6Type2FPv(void *arg0);
void TBoss6Type2__sub_802BB554(T2_802BB554 *arg0);
int TBoss6Type2__sub_802BB5B4(void);
int TBoss6Type2__sub_802BB694(void);
void TBoss6Type2__sub_802BB768(T2_802BB768 *arg0);
void TBoss6Type2__sub_802BB7C0(T2_802BB7C0 *arg0);
s32 push_players_away__11TBoss6Type2FPvPvf(void *self, void *target, f32 range);
void set_owner_flag_bit0__11TBoss6Type2FPv(void *arg0);
void set_child_flags__11TBoss6Type2FPv(void *arg0);
void clear_part_flags__11TBoss6Type2FPv(T1_802BBD88 *arg0);
void update_parts_flags__11TBoss6Type2FPv(void *arg0);
void advance_position__11TBoss6Type2FPv(u8 *arg0);
void copy_vec_array__11TBoss6Type2FPv(u8 *arg0);
void update_segments__11TBoss6Type2FPv(void *arg0);
void init_segment_range__11TBoss6Type2FPv(Obj_802BC050 *o);
s32 choose_turn_motion__11TBoss6Type2FPv(void *arg0);
s32 choose_random_motion__11TBoss6Type2FPv(struct Boss_802BC23C *arg0);
s32 is_target_valid__11TBoss6Type2FPv(void *arg0);
void update_attack_switch__11TBoss6Type2FPv(u8 *arg0);
void play_phase_sound__11TBoss6Type2FPv(u8 *arg0);
void play_sound_if_no_target__11TBoss6Type2FPv(u8 *arg0);
void update_countdown__11TBoss6Type2FPv(void *arg0);
u8 is_active__11TBoss6Type2FPv(void *arg0);
void set_state_0x34__11TBoss6Type2FPv(u8 *arg0);
void start_countdown_sound_state__11TBoss6Type2FPv(u8 *arg0);
void reset_indices__11TBoss6Type2FPv(void *arg0);
s32 get_hit_count__11TBoss6Type2FPv(void *arg0);
void add_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1);
void reset_attack_counter__11TBoss6Type2FPv(void *arg0);
s32 calc_field4f0_delta__11TBoss6Type2FPv(void *arg0);
void copy_anim_state__11TBoss6Type2FPv(void *arg0);
void set_screen_pos__11TBoss6Type2FPv(void *arg0);
void load_battle_params__11TBoss6Type2FPv(u8 *arg0);
void TBoss6Type2__sub_802BCC54(void *, int);
void copy_transform__11TBoss6Type2FPvPv(void* p, void* q);
Blk_802BCFD4 * copy_block__11TBoss6Type2FPvPv(Blk_802BCFD4 *d, Blk_802BCFD4 *s);
void set_action_state__11TBoss6Type2FPvPv(void *ov, void *vv);
void copy_pos_620__11TBoss6Type2Fii(s32 arg0, s32 arg1);
void get_push_points__11TBoss6Type2Fiii(s32 arg0, s32 arg1, s32 arg2);
void copy_pos_59c__11TBoss6Type2Fii(s32 arg0, s32 arg1);
void TBoss6Type2__sub_802BD340(void);
void apply_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1);
void TBoss6Type2__sub_802BD378(T2_802BD378 *arg0, s32 arg1, void *arg2, s32 *arg3);
s32 get_rotation_timer__11TBoss6Type2FPv(void* p);
void get_phase_values__11TBoss6Type2FPvPvPvPv(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out);
f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0);
void TBoss6Type2__vt61(void* p);
void TBoss6Type2__vt60(u8 *arg0);
s32 count_matching_values__11TBoss6Type2FPvii(T1_802BD68C *arg0, s32 arg1, s32 arg2);
void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2);
s32 choose_next_index__11TBoss6Type2FPv(T2_802BD76C *arg0);
s32 find_index_in_table__11TBoss6Type2FUi(u32 v);
int get_table_entry__11TBoss6Type2Fi(int a0);
void TBoss6Type2__sub_802BD938(u8 *arg0, u8 *arg1);
void update_attack_target__11TBoss6Type2FPv(void *arg0);
void update_action_state__11TBoss6Type2FPv(void *arg0);
void send_action_packet_if_idle__11TBoss6Type2FPviPv(void *arg0, s32 arg1, M2C_UNK *arg2);
void send_action_packet__11TBoss6Type2FPvc(u8 *arg0, s8 arg1);
void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1);
void build_state_packet__11TBoss6Type2FPvPv(u8 *arg0, u8 *arg1);
void TBoss6Type2__sub_802BE4E0(s32 *arg0, s32 *arg1);
s32 create__11TBoss6Type2Fi(s32 arg0);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);
void TBoss6Type2__sub_8032E708(u32, int);
M2C_UNK set_action_field_0x408__11TBoss6Type2FPvs(s32, u16);
M2C_UNK set_target_nodes__11TBoss6Type2FPvPvPv(void *, u32, s32);
s32 is_phase_active__11TBoss6Type2FPv(void *);
s32 TBoss6Rock__sub_80353A14(int, Vec_802B9A68 *, f32 *);
s32 is_rock_state_2__10TBoss6RockFi(s32);
M2C_UNK TBoss6Type2__sub_80356E50(s32 *, s32, s32);
s32 create_dpb__11TBoss6Type2Fiif(s32, s32, f32);
M2C_UNK spawn_flow_soul__11TBoss6Type2Fiii(void *, void *, s32);
M2C_UNK create__14TBoss6EffHyouiFPvPvPv(s32, s32, s32);
s32 rand(void);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
f32 vec3_add_to(void *, void *);
f32 vector_length(Vec_802B9A68 *);
void subtract_vector(Vec_802B9A68 *, Vec_802B9A68 *);
f32 normalize_vector(void *);
f32 xyz_distance(void *, void *);

extern RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C TBoss6Type2__data_8047105C;
extern const f64 TBoss6Type2__data_804713C0;
extern M2C_UNK TBoss6Type2__motion_table[];
extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;
extern const f32 TBoss6Type2__data_805DE41C;
extern const f32 TBoss6Type2__data_805DE430;
extern const f32 TBoss6Type2__data_805DE434;
extern const f32 TBoss6Type2__data_805DE45C;
extern const f32 TBoss6Type2__data_805DE460;
extern const f32 TBoss6Type2__data_805DE468;
extern const f32 TBoss6Type2__data_805DE490;
extern const RecoveredGlobal_802BC754_lbl_80471080 lbl_80471080;
extern int lbl_804710BC[];
extern Tbl_802B9C00 lbl_804710CC[];
extern RecoveredGlobal_802BC4CC_lbl_804712FC lbl_804712FC;
extern s32 lbl_80471350[];
extern Ent_802BA7BC lbl_80471360[];
extern s32 lbl_804713A8[];
extern RecoveredGlobal_802BB180_lbl_804DFAC4 lbl_804DFAC4;
extern RecoveredGlobal_802BB180_lbl_804DFAD0 lbl_804DFAD0;
extern Tb_802BD014 lbl_804E00DC[];
extern s32 local_client_id;
extern s32 game_difficulty_selection;
extern f32 TBoss6Type2__foot_lift_height;
extern u8 TBoss6Type2__foot_lift_height_initialized;
extern f32 boss6_type2_footstep_height_threshold;
extern u8 boss6_type2_footstep_threshold_initialized;
extern const f32 lbl_805DE414;
extern const f32 lbl_805DE418;
extern const f32 lbl_805DE420;
extern const f32 lbl_805DE424;
extern const f32 lbl_805DE428;
extern const f32 lbl_805DE42C;
extern const f32 lbl_805DE440;
extern const f32 lbl_805DE444;
extern f32 lbl_805DE448;
extern const f32 lbl_805DE450;
extern const f32 lbl_805DE454;
extern const f32 lbl_805DE458;
extern const f32 lbl_805DE46C;
extern const f32 lbl_805DE478;
extern const f32 lbl_805DE47C;
extern const f32 lbl_805DE4A4;
extern f32 lbl_805DE4B4;
extern const f32 lbl_805DE4C4;
extern const f32 lbl_805DE4C8;
extern const f32 lbl_805DE4CC;
extern const f32 lbl_805DE4D0;
extern s32 tl_04;

extern "C" {
void update_part_positions__11TBoss6Type2FPv(Boss_802B9C80 *o);
void TBoss6Type2__sub_802BB498(T2_802BB498 *arg0);
void TBoss6Type2__sub_802BB554(T2_802BB554 *arg0);
extern Tb_802BD014 lbl_804E00DC[];
}

extern "C" {
Blk_802BCFD4 *copy_block__11TBoss6Type2FPvPv(Blk_802BCFD4 *d, Blk_802BCFD4 *s);
}

extern "C" {
extern RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C TBoss6Type2__data_8047105C;
}

extern "C" {
void TBoss6Type2__sub_802B9D6C(Obj_802B9D6C *self);
void init_collected_entries__11TBoss6Type2FPv(T2_802BA000 *arg0);
void TBoss6Type2__sub_802BB768(T2_802BB768 *arg0);
void init_segment_range__11TBoss6Type2FPv(Obj_802BC050 *o);
}

void render__11TBoss6Type2Fv(void* p) { render_body_effects__11TBoss6Type2FPv(p); draw__11TBoss6Type2FPv(p); }

s32 get_phase__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x37c); }

void world_to_grid_pos__11TBoss6Type2FPvPvPv(f32 *arg0, s8 *arg1, s8 *arg2) {
    f32 fa = 0.5f + ((arg0[0] - -10500.0f) / 7.874016f);
    f32 fb = 0.5f + ((arg0[2] - -500.0f) / 7.874016f);
    *arg1 = (s8)fa;
    *arg2 = (s8)fb;
}

#pragma push
#pragma fp_contract on
void grid_to_world_pos__11TBoss6Type2FccPv(s8 arg0, s8 arg1, f32 *arg2) {
    arg2[0] = (f32)((TBoss6Type2__data_805DE41C * (f32)arg0) + lbl_805DE420);
    arg2[1] = TBoss6Type2__data_805DE410;
    arg2[2] = (f32)((TBoss6Type2__data_805DE41C * (f32)arg1) + lbl_805DE418);
}
extern int fold_flush_0;
#pragma pop

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0) {
    ((M2C_UNK (*)(s32))unpack_path_entry__11TBoss6Type2FPvPv)(arg0 + 1);
}

void unpack_path_entry__11TBoss6Type2FPvPv(u8 *arg0, s32 *arg1) {
    *arg1 = (s32) (s16) ((s8) M2C_FIELD(arg0, u8 *, 2) << 8);
    ((M2C_UNK (*)(int, int, void *, void *))grid_to_world_pos__11TBoss6Type2FccPv)((int) (M2C_FIELD(arg0, u8 *, 0)), (int) (M2C_FIELD(arg0, u8 *, 1)), (void *) ((u8 *) arg1 + 4), (void *) (arg0));
}

s32 is_player_in_rock_area__11TBoss6Type2Fi(s32 id) {
    Vec_802B9A68 a;
    Vec_802B9A68 b;
    f32 r;
    Player_802B9A68 *p;
    s32 i;
    f32 k;
    p = ((Player_802B9A68 *)get_player_by_client_id((u32)((u16)id)));
    if (p == NULL) {
        return 0;
    }
    i = 0;
    k = TBoss6Type2__data_805DE410;
    do {
        if (TBoss6Rock__sub_80353A14(i, &a, &r) != 0) {
            ((void (*)(Vec_802B9A68 *, Vec_802B9A68 *))VecCopy__FP3VecPC3Vec)(&b, &p->pos);
            subtract_vector(&b, &a);
            b.y = k;
            if (vector_length(&b) <= r) {
                return 1;
            }
        }
        i++;
    } while (i < 0x20);
    return 0;
}

void spawn_hit_effects__11TBoss6Type2FPv(Boss_802B9B20 *o) {
    s32 found = 0;
    Ent_802B9B20 *e;
    s32 i;
    Ent_802B9B20 *t = o->list;
    if (t != NULL) {
        e = t;
        for (i = 0; i < 3; i++, e++) {
            if (e->flags & 0x04000000) {
                spawn_particle_effect((s32)((u8 *)o + lbl_804713A8[i] * 0xC + 0x59C), 0x223);
                found = 1;
            }
        }
    }
    if (found == 0) {
        spawn_particle_effect((s32)((u8 *)o + 0x2FC), 0x223);
    }
}

#pragma push
#pragma opt_common_subs off
void destroy_part__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    temp_r3 = M2C_FIELD(temp_r31, u32 *, 0x77C);
    if (temp_r3 != 0U) {
        request_destroy__11TBoss4Type2FUi((int) (temp_r3));
        M2C_FIELD(temp_r31, u32 *, 0x77C) = 0U;
    }
}
extern int fold_flush_1;
#pragma pop

void spawn_particle_slot__11TBoss6Type2FPvi(u8 *arg0, s32 arg1) {
    u8 *p = arg0 + arg1 * 4;
    if (*(u32 *)(p + 0x77C) == 0U) {
        V3_802B9C00 v = ((T1_802B9C00 *)arg0)->pos;
        *(u32 *)(p + 0x77C) = create_particle_emitter(&v, lbl_804710CC[arg1].a);
        if (*(u32 *)(p + 0x77C) != 0U) {
            set_flags__11TBoss4Type2FPvUi(*(u32 *)(p + 0x77C), 0x40);
        }
    }
}

void update_part_positions__11TBoss6Type2FPv(Boss_802B9C80 *o) {
    s32 i = 0;
    do {
        Vec_802B9C80 v = o->pos;
        Tb_802B9C80 *e = &((Tb_802B9C80 *)&lbl_804710CC)[i];
        if (o->arr[i] != 0) {
            s32 idx = e->b;
            if (idx >= 0) {
                ((void (*)(Vec_802B9A68 *, Vec_802B9A68 *))VecCopy__FP3VecPC3Vec)((Vec_802B9A68 *)(&v), (Vec_802B9A68 *)((Vec_802B9C80 *)((u8 *)o + idx * 0xC + 0x59C)));
            }
            copy_pos__11TNowLoadingFPvPv((s32)o->arr[i], &v);
        }
        i++;
    } while (i < 14);
}

void init_parts__11TBoss6Type2FPv(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        destroy_part__11TBoss6Type2Fii(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xE);
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void TBoss6Type2__sub_802B9D6C(Obj_802B9D6C *self) {
    s32 i;
    for (i = 0; i < 14; i++) self->arr[i] = 0;
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void update_footstep_effects__11TBoss6Type2FPv(u8 *arg0) {
  Stack_802B9D90 stack;
  s32 temp_r4;
  s32 var_r30;
  u8 *temp_r29;
  s32 var_r28;
  if (((s8) TBoss6Type2__foot_lift_height_initialized) == 0)
  {
    TBoss6Type2__foot_lift_height_initialized = 1;
    TBoss6Type2__foot_lift_height = lbl_805DE424;
  }
  if (((s8) boss6_type2_footstep_threshold_initialized) == 0)
  {
    boss6_type2_footstep_threshold_initialized = 1;
    boss6_type2_footstep_height_threshold = lbl_805DE428;
  }
  stack.sp8 = (long) (((u8 *) arg0) + 0x614);
  var_r28 = 0;
  var_r30 = 0;
  stack.spC = (long) (((u8 *) arg0) + 0x5D8);
  do
  {
    temp_r4 = var_r30 + 0x554;
    if (((s32) (*((s32 *) (((s8 *) (((u8 *) arg0) + temp_r4)) + 0)))) != 0)
    {
      if ((*((f32 *) (((s8 *) (*((u8 **) (((s8 *) (((u8 *) (&stack.sp8)) + var_r30)) + 0)))) + 4))) > TBoss6Type2__foot_lift_height)
      {
        *((s32 *) (((s8 *) (((u8 *) arg0) + temp_r4)) + 0)) = 0;
      }
    }
    else
    {
      temp_r29 = (u8 *) (*((u8 **) (((s8 *) (((u8 *) (&stack.sp8)) + var_r30)) + 0)));
      if ((*((f32 *) (((s8 *) temp_r29) + 4))) < boss6_type2_footstep_height_threshold)
      {
        *((s32 *) (((s8 *) (((u8 *) arg0) + temp_r4)) + 0)) = 1;
        ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x4006A300, (u32) temp_r29, 0, 0);
        spawn_particle_effect_with_flags((s32) temp_r29, 0x220, 0x40);
        if (((s32) (*((s32 *) (((s8 *) arg0) + 0x418)))) == 0)
        {
          spawn_particle_effect((s32) temp_r29, 0x222);
        }
        else
        {
          spawn_particle_effect_with_flags((s32) temp_r29, 0x229, 0x2000);
        }
        apply_radial_effect_to_players__14TBoss6PlotFalzFPvssf((s32) temp_r29, 0xC0, 0xF, lbl_805DE42C);
      }
    }
    var_r28 += 1;
    var_r30 += 4;
  }
  while (var_r28 < 2);
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void set_fields_554__11TBoss6Type2FPv(void* p) { *(s32*)((char*)p + 0x554) = 1; *(s32*)((char*)p + 0x558) = 1; }
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
#pragma opt_common_subs reset
#pragma opt_propagation reset
#pragma opt_dead_assignments reset
void restore_effect_values__11TBoss6Type2FPv(T2_802B9EE4 *arg0) {
    s32 i;
    for (i = 0; i < 2; i++) {
        *arg0->e[i].p = arg0->e[i].a;
    }
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
#pragma opt_common_subs reset
#pragma opt_propagation reset
#pragma opt_dead_assignments reset
void sum_offsets__11TBoss6Type2FPv(T2_802B9EE4 *arg0) {
    s32 i;
    for (i = 0; i < 2; i++) {
        *arg0->e[i].p = arg0->e[i].a + arg0->e[i].b;
    }
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
#pragma opt_common_subs reset
#pragma opt_propagation reset
#pragma opt_dead_assignments reset
void aim_toward_point__11TBoss6Type2FPvPv(Boss_802B9F3C *arg0, Vec_802B9A68 *arg1) {
    Vec_802B9A68 v;
    s32 ang;
    s32 i;
    if (arg1 == NULL) {
        ang = 0;
    } else {
        ((void (*)(Vec_802B9A68 *, Vec_802B9A68 *))VecCopy__FP3VecPC3Vec)(&v, arg1);
        subtract_vector(&v, &arg0->pos);
        ang = (s16)((s32)(TBoss6Type2__data_804713C0 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)) - arg0->f60);
    }
    if (ang < -0x2800 || ang > 0x2800) {
        ang = 0;
    }
    for (i = 0; i < 2; i++) {
        arg0->e[i].a = approach_angle_limited(arg0->e[i].a, ang, 0x2AA);
    }
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
#pragma opt_common_subs reset
#pragma opt_propagation reset
#pragma opt_dead_assignments reset
void init_collected_entries__11TBoss6Type2FPv(T2_802BA000 *arg0) {
    s32 i;
    for (i = 0; i < 2; i++) {
        arg0->e[i].p = (s32 *)(collect_and_count__12TBoss3VoloptFUii(arg0->o[i].h, 0x28) + 0x18);
        arg0->e[i].a = *arg0->e[i].p;
        arg0->e[i].b = 0;
    }
}
extern int fold_flush_7;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void TBoss6Type2__sub_802BA078(Boss_802BA078 *arg0) {
    Player_802BA078 *p;
    if (arg0->f55C != 0xFFFF) {
        p = (Player_802BA078 *)get_player_by_client_id(arg0->f55C);
        if (is_active__14TBoss6PlotFalzFPv() != 0) {
            s32 r = rand_vary_count__14TBoss6PlotFalzFif(arg0->f4B8, TBoss6Type2__data_805DE430);
            damage_player_hp__14TBoss6PlotFalzFiUi(arg0->f55C, r);
            p->f30 |= 0x200;
            spawn_particle_effect_with_flags((s32)&p->pos, 0x212, 0x40);
            {
                V3_802BA078 v = p->pos;
                v.y = v.y + TBoss6Type2__data_805DE434;
                spawn_particle_effect_with_flags((s32)&v, 0x223, 0x40);
            }
            if (is_target_valid__11TBoss6Type2FPv(arg0) == 0) {
                ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x4000AD13, 0, 0, 0);
            }
        }
    }
}
extern int fold_flush_8;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void reset_fish_fields__11TBoss6Type2FPv(Obj_802BA158 *self) {
    self->f55c = 0xFFFF;
    self->f570 = 0;
    self->f58c = 0;
    self->f590 = 0;
    self->f594 = 0;
    self->f598 = 0;
}
extern int fold_flush_9;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void restore_target_player_state__11TBoss6Type2FPv(u8 *arg0) {
    u8 *temp_r3;
    u32 id = M2C_FIELD(arg0, u16 *, 0x55C);
    if (id != 0xFFFF) {
        temp_r3 = get_player_by_client_id(id);
        if (temp_r3 == NULL) {
            reset_fish_fields__11TBoss6Type2FPv((Obj_802BA158 *)((void *)((void *) (arg0))));
            return;
        }
        copy_vec2__11TBoss6Type2FPvPv((void*)((void *) (temp_r3 + 0xCF4)), (void*)((void *) (arg0 + 0x574)));
        copy_vec2__11TBoss6Type2FPvPv((void*)((void *) (temp_r3 + 0xB88)), (void*)((void *) (arg0 + 0x584)));
        M2C_FIELD(temp_r3, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x58C);
        M2C_FIELD(temp_r3, s32 *, 0x8B0) = (s32) M2C_FIELD(arg0, s32 *, 0x590);
        M2C_FIELD(temp_r3, s32 *, 0x8AC) = (s32) M2C_FIELD(arg0, s32 *, 0x594);
        M2C_FIELD(temp_r3, s32 *, 0x8B4) = (s32) M2C_FIELD(arg0, s32 *, 0x598);
        reset_fish_fields__11TBoss6Type2FPv((Obj_802BA158 *)((void *)((void *) (arg0))));
    }
}
extern int fold_flush_10;
#pragma pop

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

s32 grab_player__11TBoss6Type2FPvUs(u8 *arg0, u16 arg1) {
    u8 *temp_r3;
    if ((arg1 == 0xFFFF) || (M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF)) {
        return 0;
    }
    temp_r3 = (u8 *)(((u8 * (*)(int))get_player_by_client_id)(arg1));
    if (temp_r3 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0x55C) = arg1;
    M2C_FIELD(arg0, u8 **, 0x570) = (unsigned char *) ((void *) (temp_r3 + 0x85C));
    copy_vec2__11TBoss6Type2FPvPv((void*)(arg0 + 0x574), (void*)(temp_r3 + 0xCF4));
    copy_vec2__11TBoss6Type2FPvPv((void*)(arg0 + 0x57C), (void*)(temp_r3 + 0xA1C));
    copy_vec2__11TBoss6Type2FPvPv((void*)(arg0 + 0x584), (void*)(temp_r3 + 0xB88));
    M2C_FIELD(arg0, s32 *, 0x58C) = (s32) M2C_FIELD(temp_r3, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x590) = (s32) M2C_FIELD(temp_r3, s32 *, 0x8B0);
    M2C_FIELD(arg0, s32 *, 0x594) = (s32) M2C_FIELD(temp_r3, s32 *, 0x8AC);
    M2C_FIELD(arg0, s32 *, 0x598) = (s32) M2C_FIELD(temp_r3, s32 *, 0x8B4);
    copy_vec2__11TBoss6Type2FPvPv((void*)(temp_r3 + 0xCF4), (void*)(M2C_FIELD(arg0, u8 **, 0x560)));
    copy_vec2__11TBoss6Type2FPvPv((void*)(temp_r3 + 0xB88), (void*)(M2C_FIELD(arg0, u8 **, 0x564)));
    M2C_FIELD(temp_r3, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x568);
    M2C_FIELD(temp_r3, s32 *, 0x8B0) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x8AC) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x8B4) = (s32) M2C_FIELD(arg0, s32 *, 0x56C);
    return 1;
}

s32 check_target__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x464) == 0xFFFF) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF) {
        ((int (*)(void))restore_target_player_state__11TBoss6Type2FPv)();
    }
    if (((int (*)(void*, void*))grab_player__11TBoss6Type2FPvUs)((void*)(arg0), (void*)(M2C_FIELD(arg0, u16 *, 0x464))) == 0) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
        return 0;
    }
    return 1;
}

int is_falz_ready__11TBoss6Type2FPv(void* p) { return pick_random_active_player__14TBoss6PlotFalzFv(p); }

void update_possess_target__11TBoss6Type2FPv(u8 *arg0) {
    Vec_802BA3B4 v;
    u8 *pl;
    s32 done;
    u16 id;
    id = M2C_FIELD(arg0, u16 *, 0x55C);
    if (id != 0xFFFF) {
        done = 0;
        pl = ((u8 * (*)(u16))get_player_by_client_id)(id);
        if (pl == NULL) {
            done = 1;
        } else if (is_active__14TBoss6PlotFalzFPv() == 0) {
            VecCopy__FP3VecPC3Vec(&v, pl + 0x38);
            v.y += TBoss6Type2__data_805DE434;
            spawn_flow_soul__11TBoss6Type2Fiii(arg0, &v, 0x1E);
            create__14TBoss6EffHyouiFPvPvPv(M2C_FIELD(arg0, u16 *, 0x55C), 1, 0x1E);
            if (is_target_valid__11TBoss6Type2FPv(arg0) == 0) {
                play_sound_effect(0x40069E13, arg0 + 0x38, 0, 1);
            }
            ((M2C_UNK (*)(void *, s32))spawn_particle_effect)(pl + 0x38, 0x36);
            done = 1;
        }
        if (done != 0) {
            ((int (*)(void *))restore_target_player_state__11TBoss6Type2FPv)(arg0);
            M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFF;
            M2C_FIELD(arg0, s32 *, 0x428) = pick_random_other_index__11TBoss6Type2FPv((Boss_802BD7EC *)(arg0));
            M2C_FIELD(arg0, s32 *, 0x430) = ((s32 (*)(void *))choose_next_index__11TBoss6Type2FPv)(arg0);
        }
        switch (M2C_FIELD(arg0, s32 *, 0x374)) {
        case 0x1A:
            ((int (*)(void *))restore_target_player_state__11TBoss6Type2FPv)(arg0);
            M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFF;
            break;
        }
    }
}

void reset_counters__11TBoss6Type2FPv(void *arg0) {
    if ((u16) M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF) {
        ((M2C_UNK (*)(void))restore_target_player_state__11TBoss6Type2FPv)();
    }
    ((M2C_UNK (*)(void *))reset_fish_fields__11TBoss6Type2FPv)(arg0);
    M2C_FIELD(arg0, s32 *, 0x560) = 0;
    M2C_FIELD(arg0, s32 *, 0x564) = 0;
    M2C_FIELD(arg0, s32 *, 0x568) = 0;
    M2C_FIELD(arg0, s32 *, 0x56C) = 0;
}

void cache_fish_params__11TBoss6Type2FPv(void *arg0) {
    ((M2C_UNK (*)(void))reset_fish_fields__11TBoss6Type2FPv)();
    M2C_FIELD(arg0, s32 *, 0x560) = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), 0xB);
    M2C_FIELD(arg0, s32 *, 0x564) = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), 0xA);
    M2C_FIELD(arg0, s32 *, 0x568) = get_bml_model(M2C_FIELD(arg0, s32 *, 0x3FC), 0xB);
    M2C_FIELD(arg0, s32 *, 0x56C) = get_bml_model(M2C_FIELD(arg0, s32 *, 0x3FC), 0xA);
}

void update_zako__11TBoss6Type2FPv(void* p) { ((int (*)(void*, void*))vec3_add_to)((char*)p + 0x38, (char*)p + 0x524); ((int (*)(void*))snap_to_ground__11TBoss6Type2FPv)(p); }

void TBoss6Type2__sub_802BA7B0(void* p) { *(s32*)((char*)p + 0x520) = -1; }

void TBoss6Type2__sub_802BA7BC(u8 *o) {
    f32 k = lbl_805DE440;
    s32 i = 0;
    do {
        Ent_802BA7BC *e = &lbl_80471360[i];
        f32 lo = e->lo;
        f32 v = *(f32 *)(o + e->idx * 0xC + 0x5A0);
        if (v < lo || v > k + lo) {
            ((void (*)(void *, int))destroy_part__11TBoss6Type2Fii)(o, e->arg);
        } else {
            ((void (*)(void *, int))spawn_particle_slot__11TBoss6Type2FPvi)(o, e->arg);
        }
        i++;
    } while (i < 6);
}

s32 is_ready_to_attack__11TBoss6Type2FPv(void *arg0) {
    s32 temp;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        return 0;
    }
    if (TBoss6PlotFalz__sub_802AC17C() != 0) {
        return 0;
    }
    temp = calc_field4f0_delta__11TBoss6Type2FPv(arg0);
    return M2C_FIELD(arg0, s32 *, 0x4C0) <= temp ? 1 : 0;
}

s32 is_phase_complete__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        return 0;
    }
    if (((s32 (*)(void))calc_field4f0_delta__11TBoss6Type2FPv)() >= (s32) M2C_FIELD(arg0, s32 *, 0x4C4)) {
        return 1;
    }
    if ((get_phase__14TBoss6PlotFalzFv() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x420) >= 8)) {
        return 1;
    }
    return 0;
}

s32 TBoss6Type2__sub_802BA944(Boss_802BA944 *o) {
    s32 i;
    if (((s32 (*)(void *, int, int))count_matching_values__11TBoss6Type2FPvii)(o, 0xE, 3) != 0) {
        return 0;
    }
    i = 0;
    do {
        if (((s32 (*)(void *, int, int))count_matching_values__11TBoss6Type2FPvii)(o, lbl_80471350[i], 2) != 0) {
            return 0;
        }
        i++;
    } while (i < 4);
    return (s32)o->f4BC <= get_hit_count__11TBoss6Type2FPv(o) ? 1 : 0;
}

s32 TBoss6Type2__sub_802BA9E4(T2_802BA9E4 *arg0) {
    if (arg0->f470 >= 3) {
        return 1;
    }
    return TBoss6PlotFalz__sub_802AB684(arg0->f38) >= lbl_805DE444;
}

void trigger_screen_pos__11TBoss6Type2FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x424) == 0) && (M2C_FIELD(arg0, f32 *, 0x500) < lbl_805DE448)) {
        M2C_FIELD(arg0, s32 *, 0x424) = 1;
        ((M2C_UNK (*)(void))set_screen_pos__11TBoss6Type2FPv)();
    }
}

#pragma push
#pragma fp_contract on
s32 snap_to_ground__11TBoss6Type2FPv(Obj_802BAB80 *self) {
    Vec_802BAB80 p;
    f32 t;
    VecCopy__FP3VecPC3Vec(&p, &self->pos);
    p.y += TBoss6Type2__data_805DE434;
    if (project_actor_to_ground(self, &p, 0) != 0) {
        VecCopy__FP3VecPC3Vec(&self->pos, &p);
        self->pos.y = TBoss6Type2__data_805DE410;
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&p, &self->pos);
    p.x -= lbl_805DE450;
    p.y = TBoss6Type2__data_805DE410;
    t = lbl_805DE454;
    {
        Vec_802BAB80 d = p;
        normalize_vector(&d);
        for (; t > TBoss6Type2__data_805DE410; t += lbl_805DE458) {
            p.x = t * d.x + lbl_805DE450;
            p.y = TBoss6Type2__data_805DE434 + self->pos.y;
            p.z = t * d.z;
            if (project_actor_to_ground(self, &p, 0) != 0) {
                break;
            }
        }
    }
    VecCopy__FP3VecPC3Vec(&self->pos, &p);
    self->pos.y = TBoss6Type2__data_805DE410;
    return 1;
}
extern int fold_flush_11;
#pragma pop

void TBoss6Type2__sub_802BAD04(s32 arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    create_dpb__11TBoss6Type2Fiif(arg0, arg0 + 0x38, TBoss6Type2__data_805DE45C);
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x410));
    if ((temp_r3 != NULL) && (is_phase_active__11TBoss6Type2FPv(temp_r3) != 0)) {
        create_dpb__11TBoss6Type2Fiif(arg0, (s32) (M2C_FIELD(arg0, u8 **, 0x410) + 0x38), TBoss6Type2__data_805DE460);
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x414));
    if ((temp_r3_2 != NULL) && (is_phase_active__11TBoss6Type2FPv(temp_r3_2) != 0)) {
        create_dpb__11TBoss6Type2Fiif(arg0, (s32) (M2C_FIELD(arg0, u8 **, 0x414) + 0x38), TBoss6Type2__data_805DE460);
    }
}

#pragma push
#pragma fp_contract on
void spawn_rocks_around_players__11TBoss6Type2FPv(void *arg0) {
    Vec_802BAD90 p;
    Vec_802BAD90 q;
    s32 n;
    s32 cnt;
    s32 i;
    u8 *pl;
    n = 0;
    cnt = get_game_mode__6TLobbyFv();
    for (i = 0; i < cnt; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv() != 0) {
            f32 r = lbl_805DE464 * (TBoss6Type2__data_805DE468 * (f32)rand()) + TBoss6Type2__data_805DE434;
            s32 ang = (s32)(lbl_805DE46C * (TBoss6Type2__data_805DE468 * (f32)rand()));
            VecCopy__FP3VecPC3Vec(&p, pl + 0x38);
            p.x += r * sin_table_lookup(ang);
            p.y = TBoss6Type2__data_805DE410;
            p.z += r * cos_table_lookup(ang);
            spawn__15TBoss6RockChaseFii(arg0, &p);
            n++;
        }
    }
    while (n < 10) {
        f32 dx = lbl_805DE470 * (lbl_805DE474 * (TBoss6Type2__data_805DE468 * (f32)rand()) - TBoss6Type2__data_805DE40C);
        f32 dz = lbl_805DE470 * (lbl_805DE474 * (TBoss6Type2__data_805DE468 * (f32)rand()) - TBoss6Type2__data_805DE40C);
        VecCopy__FP3VecPC3Vec(&q, &TBoss6Type2__data_8047105C);
        q.x += dx;
        q.z += dz;
        spawn__15TBoss6RockChaseFii(arg0, &q);
        n++;
    }
    play_sound_effect(0x4006AB1D, &TBoss6Type2__data_8047105C, 0, 1);
}
#pragma pop

void drop_random_rocks__11TBoss6Type2Fii(M2C_UNK arg0, s32 arg1) {
    s32 avail_tbl[32];
    s32 cnt;
    s32 mult;
    s32 avail;
    s32 i;
    s32 *buf;
    s32 step;
    s32 j;
    s32 k;

    mult = 1;
    cnt = game_difficulty_selection;
    if (get_phase__14TBoss6PlotFalzFv() == 1) {
        mult = 4;
    }
    cnt = (4 - cnt) + mult;
    if (arg1 != 0) {
        cnt *= 2;
    }
    if (cnt < 1) {
        return;
    }
    avail = 0;
    for (i = 0; i < 32; i++) {
        avail_tbl[i] = 0;
        if (is_rock_state_2__10TBoss6RockFi(i) == 0) {
            avail_tbl[i] = 1;
            avail++;
        }
    }
    if (avail < 1) {
        return;
    }
    if (cnt > avail) {
        cnt = avail;
    }
    buf = alloc_buffer__11TOBoss4RockFPv(cnt * 4);
    step = (s32)(lbl_805DE478 * (TBoss6Type2__data_805DE468 * (f32)rand()));
    j = 0;
    for (k = 0; k < cnt; k++) {
        j += step;
        if (j >= 32) {
            j = 0;
        }
        while (avail_tbl[j] == 0) {
            j++;
            if (j >= 32) {
                j = 0;
            }
        }
        buf[k] = j;
        avail_tbl[j] = 0;
    }
    TBoss6Type2__sub_80356E50(buf, cnt, arg1);
    free__11TOBoss4RockFUi(buf);
    ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)(0x4006AB1D, ((u8 *)&TBoss6Type2__data_8047105C), 0, 1);
}

void request_default_follow_camera__11TBoss6Type2Fv(void) {
    request_follow_camera_offsets((s32) &lbl_804DFAC4.value, (s32) &lbl_804DFAD0.value, 0xFFFFU);
}

void init_range__11TBoss6Type2Fv(void) {
    ((M2C_UNK (*)(f32, f32))request_player_camera_offsets__11TBoss6Type2FPvff)(TBoss6Type2__data_805DE460, lbl_805DE47C);
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
M2C_UNK request_player_camera_offsets__11TBoss6Type2FPvff(Obj_802BB1E0 *self, f32 a, f32 b) {
    Vec_802B9A68 pp;
    Vec_802B9A68 me;
    Vec_802B9A68 off;
    Vec_802B9A68 d;
    Vec_802B9A68 cam;
    s32 n;
    s32 i;
    u8 *p;
    s32 flag;
    f32 step;
    f32 t;
    f32 dy;
    f32 k;
    f32 dist;
    f32 sum;
    f32 adj;
    f32 lim;

    n = get_game_mode__6TLobbyFv();
    step = lbl_805DE480 * b;
    for (i = 0; i < n; i++) {
        lim = get_random_float__8TObjFishFv(b);
        p = get_player_data__10TObjPlayerFi(i);
        if (p == NULL) {
            continue;
        }
        t = TBoss6Type2__data_805DE410;
        while (get_random_float__8TObjFishFv(t) <= lim) {
            flag = 0;
            VecCopy__FP3VecPC3Vec(&off, lbl_80471344);
            VecCopy__FP3VecPC3Vec(&pp, p + 0x38);
            pp.y += off.y;
            VecCopy__FP3VecPC3Vec(&me, &self->pos);
            me.y += a + t;
            VecCopy__FP3VecPC3Vec(&d, &me);
            subtract_vector(&d, &pp);
            dy = d.y;
            d.y = TBoss6Type2__data_805DE410;
            dist = off.z + vector_length(&d);
            if (dist <= lbl_805DE484) {
                dist = lbl_805DE484;
            }
            cam.x = TBoss6Type2__data_805DE410;
            cam.z = lbl_805DE488;
            cam.y = lbl_805DE48C - dy * lbl_805DE488 / dist;
            if (cam.y < TBoss6Type2__data_805DE434) {
                cam.y = TBoss6Type2__data_805DE434;
                if (dy > TBoss6Type2__data_805DE490) {
                    k = lbl_805DE494 * dist;
                    cam.z = k / dy;
                    if (cam.z < lbl_805DE498) {
                        sum = lbl_805DE498 + dist;
                        cam.z = lbl_805DE498;
                        dy = lbl_805DE498 * dy - k;
                        if (get_random_float__8TObjFishFv(sum) > TBoss6Type2__data_805DE490) {
                            adj = dy / sum;
                            if (adj > lbl_805DE49C) {
                                adj = lbl_805DE49C;
                                flag = 1;
                            }
                            off.y += adj;
                        }
                    }
                }
            }
            ((void (*)(void *, void *, u16))request_follow_camera_offsets)(&off, &cam, obj_getField1c(p));
            if (flag == 0) {
                break;
            }
            t += step;
        }
    }
}
#pragma pop

void TBoss6Type2__sub_802BB498(T2_802BB498 *arg0) {
    switch (arg0->f374) {
    case 0xE:
    case 0x1C:
        request_default_follow_camera__11TBoss6Type2Fv();
        break;
    default:
        init_range__11TBoss6Type2Fv();
        break;
    }
}

int TBoss6Type2__sub_802BB4DC(void* p) { return ((int (*)(void*, int))aim_toward_point__11TBoss6Type2FPvPv)(p, 0); }

void update_target__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(u16))get_player_by_client_id)(M2C_FIELD(arg0, u16 *, 0x466));
    if (temp_r3 != 0) {
        ((int (*)(void*, int))aim_toward_point__11TBoss6Type2FPvPv)(arg0, temp_r3 + 0x38);
        return;
    }
    ((int (*)(void*, int))aim_toward_point__11TBoss6Type2FPvPv)(arg0, 0);
}

void TBoss6Type2__sub_802BB554(T2_802BB554 *arg0) {
    switch (arg0->f374) {
    case 3:
    case 6: case 7: case 8: case 9: case 10: case 11:
    case 0x1B: case 0x1C: case 0x1D: case 0x1E: case 0x1F: case 0x20: case 0x21:
        update_target__11TBoss6Type2FPv((void *)(arg0));
        break;
    default:
        TBoss6Type2__sub_802BB4DC((void*)(arg0));
        break;
    }
}

int TBoss6Type2__sub_802BB5B4(void) { return 0; }

int TBoss6Type2__sub_802BB694(void) { return 0; }

void TBoss6Type2__sub_802BB768(T2_802BB768 *arg0) {
    if (arg0->f410 == 0 || arg0->f414 == 0) {
        return;
    }
    TBoss6Type2__sub_8032E708(arg0->f410, 1);
    TBoss6Type2__sub_8032E708(arg0->f414, 1);
}

void TBoss6Type2__sub_802BB7C0(T2_802BB7C0 *arg0) {
    if (arg0->f410 == 0 || arg0->f414 == 0) {
        return;
    }
    TBoss6Type2__sub_8032E708(arg0->f410, 0);
    TBoss6Type2__sub_8032E708(arg0->f414, 0);
}

s32 push_players_away__11TBoss6Type2FPvPvf(void *self, void *target, f32 range) {
    Vec_802BB920 dir;
    Vec_802BB920 pos;
    Vec_802BB920 off;
    s32 mask;
    s32 i;
    s32 n;
    u8 *pl;
    f32 t;
    f32 dist;
    mask = 0;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (is_state_1f__14TBoss6PlotFalzFUi(pl) == 0) {
            continue;
        }
        VecCopy__FP3VecPC3Vec(&dir, pl + 0x38);
        ((f32 (*)(void *, void *))subtract_vector)(&dir, target);
        dir.y = TBoss6Type2__data_805DE410;
        dist = ((f32 (*)(void *))vector_length)(&dir);
        if (dist >= range) {
            continue;
        }
        if (dist <= TBoss6Type2__data_805DE490) {
            dir.x = TBoss6Type2__data_805DE40C;
        }
        normalize_vector(&dir);
        for (t = range; t > lbl_805DE428; t -= lbl_805DE428) {
            off.x = dir.x * t;
            off.y = TBoss6Type2__data_805DE434;
            off.z = dir.z * t;
            VecCopy__FP3VecPC3Vec(&pos, target);
            vec3_add_to(&pos, &off);
            if (project_actor_to_ground(self, &pos, 0) != 0) {
                TBoss6PlotFalz__sub_802AC724(pl, &pos);
                break;
            }
        }
        mask |= 1 << obj_getField1c(pl);
    }
    return mask;
}

void apply_rock_hits_to_players__11TBoss6Type2FPv(Obj_802BBAB0 *self) {
    Hit_802BBAB0 a;
    f32 range;
    s32 r;
    s32 i;
    s32 mask;
    s32 j;
    Vec_802BBAB0 *rock;
    s32 hit;
    VObj_18_b27ba1 *p;
    s32 v;
    range = TBoss6Type2__data_805DE434;
    for (i = 0; i < 6; i++) {
        rock = &self->rock[lbl_80471324[i]];
        break_rocks_in_radius__10TBoss6RockFPvf(rock, TBoss6Type2__data_805DE434);
        if (!(rock->y - self->f3C > range)) {
            hit = 0;
            if (xyz_distance(rock, &self->v680[lbl_80471324[i]]) >= TBoss6Type2__data_805DE40C) {
                hit = 1;
            }
            r = push_players_away__11TBoss6Type2FPvPvf(self, rock, TBoss6Type2__data_805DE434);
            if (hit != 0 && r != 0) {
                for (mask = 1, j = 0; j < 4; j++, mask <<= 1) {
                    if (mask & r) {
                        p = (VObj_18_b27ba1 *)((s32 (*)(s32))get_player_by_client_id)(j);
                        if (((s32 (*)(void *))is_active__14TBoss6PlotFalzFPv)(p) != 0) {
                            v = self->f4B4;
                            if (self->f418 != 0) {
                                v = (s32)((f32)v * self->f4E8);
                            }
                            s32 rr = rand_vary_count__14TBoss6PlotFalzFif(v, TBoss6Type2__data_805DE430);
                            a.x = 0;
                            a.y = rr;
                            Hit_802BBAB0 h = a;
                            p->m21(self, &h, 0, -1, -1);
                        }
                    }
                }
            }
        }
    }
}

void set_owner_flag_bit0__11TBoss6Type2FPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x70) | 1);
    }
}

void set_child_flags__11TBoss6Type2FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x44) | 1);
    }
}

void clear_part_flags__11TBoss6Type2FPv(T1_802BBD88 *arg0) {
    Ent_802BBD88 *p = arg0->p;
    if (p != NULL) {
        Ent_802BBD88 *end = (Ent_802BBD88 *)((u8 *)p + 0x84);
        for (; p < end; p++) {
            p->f &= ~1;
        }
    }
}

void update_parts_flags__11TBoss6Type2FPv(void *arg0) {
    clear_part_flags__11TBoss6Type2FPv((T1_802BBD88 *)(arg0));
    if (M2C_FIELD(arg0, s32 *, 0x474) & 1) {
        set_child_flags__11TBoss6Type2FPv((void *)(arg0));
    }
    if (M2C_FIELD(arg0, s32 *, 0x474) & 2) {
        set_owner_flag_bit0__11TBoss6Type2FPv((void *)(arg0));
    }
}

void advance_position__11TBoss6Type2FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805DE4A4);
}

void copy_vec_array__11TBoss6Type2FPv(u8 *arg0) {
    V_802BBF54 *src;
    V_802BBF54 *end;
    V_802BBF54 *dst;
    src = (V_802BBF54 *)(arg0 + 0x59C);
    dst = (V_802BBF54 *)(arg0 + 0x680);
    end = (V_802BBF54 *)((u8 *)src + 0xE4);
    for (; src < end; src++, dst++) {
        VecCopy__FP3VecPC3Vec(dst, src);
    }
}

void update_segments__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x454);
    M2C_FIELD(arg0, s16 *, 0x43E) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x43C) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x43A) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x438) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x436) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x42C);
    switch (temp_r0_2) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x436) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x438) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x43A) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x43C) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 5:
        M2C_FIELD(arg0, s16 *, 0x43E) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(arg0, s16 *, 0x436);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(arg0, s16 *, 0x43A);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(arg0, s16 *, 0x438);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(arg0, s16 *, 0x43E);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(arg0, s16 *, 0x43C);
}

void init_segment_range__11TBoss6Type2FPv(Obj_802BC050 *o) {
    Ent_802BC050 *e = o->ent;
    s32 min;
    s32 max;
    max = e->v[0];
    min = max;
    if (min > e->v[1]) { min = e->v[1]; } else if (max < e->v[1]) { max = e->v[1]; }
    if (min > e->v[2]) { min = e->v[2]; } else if (max < e->v[2]) { max = e->v[2]; }
    if (min > e->v[3]) { min = e->v[3]; } else if (max < e->v[3]) { max = e->v[3]; }
    if (min > e->v[4]) { min = e->v[4]; } else if (max < e->v[4]) { max = e->v[4]; }
    o->min = min;
    o->max = max;
    copy_entry__6TLobbyFPvPv(&o->local, o->ent);
    o->ent = &o->local;
    update_segments__11TBoss6Type2FPv(o);
}

s32 choose_turn_motion__11TBoss6Type2FPv(void *arg0) {
    f32 temp_f3;
    f64 temp_f0;
    s32 var_r31;
    s32 var_r31_2;
    void *temp_r3;

    var_r31_2 = 0xF;
    temp_r3 = ((void * (*)(u16))get_player_by_client_id)(M2C_FIELD(arg0, u16 *, 0x466));
    if (M2C_FIELD(arg0, u8 *, 0x478) & 1) {
        var_r31_2 = 0x10;
    }
    if (temp_r3 == NULL) {
        return var_r31_2;
    }
    temp_f3 = M2C_FIELD(temp_r3, f32 *, 0x38);
    temp_f0 = ((f64 (*)(f32, f32, f32))get_ad_end_text_start__10TObjPlayerFv)(temp_f3 - M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40), temp_f3);
    var_r31 = 0xF;
    if (angle_diff_s16(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TBoss6Type2__data_804713C0 * temp_f0)) < 0) {
        var_r31 = 0x10;
    }
    return var_r31;
}

s32 choose_random_motion__11TBoss6Type2FPv(struct Boss_802BC23C *arg0) {
    s32 m;
    f32 r;
    f32 a;
    f32 b;

    m = choose_turn_motion__11TBoss6Type2FPv(arg0);
    r = (1.0f / 32768.0f) * (f32)rand();
    if (arg0->f418 == 0) {
        if (r < 0.2f) {
            return 0x11;
        }
        return m;
    }
    if (r < 0.6f) {
        m = 0x11;
    }
    r = (1.0f / 32768.0f) * (f32)rand();
    a = (f32)arg0->f4d0 / 100.0f;
    b = (f32)arg0->f4cc / 100.0f + a;
    if (r <= a) {
        m += 6;
    } else if (r <= b) {
        m += 3;
    }
    return m;
}

s32 is_target_valid__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        return 0;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x55C) == 0xFFFF) {
        return 1;
    }
    if (is_split_screen() != 0) {
        return 0;
    }
    return (local_client_id - (s32) M2C_FIELD(arg0, u16 *, 0x55C)) != 0 ? 1 : 0;
}

void update_attack_switch__11TBoss6Type2FPv(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x518) % 24) == 0) {
        ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))spawn_particle_effect_with_flags)(arg0 + 0x38, 0x224, 0x2040);
    }
}

void play_phase_sound__11TBoss6Type2FPv(u8 *arg0) {
    M2C_UNK var_r3;
    s32 temp_r0;

    if (is_target_valid__11TBoss6Type2FPv((void *)(arg0)) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x42C);
        switch (temp_r0) {
        case 1:
            var_r3 = 0x6852C;
            break;
        case 2:
            var_r3 = 0x6852D;
            break;
        case 3:
            var_r3 = 0x6852E;
            break;
        case 4:
            var_r3 = 0x6852F;
            break;
        case 5:
        default:
            var_r3 = 0x6852B;
            break;
        }
        play_sound_effect(var_r3, arg0 + 0x38, 0, 1);
    }
}

void play_sound_if_no_target__11TBoss6Type2FPv(u8 *arg0) {
    if (is_target_valid__11TBoss6Type2FPv((void *)(arg0)) == 0) {
        play_sound_effect((M2C_UNK)(M2C_FIELD(&lbl_804712FC.value, M2C_UNK *, (find_index_in_table__11TBoss6Type2FUi(M2C_FIELD(arg0, u32 *, 0x2E4)) * 4))), (void *)((u32) (arg0 + 0x38)), (M2C_UNK)(0), (M2C_UNK)(1));
    }
}

void update_countdown__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;
    void *temp_r31;

    if (((s32 (*)(void))is_active__11TBoss6Type2FPv)() != 0) {
        ((M2C_UNK (*)(void *))update_attack_switch__11TBoss6Type2FPv)(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x51C) = 0;
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x518) < -0x12C) {
            M2C_FIELD(arg0, s32 *, 0x518) = -0x12C;
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x518) == -0x12C)) {
            temp_r31 = ((void * (*)(u16))get_player_by_client_id)(M2C_FIELD(arg0, u16 *, 0x55C));
            if ((is_active__14TBoss6PlotFalzFPv() != 0) && ((s16) M2C_FIELD(temp_r31, s16 *, 0x326) == 1)) {
                ((M2C_UNK (*)(void *))start_countdown_sound_state__11TBoss6Type2FPv)(arg0);
            }
        }
    } else {
        if (temp_r0 == 0) {
            ((M2C_UNK (*)(void *))play_phase_sound__11TBoss6Type2FPv)(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) - 1);
    }
}

u8 is_active__11TBoss6Type2FPv(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((((s32) M2C_FIELD(arg0, s32 *, 0x51C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x518) >= 0)) || ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 1)) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

void set_state_0x34__11TBoss6Type2FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x518) = 0x34;
    M2C_FIELD(arg0, s32 *, 0x51C) = 1;
    ((void (*)(void *))play_sound_if_no_target__11TBoss6Type2FPv)(arg0);
}

void start_countdown_sound_state__11TBoss6Type2FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x518) = 0x34;
    M2C_FIELD(arg0, s32 *, 0x51C) = 0;
    ((void (*)(void *))play_sound_if_no_target__11TBoss6Type2FPv)(arg0);
}

void reset_indices__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x518) = -1;
    M2C_FIELD(arg0, s32 *, 0x51C) = 0;
}

s32 get_hit_count__11TBoss6Type2FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F4);
}

void add_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if (temp_r0 < 9) {
        if (temp_r0 == 5) {
            goto block_4;
        }
        goto block_5;
    } else if (temp_r0 < 0xC) {
block_4:
        var_r4 *= 2;
    }
block_5:
    M2C_FIELD(arg0, s32 *, 0x4F4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4F4) + var_r4);
}

void reset_attack_counter__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4F4) = 0;
}

s32 calc_field4f0_delta__11TBoss6Type2FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F0) - M2C_FIELD(arg0, s16 *, 0x32C);
}

void copy_anim_state__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4F0) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_screen_pos__11TBoss6Type2FPv(void *arg0) {
    f32 var_f0;
    f32 var_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E0);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E4);
    } else {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4D8);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4DC);
    }
    M2C_FIELD(TBoss6Type2__motion_table, f32 *, 0x2C) = var_f1;
    M2C_FIELD(TBoss6Type2__motion_table, f32 *, 0x3C) = var_f1;
    M2C_FIELD(TBoss6Type2__motion_table, f32 *, 0xEC) = var_f0;
}
extern int fold_flush_12;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void load_battle_params__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    u8 *temp_r3;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    temp_r3 = (u8 *)(dispatch_shared_handler_a__6TLobbyFPv(0x2C));
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B4 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_4;
    if ((f32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B4 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B4 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B8 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_10;
    if ((f32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B8 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B8 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 4);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D4 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_14;
    if ((f32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D4 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D4 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x20);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4BC = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_18;
    if ((s32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4BC <= 0) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4BC = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 8);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C0 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_1C;
    if ((s32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C0 <= 0) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C0 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0xC);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C4 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_20;
    if ((s32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C4 <= 0) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C4 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x10);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C8 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_24;
    if ((s32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C8 <= 0) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C8 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x14);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4CC = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_28;
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D0 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_2C;
    temp_r0 = ((RecoveredFields_802BC754_arg0 *)arg0)->field_4CC;
    if ((temp_r0 < 0) || (temp_r0 > 0x64) || (temp_r3_2 = ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D0, ((temp_r3_2 < 0) != 0)) || (temp_r3_2 > 0x64) || ((s32) (temp_r0 + temp_r3_2) > 0x64)) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4CC = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x18);
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D0 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x1C);
    }
    temp_r3_3 = (u8 *)(dispatch_shared_handler_a__6TLobbyFPv(0x2F));
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D8 = (f32) ((RecoveredFields_802BC754_temp_r3_3 *)temp_r3_3)->field_0;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4D8 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D8 = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x24);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4DC = (f32) ((RecoveredFields_802BC754_temp_r3_3 *)temp_r3_3)->field_4;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4DC <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4DC = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x28);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E8 = (f32) ((RecoveredFields_802BC754_temp_r3_3 *)temp_r3_3)->field_8;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4E8 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E8 = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x34);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4EC = (s32) ((RecoveredFields_802BC754_temp_r3_3 *)temp_r3_3)->field_C;
    if ((f32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4EC <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4EC = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x38);
    }
    temp_r3_4 = (u8 *)(dispatch_shared_handler_a__6TLobbyFPv(0x2E));
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E0 = (f32) ((RecoveredFields_802BC754_temp_r3_4 *)temp_r3_4)->field_8;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4E0 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E0 = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x2C);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E4 = (f32) ((RecoveredFields_802BC754_temp_r3_4 *)temp_r3_4)->field_C;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4E4 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E4 = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x30);
    }
}
extern int fold_flush_13;
#pragma pop

struct Anim_802BCD2C { u8 pad[4]; u32 n; };
struct Trk_802BCD2C { Anim_802BCD2C *anim; f32 t; f32 dt; f32 a; f32 da; u8 pad[0x8]; };
struct Obj_802BCD2C {
    u8 pad0[0x490];
    s32 f490;
    s32 f494;
    Trk_802BCD2C trk[1];
};
extern const s32 TBoss6Type2__data_805DE4B8;
extern const s32 lbl_805DE4BC;

void draw_body_models__11TBoss6Type2FPv(u8 *arg0) {
    Prm_802BCAB8 prm;
    f32 zero;
    f32 a;
    s32 b;
    u32 obj;
    s32 done;
    s32 i;
    Ent_802BCAB8 *e;
    s32 p0;
    s32 p1;
    set_global_flag__10TObjPlayerFv();
    obj = M2C_FIELD(arg0, u32 *, 0x764);
    done = 0;
    if (obj != 0) {
        zero = TBoss6Type2__data_805DE410;
        for (i = 0; i < 2; i++) {
            e = &((Obj_802BCAB8 *)arg0)->ents[i];
            p0 = e->a;
            p1 = e->b;
            switch (i) {
            case 0:
                a = TBoss6Type2__data_805DE40C - M2C_FIELD(arg0, f32 *, 0x41C);
                break;
            case 1:
            default:
                a = M2C_FIELD(arg0, f32 *, 0x41C);
                break;
            }
            if (zero != a) {
                if (a < TBoss6Type2__data_805DE40C) {
                    set_fade_material_color__14TBoss6PlotFalzFf(a);
                }
                set_global_param__8TObjFishFi(p0);
                if (TBoss6Type2__data_805DE410 == M2C_FIELD(arg0, f32 *, 0x4A4)) {
                    if (done != 0) {
                        draw_model_motion(p1, M2C_FIELD(arg0, s32 *, 0x498), M2C_FIELD(arg0, f32 *, 0x49C));
                    } else {
                        set_draw_callback_list__8TObjFishFPv(obj);
                        draw_model_motion(p1, M2C_FIELD(arg0, s32 *, 0x498), M2C_FIELD(arg0, f32 *, 0x49C));
                        clear_render_callback__8TObjFishFv(obj);
                        done = 1;
                    }
                } else {
                    prm.a = M2C_FIELD(arg0, s32 *, 0x4AC);
                    prm.b = M2C_FIELD(arg0, f32 *, 0x4B0);
                    prm.c = M2C_FIELD(arg0, s32 *, 0x498);
                    prm.d = M2C_FIELD(arg0, f32 *, 0x49C);
                    if (done != 0) {
                        draw_model_blend_motion(p1, &prm, M2C_FIELD(arg0, f32 *, 0x4A4));
                    } else {
                        set_draw_callback_list__8TObjFishFPv(obj);
                        draw_model_blend_motion(p1, &prm, M2C_FIELD(arg0, f32 *, 0x4A4));
                        clear_render_callback__8TObjFishFv(obj);
                        done = 1;
                    }
                }
                if (a < TBoss6Type2__data_805DE40C) {
                    reset_fish_globals__8TObjFishFv();
                }
            }
        }
    }
    clear_global_state__10TObjPlayerFv();
}

void update_motion_tracks__11TBoss6Type2FPv(Obj_802BCD2C *self) {
    s32 i;
    Trk_802BCD2C *e;
    f32 n;
    f32 lim;

    for (i = 0; i < TBoss6Type2__data_805DE4B8; i++) {
        if (i != lbl_805DE4BC) {
            e = &self->trk[i];
            n = (f32)e->anim->n;
            e->t += e->dt;
            if (e->t >= n) {
                e->t -= n;
            }
            if (TBoss6Type2__data_805DE410 != e->a) {
                if ((e->a += e->da) >= TBoss6Type2__data_805DE40C) {
                    e->a = TBoss6Type2__data_805DE410;
                }
            }
        }
    }
    e = &self->trk[lbl_805DE4BC];
    n = (f32)e->anim->n;
    e->t += e->dt;
    switch (self->f494) {
    case 0:
        if (e->t >= n) {
            e->t -= n;
        }
        break;
    case 1:
        break;
    case 2:
        lim = n - TBoss6Type2__data_805DE40C;
        if (e->t >= lim) {
            e->t = lim;
            TBoss6Type2__sub_802BCC54(self, TBoss6Type2__motion_table[self->f490 * 4 + 1]);
        }
        break;
    }
    if (TBoss6Type2__data_805DE410 != e->a) {
        if ((e->a += e->da) >= TBoss6Type2__data_805DE40C) {
            e->a = TBoss6Type2__data_805DE410;
        }
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct Blk_802BCFD4;
typedef s32 M2C_UNK;
void init_motion_entries__11TBoss6Type2FPv(O_802BCEF4 *o) {
    s32 i;
    copy_block__11TBoss6Type2FPvPv((Blk_802BCFD4 *)((u8 *)o + 0x490), (Blk_802BCFD4 *)lbl_804712BC);
    for (i = 0; i < TBoss6Type2__data_805DE4B8; i++) {
        Ent_802BCEF4 *e = &o->ents[i];
        s32 r;
        copy_transform__11TBoss6Type2FPvPv(e, lbl_804712E0);
        r = get_bml_motion(o->model, ((Tb_802BCEF4 *)TBoss6Type2__motion_table)->v[i]);
        e->f14 = r;
        e->f0 = r;
        e->f8 = *(f32 *)((u8 *)TBoss6Type2__motion_table + 0xC);
    }
}

void copy_transform__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
Blk_802BCFD4 *copy_block__11TBoss6Type2FPvPv(Blk_802BCFD4 *d, Blk_802BCFD4 *s) {
    *d = *s;
    return d;
}
extern int fold_flush_14;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_action_state__11TBoss6Type2FPvPv(void *ov, void *vv) {
    s32 i;
    Tb_802BD014 *e;
    Fn_802BD014 fn;
    ((TBoss6Type2_802BD014 *)ov)->a[0] = (s32)vv;
    for (i = 31; i > 0; i--) {
        ((TBoss6Type2_802BD014 *)ov)->a[i + 1] = ((TBoss6Type2_802BD014 *)ov)->a[i];
    }
    ((TBoss6Type2_802BD014 *)ov)->a[1] = ((TBoss6Type2_802BD014 *)ov)->a[0];
    e = &lbl_804E00DC[((TBoss6Type2_802BD014 *)ov)->a[0]];
    TBoss6Type2__sub_802BCC54(((TBoss6Type2_802BD014 *)ov), e->f4);
    ((TBoss6Type2_802BD014 *)ov)->f474 = e->f8;
    fn = e->fn;
    if (fn) {
        (((TBoss6Type2_802BD014 *)ov)->*fn)();
    }
}
extern int fold_flush_15;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

#pragma push
#pragma opt_common_subs off
void run_task__11TBoss6Type2Fv(u8 *arg0) {
#define o ((TBoss6Type2_802BD014 *)arg0)
    Fn_802BD014 fn;
    TBoss6Type2__sub_802BA6DC();
    {
        Tb_802BD0C8 *tbl = (Tb_802BD0C8 *)lbl_804E00DC;
        fn = tbl[o->a[0]].fn3;
    }
    if (fn) {
        (o->*fn)();
    }
    if (is_idle__11TBoss6Type1FPv(M2C_FIELD(arg0, s32 *, 0x3F8)) != 0) {
        Tb_802BD0C8 *tbl = (Tb_802BD0C8 *)lbl_804E00DC;
        fn = tbl[o->a[0]].fn2;
        if (fn) {
            (o->*fn)();
        }
    }
#undef o
    update_motion_tracks__11TBoss6Type2FPv((Obj_802BCD2C *) (arg0));
    advance_position__11TBoss6Type2FPv(arg0);
    TBoss6Type2__sub_802BBE20((void *) (arg0));
    update_parts_flags__11TBoss6Type2FPv((void *) (arg0));
    update_collisions__10TObjPlayerFPv((void *) (arg0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DE4C0));
    apply_rock_hits_to_players__11TBoss6Type2FPv((Obj_802BBAB0 *)((void *) (arg0)));
    TBoss6Type2__sub_802BB498((T2_802BB498 *) (arg0));
    TBoss6Type2__sub_802BC124((void *) (arg0));
    scroll_strips_uv__14TBoss6PlotFalzFPvii((void *) (arg0 + 0x768), (int) (8), (int) (0));
    TObjPlayer__sub_8023DEE0((void *) (M2C_FIELD(M2C_FIELD(collect_and_count__12TBoss3VoloptFUii(get_bml_model((s32)(M2C_FIELD(arg0, s32 *, 0x3FC)), (M2C_UNK)(1)), 1), u8 **, 4), s32 *, 4)), (int) (8), (int) (0), (int) (0));
    TBoss6Type2__sub_802BB554((T2_802BB554 *) (arg0));
    copy_vec_array__11TBoss6Type2FPv(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        play_persistent_sound((int) (0x4006B00C), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
    update_countdown__11TBoss6Type2FPv((void *) (arg0));
    update_possess_target__11TBoss6Type2FPv(arg0);
    update_footstep_effects__11TBoss6Type2FPv(arg0);
    TBoss6Type2__sub_802BA7BC(arg0);
    update_part_positions__11TBoss6Type2FPv((Boss_802B9C80 *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x4F8) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}
#pragma pop

void copy_pos_620__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)(arg1, arg0 + 0x620);
}
extern int fold_flush_16;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void get_push_points__11TBoss6Type2Fiii(s32 arg0, s32 arg1, s32 arg2) {
    ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32)((void *) (arg1)), (s32)((void *) (arg0 + 0x5FC)));
    ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32)((void *) (arg2)), (s32)((void *) (arg0 + 0x5C0)));
}
extern int fold_flush_17;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void copy_pos_59c__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)(arg1, arg0 + 0x59C);
}
extern int fold_flush_18;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__sub_802BD340(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void apply_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1) {
    if ((arg1 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0)) {
        ((s32 (*)(void *, int))add_damage__11TBoss6Type2FPvi)(arg0, arg1);
    }
}
extern int fold_flush_19;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__sub_802BD378(T2_802BD378 *arg0, s32 arg1, void *arg2, s32 *arg3) {
    ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32)(arg2), (s32)(&arg0->v[arg1 + 0xE - 0]));
    *arg3 = arg0->f60;
}
extern int fold_flush_20;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 get_rotation_timer__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x418); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void get_phase_values__11TBoss6Type2FPvPvPvPv(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out) {
    s32 i;
    *a = self->f2d6;
    *b = self->f2d4;
    for (i = 0; i < 4; i++) {
        out[i] = obj_getArrU16_FC(self, i);
    }
}
extern int fold_flush_21;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0) {
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    u8 temp_r0;

    var_r31 = 1;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) && (arg1 != 0U)) {
        var_r30 = 0;
        var_r29 = 0;
        do {
            temp_r0 = *get_attribute_entry__10TObjPlayerFPvi(arg1, var_r29);
            switch ((s32) temp_r0) {
            case 1:
                var_r30 |= 1;
                break;
            case 2:
                var_r30 |= 2;
                break;
            case 3:
                var_r30 |= 4;
                break;
            case 4:
                var_r30 |= 8;
                break;
            }
            var_r29 += 1;
        } while (var_r29 < 3);
        if (!(M2C_FIELD(arg0, s32 *, 0x2E4) & var_r30)) {
            var_r31 = 0;
        }
    }
    if (var_r31 != 0) {
        return receive_physical_attack__10TObjPlayerFv(arg0, arg1, farg0);
    }
    ((M2C_UNK (*)(void *))TBoss6Type2__sub_802BA078)(arg0);
    ((M2C_UNK (*)(void *))spawn_hit_effects__11TBoss6Type2FPv)(arg0);
    return TBoss6Type2__data_805DE410;
}
extern int fold_flush_22;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 35) { set_action_state__11TBoss6Type2FPvPv((void*)(p), (void*)((void*)35)); } }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4FC) = (f32) TBoss6Type2__data_805DE40C;
    {
        int diff = M2C_FIELD(arg0, s32 *, 0x4F8) - M2C_FIELD(arg0, s16 *, 0x32C);
        if (diff > 0) {
            ((s32 (*)(void *, int))add_damage__11TBoss6Type2FPvi)((void *)(arg0), (int)(diff));
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)(0x68A24, arg0 + 0x38, 0, 1);
    }
}
extern int fold_flush_23;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 count_matching_values__11TBoss6Type2FPvii(T1_802BD68C *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 cnt;
    if (arg2 > 0x20) {
        arg2 = 0x20;
    }
    cnt = 0;
    for (i = 0; i < arg2; i++) {
        if (arg0->v[i] == arg1) {
            cnt++;
        }
    }
    return cnt;
}
extern int fold_flush_24;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r31;
    s32 temp_r30;

    temp_r31 = M2C_FIELD(arg0, u32 *, 0x2E4);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x42C);
    M2C_FIELD(arg0, u32 *, 0x2E4) = get_table_entry__11TBoss6Type2Fi((int)(arg1));
    M2C_FIELD(arg0, s32 *, 0x42C) = arg2;
    ((M2C_UNK (*)(void *))update_segments__11TBoss6Type2FPv)(arg0);
    if ((temp_r31 != (u32) M2C_FIELD(arg0, u32 *, 0x2E4)) || (temp_r30 != (s32) M2C_FIELD(arg0, s32 *, 0x42C))) {
        ((M2C_UNK (*)(void *))set_state_0x34__11TBoss6Type2FPv)(arg0);
    }
    if (M2C_FIELD(arg0, void **, 0x410) != 0) {
        set_target_nodes__11TBoss6Type2FPvPvPv(M2C_FIELD(arg0, void **, 0x410), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
    if (M2C_FIELD(arg0, void **, 0x414) != 0) {
        set_target_nodes__11TBoss6Type2FPvPvPv(M2C_FIELD(arg0, void **, 0x414), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
}
extern int fold_flush_25;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 choose_next_index__11TBoss6Type2FPv(T2_802BD76C *arg0) {
    s32 k = (s32)(lbl_805DE4C4 * (TBoss6Type2__data_805DE468 * (f32)rand())) + 1;
    s32 r = arg0->f42C + k;
    if (r > 4) {
        r -= 4;
    }
    return r;
}
extern int fold_flush_26;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

s32 pick_random_other_index__11TBoss6Type2FPv(Boss_802BD7EC *o) {
    s32 t = find_index_in_table__11TBoss6Type2FUi(o->f2E4);
    s32 r = t + (s32)(lbl_805DE4C4 * (TBoss6Type2__data_805DE468 * (f32)rand())) + 1;
    if (r >= 4) {
        r -= 4;
    }
    return r;
}

s32 find_index_in_table__11TBoss6Type2FUi(u32 v) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (v == ((u32 *)&lbl_804710BC)[i]) return i;
    }
    return 0;
}
extern int fold_flush_27;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int get_table_entry__11TBoss6Type2Fi(int a0) {  return lbl_804710BC[a0]; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
void TBoss6Type2__sub_802BD938(u8 *arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_802BD938, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_802BD938, sp9) == 0x1) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802BD938, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802BD938, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802BD938, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_802BD938, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_802BD938, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_802BD938, sp20) == 0x18) ? 1 : -1];
    Stack_802BD938 stack;
    f32 temp_f1;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r3;
    temp_r3 = ((s32)((M2C_UNK (*)(int))get_player_by_client_id)((int) ((s32) M2C_FIELD(arg0, u16 *, 0x466))));
    if (temp_r3 != 0) {
        ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32)((void *) (&stack.sp18)), (s32)((void *) (temp_r3 + 0x38)));
    } else {
        M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
        temp_r29 = (s32) ((lbl_805DE4C8 * -((TBoss6Type2__data_805DE468 * (f32) rand()) - lbl_805DE414)) + (f32) M2C_FIELD(arg0, s32 *, 0x60));
        ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32)((void *) (&stack.sp18)), (s32)((void *) (arg0 + 0x38)));
        stack.sp18 += TBoss6Type2__data_805DE45C * sin_table_lookup((int) (temp_r29));
        stack.sp20 += TBoss6Type2__data_805DE45C * cos_table_lookup((int) (temp_r29));
        if (xyz_distance((void *) (arg0 + 0x38), (void *) (&TBoss6Type2__data_8047105C.value)) > lbl_805DE4CC) {
            temp_r29_2 = (s32) (lbl_805DE46C * (TBoss6Type2__data_805DE468 * (f32) rand()));
            ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32)((void *) (&stack.sp18)), (s32)((void *) (&TBoss6Type2__data_8047105C.value)));
            stack.sp18 += TBoss6Type2__data_805DE45C * sin_table_lookup((int) (temp_r29_2));
            stack.sp20 += TBoss6Type2__data_805DE45C * cos_table_lookup((int) (temp_r29_2));
        }
    }
    stack.sp1C = TBoss6Type2__data_805DE410;
    ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32)((void *) (&stack.spC)), (s32)((void *) (&stack.sp18)));
    ((f32 (*)(void *, void *))subtract_vector)((void *) (&stack.spC), (void *) (arg0 + 0x38));
    stack.sp10 = TBoss6Type2__data_805DE410;
    temp_f1 = ((f32 (*)(void *))vector_length)((void *) (&stack.spC));
    if (temp_f1 < TBoss6Type2__data_805DE41C) {
        if (temp_f1 <= TBoss6Type2__data_805DE490) {
            stack.sp18 = TBoss6Type2__data_805DE40C;
        } else {
            normalize_vector((void *) (&stack.spC));
        }
        stack.spC *= TBoss6Type2__data_805DE41C;
        stack.sp14 *= TBoss6Type2__data_805DE41C;
        ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32)((void *) (&stack.sp18)), (s32)((void *) (&stack.spC)));
        vec3_add_to((void *) (&stack.sp18), (void *) (arg0 + 0x38));
    }
    ((s32 (*)(void *, void *, void *))world_to_grid_pos__11TBoss6Type2FPvPvPv)((void *) (&stack.sp18), (void *) (&stack.sp9), (void *) (&stack.sp8));
    M2C_FIELD(arg1, u8 *, 0) = stack.sp9;
    M2C_FIELD(arg1, u8 *, 1) = stack.sp8;
}
extern int fold_flush_28;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_attack_target__11TBoss6Type2FPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    u16 temp_r31;
    u16 temp_r3;
    u16 var_r30;

    var_r3 = 0x21;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_r3 = 0x1F;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    var_r31 = var_r3;
    switch (temp_r0) {
    case 0x1D:
        return;
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
        temp_r31 = M2C_FIELD(arg0, u16 *, 0x466);
        temp_r3 = ((u16 (*)(void *))TBoss6Type2__sub_802BB694)(arg0);
        var_r30 = temp_r3;
        if ((u16) temp_r3 == 0xFFFF) {
            ((M2C_UNK (*)(int))get_player_by_client_id)(temp_r31);
            if (is_active__14TBoss6PlotFalzFPv() != 0) {
                var_r30 = temp_r31;
            }
        }
        M2C_FIELD(arg0, u16 *, 0x466) = var_r30;
        if ((get_phase__14TBoss6PlotFalzFv() == 0) && (M2C_FIELD(arg0, s32 *, 0x374) & 1)) {
            M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
        }
        var_r31 = M2C_FIELD(arg0, s32 *, 0x374) - 1;
        break;
    }
    TBoss6Type2__sub_802BD938((u8 *)(arg0), (u8 *)(&sp8));
    send_action_packet_if_idle__11TBoss6Type2FPviPv((void *)(arg0), (s32)(var_r31), (M2C_UNK *)(&sp8));
}
extern int fold_flush_29;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

void send_state_action_packet__11TBoss6Type2FPv(u8 *arg0) {
    M2C_UNK sp8;
    s32 var_r31;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_r31 = 7;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) == 0) {
            var_r31 = 0xA;
        }
    } else {
        var_r31 = 8;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) == 0) {
            var_r31 = 0xB;
        }
    }
    switch (M2C_FIELD(arg0, s32 *, 0x374)) {
    case 6:
    case 9:
        return;
    case 7:
    case 8:
    case 10:
    case 11:
        M2C_FIELD(arg0, s16 *, 0x466) = ((s16 (*)(void *))TBoss6Type2__sub_802BB694)(arg0);
        var_r31 = M2C_FIELD(arg0, s32 *, 0x374) - 1;
    default:
        TBoss6Type2__sub_802BD938(arg0, (u8 *) (&sp8));
        send_action_packet_if_idle__11TBoss6Type2FPviPv((void *) (arg0), var_r31, &sp8);
        break;
    }
}

void update_action_state__11TBoss6Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r4;

    TBoss6Type2__sub_802BD938((u8 *)(arg0), (u8 *)(&sp8));
    var_r4 = 4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) == 0) {
        var_r4 = 5;
    }
    send_action_packet_if_idle__11TBoss6Type2FPviPv((void *)(arg0), (s32)(var_r4), (M2C_UNK *)(&sp8));
}
extern int fold_flush_30;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void send_action_packet_if_idle__11TBoss6Type2FPviPv(void *arg0, s32 arg1, M2C_UNK *arg2) {
    Pkt_802BDD6C p;
    u8 *s; s32 i;
    if (is_idle__11TBoss6Type1FPv(*(s32 *)((u8 *)arg0 + 0x3F8)) != 0) {
        init_packet__11TBoss6Type2FPv(&p);
        build_state_packet__11TBoss6Type2FPvPv((u8 *)arg0, (u8 *)&p);
        s = (u8 *)arg2; p.d[4] = arg1;
        for (i = 1; i < 4; i++) {
            p.d[i + 4] = *s++;
        }
        update_and_send__11TBoss6Type2FPv(&p);
    }
}
extern int fold_flush_31;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void send_action_packet__11TBoss6Type2FPvc(u8 *arg0, s8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_802BDDF8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802BDDF8, spC) == 0x4) ? 1 : -1];
    Stack_802BDDF8 stack;
    if (is_idle__11TBoss6Type1FPv((int) (M2C_FIELD(arg0, s32 *, 0x3F8))) != 0) {
        init_packet__11TBoss6Type2FPv((void *) (&stack.sp8));
        build_state_packet__11TBoss6Type2FPvPv((u8 *)((void *) (arg0)), (u8 *)((void *) (&stack.sp8)));
        stack.spC = arg1;
        update_and_send__11TBoss6Type2FPv((void *) (&stack.sp8));
    }
}
extern int fold_flush_32;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x478) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    set_target_state__11TBoss6Type2FPvii((void *)(arg0), (s32)(M2C_FIELD(arg1, s8 *, 0xA)), (s32)(M2C_FIELD(arg1, s8 *, 0xB)));
    M2C_FIELD(arg0, u16 *, 0x464) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x466) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xD);
    M2C_FIELD(arg0, u16 *, 0x468) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0x46A) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xF);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x464) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x466) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x468) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x468) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x46A) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x46A) = 0xFFFFU;
    }
    set_action_field_0x408__11TBoss6Type2FPvs(M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, u16 *, 0x468));
    set_action_field_0x408__11TBoss6Type2FPvs(M2C_FIELD(arg0, s32 *, 0x414), M2C_FIELD(arg0, u16 *, 0x46A));
}
extern int fold_flush_33;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void build_state_packet__11TBoss6Type2FPvPv(u8 *arg0, u8 *arg1) {
    u16 spA;
    u16 sp8;
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg1, s8 *, 8) = (s8) (lbl_805DE4D0 * (TBoss6Type2__data_805DE468 * (f32) rand()));
    M2C_FIELD(arg1, s8 *, 9) = ((s32 (*)(void *))choose_random_motion__11TBoss6Type2FPv)(arg0);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) M2C_FIELD(arg0, s32 *, 0x428);
    M2C_FIELD(arg1, s8 *, 0xB) = (s8) M2C_FIELD(arg0, s32 *, 0x430);
    M2C_FIELD(arg1, s8 *, 0xC) = (s8) M2C_FIELD(arg0, u16 *, 0x464);
    M2C_FIELD(arg1, s8 *, 0xD) = (s8) M2C_FIELD(arg0, u16 *, 0x466);
    ((void (*)(void *, void *, void *))TBoss6Type2__sub_802BB5B4)(arg0, &spA, &sp8);
    M2C_FIELD(arg1, s8 *, 0xE) = (s8) spA;
    M2C_FIELD(arg1, s8 *, 0xF) = (s8) sp8;
}
extern int fold_flush_34;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

#pragma push
#pragma opt_common_subs off
#define arg0 ((u8 *)arg0_)
#define arg2 ((s32 *)arg2_)
s32 TBoss6Type2__ct(s32 arg0_, s32 arg1, s32 arg2_) {
    Tmp_802BE0D4 tmp;
    s32 i;
    s32 id;
    ((void (*)(void *, s32))initialize__9TObjEnemyFPv)(arg0, arg1);
    M2C_FIELD(arg0, u8 **, 0x18) = __vt__11TBoss6Type2;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3EB8;
    M2C_FIELD(arg0, s32 *, 0x3F8) = arg2[0];
    ((VObj_18_802BE0D4 *)(arg0))->m79(arg2 + 1);
    if (exchange_object_state__6TLobbyFPvis(arg0, &tmp, 1) != 0) {
        tmp.a = 0;
        tmp.c = 0;
        exchange_object_state__6TLobbyFPvis(arg0, &tmp, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3FC) = get_fish_count__8TObjFishFv();
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, lbl_80471068);
    copy_xyz__10TObjPlayerFPvPv(arg0 + 0x5C, lbl_80471074);
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, (void *)VecCopy__FP3VecPC3Vec(arg0 + 0x50, (void *)VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    init_collision_body_parts(arg0, boss6_type2_collision_parts, 3);
    advance_position__11TBoss6Type2FPv(arg0);
    M2C_FIELD(arg0, f32 *, 0x310) = TBoss6Type2__data_805DE410;
    M2C_FIELD(arg0, f32 *, 0x30C) = TBoss6Type2__data_805DE410;
    M2C_FIELD(arg0, f32 *, 0x308) = TBoss6Type2__data_805DE410;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    bind_enemy_combat_stats(arg0, register_boss__6TLobbyFPv(0x2C), dispatch_shared_handler_b__6TLobbyFPv(0x2C), register_object__6TLobbyFPv(0x2C));
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s32 *, 0x4F8) = M2C_FIELD(arg0, s16 *, 0x32C);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    set_param__12TObjEneLappyFPvi(arg0, 0x4E);
    id = (s8)((u8 *)arg2)[0x44] % 4;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, lbl_804710BC[id]);
    M2C_FIELD(arg0, s32 *, 0x428) = id;
    M2C_FIELD(arg0, s32 *, 0x42C) = M2C_FIELD(arg0, s32 *, 0x430) = lbl_8047127C[((s8)((u8 *)arg2)[0x44] >> 2) % 4];
    init_segment_range__11TBoss6Type2FPv((Obj_802BC050 *)arg0);
    {
    s32 k;
    for (k = 0; k < 2; k++) {
        Ent_802BE0D4 *e = &((Ents_802BE0D4 *)arg0)->ents[k];
        id = lbl_8047128C[k];
        e->a = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), id);
        e->b = get_bml_model(M2C_FIELD(arg0, s32 *, 0x3FC), id);
    }
    }
    init_motion_entries__11TBoss6Type2FPv((O_802BCEF4 *)arg0);
    M2C_FIELD(arg0, s32 *, 0x764) = TObjFish__sub_800E3124(lbl_8047113C, arg0 + 0x59C);
    build_tables__14TBoss6PlotFalzFPvPvi(arg0 + 0x768, lbl_80471294, 2);
    M2C_FIELD(arg0, s32 *, 0x458) = create_zanzo__11TBoss6Type1FPvPvPv(arg0, 7, 0xF);
    M2C_FIELD(arg0, s8 *, 0x478) = 0;
    M2C_FIELD(arg0, s32 *, 0x47C) = 0x11;
    TBoss6Type2__sub_802BE4E0((s32 *)(arg0 + 0x480), lbl_804712AC);
    M2C_FIELD(arg0, s32 *, 0x480) = M2C_FIELD(arg0, s32 *, 0x60);
    VecCopy__FP3VecPC3Vec(arg0 + 0x484, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x474) = 0;
    for (i = 0; i < 32; i++) {
        ((Arr_802BE0D4 *)arg0)->arr[i] = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    M2C_FIELD(arg0, f32 *, 0x41C) = TBoss6Type2__data_805DE410;
    M2C_FIELD(arg0, s32 *, 0x420) = 0;
    M2C_FIELD(arg0, s32 *, 0x424) = 0;
    M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x466) = ((s16 (*)(void *))TBoss6Type2__sub_802BB694)(arg0);
    M2C_FIELD(arg0, u16 *, 0x468) = 0xFFFF;
    M2C_FIELD(arg0, u16 *, 0x46A) = 0xFFFF;
    M2C_FIELD(arg0, s32 *, 0x46C) = -1;
    M2C_FIELD(arg0, s32 *, 0x470) = 0;
    load_battle_params__11TBoss6Type2FPv(arg0);
    set_screen_pos__11TBoss6Type2FPv(arg0);
    copy_anim_state__11TBoss6Type2FPv(arg0);
    reset_attack_counter__11TBoss6Type2FPv(arg0);
    reset_indices__11TBoss6Type2FPv(arg0);
    M2C_FIELD(arg0, f32 *, 0x4FC) = TBoss6Type2__data_805DE410;
    M2C_FIELD(arg0, f32 *, 0x500) = TBoss6Type2__data_805DE40C;
    M2C_FIELD(arg0, s32 *, 0x508) = 0;
    TBoss6Type2__sub_802BB818(arg0, TBoss6Type2__data_805DE410);
    TBoss6Type2__sub_802BB768((T2_802BB768 *)arg0);
    create_rock_pool__10TBoss6RockFi(arg0);
    TBoss6Type2__sub_802BA7B0(arg0);
    capture_player_snapshots__11TBoss6Type2Fv();
    cache_fish_params__11TBoss6Type2FPv(arg0);
    init_collected_entries__11TBoss6Type2FPv((T2_802BA000 *)arg0);
    set_fields_554__11TBoss6Type2FPv(arg0);
    TBoss6Type2__sub_802B9D6C((Obj_802B9D6C *)arg0);
    spawn_particle_slot__11TBoss6Type2FPvi(arg0, 0);
    spawn_particle_slot__11TBoss6Type2FPvi(arg0, 1);
    spawn_particle_slot__11TBoss6Type2FPvi(arg0, 2);
    spawn_particle_slot__11TBoss6Type2FPvi(arg0, 3);
    spawn_particle_slot__11TBoss6Type2FPvi(arg0, 4);
    spawn_particle_slot__11TBoss6Type2FPvi(arg0, 5);
    set_action_state__11TBoss6Type2FPvPv(arg0, 0);
    return arg0_;
}
#undef arg2
#undef arg0
#pragma pop

void TBoss6Type2__sub_802BE4E0(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}
extern int fold_flush_35;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 create__11TBoss6Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x7B4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type2__ct((s32)(var_r31), (s32)(var_r4), (s32)(arg0));
    }
    return var_r31;
}
extern int fold_flush_36;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt42(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt43(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt44(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt45(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt46(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt47(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type2__vt48(void) {  }
#pragma pop

}
