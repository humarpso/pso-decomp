#include "types.h"
extern "C" void test_flag_256__13TUnk_80493450Fv();

struct Obj_800D5614 { u8 pad0[0x38]; u8 pos[0xC]; u8 pad44[0x2A8 - 0x44]; void *f2a8; u8 pad2ac[0x326 - 0x2AC]; s16 f326; s16 f328; u8 pad32a[0x338 - 0x32A]; u16 f338; u8 pad33a[0x350 - 0x33A]; f32 *f350; u8 pad354[0x3D0 - 0x354]; f32 f3d0; };
struct Pl_800D5614 { u8 pad0[0x38]; u8 pos[0xC]; };

#include <stddef.h>
#include "pso/enemy/TObjEneMerillLia.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneBeast.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
struct Stack_800D5060 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800D5060_lbl_8058D490 { s32 value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_800D5060_lbl_8058D490_size[sizeof(RecoveredGlobal_800D5060_lbl_8058D490) == 0x30 ? 1 : -1];

struct VBase_18_477421
{
  char pad[0x18];
};

struct VObj_18_477421 : VBase_18_477421 {
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
    virtual s32 m82();
    virtual s32 m83();
    virtual s32 m84();
    virtual s32 m85();
    virtual s32 m86();
    virtual s32 m87();
    virtual s32 m88();
    virtual s32 m89();
    virtual s32 m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual s32 m99();
};

struct Stack_800D6810
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct VBase_18_ca64a0
{
  char pad[0x18];
};

struct VObj_18_ca64a0 : VBase_18_ca64a0 {
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

struct VBase_14_fddec9
{
  char pad[0x14];
};

struct VObj_14_fddec9 : VBase_14_fddec9 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8();
};

struct RecoveredFields_800D6810_arg0
{
  u8 unknown_0[0x24];
  s32 field_24;
  u8 unknown_28[0xC];
  s32 field_34;
  u8 unknown_38[0x28];
  s32 field_60;
  u8 unknown_64[0x2C2];
  s16 field_326;
  u8 unknown_328[0x58];
  f32 field_380;
};

struct E_800D7274 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct D_800D7274 { u8 pad[0x42c]; E_800D7274 *entries; };

struct O_800D7274 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct Sub_800D5100 { u8 pad[0x18]; s32 f18; };

struct Obj_800D5100 { u8 pad[0x2b0]; Sub_800D5100 *f2b0; };

struct Obj_800D5150 { u8 pad[0x334]; s32 f334; u8 pad2[0x368 - 0x338]; s32 f368; };

struct VBase_14_800D5570 { char pad[0x14]; };

struct VObj_14_800D5570 : VBase_14_800D5570 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual s32 m5();
};

struct Obj_800D5570 { u8 pad0[0x38]; u8 sub38[0xB8 - 0x38]; s16 fb8; u8 padba[0x326 - 0xBA]; s16 f326; s16 state; };

typedef struct Ene_800D51C8 {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 f328;
    u8 pad32A[0x34C - 0x32A];
    void *f34C;
} Ene_800D51C8;

struct Base_800D64F0 {
    char pad[0x18];
};

struct Ene_800D64F0 : Base_800D64F0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79(); virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94();
    virtual void m95();
    u8 pad1C[0xB4 - 0x1C];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 sub;
    u8 pad32A[0x338 - 0x32A];
    s16 target;
    u8 pad33A[0x350 - 0x33A];
    f32 *param;
    u8 pad354[0x390 - 0x354];
    s32 f390;
};

typedef struct Ene_800D52DC {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 f328;
    u8 pad32A[0x34C - 0x32A];
    void *f34C;
} Ene_800D52DC;

struct Vec_800D57C8 { s32 x, y, z; };

struct Vec_800D6618 { f32 x, y, z; };

struct Stack_800D4D74 {
    s32 sp8;
    f32 spC;
    f32 sp10;
};

struct Vec_800D6110 { f32 x, y, z; };

struct VBase_18_800D6110 { char pad[0x18]; };

struct VObj_18_800D6110 : VBase_18_800D6110 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual s32 m17(s32);
    virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21();
    virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25();
    virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33();
    virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37();
    virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41();
    virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45();
    virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53();
    virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57();
    virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61();
    virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65();
    virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73();
    virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77();
    virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81();
    virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85();
    virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94(); virtual void m95(); virtual void m96();
    virtual void m97();
};

struct Pl_800D6110 { u8 pad0[0x38]; Vec_800D6110 pos; u8 pad44[0x2FC - 0x44]; Vec_800D6110 p2fc; };

struct Model_800D6110 { u8 pad0[0xC]; f32 radius; u8 pad10[8]; u32 flags; };

struct Obj_800D6110 : VObj_18_800D6110 {
    u8 pad1C[0x38 - 0x1C]; Vec_800D6110 pos; u8 pad44[0xA4 - 0x44]; Model_800D6110 *model;
    u8 padA8[0xB8 - 0xA8]; s16 fb8; u8 padBA[0x2A8 - 0xBA]; Pl_800D6110 *f2a8;
    u8 pad2ac[0x308 - 0x2AC]; u8 ang308[0x326 - 0x308]; s16 f326; s16 f328;
    u8 pad32a[0x338 - 0x32A]; u16 f338; u8 pad33a[0x350 - 0x33A]; f32 *f350;
    u8 pad354[0x374 - 0x354]; s16 f374; u8 pad376[0x398 - 0x376]; f32 f398;
    u8 pad39c[0x3D4 - 0x39C]; f32 f3d4;
};

struct Vec_800D5BCC { f32 x, y, z; };

struct Param_800D5BCC { u8 pad0[4]; f32 speed; s32 turn; };

struct Sub_800D5BCC { u8 pad0[0xC]; f32 fC; };

struct Lia_800D5BCC {
    u8 pad0[0x38];
    Vec_800D5BCC pos;
    Vec_800D5BCC prev;
    Vec_800D5BCC home;
    u8 pad5C[0x60 - 0x5C];
    s32 angle;
    u8 pad64[0xA4 - 0x64];
    Sub_800D5BCC *fA4;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0x290 - 0xBA];
    Vec_800D5BCC f290;
    Vec_800D5BCC f29C;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_800D5BCC f2FC;
    u8 pad308[0x328 - 0x308];
    s16 state;
    u8 pad32A[0x348 - 0x32A];
    Lia_800D5BCC *partner;
    u8 pad34C[0x350 - 0x34C];
    Param_800D5BCC *param;
    u8 pad354[0x358 - 0x354];
    f32 f358;
    u8 pad35C[0x378 - 0x35C];
    s32 f378;
    s32 count;
    u8 pad380[0x394 - 0x380];
    f32 f394;
};

struct VBase_18_4c2345 { char pad[0x18]; };
struct VObj_18_4c2345 : VBase_18_4c2345 {
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
    virtual s32 m80();
};

