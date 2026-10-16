#include "types.h"
#include "pso/misc/TOTrapAncient02.h"
#include "pso/misc/TOTrapAncient02R.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TOTrap.h"
#include "pso/misc/TTecFoie.h"
#include "pso/misc/TTecGiBarta.h"
#include "pso/misc/TTecGiFoie.h"
#include "pso/misc/TTecMegid.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjSeabedSuisoBrakable.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_dbc69f { char pad[0x18]; };

struct VObj_18_dbc69f : VBase_18_dbc69f {
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
    virtual s32 m21(void *, s32 *, s32, s32, s32);
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
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual f32 m85(f64 *, s32, f32, f32);
};

struct Vec_8017A3C0 { f32 x, y, z; };

struct Dmg_8017A3C0 { s32 type; f32 v; };

struct VB_8017A3C0 { u8 pad[0x18]; };

struct Trap_8017A3C0 : VB_8017A3C0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Dmg_8017A3C0, s32, s32, s32);
    virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84();
    virtual f32 m85(f32);
};

struct Obj_8017A3C0 {
    u8 pad0[0x28];
    s16 f28;
    u8 pad2A[4];
    s16 f2E;
    u8 pad30[8];
    Vec_8017A3C0 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x2A8 - 0x64];
    Obj_8017A3C0 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_8017A3C0 f2FC;
    u8 pad308[0x326 - 0x308];
    s16 mode;
    s16 sub;
    u8 pad32A[0x334 - 0x32A];
    f32 range;
    f32 f338;
    u16 idx;
    u8 pad33E[0x344 - 0x33E];
    f32 f344;
    f32 f348;
    u8 pad34C[0x35C - 0x34C];
    s32 kind;
    s32 level;
};

extern "C" {
u16 find_nearest_visible_player(void *, int, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_current_floor(void);
f64 atan2_float(f32, f32);
s32 spawn_particle_effect(void *, int);
f32 horizontal_distance_squared(void *, void *);
void set_indexed_flags(void *, s32, s32);
f32 get_collision_body_radius(void *, s32);
void submit_cursor_candidate(void *, s32);
s32 get_player_by_client_id(u32);
void play_sound_effect(s32, void *, s32, s32);
void * __nw__7TObjectFUl(int);
void construct_bolt_effect__9TTecZondeFPvPvPvPviiff(void *, s32, void *, void *, s32, s32, f32, f32);
void rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
void subtract_vector(void *, void *);
void push_matrix_from(void *);
s32 pop_matrix();
extern const f64 lbl_80442F38;
extern Vec_8017A3C0 lbl_8050BEE0[];
extern Vec_8017A3C0 lbl_8050BF00[];
extern u8 identity_matrix[];
extern s32 tl_07;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA80;
extern const f32 lbl_805DBA84;
extern const f32 lbl_805DBA88;
extern const f32 lbl_805DBA8C;
extern const f32 lbl_805DBA90;
extern const f32 lbl_805DBA94;
extern const f32 lbl_805DBA98;
void TOTrapAncient02R__vt79(Obj_8017A3C0 *o);
void set_indexed_flags(void *, s32, s32);
void submit_cursor_candidate(void *, s32);
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA80;
void TOTrapAncient02R__vt80(void *arg0);
u16 find_nearest_visible_player(void *, int, f32);
f32 horizontal_distance_squared(void *, void *);
f32 TObjPlayer__sub_8017A1A4(void *, s32);
void submit_cursor_candidate(void *, s32);
void send_6x2C_impose_hold(void *, void *, s32, s32, f32);
s32 get_player_by_client_id(u32);
extern s32 local_client_id;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA80;
extern const f32 lbl_805DBA84;
extern const f32 lbl_805DBA88;
}

extern "C" {

struct Obj_8017A8B0 {
    u8 pad[0x38];
    f32 pos[3];
    u8 pad44[0x2A8 - 0x44];
    u8 *target;
    u8 pad2ac[0x326 - 0x2AC];
    s16 state;
    u8 pad328[0x334 - 0x328];
    f32 range;
    u8 pad338[0x33C - 0x338];
    u16 idx;
    u8 pad33e[0x364 - 0x33E];
    s32 switchId;
};

struct Vec_8017A988 { f32 x, y, z; };

struct VBase_8017A988 { u8 pad[0x18]; };

struct Obj_8017A988 : VBase_8017A988 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s16 *, s32);
    u16 id;
    u8 pad1e[0x38 - 0x1E];
    Vec_8017A988 pos;
    u8 pad44[0x80 - 0x44];
    u32 x80;
    u8 pad84[0x326 - 0x84];
    s16 state;
    u8 pad328[0x344 - 0x328];
    f32 x344;
    f32 x348;
    u8 pad34c[0x368 - 0x34C];
    s32 timer;
};

struct VBase_8017AB30 { char pad[0x18]; };

struct VObj_8017AB30 : VBase_8017AB30 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Base_B_8017AC98 { char pad[0x18]; };

struct V_B_8017AC98 : Base_B_8017AC98 {
    virtual void pv15();
    virtual void pv16();
    virtual void pv17();
    virtual void pv18();
    virtual void pv19();
    virtual void pv20();
    virtual void pv21();
    virtual void pv22();
    virtual s32 m8(f32, f32);
};

struct Base_8017B84C_8017AC98 { char pad[0x18]; };

struct VObj_8017B84C_8017AC98 : Base_8017B84C_8017AC98 {
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
};

struct Obj_8017ACA0 {
    u8 pad[0x326];
    s16 state;
    u8 pad328[0x34C - 0x328];
    s32 angle;
};

