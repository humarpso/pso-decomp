#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define F(o,t,p) (*(t*)((u8*)(o)+(p)))

extern "C" {

struct VObjBase_8004394c_800430AC {
    char pad[0x18];
};

struct VObj_8004394c_800430AC : VObjBase_8004394c_800430AC {
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
};

struct VBos_800430AC { char pad[0x18]; };

struct TBoss3VoloptP01_800430AC : VBos_800430AC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
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
    virtual s32 m30();
    virtual s32 m31();
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
    virtual M2C_UNK m53(s32);
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};

struct VBase_18_62ff9d { char pad[0x18]; };

struct VObj_18_62ff9d : VBase_18_62ff9d {
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
    virtual M2C_UNK m56();
};

struct Obj_80043CAC { u8 pad0[0x326]; s16 state; };

struct Base_80043EA4 { char pad[0xC]; };

struct VObj_80043EA4 : Base_80043EA4 {
    virtual void m0(int);
};

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
    virtual M2C_UNK m79(s32);
};

struct RecoveredGlobal_800442A0___vt__15TBoss3VoloptP01 { M2C_UNK value; u8 remaining[0x148]; };

struct RecoveredGlobal_80044174___vt__15TBoss3VoloptP01 {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct RecoveredGlobal_80044174_lbl_804FEE68 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct O_800443BC { u16 a; u16 b; f32 c; };

typedef char RecoveredGlobal_80044174___vt__15TBoss3VoloptP01_size[sizeof(RecoveredGlobal_80044174___vt__15TBoss3VoloptP01) == 0x14C ? 1 : -1];

typedef char RecoveredGlobal_80044174_lbl_804FEE68_size[sizeof(RecoveredGlobal_80044174_lbl_804FEE68) == 0xC ? 1 : -1];

struct VBase_80044038 { char pad[0x18]; };

struct VObj_80044038 : VBase_80044038 {
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
};

struct A_80044038 { u8 x[0x60]; };

struct Data_80044038 { A_80044038 a; u8 b[0x1C]; u8 c[4]; };

void recalc_combat_stats__10TObjPlayerFv(void *, s32, s32, s32, f32, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK reset_status_effect_row(void *);
s32 add_status_effect_timer__10TObjPlayerFPvii(void *, int, int);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
s32 obj_testFlags30(void *, int);
M2C_UNK obj_clearFlags30(void *, int);
void obj_setFlags30(void *, u32);
f32 get_random_float__8TObjFishFv();
void queue_destruction__7TObjectFv(void *);
s32 dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 register_object__6TLobbyFPv(M2C_UNK);
s32 dispatch_shared_handler_b__6TLobbyFPv(M2C_UNK);
s32 register_boss__6TLobbyFPv(M2C_UNK);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, s32);
void reset_photon_effect__12TBoss3VoloptFPv(void *);
s32 TBoss3Volopt__sub_8003F398();
M2C_UNK set_grabbed_state__10TObjPlayerFi(M2C_UNK);
M2C_UNK link_photon__10TObjPlayerFUs(u16, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *, int, f32, f32);
void set_flags_30__19TBoss3VoloptMonitorFPv(void *);
void TBoss3VoloptMonitor__sub_8004292C(void *);
M2C_UNK TObjPlayer__sub_80042DE8(void *);
void TBoss3VoloptP01__sub_80042F84(u8 *arg0);
s32 TBoss3VoloptP01__sub_80042FCC(u8 *arg0);
s32 TBoss3VoloptP01__sub_8004301C(void *);
void reset_state__15TBoss3VoloptP01FPv(void *arg0);
void TBoss3VoloptP01__sub_800430D0(void *);
void TBoss3VoloptP01__sub_8004354C(u8 *arg0);
void TBoss3VoloptP01__sub_80043758(void *);
void TBoss3VoloptP01__sub_800437F4(u8 *arg0);
void update_state__15TBoss3VoloptP01FPv(u8 *arg0);
void render__15TBoss3VoloptP01Fv(u8 *arg0);
void TBoss3VoloptP01__sub_80043CA8(void * _w0);
void TBoss3VoloptP01__sub_80043CAC(Obj_80043CAC *arg0);
void run_task__15TBoss3VoloptP01Fv(u8 *arg0);
void destroy__15TBoss3VoloptP01Fv(void);
void init_breakup_effect__15TBoss3VoloptP01Fv(void);
void * create__15TBoss3VoloptP01FPv(void *arg0);
void * __dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1);
void TBoss3VoloptP01__sub_80044038(VObj_80044038 *arg0);
u8 * TBoss3VoloptP01__ct(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3, s16 arg4);
u8 * TBoss3VoloptP01__sub_800442A0(u8 *arg0, M2C_UNK arg1, s32 arg2);
void fn_80044330(void* p);
int TObjPlayer__sub_8004433C(s32 _w0);
void* fn_8004438C(void* p);
void TBoss3VoloptP01__sub_800443BC(O_800443BC *self);
void fn_800443F0(void *, s32);
void reset_look_state__11TCameraCtrlFPv(void *);
void set_mode__11TCameraCtrlFPv(void *);
u8 * __ct__17TObjVoloptShutterFv(void *, s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 check_demo_mode__10TObjPlayerFv();
u8 * create_particle_emitter(void *, M2C_UNK);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
void __dt__15TObjEnemyCustomFv(void *, int);
u8 * TObjEnemyCustom__ct(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(s32, void *, s32, void *, s32);
M2C_UNK spawn_effect_f8__10TObjPlayerFii(void *, s32);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *);
void set_param__12TObjEneLappyFPvi(void *, s32);
void update_prev_position__10TObjPlayerFPv(void *);
void * collect_and_count__12TBoss3VoloptFUii(s32, M2C_UNK);
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
void free_collision_body_parts(void *);
void init_collision_body_parts(void *, void *, s32);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void * __construct_array(void *, void *, void *, u32, u32);
M2C_UNK sin_table_lookup(s32);
f32 cos_table_lookup(int);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_model(s32);
M2C_UNK draw_chunk_object(void *);

extern RecoveredGlobal_80044174_lbl_804FEE68 lbl_804FEE68;
extern s32 lbl_805D2748;
extern void *lbl_805D4C10;
extern s32 lbl_805D4C28;
extern s32 lbl_805D4CB0;
extern s32 lbl_805D4CB4;
extern s32 lbl_805D4CB8;
extern s32 lbl_805D4CBC;
extern void *lbl_805D4CC0;
extern s32 lbl_805D4CC4;
extern void *lbl_805D4CC8;
extern u8 *lbl_805D4CCC;
extern const f32 lbl_805D8764;
extern const f32 lbl_805D876C;
extern const f32 lbl_805D8770;
extern const f32 lbl_805D8780;
extern const f32 lbl_805D8784;
extern const f32 lbl_805D8788;
extern const f32 lbl_805D878C;
extern const f32 lbl_805D8790;
extern const f32 lbl_805D8794;
extern const f32 lbl_805D8798;
extern void *tl_04;

extern "C" void TBoss3Volopt__sub_800C762C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEnemyCustom__sub_800C789C();
extern "C" void TObjEnemyCustom__sub_800C79C8();
extern "C" void TObjEnemyCustom__sub_800C7AE0();
extern "C" void TObjEnemyCustom__sub_800C7DD0();
extern "C" void TObjEnemyCustom__sub_800C7DF4();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80015884();
extern "C" void TObjPlayer__sub_80016C54();
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
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
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
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_gigue__15TObjEnemyCustomFPv();
extern "C" void update_if_active__15TObjEnemyCustomFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
void *lbl_80484170[24] = {
    (void *)0x10000, (void *)0xf, (void *)0x3f333333, (void *)0x0,
    (void *)0x10000, (void *)0xf, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x0, (void *)0x3f000000, (void *)0x4,
    (void *)0x20000, (void *)0x3, (void *)0x3fb33333, (void *)0x8,
    (void *)0x10000, (void *)0xf, (void *)0x3f800000, (void *)0x10,
    (void *)0x20002, (void *)0xc, (void *)0x3f800000, (void *)0x0,
};
void *lbl_804841D0[7] = {
    (void *)0x43160000, (void *)0x3f0e38e3, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *lbl_804841EC[11] = {
    (void *)0x0, (void *)0x41900000, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80484218[7] = {
    (void *)0x14, (void *)0x3d75c28f, (void *)0x3fc00000, (void *)0x3f666666,
    (void *)0x3df5c28f, (void *)0x3f0ccccd, (void *)0x3f000000,
};
void *__vt__15TBoss3VoloptP01[83] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__15TBoss3VoloptP01Fv, (void *)&run_task__15TBoss3VoloptP01Fv,
    (void *)&render__15TBoss3VoloptP01Fv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEnemyCustom__sub_800C7DF4, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&TObjPlayer__sub_80016C54, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&TObjPlayer__sub_80015884, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjEnemyCustom__sub_800C7DD0, (void *)&update_if_active__15TObjEnemyCustomFPv,
    (void *)&update_gigue__15TObjEnemyCustomFPv, (void *)&TObjEnemyCustom__sub_800C7AE0, (void *)&TObjEnemyCustom__sub_800C79C8, (void *)&TObjEnemyCustom__sub_800C789C,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TBoss3Volopt__sub_800C762C, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80,
};
#define lbl_80484218 ((u8 *)lbl_80484218)
#define __vt__15TBoss3VoloptP01 ((M2C_UNK *)__vt__15TBoss3VoloptP01)

void TBoss3VoloptP01__sub_80042F84(u8 *arg0) {
    if (obj_testFlags30((void *)(arg0), (int)(0x04000800)) == 0) {
        update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (9));
    }
}

#pragma push
#pragma opt_common_subs off
s32 TBoss3VoloptP01__sub_80042FCC(u8 *arg0) {
    u8 *temp_r4;
    M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38C) - lbl_805D876C);
    if (M2C_FIELD(arg0, f32 *, 0x38C) <= lbl_805D8770) {
        M2C_FIELD(arg0, f32 *, 0x38C) = (f32) lbl_805D8770;
        M2C_FIELD(arg0, s8 *, 0x390) = 0;
        temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
        return 1;
    }
    return 0;
}
extern int fold_flush_0;
#pragma pop