extern "C" {
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4EC8(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void play_target_sound__16TObjEneMerillLiaFi(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void play_target_sound_alt_id__16TObjEneMerillLiaFi(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void play_sound_3b201__16TObjEneMerillLiaFi(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void play_sound_3ab02__16TObjEneMerillLiaFi(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneMerillLia__sub_800D501C(s32 arg0);
s32 TObjPlayer__sub_800D92BC(void *, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_800D5060_lbl_8058D490 identity_matrix;
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA304;
extern const f32 TObjEneMerillLia__data_805DA308;
void spawn_front_ground_effect__16TObjEneMerillLiaFPv(u8 *arg0);
extern const f32 lbl_805DA2EC;
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA334;
extern const f32 lbl_805DA338;
s32 copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 get_current_floor();
f32 xz_distance_squared(void *, void *);
Pl_800D5614 *get_player_by_client_id(s32);
s32 submit_cursor_candidate(void *, int);
extern const f32 TObjEneMerillLia__data_805DA2F4;
void run_state_dispatch__16TObjEneMerillLiaFPv(u8 *arg0);
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 draw_chunk_object(int);
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 TObjEneMerillLia__data_805DA2F4;
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA314;
extern const f32 lbl_805DA324;
extern const f32 lbl_805DA328;
extern const f32 lbl_805DA32C;
extern const f32 lbl_805DA330;
void render__16TObjEneMerillLiaFPv(u8 *arg0);
extern u32 TObjEneMerillLia__entry_params_resource;
extern s32 game_difficulty_selection;
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 advance_animation_playback(void *);
void TObjEneMerillLia__sub_800D5570(Obj_800D5570 *arg0);
s32 obj_testFlags30(void *, int);
s32 obj_clearFlags30(void *, s32);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
void vfunc_59__16TObjEneMerillLiaFv(Ene_800D51C8 *arg0);
s16 find_nearest_visible_player(void *, s32, f32);
s32 obj_clearFlags30(void *, s32);
s32 obj_setFlags30(void *, s32);
void TObjEneMerillLia__sub_800D501C(s32 arg0);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
s32 set_indexed_flags(void *, s32, s32);
extern const f32 lbl_805DA304;
void vfunc_83__16TObjEneMerillLiaFv(Ene_800D64F0 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 obj_clearFlags30(void *, s32);
s32 obj_setFlags30(void *, s32);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
extern const f32 TObjEneMerillLia__data_805DA308;
void vfunc_60__16TObjEneMerillLiaFv(Ene_800D52DC *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 obj_clearFlags30(void *, s32);
s32 obj_setFlags30(void *, s32);
void TObjEneMerillLia__sub_800D4EC8(s32 arg0);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
s32 set_indexed_flags(void *, s32, s32);
s32 minimap_render_dot(void *, int, int, int);
s32 create__9TTecKafunFlllllff(void *, void *, int, int, int, f32, f32);
s32 matrix_mult_vec(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 post_translate_matrix(void *);
extern Vec_800D57C8 lbl_8043C6D0;
extern RecoveredGlobal_800D5060_lbl_8058D490 identity_matrix;
extern u32 TObjEneMerillLia__rock_param_table;
extern s32 anim_model_matrix_array;
extern const f32 lbl_805DA30C;
extern const f32 lbl_805DA310;
s32 apply_actor_gravity(void *, int, f32);
s32 enemy_move_toward(void *, s32, void *, int, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_clearFlags30(void *, s32);
s32 TObjPlayer__sub_800C4E08(void *);
s32 update_target_near_flag(void *);
f32 horizontal_distance_squared(void *, void *);
s32 advance_animation_playback(void *);
s32 test_elt_flag__10TObjPlayerFPvii(void *, int, int);
s32 minimap_render_dot(void *, int, int, int);
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA31C;
extern const f32 lbl_805DA320;
void update_chase_target__16TObjEneMerillLiaFPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void attach_particle_model(void *, s32, s32, s32, s32, f32);
u8 * csnVectorUnder(s32, void *, s32);
s32 spawn_particle_effect(s32, s32);
void fn_800D88E4(s32);
s32 objInBand__FP7GameObjf(void *, f32);
s32 rand(void);
extern s32 actor_frame_tick;
extern const f32 lbl_805DA2EC;
extern const f32 lbl_805DA2F0;
extern const f32 TObjEneMerillLia__data_805DA2F4;
extern const f32 lbl_805DA2F8;
extern const f32 lbl_805DA2FC;
void spawn_ground_effect__16TObjEneMerillLiaFPv(u8 *arg0);
s16 find_nearest_visible_player(void *, s32, f32);
f32 enemy_backstep_from_point(void *, void *, f32);
s32 obj_clearFlags30(void *, s32);
s32 get_current_floor();
u32 csnVector(void *, void *, s32);
void spawn_ground_effect__16TObjEneMerillLiaFPv(u8 *arg0);
f32 xz_distance_squared(void *, void *);
s32 advance_animation_playback(void *);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
Pl_800D5614 *get_player_by_client_id(s32);
s32 minimap_render_dot(void *, int, int, int);
f32 normalize_vector(void *);
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA314;
extern const f32 lbl_805DA318;
void TObjEneMerillLia__sub_800D6110(Obj_800D6110 *arg0);
s32 apply_actor_gravity(void *, int, f32);
void enemy_wander_home(void *, s32, f32, f32, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, int);
s32 obj_clearFlags30(void *, s32);
f32 fabs_float(f32);
f64 atan2_float(f32, f32);
s32 TObjPlayer__sub_800C4E08(void *);
s32 update_target_near_flag(void *);
void link_chain_nodes__10TObjPlayerFPvPvPv(void *, void *, void *);
f32 horizontal_distance_squared(void *, void *);
s32 approach_angle_limited(s32, s32, s32);
s32 advance_animation_playback(void *);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
void refresh_collision_body_centers(void *);
s32 project_actor_to_ground(void *, void *, s32);
s32 minimap_render_dot(void *, int, int, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 subtract_vector(void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrices(int);
extern const f64 lbl_8043C6E8[];
extern Vec_800D5BCC lbl_8050BEE0;
extern Vec_800D5BCC lbl_8050BF00;
extern RecoveredGlobal_800D5060_lbl_8058D490 identity_matrix;
extern const f32 TObjEneMerillLia__data_805DA300;
void TObjEneMerillLia__sub_800D5BCC(u8 *arg0);
}

extern "C" {

void * TObjEneMerillLia__create(void *arg0);
void TObjEneMerillLia__sub_800D4D70(void);
void TObjEneMerillLia__sub_800D50FC(void);
void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1);
void vfunc_58__16TObjEneMerillLiaFv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void free_collision_body_parts(void *);
void *TObjEneMerillLia__ct(void *, void *, void *);
void TObjPlayer__sub_800C68FC(void *, int);
void unlink_enemy_group_relations(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void *__nw__7TObjectFUl(int);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
void mem_free(void*);
s32 obj_clearFlags30(void *, s32);
s32 obj_setFlags30(void *, s32);
s32 set_indexed_flags(void *, s32, s32);

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneMerillLia__sub_800D59E4();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_100__13TUnk_80493450Fv();
extern "C" void TObjPlayer__sub_800C53B4();
extern "C" void update_turn_toward_target__10TObjPlayerFv();
extern "C" void vfunc_95__13TUnk_80493450Fv();
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
extern "C" void beast_retire_corpse();
extern "C" void beast_select_target();
extern "C" void beast_update_attack();
extern "C" void beast_update_dead();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_vt78__10TObjPlayerFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_flag_0x100__10TObjPlayerFv();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void enter_state7__10TObjPlayerFv();
extern "C" void enter_state_8__10TObjPlayerFv();
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
extern "C" u8 lbl_8043C478[];
extern "C" u8 lbl_8043C494[];
extern "C" u8 lbl_8043C4B0[];
extern "C" u8 lbl_8043C4D4[];
extern "C" u8 lbl_8043C4F4[];
extern "C" u8 lbl_8043C514[];
extern "C" u8 lbl_8043C538[];
extern "C" u8 lbl_8043C558[];
extern "C" u8 lbl_8043C578[];
extern "C" u8 lbl_8043C598[];
extern "C" u8 lbl_8043C5BC[];
extern "C" u8 lbl_8043C5DC[];
extern "C" u8 lbl_8043C5F4[];
extern "C" u8 lbl_8043C614[];
extern "C" u8 lbl_8043C634[];
extern "C" u8 lbl_8043C650[];
extern "C" u8 lbl_8043C66C[];
extern "C" u8 lbl_8043C68C[];
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void request_stand_action__13TUnk_80493450Fv();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void tick_freeze_and_reset_appearance();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold__12TObjEneBeastFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_804944D0[3];
extern void *lbl_804944DC[17];
extern void *lbl_80494520[3];
extern void *lbl_8049452C[17];
void *lbl_804944D0[3] = {
    (void *)&lbl_8043C478, (void *)&lbl_8043C494, (void *)0x0,
};
void *lbl_804944DC[17] = {
    (void *)&lbl_8043C4B0, (void *)&lbl_8043C4D4, (void *)&lbl_8043C4F4, (void *)&lbl_8043C514,
    (void *)&lbl_8043C538, (void *)&lbl_8043C558, (void *)&lbl_8043C578, (void *)&lbl_8043C598,
    (void *)&lbl_8043C5BC, (void *)&lbl_8043C5DC, (void *)&lbl_8043C5F4, (void *)&lbl_8043C614,
    (void *)0x0, (void *)&lbl_8043C634, (void *)&lbl_804944D0, (void *)&lbl_804944DC,
    (void *)0x2000c,
};
void *lbl_80494520[3] = {
    (void *)&lbl_8043C650, (void *)&lbl_8043C66C, (void *)0x0,
};
void *lbl_8049452C[17] = {
    (void *)&lbl_8043C4B0, (void *)&lbl_8043C4D4, (void *)&lbl_8043C4F4, (void *)&lbl_8043C514,
    (void *)&lbl_8043C538, (void *)&lbl_8043C558, (void *)&lbl_8043C578, (void *)&lbl_8043C598,
    (void *)&lbl_8043C5BC, (void *)&lbl_8043C5DC, (void *)&lbl_8043C5F4, (void *)&lbl_8043C614,
    (void *)0x0, (void *)&lbl_8043C68C, (void *)&lbl_80494520, (void *)&lbl_8049452C,
    (void *)0x2000c,
};
void *lbl_80494570[56] = {
    (void *)0x10000, (void *)0x5, (void *)0x3f19999a, (void *)0x1,
    (void *)0x10001, (void *)0x6, (void *)0x3f4ccccd, (void *)0x1,
    (void *)0x10002, (void *)0x8, (void *)0x3f19999a, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f4ccccd, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f800000, (void *)0x4,
    (void *)0x10000, (void *)0x9, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x3, (void *)0x3f4ccccd, (void *)0x8,
    (void *)0x20000, (void *)0x7, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x10,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20000, (void *)0x5, (void *)0x3f19999a, (void *)0x20,
    (void *)0x20000, (void *)0x0, (void *)0x3f000000, (void *)0x20,
    (void *)0x20000, (void *)0xa, (void *)0x3f333333, (void *)0x4,
    (void *)0x20001, (void *)0xb, (void *)0x3f19999a, (void *)0x20,
};
void *lbl_80494650[21] = {
    (void *)0x43610000, (void *)0x3ecccccd, (void *)0x400, (void *)0x0,
    (void *)0x1e0000, (void *)0x1, (void *)0x0, (void *)0x437a0000,
    (void *)0x3f0ccccd, (void *)0x400, (void *)0x0, (void *)0x1e0000,
    (void *)0x1, (void *)0x0, (void *)0x43960000, (void *)0x3f333333,
    (void *)0x400, (void *)0x0, (void *)0x1e0000, (void *)0x1,
    (void *)0x0,
};
void *lbl_804946A4[33] = {
    (void *)0x0, (void *)0x40f00000, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x40f00000, (void *)0x0, (void *)0x41000000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41200000,
    (void *)0x0, (void *)0x41000000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_80494728[103] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__16TObjEneMerillLiaFPvs, (void *)&run_state_dispatch__16TObjEneMerillLiaFPv,
    (void *)&render__16TObjEneMerillLiaFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&beast_select_target, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__13TUnk_80493450Fv,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold__12TObjEneBeastFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&tick_freeze_and_reset_appearance,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&vfunc_58__16TObjEneMerillLiaFv, (void *)&vfunc_59__16TObjEneMerillLiaFv,
    (void *)&vfunc_60__16TObjEneMerillLiaFv, (void *)&clear_flag_0x100__10TObjPlayerFv, (void *)&enter_state7__10TObjPlayerFv, (void *)&enter_state_8__10TObjPlayerFv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)&vfunc_83__16TObjEneMerillLiaFv,
    (void *)&TObjEneMerillLia__sub_800D5BCC, (void *)&update_turn_toward_target__10TObjPlayerFv, (void *)&update_chase_target__16TObjEneMerillLiaFPv, (void *)&TObjEneMerillLia__sub_800D6110,
    (void *)&beast_update_attack, (void *)&TObjPlayer__sub_800C53B4, (void *)&TObjEneMerillLia__sub_800D59E4, (void *)&beast_update_dead,
    (void *)&beast_retire_corpse, (void *)&TObjEneMerillLia__sub_800D50FC, (void *)&spawn_front_ground_effect__16TObjEneMerillLiaFPv, (void *)&vfunc_95__13TUnk_80493450Fv,
    (void *)&play_sound_3ab02__16TObjEneMerillLiaFi, (void *)&play_sound_3b201__16TObjEneMerillLiaFi, (void *)&play_target_sound_alt_id__16TObjEneMerillLiaFi, (void *)&play_target_sound__16TObjEneMerillLiaFi,
    (void *)&vfunc_100__13TUnk_80493450Fv, (void *)&TObjEneMerillLia__sub_800D4D70, (void *)&request_stand_action__13TUnk_80493450Fv,
};
#define lbl_80494728 ((s32 *)lbl_80494728)

void TObjEneMerillLia__sub_800D4D70(void) {  }

void spawn_ground_effect__16TObjEneMerillLiaFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800D4D74, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800D4D74, spC) == 0x4) ? 1 : -1];
    Stack_800D4D74 stack;
    s32 temp_r29;
    s32 temp_r3_2;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
    stack.spC += lbl_805DA2EC;
    temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 5));
    if ((temp_r3 != NULL) && (*(s32 *)((s8 *)temp_r3 + 0) & 4)) {
        if (((s32) ((f32) actor_frame_tick * (lbl_805DA2F0 * (f32) rand())) % 5) == 0) {
            temp_r3_2 = spawn_particle_effect(*(s32 *)((s8 *)temp_r3 + 4) + 0x38, 0x49);
            if (temp_r3_2 != 0) {
                attach_particle_model((void *) temp_r3_2, TParticleCtrl::get_particle_model(2), TParticleCtrl::get_instance(), 0, 1, TObjEneMerillLia__data_805DA2F4);
            }
            spawn_particle_effect(*(s32 *)((s8 *)temp_r3 + 4) + 0x38, 0xA4);
        }
        if ((objInBand__FP7GameObjf(arg0, lbl_805DA2F8) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805DA2FC) != 0)) {
            fn_800D88E4((s32) (arg0 + 0x38));
        }
    }
}

void TObjEneMerillLia__sub_800D4EC8(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x3AD04))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void play_target_sound__16TObjEneMerillLiaFi(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x3B205))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void play_target_sound_alt_id__16TObjEneMerillLiaFi(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x3AD00))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void play_sound_3b201__16TObjEneMerillLiaFi(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x3B201))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void play_sound_3ab02__16TObjEneMerillLiaFi(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x3AB02))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D501C(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x3B206))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void spawn_front_ground_effect__16TObjEneMerillLiaFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800D5060, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800D5060, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800D5060, sp10) == 0x8) ? 1 : -1];
    Stack_800D5060 stack;
    stack.sp8 = TObjEneMerillLia__data_805DA300;
    stack.spC = lbl_805DA304;
    stack.sp10 = TObjEneMerillLia__data_805DA308 * *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x2B0)) + 0x10);
    push_matrix_from((void *) (&identity_matrix.value));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrix();
    vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    ((TObjPlayer *)(&stack.sp8))->spawn_ground_effect((int) (0x23));
    TObjPlayer__sub_800D92BC((void *) (&stack.sp8), (int) (0xF));
}