struct Trap_8017ADC4 {
    u8 pad0[0x2A8];
    void *target;
    u8 pad2AC[0x326 - 0x2AC];
    s16 mode;
    s16 state;
    u8 pad32A[0x33C - 0x32A];
    u16 player;
    u8 pad33E[0x344 - 0x33E];
    f32 h344;
    f32 h348;
    u8 pad34C[0x350 - 0x34C];
    s32 reset;
    s32 timer;
};

struct Base_8017B6D8 { char pad[0x18]; };

struct V_8017B6D8 : Base_8017B6D8 {
    virtual void pv8();
    virtual void pv9();
    virtual void pv10();
    virtual void pv11();
    virtual void pv12();
    virtual void init(void *);
};

struct Trap_8017B6D8 {
    u32 id;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x30 - 0x28];
    u32 flags;
    void *f34;
    u8 pad38[0x64 - 0x38];
    s32 f64;
    f32 f68;
    u8 pad6C[0x84 - 0x6C];
    s32 f84;
    u8 pad88[0x326 - 0x88];
    s16 mode;
    s16 state;
    u8 pad32A[0x334 - 0x32A];
    f32 range;
    f32 dist;
    u16 player;
    u8 pad33E[0x344 - 0x33E];
    f32 h344;
    f32 h348;
    s32 f34C;
    s32 reset;
    s32 timer;
    s32 f358;
};

u16 find_nearest_visible_player(void *, int, f32);
u16 obj_getField1c(void *);
void obj_setFlags30(void *, u32);
s32 is_split_screen();
s32 get_state_flag__9TMainTaskFv();
void * get_bml_model(void *, int);
void TLobby__sub_8001FE7C(void*, int);
void * load_resource_from_descriptor(void *, int, char *, int, int, int);
void fn_8002AE64(void *);
s32 check_player_flag1__6TLobbyFv();
void * alloc__23TAdSinglePlyChrSelectGCFv(u32);
s32 setup_particle_tev(int);
s32 spawn_particle_effect(void *, int);
void TObjPlayer__sub_800A7798(void *, f32);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(s32);
f32 horizontal_distance_squared(void *, void *);
s32 send_object_state_update(void *, void *);
s32 unregister_object_by_id(s32 *);
void refresh_collision_body_centers(void *);
s32 free_collision_body_parts(void *);
void init_collision_body_parts(void *, void *, s32);
s32 access_object_saved_state(void *, void *, int);
s32 __dt__6TOTrapFv(void *, s32);
void * TOTrap__ct(void *, void *, void *);
void TOTrapAncient02R__vt77(Obj_8017A8B0 *self);
f32 vfunc_22__16TOTrapAncient02RFPvf(Obj_8017A988 *self);
void * __dt__16TOTrapAncient02RFv(void *arg0, s16 arg1);
void * TOTrapAncient02R__ct(void *arg0, void *arg1, void *arg2);
void TOTrapAncient02__vt84(void);
void TOTrapAncient02__vt86(void);
void TOTrapAncient02__sub_8017ACA0(Obj_8017ACA0 *self);
void TOTrapAncient02__vt80(Trap_8017ADC4 *self);
void render__15TOTrapAncient02Fv(void *arg0);
void * __dt__15TOTrapAncient02Fv(void *arg0, s16 arg1);
void * TOTrapAncient02__ct(void *arg0, void *arg1, void *arg2);
void TOTrapAncient02R__vt78(void *arg0);
s32 init_trap_param_clamped(void *);
s32 clamp_trap_level_param(void *);
s32 init_trap_object_id(void *);
void submit_cursor_candidate(void *, s32);
void send_code_45_1__10TObjPlayerFi(s32);
s32 get_player_by_client_id(u32);
void play_persistent_sound(int, void *, void *, int, int);
u8 is_current_floor_switch_set(u16);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void scroll_ginja_mesh_uvs(u32, s32, s32, u16, s32);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(void *);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);

extern u32 TOTrapAncient02__shared_resource;
extern s32 __vt__15TOTrapAncient02[];
extern u32 lbl_805D31B4;
extern s32 lbl_805D31B8;
extern s32 local_client_id;
extern s32 actor_frame_tick;
extern s32 game_difficulty_selection;
extern s32 lbl_805D5ADC;
extern u32 lbl_805D5AE0;
extern s32 lbl_805D5AE4;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA7C;
extern const f32 lbl_805DBA80;
extern const f32 lbl_805DBA94;
extern const f32 lbl_805DBA9C;
extern const f32 lbl_805DBAA0;
extern const f32 lbl_805DBAA4;
extern void *tl_05;

