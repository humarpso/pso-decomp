#include "types.h"
#include "pso/enemy/TObjEneDelDepth.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/enemy/TObjEneDelDepthBomb.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRecon.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TTecBarta.h"
#include "pso/misc/TTecMegid.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

typedef struct Vec_80313FAC { f32 x; f32 y; f32 z; } Vec_80313FAC;

struct Ene_803154A8;
typedef void (Ene_803154A8::*Fn_803154A8)(void);
struct Ent2_80315720 { Fn_803154A8 f; Fn_803154A8 g; };

struct Ene_80315720 {
    u8 pad0[0x2FC];
    u8 pos[0x374 - 0x2FC];
    s32 idx;
    u8 pad378[4];
    s32 f37C;
    u8 pad380[0x3F0 - 0x380];
    s32 f3F0;
};

struct Obj_80315380;
struct Vec_80314758 { f32 x, y, z; };

struct VBase_80314758 { u8 pad[0x18]; };

struct Pl_80314758 : VBase_80314758 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(void *, f32); virtual void m19();
    virtual void m20(void *, f32); virtual void m21(); virtual void m22(); virtual void m23(void *, f32);
};

struct Tune_80314758 { f32 accel; f32 maxSpeed; };

struct HitObj_80314758 { u8 pad0[0xC]; f32 fc; u8 pad10[0x14 - 0x10]; f32 f14; u32 f18; };

struct Hit_80314758 { u32 flags; HitObj_80314758 *obj; };

struct Obj_80314758 {
    u8 pad0[0x38];
    Vec_80314758 pos;
    Vec_80314758 prev;
    u8 pad50[0x60 - 0x50];
    s32 rotY;
    u8 pad64[0x120 - 0x64];
    u8 f120[0x38C - 0x120];
    f32 f38c;
    u8 pad390[0x394 - 0x390];
    s32 f394;
    u8 pad398[0x3AC - 0x398];
    f32 speed;
    Vec_80314758 dir;
};

typedef struct Vec_803142DC { f32 x; f32 y; f32 z; } Vec_803142DC;

struct Obj_800E9DC8 { u8 pad0[0x60]; s32 f60; u8 pad1[0x384 - 0x64]; s32 f390; u8 pad2[0x3BC - 0x388]; s32 f3C4; };

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
u32 csnLookAt(void *, void *);
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
s32 project_actor_to_ground(void *, void *, void *);
f32 vec3_add_to(void *, void *);
f32 vector_length(void *);
s32 normalize_vector(void *);
extern const f64 TObjEneDelDepth__data_80475DD0;
extern const f32 TObjEneDelDepth__data_805DF280;
extern const f32 lbl_805DF288;
extern const f32 lbl_805DF28C;
extern const f32 lbl_805DF290;
void move_toward_target__15TObjEneDelDepthFPv(u8 *arg0);
void submit_cursor_candidate(void *, s32);
void minimap_render_dot(void *, s32, s32, s32);
void TObjEneDelDepth__sub_803152A0(u8 *arg0);
void TObjEneDelDepth__sub_803152C0(u8 *arg0);
f32 cos_table_lookup(s32);
f32 sin_table_lookup(s32);
f32 fabs_float(f32);
f32 vector_length(void *);
f64 atan2_float(f32, f32);
s32 normalize_vector(void *);
s32 play_sound_effect(int, void *, int, int);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 find_nearest_visible_player(void *, int, f32);
u8 * csnVectorUnder(s32, void *, s32);
Pl_80314758 *get_battle_param__10TObjPlayerFi(s32);
s32 obj_is_hit_receivable(void *);
s32 obj_getField1c(void *);
s32 is_player_entity_id(s32);
Hit_80314758 *csnVector(void *, void *, s32);
extern const f64 TObjEneDelDepth__data_80475DD0;
extern u8 *TObjEneDelDepth__tune_params;
extern s32 TObjEneDelDepth_collision_body_parts[];
extern s32 actor_frame_tick;
extern const float TObjEneDelDepth__data_805DF258;
extern const f32 TObjEneDelDepth__data_805DF260;
extern const f32 TObjEneDelDepth__data_805DF268;
extern const f32 TObjEneDelDepth__data_805DF270;
extern const f32 TObjEneDelDepth__data_805DF280;
extern const f32 TObjEneDelDepth__data_805DF298;
extern const f32 lbl_805DF2A4;
extern const f32 lbl_805DF2A8;
extern const f32 lbl_805DF2AC;
u16 find_nearest_visible_player(void *, int, f32);
f64 atan2_float(f32, f32);
u8 *get_bml_motion(s32, s32);
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
int set_motion__15TObjEneDelDepthFl(void*, void*);
f32 sin_table_lookup(s32);
extern const f64 TObjEneDelDepth__data_80475DD0;
extern u8 *TObjEneDelDepth__shared_resource;
extern const float TObjEneDelDepth__data_805DF258;
extern const f32 TObjEneDelDepth__data_805DF298;
extern const f32 lbl_805DF29C;
void TObjEneDelDepth__sub_803142DC(u8 *arg0);
f64 atan2_float(f32, f32);
s32 angle_difference_abs(s32, s32);
extern const f64 TObjEneDelDepth__data_80475DD0;
extern const f32 lbl_805DF294;
void TObjEneDelDepth__sub_803141A8(Obj_800E9DC8 *arg0);
}