void TObjEneMerillLia__sub_800D50FC(void) {  }

s32 TObjEneMerillLia::get_clamped_level() {
    Obj_800D5100 *self = (Obj_800D5100 *)this;
    Sub_800D5100 *p = self->f2b0;
    s32 v = 0;
    if (p != 0) {
        v = p->f18;
        if (v < 0) {
            v = 0;
        } else if (game_difficulty_selection == 3) {
            if (v > 0x1d) {
                v = 0x1d;
            }
        } else if (v > 0xe) {
            v = 0xe;
        }
    }
    return v;
}

void TObjEneMerillLia::clamp_and_apply_mode_param() {
    Obj_800D5150 *self = (Obj_800D5150 *)this;
    if (self->f334 < 0) {
        self->f334 = 0;
    } else if (self->f334 > 1) {
        self->f334 = 1;
    }
    switch (self->f334) {
    case 1:
        self->f368 = 1;
        ((TObjEneLappy *)self)->set_param(0x35);
        break;
    default:
        self->f368 = 0;
        ((TObjEneLappy *)self)->set_param(0x34);
        break;
    }
}

void TObjEneMerillLia::vfunc_59() {
    Ene_800D51C8 *arg0 = (Ene_800D51C8 *)this;
    if (obj_testFlags30(arg0, 0x1000) != 0) {
        arg0->state = 4;
    }
    switch (arg0->state) {
    case 0:
    case 2:
    case 3:
    case 10:
    case 11:
    case 12:
    case 13:
        break;
    case 1:
        arg0->f328 = 0;
        if (arg0->f34C == NULL) {
            arg0->state = 3;
            arg0->fB8 = 7;
        } else {
            arg0->state = 2;
            arg0->fB8 = 10;
        }
        obj_clearFlags30((void *)(arg0), (s32)(0x4040000));
        clear_player_status_flag__10TObjPlayerFlUl((void *)(arg0), (s32)(0), (s32)(0xA000000));
        break;
    case 4:
        arg0->fB8 = 5;
        break;
    default:
        arg0->state = 3;
        arg0->f328 = 1;
        arg0->fB8 = 2;
        obj_clearFlags30((void *)(arg0), (s32)(0x4040000));
        clear_player_status_flag__10TObjPlayerFlUl((void *)(arg0), (s32)(0), (s32)(0xA000000));
        break;
    }
}