#pragma push
#pragma fp_contract on
void vfunc_23__16TOTrapAncient02RFPvPvPvll();
void vfunc_24__16TOTrapAncient02RFPvPv();
void TOTrapAncient02R__vt84();
void TOTrapAncient02R__vt86();
void TOTrap__sub_80178BC0();
void vfunc_25__6TOTrapFPUc();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A78();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_80011010();
void TObjPlayer__sub_80014830();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_80014884();
void TObjPlayer__sub_80014888();
void TObjPlayer__sub_8001488C();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014898();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void vfunc_13__13TUnk_804AF8A0Fl();
void vfunc_12__13TUnk_804B9870Fv();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_movement_ailment__10TObjPlayerFv();
void apply_object_set_data();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_shock_status__10TObjPlayerFv();
void apply_slow_status__10TObjPlayerFPv();
void apply_switch_attack__10TObjPlayerFi();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void consume_timer_field__10TObjPlayerFPvi();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void vfunc_9__13TUnk_804806E8Fv();
void get_actor_level_index();
void get_pos__10TObjPlayerFii();
void is_actor_cadence_frame();
void is_target_in_attack_range__10TObjPlayerFv();
void play_sounds__6TOTrapFv();
void render_shadows__7TObjectFv();
void reset_motion_fields__13TUnk_804806E8Fv();
void reset_pose__10TObjPlayerFPv();
void ret_8017B878();
void vfunc_26__16TOTrapAncient02RFll();
void vfunc_27__16TOTrapAncient02RFPvlf();
void vfunc_20__16TOTrapAncient02RFPvf();
void vfunc_21__16TOTrapAncient02RFPvPvPvf();
void vfunc_6__6TOTrapFPsl();
void trigger_switch_attack__10TObjPlayerFi();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void update_poison_status__10TObjPlayerFv();
void update_shock_clock__10TObjPlayerFPv();
void run_task__6TOTrapFv();
extern char lbl_80442E70[];
extern char lbl_80442E88[];
extern char lbl_80442EA4[];
extern char lbl_80442EC0[];
extern char lbl_80442ED8[];
extern char lbl_80442EF0[];
extern const char *lbl_805D31A8[];
extern const char *lbl_805D31AC[];
extern const char *lbl_805D31B0[];
struct TrapAncient02ResourceDescriptor {
    const char *bml_filename;
    const char *const *model_filenames;
    const char *const *motion_filenames;
    s16 model_count;
    s16 motion_count;
};
struct TrapAncient02ResourceRecord {
    const char *model_filenames[2];
    TrapAncient02ResourceDescriptor descriptor;
};
struct TrapAncient02CollisionBody {
    f32 local_center[3];
    f32 radius;
    f32 field_10;
    s32 field_14;
    u32 flags;
    f32 world_center[3];
    f32 field_28;
};
typedef char TrapAncient02ResourceDescriptor_size[(sizeof(TrapAncient02ResourceDescriptor) == 0x10) ? 1 : -1];
typedef char TrapAncient02ResourceRecord_size[(sizeof(TrapAncient02ResourceRecord) == 0x18) ? 1 : -1];
typedef char TrapAncient02CollisionBody_size[(sizeof(TrapAncient02CollisionBody) == 0x2C) ? 1 : -1];
TrapAncient02ResourceRecord trap_ancient02_torabasami_resources = {
    { lbl_80442E70, 0 },
    { lbl_80442E88, trap_ancient02_torabasami_resources.model_filenames, lbl_805D31A8, 1, 0 }
};
TrapAncient02ResourceRecord trap_ancient02_ruins_pillar_resources = {
    { lbl_80442EA4, 0 },
    { lbl_80442EC0, trap_ancient02_ruins_pillar_resources.model_filenames, lbl_805D31AC, 1, 0 }
};
TrapAncient02ResourceRecord trap_ancient02_seabed_pillar_resources = {
    { lbl_80442ED8, 0 },
    { lbl_80442EF0, trap_ancient02_seabed_pillar_resources.model_filenames, lbl_805D31B0, 1, 0 }
};
TrapAncient02CollisionBody trap_ancient02_collision_body = {
    { 0.0f, 8.5f, 0.0f }, 2.0f, 0.0f, 0, 0x38003, { 0.0f, 0.0f, 0.0f }, 0.0f
};
s32 __vt__16TOTrapAncient02R[90] = {
    0,
    0,
    (s32)&__dt__16TOTrapAncient02RFv,
    (s32)&run_task__6TOTrapFv,
    (s32)&render__15TOTrapAncient02Fv,
    (s32)&render_shadows__7TObjectFv,
    (s32)&vfunc_6__6TOTrapFPsl,
    (s32)&apply_object_set_data,
    (s32)&reset_motion_fields__13TUnk_804806E8Fv,
    (s32)&vfunc_9__13TUnk_804806E8Fv,
    (s32)&update_object_view_visibility__13TUnk_804B9870Fff,
    (s32)&classify_actor_view_detail,
    (s32)&vfunc_12__13TUnk_804B9870Fv,
    (s32)&vfunc_13__13TUnk_804AF8A0Fl,
    (s32)&add_actor_exp,
    (s32)&consume_timer_field__10TObjPlayerFPvi,
    (s32)&get_actor_level_index,
    (s32)&update_actor_ground_y,
    (s32)&TObjPlayer__sub_80018E6C,
    (s32)&is_actor_cadence_frame,
    (s32)&vfunc_20__16TOTrapAncient02RFPvf,
    (s32)&vfunc_21__16TOTrapAncient02RFPvPvPvf,
    (s32)&vfunc_22__16TOTrapAncient02RFPvf,
    (s32)&vfunc_23__16TOTrapAncient02RFPvPvPvll,
    (s32)&vfunc_24__16TOTrapAncient02RFPvPv,
    (s32)&vfunc_25__6TOTrapFPUc,
    (s32)&vfunc_26__16TOTrapAncient02RFll,
    (s32)&vfunc_27__16TOTrapAncient02RFPvlf,
    (s32)&TObjPlayer__sub_80011010,
    (s32)&TObjPlayer__sub_8000FF3C,
    (s32)&is_target_in_attack_range__10TObjPlayerFv,
    (s32)&TObjPlayer::test_flag_256,
    (s32)&TObjPlayer::test_flag30_512,
    (s32)&TObjPlayer::has_flag_0x800,
    (s32)&TObjPlayer::test_flag_1000,
    (s32)&update_poison_status__10TObjPlayerFv,
    (s32)&update_action_hold_status__10TObjPlayerFv,
    (s32)&update_action_timer__10TObjPlayerFPv,
    (s32)&update_flag30_timer__10TObjPlayerFPv,
    (s32)&update_movement_status__10TObjPlayerFv,
    (s32)&update_shock_clock__10TObjPlayerFPv,
    (s32)&update_attack_stat_status,
    (s32)&update_defense_stat_status,
    (s32)&TObjPlayer__sub_800172CC,
    (s32)&apply_poison_status__10TObjPlayerFv,
    (s32)&apply_paralysis__10TObjPlayerFv,
    (s32)&apply_slow_status__10TObjPlayerFPv,
    (s32)&apply_confusion_status__10TObjPlayerFv,
    (s32)&apply_movement_ailment__10TObjPlayerFv,
    (s32)&apply_shock_status__10TObjPlayerFv,
    (s32)&clear_harmful_statuses__10TObjPlayerFv,
    (s32)&apply_attack_stat_status__10TObjPlayerFv,
    (s32)&TObjPlayer::apply_defense_stat_status,
    (s32)&cure_poison_ailment,
    (s32)&cure_paralysis__10TObjPlayerFv,
    (s32)&clear_all_status_effects,
    (s32)&apply_action_hold_status,
    (s32)&apply_anti_technique__10TObjPlayerFv,
    (s32)&TObjPlayer__sub_80014898,
    (s32)&TObjPlayer__sub_80014894,
    (s32)&TObjPlayer__sub_80014890,
    (s32)&TObjPlayer__sub_8001488C,
    (s32)&TObjPlayer__sub_80014888,
    (s32)&TObjPlayer__sub_80014884,
    (s32)&reset_pose__10TObjPlayerFPv,
    (s32)&TObjPlayer__sub_80014840,
    (s32)&TObjPlayer__sub_80014838,
    (s32)&TObjPlayer__sub_80014830,
    (s32)&get_pos__10TObjPlayerFii,
    (s32)&apply_switch_attack__10TObjPlayerFi,
    (s32)&enemy_spawn_jellen_effect,
    (s32)&trigger_switch_attack__10TObjPlayerFi,
    (s32)&enemy_spawn_zalure_effect,
    (s32)&TObjPlayer__sub_80010A80,
    (s32)&TObjPlayer__sub_80010A78,
    (s32)&fn_80010EC8,
    (s32)&fn_80010EC4,
    (s32)&fn_80010EC0,
    (s32)&fn_80010EBC,
    (s32)&TOTrapAncient02R__vt77,
    (s32)&TOTrapAncient02R__vt78,
    (s32)&TOTrapAncient02R__vt79,
    (s32)&TOTrapAncient02R__vt80,
    (s32)&ret_8017B878,
    (s32)&TOTrapAncient02__sub_8017ACA0,
    (s32)&play_sounds__6TOTrapFv,
    (s32)&TOTrapAncient02R__vt84,
    (s32)&TOTrap::scale_by_table_value,
    (s32)&TOTrapAncient02R__vt86,
    (s32)&TOTrap__sub_80178BC0
};