extern "C" {

struct RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb {
    s32 value;
    u8 remaining[0x138];
};

struct Vec_803133BC { f32 x; f32 y; f32 z; };

struct Bomb_803133BC {
    u8 pad0[0x38];
    Vec_803133BC pos;
    u8 pad1[0x248 - 0x44];
    u8 col[0x334 - 0x248];
    u8 f334[4];
    f32 f338;
    u8 pad2[4];
    f32 f340;
    f32 f344;
    s32 f348;
    s32 cnt;
    s32 f350;
    f32 f354;
};

typedef char RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb_size[sizeof(RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb) == 0x13C ? 1 : -1];

struct Stack_80313694 {
    s32 sp8;
    f32 spC;
};

struct VBase_18_65b835 { char pad[0x18]; };

struct VObj_18_65b835 : VBase_18_65b835 {
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
    virtual s32 m77(s32 *);
};

struct Vec_80313740 { f32 x, y, z; };

struct Ene_80313740 {
    u8 pad0[0x38];
    Vec_80313740 pos;
    u8 pad44[0x3D4 - 0x44];
    f32 f3D4;
    f32 f3D8;
    f32 f3DC;
};

struct V3_80313E34 { s32 a, b, c; };

struct RecoveredGlobal_80314D1C_lbl_80475D6C {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80314D1C_lbl_80475D78 {
    s32 value;
    u8 remaining[0x8];
};

typedef char RecoveredGlobal_80314D1C_lbl_80475D6C_size[sizeof(RecoveredGlobal_80314D1C_lbl_80475D6C) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80314D1C_lbl_80475D78_size[sizeof(RecoveredGlobal_80314D1C_lbl_80475D78) == 0xC ? 1 : -1];

struct Vec_80315380 { f32 x, y, z; };

struct Obj_80315380 { u8 pad[0x38]; Vec_80315380 pos; u8 pad44[0x60 - 0x44]; s32 x60; };

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual s32 m79(s32);
};

struct Ene_803154A8;

typedef void (Ene_803154A8::*Fn_803154A8)(void);

struct Ent_803154A8 { Fn_803154A8 f; u8 rest[12]; };

struct Ene_803154A8 {
    u8 pad[0x374];
    s32 idx;
};

struct RecoveredGlobal_80315A40___vt__15TObjEneDelDepth {
    s32 value;
    u8 remaining[0x14C];
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_803155D4 { f32 x; f32 y; f32 z; };

struct Dep_803155D4 {
    u8 pad0[0x38];
    Vec_803155D4 pos;
    u8 pad1[0x60 - 0x44];
    s32 f60;
    u8 pad2[0x37C - 0x64];
    s32 f37C;
    u8 pad3[0x398 - 0x380];
    f32 f398;
    f32 f39C;
    u8 f3A0[0x3E0 - 0x3A0];
    s32 flags;
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
    virtual s32 m80();
};

struct Vec_8031551C { f32 x; f32 y; f32 z; };

struct Dep_8031551C {
    u8 pad0[0x38];
    Vec_8031551C pos;
    u8 pad1[0x60 - 0x44];
    s32 f60;
    u8 pad2[0x37C - 0x64];
    s32 f37C;
    u8 pad3[0x398 - 0x380];
    f32 f398;
    f32 f39C;
    u8 f3A0[0x3E0 - 0x3A0];
    s32 flags;
    u8 f3E4[4];
};

typedef char RecoveredGlobal_80315A40___vt__15TObjEneDelDepth_size[sizeof(RecoveredGlobal_80315A40___vt__15TObjEneDelDepth) == 0x150 ? 1 : -1];

f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 find_nearest_visible_player(void *, int, f32);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
s32 construct_actor_base__10TObjPlayerFPvPv(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 fabs_float(f32);
void queue_destruction__7TObjectFv(void *);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
s32 TObjFish__sub_8001EDB0(u8 *, int);
s32 get_bml_model(int, int);
s32 get_mode__11TCameraCtrlFPv(void *);
u8 * csnVectorUnder(s32, void *, s32);
s32 draw_blob_shadow(int);
s32 send_6x0A_enemy_state(void *, void *);
s32 refresh_lobby_state__10TObjPlayerFv();
s32 bind_enemy_combat_stats(void *, int, int, int);
s32 __dt__9TObjEnemyFv(void *, s32);
s32 initialize__9TObjEnemyFPv(void *);
s32 direction_to_rotation_xz(void *, void *, void *);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 free_collision_body_parts(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 project_actor_to_ground(void *, void *, void *);
s32 end_effect_render__13TParticleCtrlFv();
s32 send_entity_set_flags__6TLobbyFPv(void *);
s32 play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 create__11TTecRaBartaFPvPvPvPv(s32, void *, void *, s32);
s32 push_reflect_matrix__12TObjEneReconFPv(void *);
s32 restore_render_scissor(int);
int TObjEneDelDepthBomb__sub_80313268(void);
void run_task__19TObjEneDelDepthBombFv(Bomb_803133BC *o);
void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void * __dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1);
u8 * TObjEneDelDepthBomb__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void TObjEneDelDepth__sub_803138F8(void* a0);
void TObjEneDelDepth__sub_80313954(u8 *arg0);
void start_attack_motion__15TObjEneDelDepthFPv(u8 *arg0);
void TObjEneDelDepth__sub_80313DE4(void* p);
void TObjEneDelDepth__sub_80314500(u8 *arg0);
void enter_appear_state__15TObjEneDelDepthFPv(u8 *arg0);
void start_move_toward_player__15TObjEneDelDepthFPv(u8 *arg0);
void update_scale_pulse__15TObjEneDelDepthFPv(u8 *arg0);
void TObjEneDelDepth__sub_80314EC4(u8 *arg0);
void TObjEneDelDepth__vt59(u8 *arg0);
void TObjEneDelDepth__vt60(u8 *arg0);
void TObjEneDelDepth__vt61(void* p);
void TObjEneDelDepth__sub_803152A0(u8 *arg0);
void TObjEneDelDepth__sub_803152C0(u8 *arg0);
void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1);
s32 TObjEneDelDepth__sub_80315380(Obj_80315380 *arg0);
void set_depth_offset__15TObjEneDelDepthFPvii(void *arg0, s32 arg1, s32 arg2);
void set_action_state__15TObjEneDelDepthFPvi(Ene_803154A8 *o, s32 i);
void TObjEneDelDepth__sub_80315518(void);
void * __dt__15TObjEneDelDepthFv(void *arg0, s16 arg1);
u8 * TObjEneDelDepth__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 setup_draw_material_default__15TObjEneDelDepthFf();
u8 * get_data__15TObjEneDelDepthFv();
s32 get_flag_bit4__15TObjEneDelDepthFv(void *);
int set_motion__15TObjEneDelDepthFl(void*, void*);
s32 fn_80316680(s32, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vec3_add_to(void *, void *);
s32 matrix_mult_vec(int, void *, void *);
s32 rotate_matrix_zyx(int, int, int, int);
s32 scale_matrix_vec3(int, void *);
f32 vector_length(void *);
s32 rotate_matrix_y(int, s32);
s32 rotate_matrix_z(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 rotate_matrix_x(int, void *);
s32 normalize_vector(void *);
s32 push_matrix_from(void *);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *, f32, f32, f32);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(int);

extern u8 *TObjEneDelDepth__tune_params;
extern u8 *TObjEneDelDepth__shared_resource;
extern const float TObjEneDelDepth__data_805DF258;
extern const f32 TObjEneDelDepth__data_805DF260;
extern const f32 TObjEneDelDepth__data_805DF268;
extern const f32 TObjEneDelDepth__data_805DF26C;
extern const f32 TObjEneDelDepth__data_805DF270;
extern const float TObjEneDelDepth__data_805DF278;
extern const f32 TObjEneDelDepth__data_805DF280;
extern const f32 TObjEneDelDepth__data_805DF298;
extern s32 __vt__15TObjEneDelDepth[];
extern s32 __vt__19TObjEneDelDepthBomb[];
extern const RecoveredGlobal_80314D1C_lbl_80475D6C lbl_80475D6C;
extern const RecoveredGlobal_80314D1C_lbl_80475D78 lbl_80475D78;
extern Vec_803155D4 lbl_80475DA4[];
extern V3_80313E34 lbl_80475DB0;
extern s32 TObjEneDelDepth_collision_body_parts[];
extern s32 lbl_804E8194[];
extern Ent_803154A8 lbl_804E836C[];
extern s32 identity_matrix[];
extern s32 TObjEneDelDepth__name;
extern s32 TObjEneDelDepthBomb__name;
extern s32 actor_frame_tick;
extern s32 game_difficulty_selection;
extern s32 anim_model_matrix_array;
extern const f32 lbl_805DF250;
extern const f32 lbl_805DF264;
extern const f32 lbl_805DF274;
extern const f32 lbl_805DF27C;
extern const f32 lbl_805DF284;
extern const f32 lbl_805DF288;
extern const f32 lbl_805DF294;
extern const f32 lbl_805DF2A0;
extern const f32 lbl_805DF2B0;
extern const f32 lbl_805DF2B4;
extern const f32 lbl_805DF2B8;
extern const f32 lbl_805DF2BC;
extern const f32 lbl_805DF2C0;
extern const f32 lbl_805DF2C4;
extern const f32 lbl_805DF2C8;
extern const f32 lbl_805DF2CC;
extern const f32 lbl_805DF2D0;
extern s32 lbl_805DF2D4;
extern const f32 lbl_805DF2D8;
extern const f32 lbl_805DF2DC;
extern u8 main_task[];

extern "C" {
void set_action_state__15TObjEneDelDepthFPvi(Ene_803154A8 *o, s32 i);
}

extern "C" {
extern Ent_803154A8 lbl_804E836C[];
}

extern "C" {
s32 TObjEneDelDepth__sub_80315380(Obj_80315380 *arg0);
void set_action_state__15TObjEneDelDepthFPvi(Ene_803154A8 *o, s32 i);
}

extern "C" {
void set_action_state__15TObjEneDelDepthFPvi(Ene_803154A8 *o, s32 i);
}

extern "C" {
void set_action_state__15TObjEneDelDepthFPvi(Ene_803154A8 *o, s32 i);
}

int TObjEneDelDepthBomb__sub_80313268(void) { return 0; }

#pragma push
#pragma fp_contract on
void render__19TObjEneDelDepthBombFv(u8 *arg0) {
    struct { f32 x, y, z; } v;
    int data;
    s32 spC;
    s32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f1;
    s32 temp_r31;
    s32 temp_r30;

    data = ((int (*)(void))get_data__15TObjEneDelDepthFv)();
    if (data == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r31 = get_bml_model(data, 2);
    temp_r30 = ((s32 (*)(int, int))TObjFish__sub_8001EDB0)(data, 2);
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_zyx((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x5C)), (int) (*(s32 *)((s8 *)arg0 + 0x60)), (int) (*(s32 *)((s8 *)arg0 + 0x64)));
    TObjFish::set_global_param((int) (temp_r30));
    draw_chunk_object((int) (temp_r31));
    pop_matrix();
    push_matrix();
    translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)arg0 + 0x38)), (f32) (lbl_805DF250 + *(f32 *)((s8 *)arg0 + 0x340)), (f32) (*(f32 *)((s8 *)arg0 + 0x40)));
    direction_to_rotation_xz((void *) (arg0 + 0x248), (void *) (&spC), (void *) (&sp8));
    rotate_matrix_z((int) (0), (int) (sp8));
    rotate_matrix_x((int) (0), (void *) (spC + 0x4000));
    var_f1 = *(f32 *)((s8 *)arg0 + 0x3C) - *(f32 *)((s8 *)arg0 + 0x340);
    if (var_f1 > 40.0f) {
        var_f1 = 40.0f;
    } else if (var_f1 < 0.0f) {
        var_f1 = 0.0f;
    }
    temp_f1 = 1.0f - (var_f1 / 40.0f);
    v.z = 1.0f;
    v.x = v.y = 0.65f * temp_f1 + 0.1f;
    scale_current_matrix((void *) (&v), temp_f1, 1.0f, 0.65f);
    draw_blob_shadow((int) (0));
    pop_matrix();
}
extern int fold_flush_0;
#pragma pop