void TObjEneMerillLia::vfunc_60() {
    Ene_800D52DC *arg0 = (Ene_800D52DC *)this;
    switch (arg0->state) {
    case 0:
    case 2:
    case 4:
    case 10:
    case 11:
    case 12:
    case 13:
        break;
    case 1:
        arg0->f328 = 0;
        if (arg0->f34C == NULL) {
            arg0->state = 3;
            arg0->fB8 = 7;
        } else {
            arg0->state = 2;
            arg0->fB8 = 10;
        }
        obj_clearFlags30((void *)(arg0), (s32)(0x4040000));
        clear_player_status_flag__10TObjPlayerFlUl((void *)(arg0), (s32)(0), (s32)(0xA000000));
        break;
    default:
        arg0->state = 5;
        arg0->f328 = 1;
        if (TObjEneMerillLia__data_805DA308 < calc_boss4_scale__10TObjPlayerFi(arg0)) {
            arg0->fB8 = 3;
        } else {
            arg0->fB8 = 4;
        }
        obj_setFlags30((void *)(arg0), (s32)(0x200000));
        obj_clearFlags30((void *)(arg0), (s32)(0x4040000));
        clear_player_status_flag__10TObjPlayerFlUl((void *)(arg0), (s32)(0), (s32)(0xA000000));
        break;
    }
}

void TObjEneMerillLia::vfunc_58() {
    s32 temp_r0;

    temp_r0 = this->mode;
    if (temp_r0 != 4) {
        if (temp_r0 < 4) {
            if (temp_r0 < 3) {
                if (temp_r0 >= 0) {
                    goto block_end;
                }
                goto block_7;
            } else {
                goto block_7;
            }
        } else if ((temp_r0 >= 0xE) || (temp_r0 < 0xB)) {
block_7:
            if ((s32) this->m_390 != 0) {
                this->mode = 0;
            } else {
                this->mode = 1;
            }
            this->phase = 0;
            obj_setFlags30(this, 0x04040000);
            set_indexed_flags(this, 0, 0x0A000000);
        }
    }
block_end:
    ;
}

void TObjEneMerillLia::reset_state_clear_status() {
    u8 *arg0 = (u8 *)this;
    this->mode = 0xB;
    this->phase = 0;
    *(s32 *)&this->target = 0;
    clear_player_status_flag__10TObjPlayerFlUl((void *)(arg0), (s32)(0), (s32)(0x0A000000U));
}

void TObjEneMerillLia::init_attack_state() {
    this->mode = 4;
    this->phase = 0;
    *(s16 *)((s8 *)this + 0x374) = (s16) this->m_3d8;
    obj_clearFlags30(this, 0x04240000);
    clear_player_status_flag__10TObjPlayerFlUl(this, 0, 0x0A000000);
}

void TObjEneMerillLia::reset_action_state() {
    this->mode = 0xA;
    this->phase = 0;
    obj_setFlags30(this, 0x200000);
    obj_clearFlags30(this, 0x04040000);
    clear_player_status_flag__10TObjPlayerFlUl(this, 0, 0x0A000000);
}

extern void *tl_04;

typedef struct RecoveredFields_800D6810_arg0 RecoveredFields_800D6810_arg0;
typedef struct Stack_800D6810 Stack_800D6810;
typedef struct VBase_14_fddec9 VBase_14_fddec9;
typedef struct VBase_18_ca64a0 VBase_18_ca64a0;
typedef struct VObj_14_fddec9 VObj_14_fddec9;
typedef struct VObj_18_ca64a0 VObj_18_ca64a0;
#define PSO_VCALL_VObj_18_ca64a0_m9(_self, _arg0, _arg1, _arg2) (((VObj_18_ca64a0 *)(_self))->m9((_arg0), (_arg1), (_arg2)))
#define PSO_VCALL_VObj_14_fddec9_m8(_self) (((VObj_14_fddec9 *)(_self))->m8())
#define PSO_VCALL_VObj_14_fddec9_m6(_self) (((VObj_14_fddec9 *)(_self))->m6())
#define PSO_VCALL_VObj_14_fddec9_m7(_self) (((VObj_14_fddec9 *)(_self))->m7())

void TObjEneMerillLia__sub_800D5570(Obj_800D5570 *arg0) {
    switch (arg0->state) {
    case 0:
    default:
        arg0->state = 1;
        arg0->fb8 = 1;
        TObjEneMe3SinowZoa__sub_800D758C((u8 *)arg0 + 0x3A8);
        ((TBoss3Volopt *)(arg0->sub38))->play_area_sound_effect();
        break;
    case 1:
        spawn_ground_effect__16TObjEneMerillLiaFPv((u8 *)(arg0));
        if (((VObj_14_800D5570 *)((u8 *)arg0 + 0x3A8))->m5() != 0) {
            arg0->state = 2;
        }
        break;
    case 2:
        arg0->f326 = 12;
        break;
    }
    advance_animation_playback(arg0);
}

#define arg0 ((Obj_800D5614 *)ov)
void TObjEneMerillLia::search_target(void *ov) {
    Pl_800D5614 *p;
    s32 v;
    arg0->f338 = find_nearest_visible_player(arg0, 0, *arg0->f350);
    if (arg0->f338 < 0x1000) {
        p = get_player_by_client_id(arg0->f338);
        if (p != NULL) {
            s32 w;
            v = get_current_floor();
            w = ((TObjPlayer *)p)->get_field_3e4();
            if (w == v) {
                if (xz_distance_squared(p->pos, arg0->pos) < arg0->f3d0 * arg0->f3d0) {
                    arg0->f2a8 = p;
                    arg0->f326 = 0;
                    arg0->f328 = 0;
                }
            }
        }
    }
    advance_animation_playback(arg0);
}
#undef arg0