void reset_state__15TBoss3VoloptP01FPv(void *arg0) {
    void *temp_r3;

    M2C_FIELD(arg0, s8 *, 0x390) = 0;
    M2C_FIELD(arg0, f32 *, 0x38C) = (f32) lbl_805D8770;
    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
}

#pragma push
#pragma fp_contract on
void TBoss3VoloptP01__sub_8004354C(u8 *arg0) {
    s32 temp_r0;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    TBoss3VoloptMonitor__sub_8004292C(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        advance_animation_playback((void *) (arg0));
        M2C_FIELD(arg0, u8 **, 0x3B0) = NULL;
        if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000)) {
            M2C_FIELD(arg0, s16 *, 0x39A) = 0x96;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x20000);
        }
        if (M2C_FIELD(arg0, f32 *, 0x38C) >= lbl_805D8764) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        } else {
            reset_state__15TBoss3VoloptP01FPv(arg0);
            set_mode__11TCameraCtrlFPv(M2C_FIELD(arg0, u8 **, 0x3B8));
            TObjPlayer__sub_80042DE8((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFF7FFFF);
        break;
    case 1:
        set_flags_30__19TBoss3VoloptMonitorFPv(arg0);
        if (TBoss3VoloptP01__sub_8004301C((void *) (arg0)) == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        }
        break;
    case 2:
        if ((void *) M2C_FIELD(arg0, u8 **, 0x3B0) == NULL) {
            M2C_FIELD(arg0, u8 **, 0x3B0) = create_particle_emitter(arg0 + 0x2FC, 0x21);
            set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, u8 **, 0x3B0), 0x40U);
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 3;
    case 3:
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3B0));
        if (temp_r3 != NULL) {
            copy_pos__11TNowLoadingFPvPv(temp_r3, arg0 + 0x2FC);
        }
        M2C_FIELD(arg0, s16 *, 0x39A) = (s16) (M2C_FIELD(arg0, s16 *, 0x39A) - 1);
        if ((s32) M2C_FIELD(arg0, s16 *, 0x39A) <= 0) {
            temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3B0));
            if (temp_r3_2 != NULL) {
                queue_destruction__7TObjectFv(temp_r3_2);
                M2C_FIELD(arg0, u8 **, 0x3B0) = NULL;
            }
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFDFFFF);
        }
        break;
    case 4:
        set_flags_30__19TBoss3VoloptMonitorFPv(arg0);
        if (TBoss3VoloptP01__sub_80042FCC((u8 *)((void *)((void *) (arg0)))) == 1) {
            reset_look_state__11TCameraCtrlFPv(M2C_FIELD(arg0, u8 **, 0x3B8));
            ((VObj_18_62ff9d *)(arg0))->m56();
        }
        break;
    case -1:
        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3B0));
        if (temp_r3_3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_3);
            M2C_FIELD(arg0, u8 **, 0x3B0) = NULL;
        }
        break;
    }
    submit_cursor_candidate((void *)((void *) (arg0)), (M2C_UNK)((int) (-1)));
    minimap_render_dot((void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (-0x5DB4)), (M2C_UNK)((int) (1)), (M2C_UNK)((int) (0)));
}
extern int fold_flush_1;
#pragma pop