void run_task__19TObjEneDelDepthBombFv(Bomb_803133BC *o) {
    s32 done = 0;
    f32 t;
    o->f338 += lbl_805DF264;
    vec3_add_to(&o->pos, o->f334);
    if (++o->cnt > 0x14F) {
        done = 1;
    }
    Vec_803133BC v = o->pos;
    v.y += TObjEneDelDepth__data_805DF268;
    if (project_actor_to_ground(o, &v, o->col) != 0) {
        o->f340 = v.y;
        if (o->pos.y <= o->f340) {
            done = 1;
        }
    } else {
        done = 1;
    }
    if (((int (*)(void *))TObjEneDelDepthBomb__sub_80313268)(o) != 0) {
        done = 1;
    }
    t = o->f344 + o->f354;
    o->f344 = t;
    if (t >= TObjEneDelDepth__data_805DF26C) {
        done = 1;
    }
    if (done != 0) {
        Vec_803133BC w;
        VecCopy__FP3VecPC3Vec(&w, &o->pos);
        w.y += TObjEneDelDepth__data_805DF268;
        create__11TTecRaBartaFPvPvPvPv(o->f348, &o->pos, &w, o->f350);
        queue_destruction__7TObjectFv(o);
    }
}

void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x358);
    if (o != NULL) {
        o = TObjEneDelDepthBomb__ct((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
    return o;
}

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjEneDelDepthBomb;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneDelDepthBomb__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_f30;
    f32 temp_f31;
    construct_actor_base__10TObjPlayerFPvPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb *)&__vt__19TObjEneDelDepthBomb).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEneDelDepthBomb__name;
    *(s32 *)((s8 *)arg0 + 0x348) = arg2;
    *(s32 *)((s8 *)arg0 + 0x60) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x10)) + 0x60);
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x38), (void *) (arg3));
    temp_f30 = ((f32 (*)(int))sin_table_lookup)((int) (*(s32 *)((s8 *)arg0 + 0x60)));
    temp_f31 = ((f32 (*)(int))cos_table_lookup)((int) (*(s32 *)((s8 *)arg0 + 0x60)));
    *(f32 *)((s8 *)arg0 + 0x354) = ((TObjEneDelDepthBomb *)(*(u8 **)((s8 *)arg0 + 0x10)))->get_depth_radius();
    *(f32 *)((s8 *)arg0 + 0x334) = (f32) (*(f32 *)((s8 *)arg0 + 0x354) * temp_f30);
    *(f32 *)((s8 *)arg0 + 0x338) = 0.0f;
    *(f32 *)((s8 *)arg0 + 0x33C) = (f32) (*(f32 *)((s8 *)arg0 + 0x354) * temp_f31);
    *(s32 *)((s8 *)arg0 + 0x350) = arg4;
    *(f32 *)((s8 *)arg0 + 0x344) = 0.0f;
    *(s32 *)((s8 *)arg0 + 0x34C) = 0;
    return arg0;
}

void TObjEneDelDepth::update_ground_check() {
    u8 *arg0 = (u8 *)this;
    Stack_80313694 stack;
    u8 *temp_r3;
    if ((actor_frame_tick % 5) == 0) {
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&stack.sp8, arg0 + 0x38);
        stack.spC += TObjEneDelDepth__data_805DF270;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            *(s32 *)((s8 *)arg0 + 0x3E0) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 4)) + 0x18);
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x3E4, *(u8 **)((s8 *)temp_r3 + 4));
        } else {
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x3E4, arg0 + 0x38);
        }
    }
    if (*(s32 *)((s8 *)arg0 + 0x3E0) & 0x4000) {
        TObjEneRecon::set_active();
    }
}

#pragma push
#pragma fp_contract on
void TObjEneDelDepth__sub_80313740(Ene_80313740 *o) {
    s32 done;
    s32 tries;
    Vec_80313740 a;
    Vec_80313740 b;
    Vec_80313740 c;
    f32 s;
    f32 co;
    f32 k;

    done = 0;
    k = TObjEneDelDepth__data_805DF268;
    tries = 4;
    o->f3D8 += lbl_805DF274;
    do {
        VecCopy__FP3VecPC3Vec(&a, &o->pos);
        vec3_add_to(&a, &o->f3D4);
        VecCopy__FP3VecPC3Vec(&b, &a);
        b.y += k + fabs_float(o->f3D8);
        if (project_actor_to_ground(o, &b, 0) != 0) {
            VecCopy__FP3VecPC3Vec(&o->pos, &a);
            if (!(o->pos.y > b.y)) {
                o->pos.y = b.y;
                done = 1;
            }
            break;
        }
        s = ((f32 (*)(int))sin_table_lookup)(0x4000);
        co = ((f32 (*)(int))cos_table_lookup)(0x4000);
        tries--;
        o->f3D4 = co * o->f3D4 + s * o->f3DC;
        o->f3DC = -s * o->f3D4 + co * o->f3DC;
    } while (tries > 0);
    if (tries == 0) {
        o->f3D4 = o->f3DC = TObjEneDelDepth__data_805DF258;
        VecCopy__FP3VecPC3Vec(&c, &o->pos);
        c.y += TObjEneDelDepth__data_805DF268 + fabs_float(o->f3D8);
        if (project_actor_to_ground(o, &c, 0) != 0) {
            if (!(o->pos.y > c.y)) {
                o->pos.y = c.y;
                done = 1;
            }
        } else {
            done = 1;
        }
    }
    if (done != 0) {
        ((s32 (*)(void *))TObjEneDelDepth__sub_80315380)(o);
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)(o, 1);
    }
}
extern int fold_flush_1;
#pragma pop

void TObjEneDelDepth__sub_803138F8(void* a0) { *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)a0 + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x398) = TObjEneDelDepth__data_805DF258; set_motion__15TObjEneDelDepthFl((void*)((void*)(*(int*)((char*)a0 + 0x37c))), (void*)((void*)6)); ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)(a0), (void*)((void*)0)); }

void TObjEneDelDepth__sub_80313954(u8 *arg0) {
    s32 sp8;
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x378);
    switch (temp_r0) {
    case 0:
        temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x384) - 1;
        *(s32 *)((s8 *)arg0 + 0x384) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            *(s32 *)((s8 *)arg0 + 0x378) = 1;
            play_sound_effect((int) (0x4003A321), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            *(s32 *)((s8 *)arg0 + 0x384) = 5;
        }
        break;
    case 1:
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x398) + lbl_805DF27C;
        *(f32 *)((s8 *)arg0 + 0x398) = temp_f1;
        if (temp_f1 < 0.0f) {
            *(f32 *)((s8 *)arg0 + 0x398) = 0.0f;
        }
        temp_r0_3 = *(s32 *)((s8 *)arg0 + 0x384) - 1;
        *(s32 *)((s8 *)arg0 + 0x384) = temp_r0_3;
        if (temp_r0_3 <= 0) {
            *(s32 *)((s8 *)arg0 + 0x378) = 2;
        }
        break;
    case 2:
    default:
        sp8 = 0x800;
        send_6x0A_enemy_state((void *) (arg0), (void *) (&sp8));
        ((TLobby *)arg0)->exchange_object_state((s32)((void *) (&sp8)), (s16)((int) (0)));
        ((VObj_18_65b835 *)(arg0))->m77(&sp8);
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        TObjPlayer::apply_effect_variant_a((s32)((void *) (arg0 + 0x38)), (s32)((int) (0)));
        ((s32 (*)(void *))queue_destruction__7TObjectFv)((void *) (arg0));
        break;
    }
}