#define arg0 ((u8 *)ov)
s32 TObjEneMerillLia::update_emerge_state(void *ov) {
    s16 temp_r0;

    advance_animation_playback(arg0);
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
    default:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x390) == 1) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
        } else {
            *(s16 *)((s8 *)arg0 + 0x328) = 1;
            *(s16 *)((s8 *)arg0 + 0xB8) = 0xD;
            set_indexed_flags(arg0, 0, 0x0A000000);
            obj_setFlags30(arg0, 0x04000000);
            TObjEneMerillLia__sub_800D501C((s32)arg0);
        }
        break;
    case 1:
        spawn_ground_effect__16TObjEneMerillLiaFPv(arg0);
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 0x20U) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
            *(s32 *)((s8 *)arg0 + 0x390) = 1;
            clear_player_status_flag__10TObjPlayerFlUl(arg0, 0, 0x0A000000);
            obj_clearFlags30(arg0, 0x04040000);
        }
        break;
    case 2:
        *(s16 *)((s8 *)arg0 + 0x326) = 0xC;
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        break;
    }
    ((TObjPlayer *)arg0)->update_collisions();
    ((TObjPlayer *)arg0)->update_enemy_collision_flags();
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}
#undef arg0

struct Obj_800D5100;
struct RecoveredGlobal_800D5060_lbl_8058D490;
#define arg0 ((u8 *)p)
s32 TObjEneMerillLia::update_kafun_attack(void *p) {
    Vec_800D57C8 sp14;
    s16 temp_r0;
    advance_animation_playback((void *) (arg0));
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    default:
    case 0:
        *(s16 *)((s8 *)arg0 + 0x328) = 1;
        *(s16 *)((s8 *)arg0 + 0xB8) = 0xC;
        obj_setFlags30((void *) (arg0), 0x200000);
        obj_clearFlags30((void *) (arg0), 0x04040000);
        clear_player_status_flag__10TObjPlayerFlUl((void *) (arg0), 0, 0x0A000000);
        break;
    case 1:
        if (objInBand__FP7GameObjf((void *) (arg0), lbl_805DA30C) != 0) {
            advance_animation_playback((void *) (arg0));
            push_matrix_from((void *) (&identity_matrix));
            post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            ((TObjPlayer *)arg0)->render_anim_model(lbl_805DA30C);
            pop_matrix();
            push_matrix_from((void *) (anim_model_matrix_array + 0x450));
            {
                Vec_800D57C8 sp8 = lbl_8043C6D0;
                matrix_mult_vec(0, &sp8, &sp14);
            }
            pop_matrix();
            create__9TTecKafunFlllllff((void *) (arg0), &sp14, 0xF, 0xD3, ((TObjEneMerillLia *)arg0)->get_clamped_level(), *(f32 *)((s8 *)(((void **) TObjEneMerillLia__rock_param_table)[*(s32 *)((s8 *)arg0 + 0x334)]) + 0x10), lbl_805DA310);
            TObjEneMerillLia__sub_800D4EC8((s32) (arg0));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 4U) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
            *(s16 *)((s8 *)arg0 + 0xB8) = 0;
            *(s16 *)((s8 *)arg0 + 0x33C) = 0xF;
        }
        break;
    case 2:
        (*(s16 *)((s8 *)arg0 + 0x33C))--;
        if (*(s16 *)((s8 *)arg0 + 0x33C) < 0) {
            obj_clearFlags30((void *) (arg0), 0x200000);
            *(s16 *)((s8 *)arg0 + 0x33C) = 0;
            if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= *(f32 *)((s8 *)arg0 + 0x3C4)) {
                ((TObjEneMerillLia *)arg0)->init_attack_state();
            } else {
                *(s16 *)((s8 *)arg0 + 0x326) = 1;
                *(s16 *)((s8 *)arg0 + 0x328) = 0;
                obj_setFlags30((void *) (arg0), 0x04040000);
                set_indexed_flags((void *) (arg0), 0, 0x0A000000);
            }
        }
        break;
    }
    ((TObjPlayer *)arg0)->update_collisions();
    ((TObjPlayer *)arg0)->update_enemy_collision_flags();
    minimap_render_dot((void *) ((u8 *)(arg0) + 0x38), -0x5DB4, 1, 0);
}
#undef arg0