void TOTrapAncient02R::calc_trap_count() {
    s32 temp_r4;

    *(s32 *)&this->m_360 = (s32) (*(f32 *)((s8 *)this + 0x70) + ((lbl_805DBA7C * (f32) game_difficulty_selection) + lbl_805DBA78));
    temp_r4 = *(s32 *)&this->m_360;
    if (temp_r4 < 0) {
        *(s32 *)&this->m_360 = 0;
        return;
    }
    if ((s32) game_difficulty_selection == 3) {
        if (temp_r4 > 0x1D) {
            *(s32 *)&this->m_360 = 0x1D;
        }
    } else if (temp_r4 > 0xE) {
        *(s32 *)&this->m_360 = 0xE;
    }
}
extern int fold_flush_0;
#pragma pop

void TOTrapAncient02R__vt80(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;
    set_indexed_flags(arg0, 0, 1);
    submit_cursor_candidate(arg0, -1);
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
    case 1:
        *(s16 *)((s8 *)arg0 + 0x328) = 2;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x354) = (s32) (*(s32 *)((s8 *)arg0 + 0x354) - 1);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x354) < 0) {
            *(s16 *)((s8 *)arg0 + 0x328) = 3;
            *(s32 *)((s8 *)arg0 + 0x354) = (s32) *(s32 *)((s8 *)arg0 + 0x350);
        }
        break;
    case 3:
        if (lbl_805DBA80 < *(f32 *)((s8 *)arg0 + 0x348)) {
            *(f32 *)((s8 *)arg0 + 0x348) -= lbl_805DBA78;
            return;
        }
        *(s16 *)((s8 *)arg0 + 0x328) = 4;
        *(f32 *)((s8 *)arg0 + 0x348) = (f32) lbl_805DBA80;
        return;
    case 4:
        if (lbl_805DBA80 < *(f32 *)((s8 *)arg0 + 0x344)) {
            *(f32 *)((s8 *)arg0 + 0x344) -= lbl_805DBA78;
            return;
        }
        *(s16 *)((s8 *)arg0 + 0x326) = 0;
        *(s16 *)((s8 *)arg0 + 0x328) = 0;
        *(f32 *)((s8 *)arg0 + 0x344) = (f32) lbl_805DBA80;
        *(u16 *)((s8 *)arg0 + 0x33C) = 0xFFFF;
        *(s32 *)((s8 *)arg0 + 0x2A8) = 0;
        break;
    }
}