void TObjEneDelDepth::init_move() {
    *(f32 *)((s8 *)this + 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    *(f32 *)((s8 *)this + 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    *(f32 *)((s8 *)this + 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    refresh_lobby_state__10TObjPlayerFv();
    *(s32 *)((s8 *)this + 0x378) = 0;
    if (((TObjEneDelDepth *)(*(s32 *)((s8 *)this + 0x37C)))->get_type() < 6) {
        *(s32 *)((s8 *)this + 0x384) = 0x22;
        set_motion__15TObjEneDelDepthFl((void*)(*(s32 *)((s8 *)this + 0x37C)), (void*)(5));
    } else {
        *(s32 *)((s8 *)this + 0x384) = 0x20;
        set_motion__15TObjEneDelDepthFl((void*)(*(s32 *)((s8 *)this + 0x37C)), (void*)(9));
    }
    ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)(this), (void*)(0));
}

void TObjEneDelDepth::update_ai_state() {
    u8 *arg0 = (u8 *)this;
    s32 sp8;
    s32 temp_r0;
    u16 temp_r3;

    if (((TObjEneDelDepth *)(*(s32 *)((s8 *)arg0 + 0x37C)))->get_type() < 6) {
        if (*(s32 *)((s8 *)arg0 + 0xB0) & 0x10) {
            ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (5));
        }
    } else {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x384) - 1;
        *(s32 *)((s8 *)arg0 + 0x384) = temp_r0;
        if (temp_r0 <= 0) {
            temp_r3 = ((u16 (*)(void *, void *, f32))find_nearest_visible_player)((void *) (arg0), (void *) (&sp8), (f32) (TObjEneDelDepth__data_805DF280));
            if ((temp_r3 != 0xFFFF) && (vector_length((void *) (&sp8)) > TObjEneDelDepth__data_805DF270)) {
                ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (4));
                return;
            }
            ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (3));
            play_sound_effect((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
    }
}

void start_attack_motion__15TObjEneDelDepthFPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFBFBFFFF);
    *(f32 *)((s8 *)arg0 + 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    *(f32 *)((s8 *)arg0 + 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    *(f32 *)((s8 *)arg0 + 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    play_sound_effect((int) (0x4003A321), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    if (((TObjEneDelDepth *)(*(s32 *)((s8 *)arg0 + 0x37C)))->get_type() < 6) {
        set_motion__15TObjEneDelDepthFl((void*)((int) (*(s32 *)((s8 *)arg0 + 0x37C))), (void*)((int) (4)));
    } else {
        *(s32 *)((s8 *)arg0 + 0x384) = 0x10;
        set_motion__15TObjEneDelDepthFl((void*)((int) (*(s32 *)((s8 *)arg0 + 0x37C))), (void*)((int) (8)));
    }
    ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)((void *) (arg0)), (void*)((int) (0)));
}

void TObjEneDelDepth::update_state_flag() {
    if (*(s32 *)((s8 *)this + 0xB0) & 0x10) {
        if (((s32 (*)(void))get_flag_bit4__15TObjEneDelDepthFv)() != 0) {
            ((s32 (*)(void *, s32))set_action_state__15TObjEneDelDepthFPvi)(this, 7);
            return;
        }
        ((s32 (*)(void *, s32))set_action_state__15TObjEneDelDepthFPvi)(this, 6);
    }
}

void TObjEneDelDepth::init_state() {
    *(s32 *)((s8 *)this + 0x30) = (s32) (*(s32 *)((s8 *)this + 0x30) & 0xFBFBFFFF);
    *(f32 *)((s8 *)this + 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    *(f32 *)((s8 *)this + 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    *(f32 *)((s8 *)this + 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    *(s32 *)((s8 *)this + 0x388) = 0;
    ((s32 (*)(s32, s32))set_motion__15TObjEneDelDepthFl)(*(s32 *)((s8 *)this + 0x37C), 3);
    ((s32 (*)(void *, s32))set_draw_mode__15TObjEneDelDepthFPvi)(this, 2);
}

void TObjEneDelDepth::update_attack_cast() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;

    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) - 1);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x388);
    if ((temp_r0 <= 0) && (temp_r0 == 0)) {
        if ((s32) game_difficulty_selection == 3) {
            TTecMegid::create_ex((s32)((void *) (arg0)), (s32)((void *) (arg0 + 0x38)), (s32)((int) (*(s32 *)((s8 *)arg0 + 0x60))), (s32)((int) (*(s32 *)((s8 *)TObjEneDelDepth__tune_params + 0x18))));
        } else {
            ((TTecBarta *)arg0)->create_ex((void *)(arg0 + 0x38), (void *)(*(s32 *)((s8 *)arg0 + 0x60)), (void *)(*(s32 *)((s8 *)TObjEneDelDepth__tune_params + 0x18)));
        }
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x384) - 1;
    *(s32 *)((s8 *)arg0 + 0x384) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (get_flag_bit4__15TObjEneDelDepthFv((void *) (arg0)) != 0) {
            ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (7));
            return;
        }
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (5));
    }
}

void TObjEneDelDepth__sub_80313DE4(void* p) { *(int*)((char*)p + 0x384) = 30; *(int*)((char*)p + 0x388) = 12; set_motion__15TObjEneDelDepthFl(*(void**)((char*)p + 0x37c), (void*)1); ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)(p, (void*)2); }

void TObjEneDelDepth::update_bomb_drop() {
    u8 *arg0 = (u8 *)this;
    V3_80313E34 out;
    s32 temp_r0;
    s32 temp_r0_2;
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) - 1);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x388);
    if ((temp_r0 <= 0) && (temp_r0 == 0)) {
        TObjPlayer::set_global_flag();
        push_matrix_from((void *) (identity_matrix));
        post_translate_matrix((void *) (arg0 + 0x38));
        ((s32 (*)(int, int))rotate_matrix_y)((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        ((TObjPlayer *)arg0)->render_anim_model((f32) (lbl_805DF284));
        pop_matrix();
        push_matrix_from((void *) (anim_model_matrix_array + 0x450));
        {
        V3_80313E34 v = lbl_80475DB0;
        matrix_mult_vec(0, &v, &out);
        }
        pop_matrix();
        TObjPlayer::clear_global_state();
        play_sound_effect((int) (0x4003A81D), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        ((s32 (*)(void *, void *, void *, int))create__19TObjEneDelDepthBombFPvPvPvPv)((void *) (arg0), (void *) (arg0), (void *) (&out), (int) (*(s32 *)((s8 *)TObjEneDelDepth__tune_params + 0x18)));
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x384) - 1;
    *(s32 *)((s8 *)arg0 + 0x384) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (get_flag_bit4__15TObjEneDelDepthFv((void *) (arg0)) != 0) {
            ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (7));
            return;
        }
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (5));
    }
}

void TObjEneDelDepth::init_draw_state() { *(int*)((char*)this + 0x384) = 30; *(int*)((char*)this + 0x388) = 8; set_motion__15TObjEneDelDepthFl((void*)(*(void**)((char*)this + 0x37c)), (void*)((void*)2)); ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)(this), (void*)((void*)2)); }

void move_toward_target__15TObjEneDelDepthFPv(u8 *arg0) {
    Vec_80313FAC v;
    s32 ang;
    s32 id;
    v.x = 1.0f;
    v.y = 0.0f;
    v.z = 0.0f;
    id = *(s32 *)((s8 *)arg0 + 0x3C4);
    if (id != 0xFFFF) {
        TObjPlayer::calc_distance_to_client((s32)arg0, (u16)((u16)id), (u32)(&v));
    }
    ang = (s32)(TObjEneDelDepth__data_80475DD0 * atan2_float(v.x, v.z));
    *(s32 *)((s8 *)arg0 + 0x60) = approach_angle_limited(*(s32 *)((s8 *)arg0 + 0x60), ang, 0x200);
    if (angle_difference_abs(*(s32 *)((s8 *)arg0 + 0x60), ang) < 0x200) {
        *(s32 *)((s8 *)arg0 + 0x384) = 0;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    if (vector_length(&v) <= lbl_805DF288) {
        v.x = 1.0f;
        v.y = 0.0f;
        v.z = 0.0f;
    } else {
        normalize_vector(&v);
    }
    v.x *= lbl_805DF28C;
    v.y *= lbl_805DF28C;
    v.z *= lbl_805DF28C;
    vec3_add_to(arg0 + 0x38, &v);
    if (project_actor_to_ground(arg0, arg0 + 0x38, (void *)0) == 0 || csnLookAt(arg0 + 0x44, arg0 + 0x38) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x44);
    }
    if (--*(s32 *)((s8 *)arg0 + 0x384) <= 0) {
        if (vector_length(&v) > TObjEneDelDepth__data_805DF280 || calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805DF290) {
            set_action_state__15TObjEneDelDepthFPvi((Ene_803154A8 *)arg0, 9);
        } else {
            set_action_state__15TObjEneDelDepthFPvi((Ene_803154A8 *)arg0, 0xA);
        }
    }
}

void TObjEneDelDepth::setup_depth_draw() { ((int (*)(void*, void*, void*))set_depth_offset__15TObjEneDelDepthFPvii)((void*)(this), (void*)((void*)30), (void*)((void*)30)); set_motion__15TObjEneDelDepthFl((void*)(*(void**)((char*)this + 0x37c)), (void*)((void*)0)); ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)(this), (void*)((void*)2)); }