#pragma push
#pragma opt_common_subs off
#define o ((Lia_800D5BCC *)arg0)
void TObjEneMerillLia__sub_800D5BCC(u8 *arg0) {
    update_target_near_flag(o);
    TObjPlayer__sub_800C4E08(o);
    advance_animation_playback(o);
    if (o->state != 1) {
        o->state = 1;
        ((TObjPlayer *)o)->link_into_group_chain();
        o->f378 = ((TObjPlayer *)o)->is_action_available();
    }
    o->count = ((TObjEnemy *)o)->countChildren();
    {
        Lia_800D5BCC *p = o->partner;
        if (p != NULL) {
            s32 diff = p->count - o->count;
            if (diff > 1) {
                link_chain_nodes__10TObjPlayerFPvPvPv(o, p, o);
                o->count++;
                p->count--;
            } else if (diff < -1) {
                link_chain_nodes__10TObjPlayerFPvPvPv(o, o, p);
                o->count--;
                p->count++;
            }
        }
    }
    {
    f32 dist = horizontal_distance_squared(&o->pos, &o->home);
    f32 r = o->f358 + (o->param->speed + o->fA4->fC);
    if (r * r < dist) {
        Vec_800D5BCC *d;
        Vec_800D5BCC *v;
        s32 ang;
        VecCopy__FP3VecPC3Vec(&o->f29C, &o->home);
        VecCopy__FP3VecPC3Vec(&o->f290, &o->f2FC);
        VecCopy__FP3VecPC3Vec(&o->prev, &o->pos);
        VecCopy__FP3VecPC3Vec(&lbl_8050BEE0, &o->home);
        subtract_vector(&lbl_8050BEE0, &o->pos);
        d = &lbl_8050BEE0;
        ang = (s32)(lbl_8043C6E8[0] * atan2_float(d->x, d->z));
        v = &lbl_8050BF00;
        v->x = v->y = TObjEneMerillLia__data_805DA300;
        v->z = o->f394;
        push_matrix_from(&identity_matrix);
        rotate_matrix_y(0, ang);
        rotate_vector_by_matrix(0, &lbl_8050BF00, &lbl_8050BF00);
        pop_matrices(1);
        vec3_add_to(&lbl_8050BF00, &o->pos);
        if (project_actor_to_ground(o, &lbl_8050BF00, 0) == 1) {
            o->fB8 = 2;
            VecCopy__FP3VecPC3Vec(&o->pos, &lbl_8050BF00);
            o->angle = approach_angle_limited(o->angle, ang, o->param->turn);
        } else {
            f32 rr = fabs_float(d->z);
            if (fabs_float(lbl_8050BEE0.x) < rr) {
                ang = (s32)(lbl_8043C6E8[0] * atan2_float(lbl_8050BEE0.x, TObjEneMerillLia__data_805DA300));
            } else {
                ang = (s32)(lbl_8043C6E8[0] * atan2_float(TObjEneMerillLia__data_805DA300, d->z));
            }
            v->y = TObjEneMerillLia__data_805DA300;
            lbl_8050BF00.x = TObjEneMerillLia__data_805DA300;
            v->z = o->f394;
            push_matrix_from(&identity_matrix);
            rotate_matrix_y(0, ang);
            rotate_vector_by_matrix(0, &lbl_8050BF00, &lbl_8050BF00);
            pop_matrices(1);
            vec3_add_to(&lbl_8050BF00, &o->pos);
            if (project_actor_to_ground(o, &lbl_8050BF00, 0) == 1) {
                o->fB8 = 2;
                VecCopy__FP3VecPC3Vec(&o->pos, &lbl_8050BF00);
                o->angle = approach_angle_limited(o->angle, ang, o->param->turn);
            } else {
                s32 ang2;
                rr = fabs_float(d->z);
                if (fabs_float(lbl_8050BEE0.x) < rr) {
                    ang2 = (s32)(lbl_8043C6E8[0] * atan2_float(TObjEneMerillLia__data_805DA300, d->z));
                } else {
                    ang2 = (s32)(lbl_8043C6E8[0] * atan2_float(lbl_8050BEE0.x, TObjEneMerillLia__data_805DA300));
                }
                v->y = TObjEneMerillLia__data_805DA300;
                lbl_8050BF00.x = TObjEneMerillLia__data_805DA300;
                v->z = o->f394;
                push_matrix_from(&identity_matrix);
                rotate_matrix_y(0, ang2);
                rotate_vector_by_matrix(0, &lbl_8050BF00, &lbl_8050BF00);
                pop_matrices(1);
                vec3_add_to(&lbl_8050BF00, &o->pos);
                if (project_actor_to_ground(o, &lbl_8050BF00, 0) == 1) {
                    o->fB8 = 2;
                    VecCopy__FP3VecPC3Vec(&o->pos, &lbl_8050BF00);
                    o->angle = approach_angle_limited(o->angle, ang2, o->param->turn);
                } else {
                    o->fB8 = 2;
                }
            }
        }
    } else if (o->count == 0 && TObjEneMerillLia__data_805DA300 < o->f358) {
        f32 w;
        o->fB8 = 2;
        w = o->f358;
        ((void (*)(void *, f32, f32, f32, s32))enemy_wander_home)(o, o->param->speed, w, w, o->param->turn);
    } else {
        ((TObjEneMerillLia *)o)->reset_state_clear_status();
    }
    }
    if (obj_testFlags30(o, 0x800000) == 0) {
        apply_actor_gravity(o, 0, TObjEneMerillLia__data_805DA300);
    }
    refresh_collision_body_centers(o);
    minimap_render_dot(&o->pos, -0x5DB4, 1, 0);
    obj_clearFlags30(o, 0x04240000);
    clear_player_status_flag__10TObjPlayerFlUl(o, 0, 0x0A000000);
}
#undef o
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEneMerillLia__sub_800D6110(Obj_800D6110 *arg0) {
    Vec_800D6110 save;
    Vec_800D6110 to;
    Vec_800D6110 d;
    f32 dist;
    advance_animation_playback(arg0);
    switch (arg0->f328) {
    case 0:
        arg0->f328 = 1;
        arg0->m97();
        break;
    case 1:
        if (arg0->f2a8 != NULL) {
            spawn_ground_effect__16TObjEneMerillLiaFPv((u8 *)arg0);
            save.x = arg0->pos.x;
            save.y = arg0->pos.y;
            save.z = arg0->pos.z;
            if (arg0->f3d4 <= TObjEneMerillLia__data_805DA300) {
                Vec_800D6110 a = arg0->f2a8->p2fc;
                dist = enemy_backstep_from_point(arg0, &a, arg0->f398);
            } else {
                Vec_800D6110 b = arg0->f2a8->p2fc;
                dist = enemy_backstep_from_point(arg0, &b, arg0->f3d4);
            }
            ((TObjPlayer *)arg0)->update_angle(((s32 *)arg0->f350)[2], arg0->ang308);
            arg0->f374--;
            if (dist < (arg0->f398 + arg0->model->radius) * (arg0->f398 + arg0->model->radius) || arg0->f374 < 0) {
                arg0->f328 = 2;
                arg0->f374 = 0;
            }
            ((TObjPlayer *)arg0)->update_collisions();
            ((TObjPlayer *)arg0)->update_enemy_collision_flags();
            if (arg0->model->flags & 0x380000) {
                arg0->f328 = 2;
                arg0->f374 = 0;
                break;
            }
            d.x = arg0->pos.x - save.x;
            d.y = arg0->pos.y - save.y;
            d.z = arg0->pos.z - save.z;
            normalize_vector(&d);
            to.x = lbl_805DA314 * d.x + arg0->pos.x;
            to.y = lbl_805DA314 * d.y + arg0->pos.y;
            to.z = lbl_805DA314 * d.z + arg0->pos.z;
            if (csnVector(&save, &to, 0x88E0) != 0) {
                arg0->f328 = 2;
                arg0->f374 = 0;
            }
            break;
        }
        if (arg0->m17(0x1E) != 0) {
            arg0->f338 = find_nearest_visible_player(arg0, 0, *arg0->f350);
        }
        if (arg0->f338 < 0x1000) {
            Pl_800D5614 *p = get_player_by_client_id(arg0->f338);
            if (p != NULL && ((TObjPlayer *)p)->get_field_3e4() == get_current_floor()) {
                arg0->f2a8 = (Pl_800D6110 *)p;
                break;
            }
            arg0->f2a8 = NULL;
            ((TObjEneMerillLia *)arg0)->reset_state_clear_status();
            break;
        }
        arg0->f2a8 = NULL;
        ((TObjEneMerillLia *)arg0)->reset_state_clear_status();
        break;
    case 2:
        obj_clearFlags30(arg0, 0x1000);
        if (arg0->m17(0x1E) != 0) {
            arg0->f338 = find_nearest_visible_player(arg0, 0, *arg0->f350);
        }
        if (arg0->f338 < 0x1000) {
            Pl_800D5614 *p = get_player_by_client_id(arg0->f338);
            if (p != NULL && ((TObjPlayer *)p)->get_field_3e4() == get_current_floor() &&
                xz_distance_squared(p->pos, &arg0->pos) < lbl_805DA318) {
                arg0->f326 = 1;
                arg0->f328 = 0;
                arg0->fb8 = 0xA;
                obj_clearFlags30(arg0, 0x4040000);
                clear_player_status_flag__10TObjPlayerFlUl(arg0, 0, 0xA000000);
                break;
            }
            ((TObjEneMerillLia *)arg0)->reset_state_clear_status();
        } else {
            ((TObjEneMerillLia *)arg0)->reset_state_clear_status();
        }
        break;
    }
    ((TObjPlayer *)arg0)->update_collisions();
    ((TObjPlayer *)arg0)->update_enemy_collision_flags();
    minimap_render_dot(&arg0->pos, -0x5DB4, 1, 0);
}
#pragma pop

void TObjEneMerillLia::vfunc_83() {
    Ene_800D64F0 *arg0 = (Ene_800D64F0 *)this;
    switch (arg0->sub) {
    case 0:
    default:
        if (arg0->f390 != 1) {
            arg0->sub = 2;
        } else {
            arg0->sub = 1;
            arg0->fB8 = 0xB;
            set_indexed_flags((void *)(arg0), (s32)(0), (s32)(0xA000000));
            obj_setFlags30((void *)(arg0), (s32)(0x4000000));
            arg0->m95();
        }
        break;
    case 1:
        spawn_ground_effect__16TObjEneMerillLiaFPv((u8 *)(arg0));
        if (objInBand__FP7GameObjf(arg0, lbl_805DA304) != 0) {
            TObjEneMerillLia__sub_800D501C((s32)arg0);
        }
        if (arg0->fB4 != 0x20) {
            arg0->sub = 2;
            arg0->f390 = 0;
            arg0->fB8 = 0;
            clear_player_status_flag__10TObjPlayerFlUl((void *)(arg0), (s32)(0), (s32)(0xA000000));
            obj_clearFlags30((void *)(arg0), (s32)(0x4000000));
        }
        break;
    case 2:
        arg0->target = find_nearest_visible_player(arg0, 0, *arg0->param);
        arg0->state = 1;
        break;
    }
    advance_animation_playback(arg0);
}