#pragma push
#pragma fp_contract on
void TOTrapAncient02R__vt79(Obj_8017A3C0 *o) {
    f32 d;
    s32 ang;
    set_indexed_flags(o, 0, 1);
    submit_cursor_candidate(o, -1);
    switch (o->sub) {
    case 0:
        if (o->f344 < lbl_805DBA84) {
            o->f344 += lbl_805DBA78;
        } else {
            o->sub = 1;
            o->f344 = lbl_805DBA84;
        }
        break;
    case 1:
        o->f348 += lbl_805DBA78;
        if (lbl_805DBA88 <= o->f348) {
            o->sub = 2;
            o->f348 = lbl_805DBA88;
        }
        break;
    case 2:
        o->idx = find_nearest_visible_player(o, 0, o->range);
        if (o->idx != 0xFFFF) {
            Obj_8017A3C0 *p = (Obj_8017A3C0 *)get_player_by_client_id(o->idx);
            o->target = p;
            if (o->target != NULL && ((TObjPlayer *)p)->get_field_3e4() == get_current_floor() &&
                (o->target->f2E == o->f2E || o->target->f28 == o->f28 || o->target->f28 == o->f2E)) {
                d = horizontal_distance_squared(&o->target->pos, &o->pos);
                o->f338 = o->range + get_collision_body_radius(o->target, 0);
                if (d < o->f338 * o->f338) {
                    o->mode = 3;
                    o->sub = 2;
                    VecCopy__FP3VecPC3Vec(lbl_8050BEE0, &o->pos);
                    lbl_8050BEE0->y += o->f344 + o->f348;
                    VecCopy__FP3VecPC3Vec(lbl_8050BF00, &o->target->f2FC);
                    subtract_vector(lbl_8050BF00, lbl_8050BEE0);
                    if (((TObjBoss2Tunnel *)lbl_8050BF00)->update_scale() < lbl_805DBA8C) {
                        lbl_8050BF00->x = lbl_8050BF00->y = lbl_805DBA80;
                        lbl_8050BF00->z = lbl_805DBA78;
                        push_matrix_from(identity_matrix);
                        rotate_matrix_y(0, o->angle);
                        rotate_vector_by_matrix(0, lbl_8050BF00, lbl_8050BF00);
                        pop_matrix();
                    }
                    ang = lbl_80442F38 * atan2_float(lbl_8050BF00->x, lbl_8050BF00->z);
                    switch (o->kind) {
                    case 1: {
                        Dmg_8017A3C0 dmg;
                        dmg.type = 3;
                        dmg.v = ((Trap_8017A3C0 *)o)->m85(lbl_805DBA94 * (f32)o->level + lbl_805DBA90);
                        ((Trap_8017A3C0 *)o->target)->m21(o, dmg, 0, -1, -1);
                        spawn_particle_effect(lbl_8050BEE0, 0xB9);
                        spawn_particle_effect(lbl_8050BEE0, 0xBA);
                        {
                            void *t = __nw__7TObjectFUl(0x260);
                            if (t != NULL) {
                                construct_bolt_effect__9TTecZondeFPvPvPvPviiff(t, tl_07, lbl_8050BEE0, lbl_8050BF00, 0x14000000, 0x14, o->range, lbl_805DBA98);
                            }
                        }
                        play_sound_effect(0x4002A408, lbl_8050BEE0, 0, 0);
                        break;
                    }
                    case 0:
                        TTecFoie::create_ex((void *)o, (void *)lbl_8050BEE0, (void *)(&o->target->f2FC), (void *)(o->level));
                        break;
                    case 2:
                        ((TTecGiBarta *)o)->create_ex((void *)lbl_8050BEE0, (void *)ang, (void *)(o->level));
                        break;
                    case 3:
                        TTecMegid::create((s32)o, (s32)lbl_8050BEE0, (s32)(&o->target->f2FC), (s32)(o->level));
                        break;
                    case 4:
                        TTecGiFoie::create((void *)o, (void *)lbl_8050BEE0, (void *)(o->level));
                        break;
                    }
                } else {
                    o->idx = 0xFFFF;
                    o->target = NULL;
                }
            } else {
                o->idx = 0xFFFF;
                o->target = NULL;
            }
        } else {
            o->target = NULL;
        }
        if (o->target == NULL) {
            o->sub = 3;
        }
        break;
    case 3:
        if (lbl_805DBA80 < o->f348) {
            o->f348 -= lbl_805DBA78;
        } else {
            o->sub = 4;
            o->f348 = lbl_805DBA80;
        }
        break;
    case 4:
        if (lbl_805DBA80 < o->f344) {
            o->f344 -= lbl_805DBA78;
        } else {
            o->mode = 0;
            o->sub = 0;
            o->f344 = lbl_805DBA80;
            o->idx = 0xFFFF;
            o->target = NULL;
        }
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TOTrapAncient02R__vt77(Obj_8017A8B0 *self) {
    ((TObjPlayer *)self)->clear_player_status_flag(0, 1);
    ((TObjPlayer *)self)->calc_attach_pos();
    if (self->switchId == -1 || is_current_floor_switch_set(self->switchId) == 1) {
        self->idx = find_nearest_visible_player(self, 0, self->range);
        if (self->idx != 0xFFFF) {
            self->target = (u8 *)get_player_by_client_id(self->idx);
            if (self->target != NULL) {
                if (horizontal_distance_squared(self->target + 0x38, self->pos) < self->range * self->range) {
                    self->state = 2;
                }
            } else {
                self->idx = 0xFFFF;
                self->target = NULL;
            }
        } else {
            self->target = NULL;
        }
    }
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma fp_contract on
f32 TOTrapAncient02R::vfunc_22(void *, f32) {
    Obj_8017A988 *self = (Obj_8017A988 *)this;
    s16 msg;
    if (self->id >= 0x4000 && self->x80 != 0) {
        Vec_8017A988 v = self->pos;
        v.y += self->x344 + self->x348;
        spawn_particle_effect(&v, 0x1D0);
        spawn_particle_effect(&v, 1);
        if (--self->timer <= 0) {
            self->timer = 0;
            if (access_object_saved_state(self, &msg, 1) != 0) {
                self->state = 4;
                msg = self->state;
                send_object_state_update(self, &msg);
                access_object_saved_state(self, &msg, 0);
                self->m4(&msg, 1);
            }
        }
    }
    return lbl_805DBA80;
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma fp_contract on
void *TOTrapAncient02R::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x36C);
    if (o != NULL) {
        o = TOTrapAncient02R__ct(o, tl_05, arg0);
    }
    return o;
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma fp_contract on
void *__dt__16TOTrapAncient02RFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TOTrapAncient02R;
        ((void (*)(void *, int))__dt__15TOTrapAncient02Fv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void *TOTrapAncient02R__ct(void *arg0, void *arg1, void *arg2) {
    ((s32 (*)(void *, void *))TOTrapAncient02__ct)(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TOTrapAncient02R;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D31B8;
    ((VObj_8017AB30 *)arg0)->m5(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    ((TObjPlayer *)arg0)->calc_attach_pos();
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)(*(void * *)&TOTrapAncient02__shared_resource) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)(*(void * *)&TOTrapAncient02__shared_resource) + 0x42C)) + 0xC);
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s16 *)((s8 *)arg0 + 0x328) = 0;
    *(f32 *)((s8 *)arg0 + 0x334) = lbl_805DBAA0 * *(f32 *)((s8 *)arg0 + 0x68) + lbl_805DBA9C;
    *(f32 *)((s8 *)arg0 + 0x338) = *(f32 *)((s8 *)arg0 + 0x334);
    *(s32 *)((s8 *)arg0 + 0x350) = (s32) (lbl_805DBA9C + (f32) *(s32 *)((s8 *)arg0 + 0x84));
    if (*(s32 *)((s8 *)arg0 + 0x350) < 0) {
        *(s32 *)((s8 *)arg0 + 0x350) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x354) = *(s32 *)((s8 *)arg0 + 0x350);
    init_trap_object_id(arg0);
    clamp_trap_level_param(arg0);
    ((TOTrapAncient02R *)arg0)->calc_trap_count();
    init_trap_param_clamped(arg0);
    *(u16 *)((s8 *)arg0 + 0x33C) = 0xFFFF;
    *(s32 *)((s8 *)arg0 + 0x2A8) = 0;
    *(f32 *)((s8 *)arg0 + 0x348) = lbl_805DBA80;
    *(f32 *)((s8 *)arg0 + 0x344) = lbl_805DBA80;
    *(s32 *)((s8 *)arg0 + 0x34C) = 0;
    if (*(s32 *)((s8 *)arg0 + 0x64) > 0) {
        *(s32 *)((s8 *)arg0 + 0x358) = 1;
    } else {
        *(s32 *)((s8 *)arg0 + 0x358) = 0;
    }
    return arg0;
}
extern int fold_flush_5;
#pragma pop