void TObjEneDelDepth__sub_803141A8(Obj_800E9DC8 *arg0) {
    f32 sp[3];
    s32 r = 0;
    s32 t;
    arg0->f60 = arg0->f60 + arg0->f3C4;
    if (((TObjEneDelDepth *)arg0)->find_nearest_enemy_with_flag((s32)sp, (f32)lbl_805DF294) != 0xFFFF) {
        t = (s32) (((const f64 *)&TObjEneDelDepth__data_80475DD0)[0] * atan2_float(sp[0], sp[2]));
        if (angle_difference_abs(arg0->f60, t) < 0x444) {
            arg0->f60 = t;
            r = 1;
        }
    }
    arg0->f390 = arg0->f390 - 1;
    if (r != 0 || arg0->f390 < 0) {
        set_action_state__15TObjEneDelDepthFPvi((Ene_803154A8 *)(arg0), (s32)(9));
    }
}

void TObjEneDelDepth::init_depth() {
    ((int (*)(void*, void*, void*))set_depth_offset__15TObjEneDelDepthFPvii)((void*)(this), (void*)(0x1E), (void*)(0x1E));
    *(s32 *)((s8 *)this + 0x3BC) = 0x888;
    if (calc_boss4_scale__10TObjPlayerFi(this) > TObjEneDelDepth__data_805DF298) {
        *(s32 *)((s8 *)this + 0x3BC) = *(s32 *)((s8 *)this + 0x3BC) * 0xFFFFFFFF;
    }
    set_motion__15TObjEneDelDepthFl((void*)(*(s32 *)((s8 *)this + 0x37C)), (void*)(0));
    ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)(this), (void*)(2));
}

#pragma push
#pragma fp_contract on
void TObjEneDelDepth__sub_803142DC(u8 *arg0) {
    Vec_803142DC v;
    Vec_803142DC w;
    f32 f;
    s32 lim;
    u16 id;
    f = sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x394));
    if (f < TObjEneDelDepth__data_805DF258) {
        f = TObjEneDelDepth__data_805DF258;
    }
    *(s32 *)((s8 *)arg0 + 0x60) = (s32)(f * (f32)*(s32 *)((s8 *)arg0 + 0x3BC) + (f32)*(s32 *)((s8 *)arg0 + 0x60));
    if (*(s32 *)((s8 *)arg0 + 0x3C4) == 0xFFFF) {
        id = find_nearest_visible_player(arg0, (int)&v, lbl_805DF29C);
        if (id != 0xFFFF && angle_difference_abs(*(s32 *)((s8 *)arg0 + 0x60), (s32)(TObjEneDelDepth__data_80475DD0 * atan2_float(v.x, v.z))) < 0x1C71) {
            *(s32 *)((s8 *)arg0 + 0x394) = 0;
            *(s32 *)((s8 *)arg0 + 0x3C4) = id;
        }
    }
    *(s32 *)((s8 *)arg0 + 0x394) -= 0x600;
    if (*(s32 *)((s8 *)arg0 + 0x394) <= 0) {
        u32 n = *(u32 *)(get_bml_motion((*(s32 *)&TObjEneDelDepth__shared_resource), 0xB) + 4);
        lim = (s32)((f32)n / TObjEneDelDepth__data_805DF298);
        *(s32 *)((s8 *)arg0 + 0x394) = 0;
        if (*(s32 *)((s8 *)arg0 + 0x3C4) != 0xFFFF) {
            w.x = 1.0f;
            w.y = 0.0f;
            w.z = 0.0f;
            TObjPlayer::calc_distance_to_client((s32)arg0, (u16)((u16)*(s32 *)((s8 *)arg0 + 0x3C4)), (u32)(&w));
            *(s32 *)((s8 *)arg0 + 0x60) = approach_angle_limited(*(s32 *)((s8 *)arg0 + 0x60), (s32)(TObjEneDelDepth__data_80475DD0 * atan2_float(w.x, w.z)), 0x280);
        }
        if (*(s32 *)((s8 *)arg0 + 0x384) > lim) {
            set_motion__15TObjEneDelDepthFl((void *)*(s32 *)((s8 *)arg0 + 0x37C), (void *)0);
            *(s32 *)((s8 *)arg0 + 0x384) = lim;
        } else if (--*(s32 *)((s8 *)arg0 + 0x384) <= 0) {
            if (*(s32 *)((s8 *)arg0 + 0x3C4) == 0xFFFF) {
                set_action_state__15TObjEneDelDepthFPvi((Ene_803154A8 *)(arg0), (s32)(5));
            } else {
                set_action_state__15TObjEneDelDepthFPvi((Ene_803154A8 *)(arg0), (s32)(8));
            }
        }
    }
}
#pragma pop

void TObjEneDelDepth__sub_80314500(u8 *arg0) {
  *((s32 *) (((s8 *) arg0) + 0x3C4)) = 0xFFFF;
  *((s32 *) (((s8 *) arg0) + 0x394)) = (s32) ((((s32) (lbl_805DF2A0 * calc_boss4_scale__10TObjPlayerFi((void *)((s32) arg0)))) + 4) << 0x10);
  *((s32 *) (((s8 *) arg0) + 0x384)) = 0x7FFFFFFF;
  *((s32 *) (((s8 *) arg0) + 0x3BC)) = (s32) (*((s32 *) (((s8 *) TObjEneDelDepth__tune_params) + 0x1C)));
  if (calc_boss4_scale__10TObjPlayerFi((void *)((s32) arg0)) > TObjEneDelDepth__data_805DF298)
  {
    *((s32 *) (((s8 *) arg0) + 0x3BC)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x3BC))) & 0xFFFFFFFF) * (-1));
  }
  set_motion__15TObjEneDelDepthFl((void*)((int) (*((s32 *) (((s8 *) arg0) + 0x37C)))), (void*)((int) 0));
  ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)(arg0), (void*)(2));
}

void TObjEneDelDepth::try_enter_appear() {
    u8 *arg0 = (u8 *)this;
    if (((TObjEneDelDepth *)(*(s32 *)((s8 *)arg0 + 0x37C)))->is_state_complete() == 1) {
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x04000000);
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *)((void *) (arg0)), (int)((int) (3)));
        play_sound_effect((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
}

void enter_appear_state__15TObjEneDelDepthFPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x04000000);
    *(s32 *)((s8 *)arg0 + 0x388) = 0x14;
    play_sound_effect((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    set_motion__15TObjEneDelDepthFl((void*)((int) (*(s32 *)((s8 *)arg0 + 0x37C))), (void*)((int) (0xB)));
    ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)((void *) (arg0)), (void*)((int) (1)));
}

void TObjEneDelDepth::update_state() {
    if (((TObjEneDelDepth *)(*(s32 *)((s8 *)this + 0x37C)))->is_state_complete() == 1) {
        *(s32 *)((s8 *)this + 0x30) = (s32) (*(s32 *)((s8 *)this + 0x30) & 0xFBFFFFFF);
        if (get_flag_bit4__15TObjEneDelDepthFv(this) != 0) {
            ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *)(this), (int)(7));
            return;
        }
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *)(this), (int)(6));
    }
}

void TObjEneDelDepth::enter_state8() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x04000000);
    *(s32 *)((s8 *)arg0 + 0x388) = 8;
    set_motion__15TObjEneDelDepthFl((void*)((int) (*(s32 *)((s8 *)arg0 + 0x37C))), (void*)((int) (0xA)));
    play_sound_effect((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)((void *) (arg0)), (void*)((int) (1)));
}