void TBoss3VoloptP01__sub_800437F4(u8 *arg0) {
    u8 *p;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        set_flags_30__19TBoss3VoloptMonitorFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x30) |= 0x44040000;
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xDFFFFFFF;
        p = M2C_FIELD(arg0, u8 **, 0xA4);
        M2C_FIELD(p, s32 *, 0x18) |= 0x1000;
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x5A;
        spawn_effect_f8__10TObjPlayerFii(arg0 + 0x2FC, M2C_FIELD(arg0, s16 *, 0x33C));
        if (M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
            lbl_805D4C28 = 1;
            link_photon__10TObjPlayerFUs(M2C_FIELD(arg0, u16 *, 0x2D4), 0);
            set_grabbed_state__10TObjPlayerFi(0x12C);
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        M2C_FIELD(arg0, s16 *, 0x33C) -= 1;
        if (M2C_FIELD(arg0, s16 *, 0x33C) < 0) {
            create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D4CC4, lbl_80484218, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
            trigger_dell_biter_events__10TObjPlayerFPv(arg0 + 0x2FC);
            M2C_FIELD(arg0, s32 *, 0x388) |= 0x40000;
            play_sound_effect(0x4003AD07, arg0 + 0x38, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFF7FF;
        }
        break;
    case -1:
        return;
    case 2:
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
}

void update_state__15TBoss3VoloptP01FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFDFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
            lbl_805D4C28 = 1;
            link_photon__10TObjPlayerFUs(M2C_FIELD(arg0, u16 *, 0x2D4), 0);
            set_grabbed_state__10TObjPlayerFi(0x12C);
        }
        if (TBoss3Volopt__sub_8003F398() != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
            if (temp_r3 & 0x10000) {
                M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3 & 0xFFFFFFFE);
                M2C_FIELD(arg0, s32 *, 0x374) = 2;
                M2C_FIELD(arg0, s16 *, 0x326) = 2;
                M2C_FIELD(arg0, s32 *, 0x37C) = (s32) M2C_FIELD(arg0, s32 *, 0x3A4);
            } else if (temp_r3 & 0x20000) {
                M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3 & 0xFFFFFFFE);
                TBoss3VoloptP01__sub_80042F84((u8 *)(arg0));
            } else {
                play_sound_effect(0x4003A810, arg0 + 0x38, 0xA, 0);
                M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        case 1:
            advance_animation_playback(arg0);
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
                temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x388);
                if (temp_r3_2 & 0x10000) {
                    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3_2 & 0xFFFFFFFE);
                    ((VObj_8004394c_800430AC*)arg0)->m58();
                } else if (temp_r3_2 & 0x20000) {
                    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3_2 & 0xFFFFFFFE);
                    TBoss3VoloptP01__sub_80042F84((u8 *)(arg0));
                } else {
                    play_sound_effect(0x4003A810, arg0 + 0x38, 0xA, 0);
                    M2C_FIELD(arg0, s32 *, 0x37C) = 2;
                }
            }
        }
        break;
    case 2:
        if (TBoss3VoloptP01__sub_80042FCC((u8 *)((void *)(arg0))) == 1) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            ((VObj_8004394c_800430AC*)arg0)->m56();
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        break;
    }
    submit_cursor_candidate(arg0, -1);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void render__15TBoss3VoloptP01Fv(u8 *arg0) {
    s32 temp_r3;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((TBoss3VoloptP01_800430AC*)arg0)->m8(lbl_805D8780, lbl_805D8784) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        select_actor_lighting(arg0);
        toggle_particle_effect__10TObjPlayerFv();
        push_matrix();
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            draw_chunk_object(M2C_FIELD(arg0, void **, 0x34));
        } else {
            translate_matrix(0, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x38C), M2C_FIELD(arg0, f32 *, 0x40));
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
            if (temp_r3 & 0x40000) {
                draw_chunk_model(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), s32 *, 4));
            } else {
                if (temp_r3 & 0x80000) {
                    sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x3B4));
                    M2C_FIELD(lbl_805D4CCC, s8 *, 7) = (s8) (lbl_805D8788 * get_random_float__8TObjFishFv());
                    M2C_FIELD(lbl_805D4CCC, s8 *, 4) = 0;
                    M2C_FIELD(lbl_805D4CCC, s8 *, 5) = 0;
                } else {
                    M2C_FIELD(lbl_805D4CCC, s8 *, 7) = 0;
                    M2C_FIELD(lbl_805D4CCC, u8 *, 4) = 0xCC;
                    M2C_FIELD(lbl_805D4CCC, u8 *, 5) = 0xFF;
                }
                draw__16TObjEneRe7BeruraFPv(arg0);
            }
        }
        pop_matrix();
        restore_scene_lighting();
        end_effect_render__13TParticleCtrlFv();
    }
}