void TOTrapAncient02__vt84(void) {  }

void TOTrapAncient02__vt86(void) {  }

void TOTrapAncient02__sub_8017ACA0(Obj_8017ACA0 *self) {
    if (lbl_805D5ADC != actor_frame_tick && lbl_805D5AE0 != 0) {
        lbl_805D5ADC = actor_frame_tick;
        scroll_ginja_mesh_uvs(lbl_805D5AE0, 0, 0xE, lbl_805D5AE4, 1);
    }
    self->angle += 0x888;
    switch (self->state) {
    case 1:
    case 2:
    case 3:
        switch (TOKeyMachine01::get_global_state()) {
        case 3:
        case 4:
        case 5:
            play_persistent_sound(0x4461B, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 6:
        case 7:
            play_persistent_sound(0x4004C612, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 8:
        case 9:
        case 10:
            play_persistent_sound(0x4004C618, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 21:
        case 22:
            play_persistent_sound(0x4004C610, self, (u8 *)self + 0x38, 0, 0);
        case 0:
            return;
        case 1:
            return;
        case 2:
            return;
        case 11:
            return;
        case 12:
            return;
        case 13:
            return;
        case 14:
            return;
        case 15:
            return;
        case 16:
            return;
        case 17:
            return;
        case 18:
            return;
        case 19:
            return;
        case 20:
            return;
        }
        break;
    }
}

void TOTrapAncient02__vt80(Trap_8017ADC4 *self) {
    s32 p;
    submit_cursor_candidate(self, -1);
    switch (self->state) {
    case 0:
    case 1:
        self->state = 2;
    case 2:
        if (self->target != NULL) {
            obj_setFlags30(self->target, 0x200);
            fn_8002AE64(self->target);
            TObjPlayer__sub_800A7798(self->target, lbl_805DBA78);
            self->timer--;
            if (self->timer < 0) {
                self->state = 3;
                self->timer = self->reset;
                if (self->target != NULL && local_client_id == obj_getField1c(self->target)) {
                    p = ((s32 (*)(s32))get_player_by_client_id)(local_client_id);
                    if (p != 0 && check_player_flag1__6TLobbyFv() != 0) {
                        send_code_45_1__10TObjPlayerFi(p);
                    }
                }
            }
        } else {
            self->state = 3;
            self->timer = self->reset;
        }
        break;
    case 3:
        if (lbl_805DBA80 < self->h348) {
            self->h348 -= lbl_805DBA78;
        } else {
            self->state = 4;
            self->h348 = lbl_805DBA80;
        }
        break;
    case 4:
        if (lbl_805DBA80 < self->h344) {
            self->h344 -= lbl_805DBA78;
        } else {
            self->mode = 0;
            self->state = 0;
            self->h344 = lbl_805DBA80;
            self->player = 0xFFFF;
            self->target = NULL;
        }
        break;
    }
}

}

void TOTrapAncient02::update_hold_trigger() {
    TOTrapAncient02 *self = this;
    void *p;
    f32 d;
    submit_cursor_candidate(self, -1);
    switch (self->phase) {
    case 0:
        if (self->h344 < lbl_805DBA84) {
            self->h344 += lbl_805DBA78;
        } else {
            self->phase = 1;
            self->h344 = lbl_805DBA84;
        }
        break;
    case 1:
        self->h348 += lbl_805DBA78;
        if (lbl_805DBA88 <= self->h348) {
            self->phase = 2;
            self->h348 = lbl_805DBA88;
        }
        break;
    case 2:
        self->player = find_nearest_visible_player((void *)(self), (int)(0), self->range);
        if (self->player != 0xFFFF) {
            p = (void *)get_player_by_client_id((u32)(self->player));
            self->target = (u8 *)p;
            if (self->target != NULL) {
                d = horizontal_distance_squared((u8 *)self->target + 0x38, &self->position);
                self->dist = self->range - TObjPlayer__sub_8017A1A4(p, 0);
                if (d < self->dist * self->dist) {
                    if (self->player == local_client_id) {
                        send_6x2C_impose_hold(p, &self->position, self->timer, 0, self->dist);
                    }
                    self->mode = 3;
                    self->phase = 2;
                } else {
                    self->player = 0xFFFF;
                    self->target = NULL;
                }
            }
        } else {
            self->target = NULL;
        }
        if (self->target == NULL) {
            self->phase = 3;
        }
        break;
    case 3:
        if (lbl_805DBA80 < self->h348) {
            self->h348 -= lbl_805DBA78;
        } else {
            self->phase = 4;
            self->h348 = lbl_805DBA80;
        }
        break;
    case 4:
        if (lbl_805DBA80 < self->h344) {
            self->h344 -= lbl_805DBA78;
        } else {
            self->mode = 0;
            self->phase = 0;
            self->h344 = lbl_805DBA80;
            self->player = 0xFFFF;
            self->target = NULL;
        }
        break;
    }
}

extern "C" {

void TOTrapAncient02::render_particle_chain() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;

    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (this->rotation_y));
    temp_r31 = (unsigned char *) (*(void * *)&this->model);
    translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r31 + 8)), (f32) (*(f32 *)((s8 *)temp_r31 + 0xC) + this->h344), (f32) (*(f32 *)((s8 *)temp_r31 + 0x10)));
    setup_particle_tev((int) (0));
    TObjFish::set_global_param((int) (this->texture_id));
    ((TOTrapAncient02 *)0x38E)->load_projection_tex_matrix();
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
    TParticleCtrl::disable_if_single_screen();
    push_matrix();
    temp_r31_2 = (unsigned char *) (*(void **)((s8 *)temp_r31 + 0x2C));
    translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r31_2 + 8)), (f32) (*(f32 *)((s8 *)temp_r31_2 + 0xC) + this->h348), (f32) (*(f32 *)((s8 *)temp_r31_2 + 0x10)));
    setup_particle_tev((int) (0));
    TObjFish::set_global_param((int) (this->texture_id));
    ((TOTrapAncient02 *)0x38E)->load_projection_tex_matrix();
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
    TParticleCtrl::disable_if_single_screen();
    TParticleCtrl::begin_effect_render();
    push_matrix();
    temp_r31_3 = (unsigned char *) (*(void **)((s8 *)temp_r31_2 + 0x2C));
    post_translate_matrix((void *) (temp_r31_3 + 8));
    setup_particle_tev((int) (1));
    TObjFish::set_global_param((int) (this->texture_id));
    ((TOTrapAncient02 *)0x38E)->load_projection_tex_matrix();
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_3 + 4)));
    TParticleCtrl::disable_if_single_screen();
    pop_matrix();
    push_matrix();
    temp_r31_4 = (unsigned char *) (*(void **)((s8 *)temp_r31_3 + 0x30));
    post_translate_matrix((void *) (temp_r31_4 + 8));
    rotate_matrix_y((int) (0), (int) (*(s32 *)&this->m_34c));
    setup_particle_tev((int) (0));
    TObjFish::set_global_param((int) (this->texture_id));
    ((TOTrapAncient02 *)0x38E)->load_projection_tex_matrix();
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_4 + 4)));
    TParticleCtrl::disable_if_single_screen();
    pop_matrix();
    TParticleCtrl::end_effect_render();
    pop_matrix();
    pop_matrix();
}