#pragma push
#pragma fp_contract on
void TObjEneDelDepth::update_movement() {
    Obj_80314758 *arg0 = (Obj_80314758 *)this;
    Vec_80314758 p;
    Vec_80314758 n;
    s32 i;
    Pl_80314758 *pl;
    s32 k;
    s32 ang;
    s32 rot;
    if ((actor_frame_tick % 5) == 0) {
        TObjPlayer::init_all_slots();
        ((TObjPlayer *)arg0)->check_object_collisions();
        for (i = 0; i < 16; i++) {
            pl = get_battle_param__10TObjPlayerFi(i);
            if (pl == 0) {
                break;
            }
            if (obj_is_hit_receivable(pl) != 0 && is_player_entity_id(obj_getField1c(pl)) != 0) {
                pl->m18(arg0, TObjEneDelDepth__data_805DF260);
                pl->m20(arg0, TObjEneDelDepth__data_805DF260);
                pl->m23(arg0, TObjEneDelDepth__data_805DF268);
            }
        }
    }
    if (arg0->f38c > (*(const f32 *)&TObjEneDelDepth__data_805DF258)) {
        arg0->f394 += 0xC00;
        f32 t = sin_table_lookup(arg0->f394);
        f32 u = TObjEneDelDepth__data_805DF298 * (TObjEneDelDepth__data_805DF298 + t);
        u = (*(Tune_80314758 * *)&TObjEneDelDepth__tune_params)->accel * u;
        if ((arg0->speed += u) > (*(Tune_80314758 * *)&TObjEneDelDepth__tune_params)->maxSpeed) {
            arg0->speed = (*(Tune_80314758 * *)&TObjEneDelDepth__tune_params)->maxSpeed;
        }
    } else {
        if ((arg0->speed -= (*(Tune_80314758 * *)&TObjEneDelDepth__tune_params)->accel) < (*(const f32 *)&TObjEneDelDepth__data_805DF258)) {
            arg0->speed = (*(const f32 *)&TObjEneDelDepth__data_805DF258);
        }
    }
    arg0->f38c -= fabs_float(arg0->speed);
    VecCopy__FP3VecPC3Vec(&arg0->prev, &arg0->pos);
    for (k = 1; k < 15; k++) {
        f32 s;
        f32 c;
        f32 d;
        arg0->pos.x += arg0->speed * arg0->dir.x;
        arg0->pos.z += arg0->speed * arg0->dir.z;
        VecCopy__FP3VecPC3Vec(&p, &arg0->pos);
        VecCopy__FP3VecPC3Vec(&n, &arg0->dir);
        normalize_vector(&n);
        d = lbl_805DF2A4 * ((f32 *)TObjEneDelDepth_collision_body_parts)[3];
        p.x += d * n.x;
        p.z += d * n.z;
        if (TObjEneDelDepth__sub_80315380((Obj_80315380 *)arg0) != 0) {
            Hit_80314758 *hit;
            ang = 0;
            hit = csnVector(&arg0->prev, &p, 0x88E0);
            if (hit != 0) {
                Vec_80314758 w;
                VecCopy__FP3VecPC3Vec(&p, &arg0->pos);
                w.x = hit->obj->f14;
                w.z = -hit->obj->fc;
                ((TObjBoss2Tunnel *)(&w))->clamp_velocity();
                if (n.x * w.x + n.z * w.z >= (*(const f32 *)&TObjEneDelDepth__data_805DF258)) {
                    n.x = w.x;
                    n.z = w.z;
                } else {
                    n.x = -w.x;
                    n.z = -w.z;
                }
                d = lbl_805DF2A8 * ((f32 *)TObjEneDelDepth_collision_body_parts)[3];
                p.x += d * n.x;
                p.z += d * n.z;
                arg0->f394 = (s32)(TObjEneDelDepth__data_80475DD0 * atan2_float(n.x, n.z));
                if (csnVector(&arg0->prev, &p, 0x88E0) == 0) {
                    ang = 1;
                }
            } else {
                ang = 1;
            }
            if (ang == 1) {
                Hit_80314758 *u;
                p.y += lbl_805DF2AC;
                u = ((Hit_80314758 *(*)(void *, void *, s32))csnVectorUnder)(&p, arg0->f120, 0x16EF);
                if (u != 0 && (u->obj->f18 & 0xE0) == 0) {
                    break;
                }
            }
        }
        rot = k << 12;
        if (k & 1) {
            rot *= -1;
        }
        s = sin_table_lookup(rot);
        c = cos_table_lookup(rot);
        arg0->dir.x = c * arg0->dir.x - s * arg0->dir.z;
        arg0->dir.y = (*(const f32 *)&TObjEneDelDepth__data_805DF258);
        arg0->dir.z = s * arg0->dir.x + c * arg0->dir.z;
        normalize_vector(&arg0->dir);
        arg0->rotY = (s32)(TObjEneDelDepth__data_80475DD0 * atan2_float(arg0->dir.x, arg0->dir.z));
        VecCopy__FP3VecPC3Vec(&arg0->pos, &arg0->prev);
    }
    if (arg0->f38c <= (*(const f32 *)&TObjEneDelDepth__data_805DF258) && (*(const f32 *)&TObjEneDelDepth__data_805DF258) == arg0->speed) {
        Vec_80314758 q;
        if (find_nearest_visible_player(arg0, (int)&q, TObjEneDelDepth__data_805DF280) != 0xFFFF && vector_length(&q) > TObjEneDelDepth__data_805DF270) {
            set_action_state__15TObjEneDelDepthFPvi((Ene_803154A8 *)arg0, 4);
        } else {
            set_action_state__15TObjEneDelDepthFPvi((Ene_803154A8 *)arg0, 3);
            play_sound_effect(0x4003A822, &arg0->pos, 0, 0);
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void start_move_toward_player__15TObjEneDelDepthFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r31;
    *(f32 *)((s8 *)arg0 + 0x3AC) = (*(const f32 *)&TObjEneDelDepth__data_805DF258);
    if (find_nearest_visible_player(arg0, (int)(arg0 + 0x3B0), TObjEneDelDepth__data_805DF26C) == 0xFFFF) {
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)(arg0, 2);
        return;
    }
    temp_r31 = (s32) (lbl_805DF2B0 * calc_boss4_scale__10TObjPlayerFi(arg0));
    *(f32 *)((s8 *)arg0 + 0x3B0) += TObjEneDelDepth__data_805DF270 * sin_table_lookup(temp_r31);
    *(f32 *)((s8 *)arg0 + 0x3B8) += TObjEneDelDepth__data_805DF270 * cos_table_lookup(temp_r31);
    if (vector_length(arg0 + 0x3B0) <= lbl_805DF288) {
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)(arg0, 2);
        return;
    }
    normalize_vector(arg0 + 0x3B0);
    temp_f1 = (lbl_805DF2B8 * calc_boss4_scale__10TObjPlayerFi(arg0)) + lbl_805DF2B4;
    *(f32 *)((s8 *)arg0 + 0x38C) = temp_f1;
    *(f32 *)((s8 *)arg0 + 0x398) = (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    ((int (*)(s32, int, f32))set_motion__15TObjEneDelDepthFl)(*(s32 *)((s8 *)arg0 + 0x37C), 7, temp_f1);
    ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)(arg0, (void *)3);
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma fp_contract on
void update_scale_pulse__15TObjEneDelDepthFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f31;
    var_f31 = (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    *(f32 *)((s8 *)arg0 + 0x39C) = (f32) (TObjEneDelDepth__data_805DF278 * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - *(f32 *)((s8 *)arg0 + 0x38C)));
    *(f32 *)((s8 *)arg0 + 0x3A0) = (f32) ((*(f32 *)((s8 *)arg0 + 0x38C) * (*(f32 *)((s8 *)(&lbl_80475D78.value) + 0) - *(f32 *)((s8 *)(&lbl_80475D6C.value) + 0))) + *(f32 *)((s8 *)(&lbl_80475D6C.value) + 0));
    *(f32 *)((s8 *)arg0 + 0x3A4) = (f32) ((*(f32 *)((s8 *)arg0 + 0x38C) * (*(f32 *)((s8 *)(&lbl_80475D78.value) + 4) - *(f32 *)((s8 *)(&lbl_80475D6C.value) + 4))) + *(f32 *)((s8 *)(&lbl_80475D6C.value) + 4));
    *(f32 *)((s8 *)arg0 + 0x3A8) = (f32) ((*(f32 *)((s8 *)arg0 + 0x38C) * (*(f32 *)((s8 *)(&lbl_80475D78.value) + 8) - *(f32 *)((s8 *)(&lbl_80475D6C.value) + 8))) + *(f32 *)((s8 *)(&lbl_80475D6C.value) + 8));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x38C);
    if (temp_f1 > lbl_805DF2C0) {
        var_f31 = ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - temp_f1) / lbl_805DF2BC;
    }
    temp_f1_2 = var_f31 * (lbl_805DF2C4 * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x384) << 0xA));
    *(f32 *)((s8 *)arg0 + 0x3A0) = (f32) (*(f32 *)((s8 *)arg0 + 0x3A0) * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) + temp_f1_2));
    *(f32 *)((s8 *)arg0 + 0x3A8) = (f32) (*(f32 *)((s8 *)arg0 + 0x3A8) * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - temp_f1_2));
    *(s32 *)((s8 *)arg0 + 0x384) = (s32) (*(s32 *)((s8 *)arg0 + 0x384) + 1);
    temp_f1_3 = *(f32 *)((s8 *)arg0 + 0x38C);
    if (temp_f1_3 >= (*(const f32 *)&TObjEneDelDepth__data_805DF298)) {
        *(f32 *)((s8 *)arg0 + 0x398) = (f32) (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    } else {
        *(f32 *)((s8 *)arg0 + 0x398) = (f32) (lbl_805DF2C8 * temp_f1_3);
    }
    temp_f1_4 = *(f32 *)((s8 *)arg0 + 0x38C) + lbl_805DF2CC;
    *(f32 *)((s8 *)arg0 + 0x38C) = temp_f1_4;
    if (temp_f1_4 < (*(const f32 *)&TObjEneDelDepth__data_805DF258)) {
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *)(arg0), (int)(0));
    }
}
extern int fold_flush_3;
#pragma pop