void TBoss3VoloptP01__sub_80043CA8(void * _w0) {  }

void TBoss3VoloptP01__sub_80043CAC(Obj_80043CAC *arg0) {
    switch (arg0->state) {
    case 0: TBoss3VoloptP01__sub_80043758(arg0); return;
    case 2: TBoss3VoloptP01__sub_800430D0(arg0); return;
    case 4: update_state__15TBoss3VoloptP01FPv((u8 *)(arg0)); return;
    case 9: TBoss3VoloptP01__sub_8004354C((u8 *)(arg0)); return;
    case 5: TBoss3VoloptP01__sub_800437F4((u8 *)(arg0)); break;
    }
}

void run_task__15TBoss3VoloptP01Fv(u8 *arg0) {
    f32 temp_f2;
    s32 temp_r4_2;
    u8 *temp_r4;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TBoss3VoloptP01__sub_80043CA8((void *)((void *) (arg0)));
        return;
    }
    if (((VObj_18 *)(arg0))->m31() != 0) {
        ((VObj_18 *)(arg0))->m61();
    } else if ((((VObj_18 *)(arg0))->m30() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x04000000)) {
        ((VObj_18 *)(arg0))->m60();
    }
    if (obj_testFlags30((void *) (arg0), (int) (0x4000)) != 0) {
        if (add_status_effect_timer__10TObjPlayerFPvii((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
            reset_status_effect_row((void *) (arg0 + 0x284));
            obj_clearFlags30((void *) (arg0), (int) (0x4000));
        }
    } else {
        if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                TBoss3VoloptP01__sub_80043CAC((Obj_80043CAC *)((void *) (arg0)));
            }
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        TBoss3VoloptP01__sub_80043CAC((Obj_80043CAC *)((void *) (arg0)));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x300);
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (temp_f2 + (lbl_805D878C + M2C_FIELD(arg0, f32 *, 0x38C)));
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r4, f32 *, 4) = (f32) (lbl_805D878C + M2C_FIELD(arg0, f32 *, 0x38C));
        copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0), (int) (temp_r4), (f32) (lbl_805D878C), (f32) (temp_f2));
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x3B4);
        M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) (temp_r4_2 + 0x400);
        ((VObj_18 *)(arg0))->m53(temp_r4_2);
    }
}