void TOTrapAncient02::draw_effect_chain() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;

    push_matrix();
    TObjFish::set_global_param((int) (this->texture_id));
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (this->rotation_y));
    temp_r31 = (unsigned char *) (*(void * *)&this->model);
    translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r31 + 8)), (f32) (*(f32 *)((s8 *)temp_r31 + 0xC) + this->h344), (f32) (*(f32 *)((s8 *)temp_r31 + 0x10)));
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
    push_matrix();
    temp_r31_2 = (unsigned char *) (*(void **)((s8 *)temp_r31 + 0x2C));
    translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r31_2 + 8)), (f32) (*(f32 *)((s8 *)temp_r31_2 + 0xC) + this->h348), (f32) (*(f32 *)((s8 *)temp_r31_2 + 0x10)));
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
    TParticleCtrl::begin_effect_render();
    push_matrix();
    temp_r31_3 = (unsigned char *) (*(void **)((s8 *)temp_r31_2 + 0x2C));
    post_translate_matrix((void *) (temp_r31_3 + 8));
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_3 + 4)));
    pop_matrix();
    push_matrix();
    temp_r31_4 = (unsigned char *) (*(void **)((s8 *)temp_r31_3 + 0x30));
    post_translate_matrix((void *) (temp_r31_4 + 8));
    rotate_matrix_y((int) (0), (int) (*(s32 *)&this->m_34c));
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_4 + 4)));
    pop_matrix();
    TParticleCtrl::end_effect_render();
    pop_matrix();
    pop_matrix();
}