void TObjEneDelDepth::init_draw_mode_and_motion() { *(float*)((char*)this + 0x38c) = TObjEneDelDepth__data_805DF260; *(float*)((char*)this + 0x39c) = TObjEneDelDepth__data_805DF258; ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)((void*)(this)), (void*)((int)(0))); set_motion__15TObjEneDelDepthFl((void*)((void*)(*(int*)((char*)this + 0x37c))), (void*)((void*)0x6)); }

#pragma push
#pragma fp_contract on
void TObjEneDelDepth__sub_80314EC4(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f31;
    var_f31 = (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    *(f32 *)((s8 *)arg0 + 0x39C) = (f32) (TObjEneDelDepth__data_805DF278 * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - *(f32 *)((s8 *)arg0 + 0x38C)));
    *(f32 *)((s8 *)arg0 + 0x3A0) = (f32) ((*(f32 *)((s8 *)arg0 + 0x38C) * (*(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D78 *)&lbl_80475D78).value) + 0) - *(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value) + 0))) + *(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value) + 0));
    *(f32 *)((s8 *)arg0 + 0x3A4) = (f32) ((*(f32 *)((s8 *)arg0 + 0x38C) * (*(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D78 *)&lbl_80475D78).value) + 4) - *(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value) + 4))) + *(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value) + 4));
    *(f32 *)((s8 *)arg0 + 0x3A8) = (f32) ((*(f32 *)((s8 *)arg0 + 0x38C) * (*(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D78 *)&lbl_80475D78).value) + 8) - *(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value) + 8))) + *(f32 *)((s8 *)(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value) + 8));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x38C);
    if (temp_f1 > lbl_805DF2C0) {
        var_f31 = ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - temp_f1) / lbl_805DF2BC;
    }
    temp_f1_2 = var_f31 * (lbl_805DF250 * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x384) << 0xC));
    *(f32 *)((s8 *)arg0 + 0x3A0) = (f32) (*(f32 *)((s8 *)arg0 + 0x3A0) * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) + temp_f1_2));
    *(f32 *)((s8 *)arg0 + 0x3A8) = (f32) (*(f32 *)((s8 *)arg0 + 0x3A8) * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - temp_f1_2));
    *(s32 *)((s8 *)arg0 + 0x384) = (s32) (*(s32 *)((s8 *)arg0 + 0x384) + 1);
    temp_f1_3 = *(f32 *)((s8 *)arg0 + 0x38C);
    if (temp_f1_3 >= TObjEneDelDepth__data_805DF298) {
        *(f32 *)((s8 *)arg0 + 0x398) = (f32) (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    } else {
        *(f32 *)((s8 *)arg0 + 0x398) = (f32) (lbl_805DF2C8 * temp_f1_3);
    }
    temp_f1_4 = *(f32 *)((s8 *)arg0 + 0x38C) + lbl_805DF2D0;
    *(f32 *)((s8 *)arg0 + 0x38C) = temp_f1_4;
    if (temp_f1_4 > (*(const f32 *)&TObjEneDelDepth__data_805DF260)) {
        if (find_nearest_visible_player((void *) (arg0), (int) (0), (f32) (TObjEneDelDepth__data_805DF26C)) != 0xFFFF) {
            ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (3));
            play_sound_effect((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        } else {
            ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *) (arg0), (int) (2));
        }
    }
}
extern int fold_flush_4;
#pragma pop

void TObjEneDelDepth::init_draw_params() {
    u8 *arg0 = (u8 *)this;
    ((int (*)(void*, void*))set_draw_mode__15TObjEneDelDepthFPvi)((void*)(arg0), (void*)(0));
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFBFBFFFF);
    *(f32 *)((s8 *)arg0 + 0x38C) = (f32) (*(const f32 *)&TObjEneDelDepth__data_805DF258);
    *(f32 *)((s8 *)arg0 + 0x39C) = (f32) TObjEneDelDepth__data_805DF278;
}

void TObjEneDelDepth::try_relocate_on_timer() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x384) - 1;
    *(s32 *)((s8 *)arg0 + 0x384) = temp_r0;
    if (temp_r0 <= 0) {
        if (find_nearest_visible_player((void *) (arg0), (int) (0), (f32) (TObjEneDelDepth__data_805DF26C)) == 0xFFFF) {
            temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x3C0) + 1;
            *(s32 *)((s8 *)arg0 + 0x3C0) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                *(f32 *)((s8 *)arg0 + 0x38) = (f32) *(f32 *)((s8 *)arg0 + 0x50);
                *(f32 *)((s8 *)arg0 + 0x40) = (f32) *(f32 *)((s8 *)arg0 + 0x58);
                *(s32 *)((s8 *)arg0 + 0x3C0) = 5;
            }
            TObjEneDelDepth::set_default_depth_offset((void *) (arg0));
            return;
        }
        ((TBoss3Volopt *)(arg0 + 0x38))->play_area_se_with_particle();
        ((s32 (*)(void *, int))set_action_state__15TObjEneDelDepthFPvi)((void *)((void *) (arg0)), (int)((int) (1)));
    }
}

void TObjEneDelDepth::init_params() { TObjEneDelDepth__sub_80315380((Obj_80315380 *)(this)); *(float*)((char*)this + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)this + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)this + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)this + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)this + 0x398) = TObjEneDelDepth__data_805DF258; *(int*)((char*)this + 0x3c0) = 0; set_motion__15TObjEneDelDepthFl((void*)(*(int*)((char*)this + 0x37c)), (void*)6); set_draw_mode__15TObjEneDelDepthFPvi((void *)(this), (s32)((void*)0)); *(int*)((char*)this + 0x30) = (*(int*)((char*)this + 0x30) | 0x4040000); TObjEneDelDepth::set_default_depth_offset((void*)(this)); }

int TObjEneDelDepth::set_default_depth_offset(void* p) { return ((int (*)(void*, int, int))set_depth_offset__15TObjEneDelDepthFPvii)(p, 15, 15); }

void TObjEneDelDepth__vt59(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x374) != 0xB) {
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFFEFF);
        ((int (*)(void*, void*))set_action_state__15TObjEneDelDepthFPvi)((void*)(arg0), (void*)(0xB));
    }
}

void TObjEneDelDepth__vt60(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x374) != 0xC) {
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFFDFF);
        ((int (*)(void*, void*))set_action_state__15TObjEneDelDepthFPvi)((void*)(arg0), (void*)(0xC));
    }
}

void TObjEneDelDepth__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 13) { ((int (*)(void*, void*))set_action_state__15TObjEneDelDepthFPvi)(p, (void*)13); } }

void TObjEneDelDepth__sub_803152A0(u8 *arg0) {
    u8 *temp_r3;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3F0) == 0) {
        temp_r3 = *(u8 **)((s8 *)arg0 + 0x380);
        *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) & 0xFFFFFFFE);
    }
}

void TObjEneDelDepth__sub_803152C0(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = *(u8 **)((s8 *)arg0 + 0x380);
    *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) | 1);
}

void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r6_2;

    temp_r6 = *(void **)((s8 *)arg0 + 0x380);
    *(s32 *)((s8 *)temp_r6 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r6 + 0x18) & 0xF5FFF297);
    switch (arg1) {
    case 0:
        temp_r5 = *(void **)((s8 *)arg0 + 0x380);
        *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 0x0A000000 | 0x528);
        *(s32 *)((s8 *)arg0 + 0x3F0) = 0;
        return;
    case 1:
        temp_r5_2 = *(void **)((s8 *)arg0 + 0x380);
        *(s32 *)((s8 *)temp_r5_2 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5_2 + 0x18) | 0x0A000000 | 0x28);
        *(s32 *)((s8 *)arg0 + 0x3F0) = 0;
        return;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x3F0) = 1;
        return;
    case 3:
        temp_r6_2 = *(void **)((s8 *)arg0 + 0x380);
        *(s32 *)((s8 *)temp_r6_2 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r6_2 + 0x18) | lbl_805DF2D4);
        *(s32 *)((s8 *)arg0 + 0x3F0) = 1;
        return;
    }
}