void destroy__15TBoss3VoloptP01Fv(void) {
    if ((*(struct VObj_80043EA4 * *)&lbl_805D4CC4) != NULL) {
        (*(struct VObj_80043EA4 * *)&lbl_805D4CC4)->m0(1);
    }
    (*(struct VObj_80043EA4 * *)&lbl_805D4CC4) = NULL;
}

void init_breakup_effect__15TBoss3VoloptP01Fv(void) {
    s32 temp_r3;

    lbl_805D4CC0 = lbl_805D4C10;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (temp_r3 != 0) {
        temp_r3 = TBreakUpMdl__sub_8009705C(temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D4CC0, void **, 0x42C), s32 *, 0x118));
    }
    lbl_805D4CC4 = temp_r3;
    lbl_805D4CC8 = collect_and_count__12TBoss3VoloptFUii(M2C_FIELD(M2C_FIELD(lbl_805D4CC0, void **, 0x42C), s32 *, 0x118), 0xD);
    lbl_805D4CB0 = register_boss__6TLobbyFPv(0x22);
    lbl_805D4CB4 = dispatch_shared_handler_b__6TLobbyFPv(0x22);
    lbl_805D4CB8 = register_object__6TLobbyFPv(0x22);
    lbl_805D4CBC = dispatch_shared_handler_a__6TLobbyFPv(0x22);
    (*(s32 *)&lbl_805D4CCC) = M2C_FIELD(M2C_FIELD(lbl_805D4CC8, void **, 4), s32 *, 4);
}

void *create__15TBoss3VoloptP01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x418);
    if (o != NULL) {
        o = TBoss3VoloptP01__sub_800442A0((u8 *)(o), (M2C_UNK)(tl_04), (s32)(arg0));
    }
    return o;
}