void TOTrapAncient02::render() {
    if (get_state_flag__9TMainTaskFv() != 1) {
        *(s32 *)&this->m_340 = ((V_B_8017AC98 *) this)->m8(lbl_805DBAA4, lbl_805DBA94);
        if (((s32) *(s32 *)&this->m_340 == 1) && (((s32) *(s32 *)&this->m_358 == 0) || (is_split_screen() != 0) || (dispatch_input_to_instance__18TAdEnterPasswordGCFi(this) == 0))) {
            set_depth_buffer_settings_id__FUl(3);
            if ((s32) *(s32 *)&this->m_358 != 0) {
                ((TOTrapAncient02 *)this)->render_particle_chain();
            } else {
                ((TOTrapAncient02 *)this)->draw_effect_chain();
            }
            func_80141618__Fv();
        }
    }
}

void *TOTrapAncient02::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x35C);
    if (o != NULL) {
        o = TOTrapAncient02__ct(o, tl_05, arg0);
    }
    return o;
}

void TOTrapAncient02::destroy_instance() {
    if ((u32) TOTrapAncient02__shared_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapAncient02__shared_resource, 1);
        TOTrapAncient02__shared_resource = 0U;
    }
}

void TOTrapAncient02::load_resources() {
    char *base = (char *)&trap_ancient02_torabasami_resources;
    void *obj;
    switch (TOKeyMachine01::get_global_state()) {
    case 0x13:
    case 0x14:
        obj = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (obj != 0) {
            obj = load_resource_from_descriptor(obj, 1, base + 0x20, 0, 0, 0);
        }
        TOTrapAncient02__shared_resource = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(((TObjSeabedSuisoBrakable *)(get_bml_model(obj, 0)))->count_linked_switches(2) + 4);
        lbl_805D5AE4 = 2;
        lbl_805D5ADC = 0;
        break;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x22:
    case 0x23:
        obj = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (obj != 0) {
            obj = load_resource_from_descriptor(obj, 1, base + 0x38, 0, 0, 0);
        }
        TOTrapAncient02__shared_resource = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(((TObjSeabedSuisoBrakable *)(get_bml_model(obj, 0)))->count_linked_switches(2) + 4);
        lbl_805D5AE4 = 1;
        lbl_805D5ADC = 0;
        break;
    default:
        obj = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (obj != 0) {
            obj = load_resource_from_descriptor(obj, 1, base + 8, 0, 0, 0);
        }
        TOTrapAncient02__shared_resource = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)obj + 0x42C) + 8) + 0x2C) + 0x2C) + 4);
        lbl_805D5AE4 = 1;
        lbl_805D5ADC = 0;
        break;
    }
}

void *__dt__15TOTrapAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TOTrapAncient02;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        __dt__6TOTrapFv(arg0, 0);
        if (arg1 > 0) {
            ((s32 (*)(void *))__dl__7TObjectFPv)(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
void *TOTrapAncient02__ct(void *arg0, void *arg1, void *arg2) {
    TOTrap__ct(((Trap_8017B6D8 *)arg0), arg1, arg2);
    ((Trap_8017B6D8 *)arg0)->vt = (void *)__vt__15TOTrapAncient02;
    ((Trap_8017B6D8 *)arg0)->id = lbl_805D31B4;
    ((V_8017B6D8 *)((Trap_8017B6D8 *)arg0))->init(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    ((TObjPlayer *)arg0)->calc_attach_pos();
    ((Trap_8017B6D8 *)arg0)->f34 = *(void **)(*(u8 **)(TOTrapAncient02__shared_resource + 0x42C) + 8);
    ((Trap_8017B6D8 *)arg0)->f24 = *(s32 *)(*(u8 **)(TOTrapAncient02__shared_resource + 0x42C) + 0xC);
    ((Trap_8017B6D8 *)arg0)->mode = 0;
    ((Trap_8017B6D8 *)arg0)->state = 0;
    ((Trap_8017B6D8 *)arg0)->range = lbl_805DBAA0 * ((Trap_8017B6D8 *)arg0)->f68 + lbl_805DBA9C;
    ((Trap_8017B6D8 *)arg0)->dist = ((Trap_8017B6D8 *)arg0)->range;
    ((Trap_8017B6D8 *)arg0)->reset = lbl_805DBA9C + (f32)((Trap_8017B6D8 *)arg0)->f84;
    if (((Trap_8017B6D8 *)arg0)->reset < 0) {
        ((Trap_8017B6D8 *)arg0)->reset = 0;
    }
    ((Trap_8017B6D8 *)arg0)->timer = ((Trap_8017B6D8 *)arg0)->reset;
    ((Trap_8017B6D8 *)arg0)->player = 0xFFFF;
    init_collision_body_parts(((Trap_8017B6D8 *)arg0), (void *)&trap_ancient02_collision_body, 1);
    refresh_collision_body_centers(((Trap_8017B6D8 *)arg0));
    ((Trap_8017B6D8 *)arg0)->flags |= 0x60000000;
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((Trap_8017B6D8 *)arg0)->h348 = lbl_805DBA80;
    ((Trap_8017B6D8 *)arg0)->h344 = lbl_805DBA80;
    ((Trap_8017B6D8 *)arg0)->f34C = 0;
    if (((Trap_8017B6D8 *)arg0)->f64 > 0) {
        ((Trap_8017B6D8 *)arg0)->f358 = 1;
    } else {
        ((Trap_8017B6D8 *)arg0)->f358 = 0;
    }
    return ((Trap_8017B6D8 *)arg0);
}
extern int fold_flush_6;
#pragma pop

void TOTrapAncient02R__vt78(void *arg0) {
    struct VObj_8017B84C_8017AC98 *o = (struct VObj_8017B84C_8017AC98 *)arg0;
    o->m77();
}

}