void update_chase_target__16TObjEneMerillLiaFPv(u8 *arg0) {
    Vec_800D6618 sp14;
    f32 r;
    switch (*(s16 *)((s8 *)arg0 + 0x328)) {
    case 0:
        apply_actor_gravity(arg0, 0, TObjEneMerillLia__data_805DA300);
        advance_animation_playback(arg0);
        if (*(u32 *)((s8 *)arg0 + 0xB4) != 0x20U) {
            *(s16 *)((s8 *)arg0 + 0x328) = 1;
            *(s16 *)((s8 *)arg0 + 0xB8) = 2;
        }
        break;
    default:
        spawn_ground_effect__16TObjEneMerillLiaFPv((u8 *)(arg0));
        if (*(u32 *)((s8 *)arg0 + 0x2A8) != 0U) {
            if (test_elt_flag__10TObjPlayerFPvii(arg0, 0, 0x300000) != 0) {
                if ((f32) (*(u32 *)((s8 *)arg0 + 0x38C))++ < lbl_805DA31C) {
                    VecCopy__FP3VecPC3Vec(&sp14, arg0 + 0x50);
                } else {
                    VecCopy__FP3VecPC3Vec(&sp14, (void *) (*(u32 *)((s8 *)arg0 + 0x2A8) + 0x2FC));
                }
            } else {
                *(u32 *)((s8 *)arg0 + 0x38C) = 0U;
                VecCopy__FP3VecPC3Vec(&sp14, (void *) (*(u32 *)((s8 *)arg0 + 0x2A8) + 0x2FC));
            }
            update_target_near_flag(arg0);
            TObjPlayer__sub_800C4E08(arg0);
            advance_animation_playback(arg0);
            {
                Vec_800D6618 sp8 = sp14;
                enemy_move_toward(arg0, *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x350)) + 8), &sp8, 0, *(f32 *)((s8 *)arg0 + 0x394));
            }
            if (*(u16 *)((s8 *)arg0 + 0x338) == 0xFFFF) {
                if (horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x38) < (r = *(f32 *)((s8 *)arg0 + 0x394) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0xC)) * r ||
                    lbl_805DA320 < (f32) (*(s32 *)((s8 *)arg0 + 0x2AC))++) {
                    *(u32 *)((s8 *)arg0 + 0x2A8) = 0U;
                    *(s32 *)((s8 *)arg0 + 0x2AC) = 0;
                }
            }
        }
        break;
    }
    ((TObjPlayer *)arg0)->update_collisions();
    ((TObjPlayer *)arg0)->update_enemy_collision_flags();
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    obj_clearFlags30(arg0, 0x200000);
}

void render__16TObjEneMerillLiaFPv(u8 *arg0) {
  Stack_800D6810 stack;
  s32 var_r30;
  s16 temp_r0;
  s32 temp_r3;
  s32 var_r29;
  temp_r3 = PSO_VCALL_VObj_18_ca64a0_m9(arg0, lbl_805DA324, lbl_805DA328, lbl_805DA314);
  if (temp_r3 != 0)
  {
    lbl_805D5660 = model_render_flags;
    select_actor_lighting((void *) arg0);
    TObjFish::set_global_param((int) ((RecoveredFields_800D6810_arg0 *) arg0)->field_24);
    push_matrix();
    translate_matrix((int) 0, (f32) TObjEneMerillLia__data_805DA300, (f32) ((RecoveredFields_800D6810_arg0 *) arg0)->field_380, (f32) TObjEneMerillLia__data_805DA300);
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) 0, (int) ((RecoveredFields_800D6810_arg0 *) arg0)->field_60);
    if (TObjPlayer::check_demo_mode() == 1)
    {
      draw_chunk_object((int) ((RecoveredFields_800D6810_arg0 *) arg0)->field_34);
    }
    else
    {
      TObjPlayer::toggle_particle_effect();
      var_r30 = 1;
      var_r29 = 0;
      if (((s16) ((RecoveredFields_800D6810_arg0 *) arg0)->field_326) == 0xD)
      {
        var_r29 = 1;
        var_r30 = PSO_VCALL_VObj_14_fddec9_m8(((u8 *) arg0) + 936);
      }
      if (var_r29 != 0)
      {
        PSO_VCALL_VObj_14_fddec9_m6(((u8 *) arg0) + 936);
        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) arg0) != 0)
        {
          var_r30 = 0;
        }
      }
      if (var_r30 != 0)
      {
        if (temp_r3 == 1)
        {
          TObjPlayer::set_global_flag();
          ((TObjEneRe7Berura *)arg0)->draw();
          TObjPlayer::clear_global_state();
        }
        else
        {
          TObjPlayer::set_global_flag();
          ((TObjPlayer *)arg0)->render_world_model();
          TObjPlayer::clear_global_state();
        }
      }
      TParticleCtrl::end_effect_render();
      if (var_r29 != 0)
      {
        PSO_VCALL_VObj_14_fddec9_m7(((u8 *) arg0) + 936);
      }
    }
    pop_matrix();
    restore_scene_lighting();
    temp_r0 = ((RecoveredFields_800D6810_arg0 *) arg0)->field_326;
    if ((temp_r0 >= 0xA) || (temp_r0 < 8))
    {
      stack.sp8 = lbl_805DA32C;
      stack.spC = TObjEneMerillLia__data_805DA2F4;
      stack.sp10 = lbl_805DA330;
      ((TObjPlayer *)arg0)->render_with_position_override((u8 *)(&stack.sp8), (s32)((int) 0));
    }
  }
}

#pragma push
#pragma opt_common_subs off
void TObjEneMerillLia::init_params_from_position() {
    u8 *arg0 = (u8 *)this;
    this->m_3d8 = (s16) ((s32) *(f32 *)((s8 *)arg0 + 0x360) + 0x12C);
    this->m_3c4 = (f32) (*(f32 *)((s8 *)arg0 + 0x354) - lbl_805DA334);
    if (this->m_3c4 < TObjEneMerillLia__data_805DA300) {
        this->m_3c4 = (f32) TObjEneMerillLia__data_805DA300;
    }
    *(f32 *)((s8 *)arg0 + 0x3C8) = (f32) (*(f32 *)((s8 *)arg0 + 0x35C) - lbl_805DA334);
    if (*(f32 *)((s8 *)arg0 + 0x3C8) < TObjEneMerillLia__data_805DA300) {
        *(f32 *)((s8 *)arg0 + 0x3C8) = (f32) TObjEneMerillLia__data_805DA300;
    }
    this->m_3d0 = (f32) (lbl_805DA338 + *(f32 *)((s8 *)arg0 + 0x364));
    if (this->m_3d0 < lbl_805DA2EC) {
        this->m_3d0 = (f32) lbl_805DA2EC;
    }
}
#pragma pop

void TObjEneMerillLia::select_action_by_distance() {
    u8 *arg0 = (u8 *)this;
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= this->m_3c4) {
        init_attack_state();
        return;
    }
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= *(f32 *)((s8 *)arg0 + 0x3C8)) {
        reset_action_state();
    }
}

typedef struct VBase_18_477421 VBase_18_477421;
typedef struct VObj_18_477421 VObj_18_477421;
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())
void run_state_dispatch__16TObjEneMerillLiaFPv(u8 *arg0) {
  s16 temp_r0;
  if (TObjPlayer::check_demo_mode() == 1)
  {
    PSO_VCALL_VObj_18_477421_m99(arg0);
    return;
  }
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        PSO_VCALL_VObj_18_477421_m81(arg0);
        break;
      case 1:
        PSO_VCALL_VObj_18_477421_m82(arg0);
        break;
      case 2:
        PSO_VCALL_VObj_18_477421_m83(arg0);
        break;
      case 3:
        PSO_VCALL_VObj_18_477421_m84(arg0);
        break;
      case 4:
        PSO_VCALL_VObj_18_477421_m85(arg0);
        break;
      case 5:
        PSO_VCALL_VObj_18_477421_m86(arg0);
        break;
      case 6:
        PSO_VCALL_VObj_18_477421_m87(arg0);
        break;
      case 7:
        PSO_VCALL_VObj_18_477421_m88(arg0);
        break;
      case 8:
        PSO_VCALL_VObj_18_477421_m89(arg0);
        break;
      case 9:
        PSO_VCALL_VObj_18_477421_m90(arg0);
        break;
      case 10:
        TObjEneMerillLia::update_kafun_attack((void *)((void *) arg0));
        break;
      case 11:
        TObjEneMerillLia::update_emerge_state((void *) arg0);
        break;
      case 12:
        TObjEneMerillLia::search_target((void *) arg0);
        break;
      case 13:
        TObjEneMerillLia__sub_800D5570((Obj_800D5570 *)((void *) arg0));
        break;
    }
  }
  ((TObjPlayer *)arg0)->update_prev_position();
  copy_position__20TBoss3VoloptHiraisinFi((void *) arg0);
  submit_cursor_candidate((void *) arg0, (int) (-1));
  *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x2B4))) + TObjEneMerillLia__data_805DA2F4);
}