#pragma push
#pragma fp_contract on
s32 TObjEneDelDepth__sub_80315380(Obj_80315380 *arg0) {
    Vec_80315380 v = arg0->pos;
    v.x = TObjEneDelDepth__data_805DF270 * cos_table_lookup(arg0->x60) + v.x;
    v.y = v.y + TObjEneDelDepth__data_805DF268;
    v.x = TObjEneDelDepth__data_805DF270 * sin_table_lookup(arg0->x60) + v.x;
    if (((s32 (*)(void *, Vec_80315380 *, s32))project_actor_to_ground)(arg0, &v, 0) != 0) {
        arg0->pos.y += TObjEneDelDepth__data_805DF298 * (v.y - arg0->pos.y);
        return 1;
    }
    return 0;
}
extern int fold_flush_5;
#pragma pop

void set_depth_offset__15TObjEneDelDepthFPvii(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)arg0 + 0x384) = (s32) (arg1 + (s32) ((f32) arg2 * ((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)()));
}

void set_action_state__15TObjEneDelDepthFPvi(Ene_803154A8 *o, s32 i) {
    Fn_803154A8 fn;
    o->idx = i;
    fn = lbl_804E836C[o->idx].f;
    if (fn) {
    }
    (o->*fn)();
}

void TObjEneDelDepth__sub_80315518(void) {  }

s32 TObjEneDelDepth::draw_if_visible() {
    Dep_8031551C *o = (Dep_8031551C *)this;
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (push_reflect_matrix__12TObjEneReconFPv(o->f3E4) != 0) {
            push_matrix();
            Vec_8031551C v = o->pos;
            v.y += o->f39C;
            post_translate_matrix(&v);
            rotate_matrix_y(0, o->f60);
            scale_matrix_vec3(0, o->f3A0);
            ((TObjEneDelDepth *)(o->f37C))->draw_model_part();
            pop_matrix();
            restore_render_scissor(1);
        }
        return 1;
    }
    return 0;
}

void TObjEneDelDepth::render() {
    Dep_803155D4 *o = (Dep_803155D4 *)this;
    if (TObjPlayer::check_demo_mode() != 0) {
        ((void (*)(void *))TObjEneDelDepth__sub_80315518)(o);
        return;
    }
    if (o->f398 <= TObjEneDelDepth__data_805DF258) {
        return;
    }
    if (((VObj_18_26a62c *)o)->m8(lbl_805DF294, lbl_805DF2D8) == 0) {
        return;
    }
    if (draw_if_visible() != 0) {
        return;
    }
    if (o->f398 < TObjEneDelDepth__data_805DF260) {
        setup_draw_material_default__15TObjEneDelDepthFf();
    }
    TObjPlayer::toggle_particle_effect();
    push_matrix();
    Vec_803155D4 v = o->pos;
    v.y += o->f39C;
    post_translate_matrix(&v);
    rotate_matrix_y(0, o->f60);
    scale_matrix_vec3(0, o->f3A0);
    ((TObjEneDelDepth *)(o->f37C))->draw_model_part();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    if (o->f398 < TObjEneDelDepth__data_805DF260) {
        TObjEneDelDepth::reset_globals();
    }
    if (!(o->flags & 0x4000)) {
        Vec_803155D4 s = lbl_80475DA4[0];
        ((TObjPlayer *)o)->render_with_position_override((u8 *)(&s), (s32)0);
    }
}

void TObjEneDelDepth::run_task() {
    Ene_80315720 *o = (Ene_80315720 *)this;
    Fn_803154A8 fn;
    if (TObjPlayer::check_demo_mode() != 0) {
        update_target_depth();
        return;
    }
    TObjEneDelDepth__sub_803152C0((u8 *)o);
    fn = (&lbl_804E836C[o->idx].f)[1];
    if (fn) {
    }
    (((Ene_803154A8 *)o)->*fn)();
    ((TObjPlayer *)o)->update_prev_position();
    ((TObjPlayer *)o)->update_collisions();
    if (o->f3F0 != 0) {
        submit_cursor_candidate(o, -1);
    }
    ((TObjEneDelDepth *)(o->f37C))->update_animation_frame();
    TObjEneDelDepth__sub_803152A0((u8 *)o);
    if (o->idx != 0xD) {
        minimap_render_dot(o->pos, -0x5DB4, 1, 0);
    }
    update_ground_check();
}

void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjEneDelDepth;
        free_collision_body_parts(arg0);
        *(s32 *)((s8 *)arg0 + 0x380) = 0;
        TObjEneDelDepth::conditional_delete(*(s32 *)((s8 *)arg0 + 0x37C), 1);
        *(s32 *)((s8 *)arg0 + 0x37C) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            ((s32 (*)(void *))__dl__7TObjectFPv)(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
void TObjEneDelDepth::update_target_depth() {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x390) = (f32) (lbl_805DF2DC + *(f32 *)((s8 *)arg0 + 0x354));
    if (*(f32 *)((s8 *)arg0 + 0x390) < TObjEneDelDepth__data_805DF258) {
        *(f32 *)((s8 *)arg0 + 0x390) = (f32) TObjEneDelDepth__data_805DF258;
    }
}
extern int fold_flush_6;
#pragma pop

void TObjEneDelDepth::init() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r0;
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0(TObjEneDelDepth__shared_resource = get_data__15TObjEneDelDepthFv(), 0);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((int) (TObjEneDelDepth__shared_resource), (int) (0));
    ((u8 * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x44, ((u8 * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x50, ((u8 * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x74, arg0 + 0x38)));
    *(s32 *)((s8 *)arg0 + 0x380) = init_collision_body_parts((void *) (arg0), (void *) (TObjEneDelDepth_collision_body_parts), (int) (1));
    ((TObjPlayer *)arg0)->set_field_d8((s32)((void *) (lbl_804E8194)));
    ((TObjPlayer *)arg0)->set_field_dc((int) (*(s32 *)((s8 *)TObjEneDelDepth__shared_resource + 0x430)));
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (0));
    ((TObjEnePanarms *)arg0)->set_field_b8((int) (0));
    ((u8 * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x310) = (f32) TObjEneDelDepth__data_805DF258;
    *(f32 *)((s8 *)arg0 + 0x30C) = (f32) TObjEneDelDepth__data_805DF258;
    *(f32 *)((s8 *)arg0 + 0x308) = (f32) TObjEneDelDepth__data_805DF258;
    *(s32 *)((s8 *)arg0 + 0x2A8) = 0;
    bind_enemy_combat_stats((void *) (arg0), register_boss__6TLobbyFl(0x30), dispatch_shared_handler_b__6TLobbyFl(0x30), register_object__6TLobbyFl(0x30));
    *(s16 *)((s8 *)arg0 + 0x33E) = (s16) *(s16 *)((s8 *)arg0 + 0x32C);
    ((TBoss3Volopt *)arg0)->reset_photon_effect();
    *(s32 *)((s8 *)arg0 + 0x350) = 0;
    ((TObjEneLappy *)arg0)->set_param((int) (0x47));
    var_r0 = ((TAdSinglePlyChrSelectGC *)0x2C)->alloc();
    if (var_r0 != 0) {
        var_r0 = fn_80316680(var_r0, arg0);
    }
    *(s32 *)((s8 *)arg0 + 0x37C) = var_r0;
    *(s32 *)((s8 *)arg0 + 0x3C4) = 0xFFFF;
    *(s32 *)((s8 *)arg0 + 0x3E0) = 0;
    ((u8 * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x3E4, arg0 + 0x38);
    ((VObj_18_b31a3c *)(arg0))->m80();
}

u8 *TObjEneDelDepth__ct(u8 *arg0, s32 arg1, s32 arg2) {
    initialize__9TObjEnemyFPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80315A40___vt__15TObjEneDelDepth *)&__vt__15TObjEneDelDepth).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEneDelDepth__name;
    ((TObjPlayer *)arg0)->add_flags_2e4((int) (8));
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    ((TObjEneDelDepth *)arg0)->update_target_depth();
    ((TObjEneDelDepth *)arg0)->init();
    ((s32 (*)(void *, void *, int))project_actor_to_ground)((void *) (arg0), (void *) (arg0 + 0x38), (int) (0));
    set_action_state__15TObjEneDelDepthFPvi((Ene_803154A8 *) (arg0), 0);
    return arg0;
}

}