void *__dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss3VoloptP01;
        free_collision_body_parts(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TBoss3VoloptP01__sub_80044038(VObj_80044038 *arg0) {
    void *p;
    F(arg0, s32, 0xDC) = F(lbl_805D4CC0, s32, 0x430);
    F(arg0, s32, 0xD8) = (s32) lbl_80484170;
    set_field_d8__10TObjPlayerFPvi(arg0, F(arg0, s32, 0xD8));
    init_collision_body_parts(arg0, (void *) lbl_804841EC, 1);
    F(arg0, s32, 0x368) = 0;
    F(arg0, s32, 0x350) = (s32) lbl_804841D0;
    recalc_combat_stats__10TObjPlayerFv(arg0, lbl_805D4CB0, lbl_805D4CB4, lbl_805D4CB8, lbl_805D8790, lbl_805D8790);
    F(arg0, s16, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, F(arg0, s16, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, F(arg0, s16, 0xB8));
    F(arg0, s16, 0x32C) = F(arg0, s16, 0x2B8);
    F(arg0, s16, 0x32E) = F(arg0, s16, 0x2BA);
    F(arg0, s16, 0x33E) = F(arg0, s16, 0x32C);
    set_param__12TObjEneLappyFPvi(arg0, 0x2E);
    update_prev_position__10TObjPlayerFPv(arg0);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    fn_800443F0(arg0, 0x11);
    reset_state__15TBoss3VoloptP01FPv(arg0);
    p = F(arg0, void *, 0xA4);
    F(p, u32, 0x18) &= ~1;
    F(arg0, s32, 0x3AC) = 0;
    F(arg0, s32, 0x3B0) = 0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 4);
    obj_setFlags30(arg0, 0x8000);
    arg0->m80();
}

#pragma push
#pragma fp_contract on
u8 *TBoss3VoloptP01__ct(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3, s16 arg4) {
    s32 temp_r29;
    s32 temp_r3;
    s32 var_r0;
    TObjEnemyCustom__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80044174___vt__15TBoss3VoloptP01 *)&*__vt__15TBoss3VoloptP01).value;
    TObjPlayer__sub_8004433C((s32)((s32)((void *) (arg0 + 0x3BC))));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2748;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 0x2A);
    ((M2C_UNK (*)(void *))TBoss3VoloptP01__sub_80044038)((void *) (arg0));
    temp_r29 = (s32) (lbl_805D8794 * (f32) (arg2 * 0x3C));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((lbl_805D8798 * cos_table_lookup((int) (temp_r29))) + M2C_FIELD(&lbl_804FEE68.value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((lbl_805D8798 * ((f32 (*)(int))sin_table_lookup)((int) (temp_r29))) + M2C_FIELD(&lbl_804FEE68.value, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8764;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (-0x4000 - temp_r29);
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x34)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)__ct__17TObjVoloptShutterFv((void *)((int) (temp_r3)), (s32)((void *) (arg2))));
    }
    M2C_FIELD(arg0, s32 *, 0x3B8) = var_r0;
    return arg0;
}
extern int fold_flush_2;
#pragma pop

u8 *TBoss3VoloptP01__sub_800442A0(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TObjEnemyCustom__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800442A0___vt__15TBoss3VoloptP01 *)&*__vt__15TBoss3VoloptP01).value;
    TObjPlayer__sub_8004433C((s32)((s32)((s32) (arg0 + 0x3BC))));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2748;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    ((M2C_UNK (*)(void *))TBoss3VoloptP01__sub_80044038)((void *) (arg0));
    temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x34))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__17TObjVoloptShutterFv(temp_r3, 0));
    }
    M2C_FIELD(arg0, u8 **, 0x3B8) = var_r0;
    return arg0;
}

void fn_80044330(void* p) { *(s32*)((char*)p + 0x0) = 0; }

int TObjPlayer__sub_8004433C(s32 _w0) {
    __construct_array((void *)(_w0 + 4), (void *)fn_8004438C, 0, 8, 11);
    fn_80044330((void *)_w0);
    return _w0;
}

void* fn_8004438C(void* p) { TBoss3VoloptP01__sub_800443BC((O_800443BC *)(p)); return p; }

void TBoss3VoloptP01__sub_800443BC(O_800443BC *self) {
    self->a = 0xFFFF;
    self->b = 0;
    self->c = lbl_805D8764;
}

}