void * TObjEneMerillLia__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3DC);
    if (o2 != NULL) {
        o2 = TObjEneMerillLia__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjEneMerillLia__rock_stats_table;
extern u32 merill_lia_rock_buffer;
extern u32 merill_lia_rock_aux_buffer;
extern u32 TObjEneMerillLia__rock_param_table;
extern u32 TObjEneMerillLia__entry_params_resource;

void TObjEneMerillLia::destroy_rocks() {
    if ((u32) TObjEneMerillLia__rock_stats_table != 0U) {
        mem_free((void*)TObjEneMerillLia__rock_stats_table);
        TObjEneMerillLia__rock_stats_table = 0U;
    }
    if ((u32) merill_lia_rock_buffer != 0U) {
        mem_free((void*)merill_lia_rock_buffer);
        merill_lia_rock_buffer = 0U;
    }
    if ((u32) merill_lia_rock_aux_buffer != 0U) {
        mem_free((void*)merill_lia_rock_aux_buffer);
        merill_lia_rock_aux_buffer = 0U;
    }
    if ((u32) TObjEneMerillLia__rock_param_table != 0U) {
        mem_free((void*)TObjEneMerillLia__rock_param_table);
        TObjEneMerillLia__rock_param_table = 0U;
    }
    if ((u32) TObjEneMerillLia__entry_params_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneMerillLia__entry_params_resource, 1);
        TObjEneMerillLia__entry_params_resource = 0U;
    }
}

void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80494728;
        unlink_enemy_group_relations(arg0);
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
struct O_800D7274;
struct Obj_800D5150;
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 obj_setFlags30(void *, s32);
s32 copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 init_enemy_base__10TObjPlayerFv(void *, s32);
s32 bind_enemy_combat_stats(void *, int, int, int);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 init_collision_body_parts(void *, void *, int);
extern s32 lbl_805D2A88;
extern u32 TObjEneMerillLia__rock_stats_table;
extern u32 merill_lia_rock_buffer;
extern u32 merill_lia_rock_aux_buffer;
extern u32 TObjEneMerillLia__rock_param_table;
extern u32 TObjEneMerillLia__entry_params_resource;
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA338;
extern const f32 lbl_805DA340;
extern const f32 lbl_805DA344;
#define arg0 ((u8 *)arg0v)
void *TObjEneMerillLia__ct(void *arg0v, void *arg1, void *arg2) {
    f32 sc;
    s32 hp;
    s16 t;

    init_enemy_base__10TObjPlayerFv(arg0, (s32)arg1);
    *(void **)((s8 *)arg0 + 0x18) = lbl_80494728;
    ((TObjEneMe3SinowZoa *)(arg0 + 0x3A8))->init_common();
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D2A88;
    ((VObj_18_4c2345 *) arg0)->m79((s32)arg2);
    ((TObjEneMerillLia *)arg0)->init_params_from_position();
    ((TObjPlayer *)arg0)->init_position_vectors();
    *(s32 *)((s8 *)arg0 + 0x334) = *(s32 *)((s8 *)arg0 + 0x368);
    ((TObjEneMerillLia *)arg0)->clamp_and_apply_mode_param();
    ((TObjEneMerillLia *)arg0)->load_entry_params(*(s32 *)((s8 *)arg0 + 0x368));
    *(void **)((s8 *)arg0 + 0xD8) = lbl_80494570;
    ((TObjPlayer *)arg0)->set_field_d8((s32)(*(void **)((s8 *)arg0 + 0xD8)));
    *(s32 *)((s8 *)arg0 + 0xDC) = *(s32 *)((s8 *)TObjEneMerillLia__entry_params_resource + 0x430);
    *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    ((TObjEnePanarms *)arg0)->set_field_b8(*(s16 *)((s8 *)arg0 + 0xB8));
    init_collision_body_parts(arg0, (u8 *) lbl_804946A4 + *(s32 *)((s8 *)arg0 + 0x334) * 0x2C, 1);
    bind_enemy_combat_stats(arg0, ((s32 *) TObjEneMerillLia__rock_stats_table)[*(s32 *)((s8 *)arg0 + 0x334)],
        ((s32 *) merill_lia_rock_buffer)[*(s32 *)((s8 *)arg0 + 0x334)], ((s32 *) merill_lia_rock_aux_buffer)[*(s32 *)((s8 *)arg0 + 0x334)]);
    *(u8 **)((s8 *)arg0 + 0x350) = (u8 *) lbl_80494650 + *(s32 *)((s8 *)arg0 + 0x334) * 0x1C;
    *(s16 *)((s8 *)arg0 + 0x33E) = *(s16 *)((s8 *)arg0 + 0x32C);
    ((TObjPlayer *)arg0)->update_prev_position();
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)((s8 *)arg0 + 0x2AC) = lbl_805DA340 * (lbl_805DA344 * calc_boss4_scale__10TObjPlayerFi(arg0));
    *(s16 *)((s8 *)arg0 + 0x33A) = 0xF;
    *(s16 *)((s8 *)arg0 + 0x33C) = *(s16 *)((s8 *)arg0 + 0x33A);
    *(s16 *)((s8 *)arg0 + 0x328) = 0;
    *(s16 *)((s8 *)arg0 + 0x374) = 0;
    *(s16 *)((s8 *)arg0 + 0x376) = 0;
    *(s32 *)((s8 *)arg0 + 0x378) = 0;
    *(s32 *)((s8 *)arg0 + 0x37C) = 0;
    ((TObjPlayer *)arg0)->add_flags_2e4(2);
    obj_setFlags30(arg0, 0x40000);
    *(f32 *)((s8 *)arg0 + 0x380) = TObjEneMerillLia__data_805DA300;
    *(f32 *)((s8 *)arg0 + 0x398) = ((f32 **) TObjEneMerillLia__rock_param_table)[*(s32 *)((s8 *)arg0 + 0x334)][0];
    *(f32 *)((s8 *)arg0 + 0x3A0) = ((f32 **) TObjEneMerillLia__rock_param_table)[*(s32 *)((s8 *)arg0 + 0x334)][1];
    *(f32 *)((s8 *)arg0 + 0x39C) = ((f32 **) TObjEneMerillLia__rock_param_table)[*(s32 *)((s8 *)arg0 + 0x334)][2];
    *(f32 *)((s8 *)arg0 + 0x3A4) = ((f32 **) TObjEneMerillLia__rock_param_table)[*(s32 *)((s8 *)arg0 + 0x334)][3];
    *(f32 *)((s8 *)arg0 + 0x3D4) = ((f32 **) TObjEneMerillLia__rock_param_table)[*(s32 *)((s8 *)arg0 + 0x334)][5];
    *(f32 *)((s8 *)arg0 + 0x3CC) = ((s32 **) TObjEneMerillLia__rock_param_table)[*(s32 *)((s8 *)arg0 + 0x334)][6] / lbl_805DA338;
    *(s32 *)((s8 *)arg0 + 0x390) = 1;
    *(s16 *)((s8 *)arg0 + 0x326) = 0xD;
    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
    ((VObj_18_4c2345 *) arg0)->m80();
    return arg0;
}
#undef arg0

void TObjEneMerillLia::load_entry_params(s32 i) {
    O_800D7274 *self = (O_800D7274 *)this;
    self->f34 = (*(D_800D7274 * *)&TObjEneMerillLia__entry_params_resource)->entries[i].f8;
    self->f24 = (*(D_800D7274 * *)&TObjEneMerillLia__entry_params_resource)->entries[i].fc;
}

}
