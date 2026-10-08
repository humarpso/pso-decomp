#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct Set_800C1C4C {
    u8 pad0[0xA];
    s16 fa;
    u8 padC[0x10 - 0xC];
    f32 pos[3];
    f32 rot[3];
    f32 params[5];
    s16 f3c;
    s16 f3e;
};
struct Lappy_800C1C4C { u8 pad[0x354]; f32 params[5]; };
struct Tbl_800C1C4C { s32 a[2]; s32 b[2]; s32 c[2]; };

typedef s32 M2C_UNK;
typedef struct Vec_800C20D0 {
    f32 x, y, z;
} Vec_800C20D0;

typedef struct Mat_800C20D0 {
    u8 pad0[0x8];
    s32 f8;
    u8 padC[0x14 - 0xC];
    s32 f14;
    u8 pad18[0x20 - 0x18];
    s32 f20;
    u8 pad24[0x2C - 0x24];
    s32 f2C;
} Mat_800C20D0;

typedef struct Model_800C20D0 {
    Mat_800C20D0 *mat;
} Model_800C20D0;

struct VBase_800C20D0 {
    char pad0[0x18];
};

struct VObj_800C20D0 : VBase_800C20D0 {
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

struct Obj_800C20D0 : VObj_800C20D0 {
    u8 pad1C[0x24 - 0x1C];
    Model_800C20D0 *model;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_800C20D0 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
};

typedef struct Vec_800C220C { f32 x, y, z; } Vec_800C220C;

typedef struct Mat_800C220C {
    u8 pad0[0x8];
    s32 f8;
    u8 padC[0x14 - 0xC];
    s32 f14;
    u8 pad18[0x20 - 0x18];
    s32 f20;
    u8 pad24[0x2C - 0x24];
    s32 f2C;
} Mat_800C220C;

typedef struct Model_800C220C { Mat_800C220C *mat; } Model_800C220C;

struct SBase_800C220C { char pad0[0x14]; };

struct Sub_800C220C : SBase_800C220C {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5();
    virtual void m6(); virtual void m7(); virtual s32 m8();
};

struct VBase_800C220C { char pad0[0x18]; };

struct VObj_800C220C : VBase_800C220C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void m104();
};

struct Obj_800C220C : VObj_800C220C {
    u8 pad1C[0x24 - 0x1C];
    Model_800C220C *model;
    u8 pad28[0x38 - 0x28];
    Vec_800C220C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x326 - 0x64];
    s16 f326;
    u8 pad328[0x3C0 - 0x328];
    s32 f3C0;
    u32 f3C4;
    f32 f3C8;
    u8 pad3CC[0x3D8 - 0x3CC];
    s32 f3D8;
    f32 f3DC;
    f32 f3E0;
    f32 f3E4;
    f32 f3E8;
    f32 f3EC;
    f32 f3F0;
    Sub_800C220C sub;
};

extern "C" {
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFPv(void *, void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 TObjEneRe2Flower__sub_800C3B8C(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_default_scene();
M2C_UNK set_scene_override(int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_chunk_object(int);
extern Vec_800C20D0 lbl_8043BBC0[];
extern const f32 lbl_805D9FA0;
extern const f32 lbl_805D9FA4;
void TObjPlayer__sub_800C20D0(Obj_800C20D0 *o);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFPv(void *, void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 TObjEneRe2Flower__sub_800C3B8C(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_default_scene();
M2C_UNK set_scene_override(int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 check_demo_mode__10TObjPlayerFv(void);
s32 is_main_phase_15__9TObjEneDDFv(void);
void update_secondary_light__9TObjEneDDFPv(void *);
void update_primary_light__9TObjEneDDFPv(void *);
void translate_matrix(int, f32, f32, f32);
void scale_matrix(int, f32, f32, f32);
void set_global_state__16TObjEneRe7BeruraFi(void *);
void update_effect_sequence__10TObjPlayerFv(void);
void draw_with_alt_model__10TObjPlayerFPvi(void *, int);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
void draw__16TObjEneRe7BeruraFPv(void *);
void render_world_model__10TObjPlayerFPv(void *);
extern Vec_800C220C lbl_8043BBB4[];
extern s32 some_id_805c6f74;
extern s32 lbl_805D5660;
extern s32 lbl_805D5178;
extern s32 lbl_805D517C;
extern f32 *lbl_805D5180;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 lbl_805D9FA0;
extern const f32 lbl_805D9FA4;
extern const f32 lbl_805D9FAC;
extern const f32 lbl_805D9FB0;
extern const f32 lbl_805D9FB4;
extern const f32 lbl_805D9FB8;
void TObjPlayer__sub_800C220C(Obj_800C220C *o);
}

extern "C" {

int is_lying_down__12TObjEneLappyFv(void);
void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1);
void fn_800C20B0(void *arg0);
void fn_800C20C0(void *arg0);
void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 get_instance__6TLobbyFv();

f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int, f32, f32);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK apply_variant_speeds__12TObjEneLappyFPv(void *);
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK initialize__9TObjEnemyFPv(void *, s32, void *);
s32 collect_and_count__12TBoss3VoloptFUii(void *, int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, s16);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK init_collision_body_parts(void *, void *, int);

extern s32 lbl_805D2A40;
extern s32 lbl_805D5160;
extern void *lbl_805D5164;
extern s32 lbl_805D5168;
extern const f32 lbl_805D9F2C;
extern const f32 lbl_805D9F60;
extern const f32 lbl_805D9F84;
extern const f32 lbl_805D9F94;
extern const f32 lbl_805D9F98;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
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
extern "C" void call_vt78__10TObjPlayerFPv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void enter_down_state__10TObjPlayerFPv();
extern "C" void enter_idle_state__12TObjEneLappyFPv();
extern "C" void enter_moving_state__12TObjEneLappyFPv();
extern "C" void enter_state_4__10TObjPlayerFPv();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void fn_800F5D80();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void handle_death__10TObjPlayerFPv();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_8043B7D8[];
extern "C" u8 lbl_8043B7EC[];
extern "C" u8 lbl_8043B800[];
extern "C" u8 lbl_8043B818[];
extern "C" u8 lbl_8043B830[];
extern "C" u8 lbl_8043B844[];
extern "C" u8 lbl_8043B858[];
extern "C" u8 lbl_8043B870[];
extern "C" u8 lbl_8043B888[];
extern "C" u8 lbl_8043B89C[];
extern "C" u8 lbl_8043B8B4[];
extern "C" u8 lbl_8043B8C8[];
extern "C" u8 lbl_8043B8DC[];
extern "C" u8 lbl_8043B8F0[];
extern "C" u8 lbl_8043B904[];
extern "C" u8 lbl_8043B91C[];
extern "C" u8 lbl_8043B930[];
extern "C" u8 lbl_8043B948[];
extern "C" u8 lbl_8043B960[];
extern "C" u8 lbl_8043B974[];
extern "C" u8 lbl_8043B98C[];
extern "C" u8 lbl_8043B9A4[];
extern "C" u8 lbl_8043B9B8[];
extern "C" u8 lbl_8043B9D0[];
extern "C" u8 lbl_8043B9DC[];
extern "C" u8 lbl_805D9F20[];
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render__12TObjEneLappyFPv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void run_task__12TObjEneLappyFPv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void select_target__12TObjEneLappyFPv();
extern "C" void set_action_state_3__10TObjPlayerFPv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_clear_flags_60__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold__12TObjEneLappyFi();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_80492BD8[3];
extern void *lbl_80492BE4[11];
extern void *lbl_80492C20[3];
extern void *lbl_80492C2C[11];
extern void *lbl_80492C68[3];
extern void *lbl_80492C74[11];
extern void *lbl_80492CB0[3];
extern void *lbl_80492CBC[11];
extern void *lbl_80492CF8[3];
extern void *lbl_80492D04[11];
extern void *lbl_80492D40[3];
extern void *lbl_80492D4C[11];
extern void *lbl_80492D88[3];
extern void *lbl_80492D94[11];
extern void *lbl_80492DD0[3];
extern void *lbl_80492DDC[11];
void *lbl_80492BD8[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B7EC, (void *)0x0,
};
void *lbl_80492BE4[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492C10[4] = {
    (void *)&lbl_8043B8DC, (void *)&lbl_80492BD8, (void *)&lbl_80492BE4, (void *)0x2000a,
};
void *lbl_80492C20[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B7EC, (void *)0x0,
};
void *lbl_80492C2C[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492C58[4] = {
    (void *)&lbl_8043B8F0, (void *)&lbl_80492C20, (void *)&lbl_80492C2C, (void *)0x2000a,
};
void *lbl_80492C68[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B904, (void *)0x0,
};
void *lbl_80492C74[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492CA0[4] = {
    (void *)&lbl_8043B91C, (void *)&lbl_80492C68, (void *)&lbl_80492C74, (void *)0x2000a,
};
void *lbl_80492CB0[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B904, (void *)0x0,
};
void *lbl_80492CBC[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492CE8[4] = {
    (void *)&lbl_8043B930, (void *)&lbl_80492CB0, (void *)&lbl_80492CBC, (void *)0x2000a,
};
void *lbl_80492CF8[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B948, (void *)0x0,
};
void *lbl_80492D04[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492D30[4] = {
    (void *)&lbl_8043B960, (void *)&lbl_80492CF8, (void *)&lbl_80492D04, (void *)0x2000a,
};
void *lbl_80492D40[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B948, (void *)0x0,
};
void *lbl_80492D4C[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492D78[4] = {
    (void *)&lbl_8043B974, (void *)&lbl_80492D40, (void *)&lbl_80492D4C, (void *)0x2000a,
};
void *lbl_80492D88[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B98C, (void *)0x0,
};
void *lbl_80492D94[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492DC0[4] = {
    (void *)&lbl_8043B9A4, (void *)&lbl_80492D88, (void *)&lbl_80492D94, (void *)0x2000a,
};
void *lbl_80492DD0[3] = {
    (void *)&lbl_8043B7D8, (void *)&lbl_8043B98C, (void *)0x0,
};
void *lbl_80492DDC[11] = {
    (void *)&lbl_8043B800, (void *)&lbl_8043B818, (void *)&lbl_8043B830, (void *)&lbl_8043B844,
    (void *)&lbl_8043B858, (void *)&lbl_8043B870, (void *)&lbl_8043B888, (void *)&lbl_8043B89C,
    (void *)&lbl_8043B8B4, (void *)&lbl_8043B8C8, (void *)0x0,
};
void *lbl_80492E08[4] = {
    (void *)&lbl_8043B9B8, (void *)&lbl_80492DD0, (void *)&lbl_80492DDC, (void *)0x2000a,
};
void *lbl_80492E18[40] = {
    (void *)0x10000, (void *)0x6, (void *)0x3f666666, (void *)0x0,
    (void *)0x10001, (void *)0x5, (void *)0x3f333333, (void *)0x0,
    (void *)0x20003, (void *)0x8, (void *)0x3f333333, (void *)0x0,
    (void *)0x10003, (void *)0x9, (void *)0x3fe66666, (void *)0x1,
    (void *)0x10004, (void *)0x3, (void *)0x3f99999a, (void *)0x1,
    (void *)0x20001, (void *)0x0, (void *)0x3f800000, (void *)0x4,
    (void *)0x20001, (void *)0x1, (void *)0x3f800000, (void *)0x8,
    (void *)0x30006, (void *)0x2, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20004, (void *)0x4, (void *)0x3f666666, (void *)0x1,
    (void *)0x20004, (void *)0x7, (void *)0x3f000000, (void *)0x0,
};
void *lbl_80492EB8[3] = {
    (void *)&lbl_8043B9D0, (void *)&lbl_8043B9DC, (void *)&lbl_805D9F20,
};
void *lbl_80492EC4[14] = {
    (void *)0x43160000, (void *)0x3f097b42, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0, (void *)0x43160000,
    (void *)0x3f097b42, (void *)0x400, (void *)0x1e0000, (void *)0x0,
    (void *)0x1, (void *)0x0,
};
void *lbl_80492EFC[11] = {
    (void *)0x0, (void *)0x40f00000, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80492F28[84] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__12TObjEneLappyFPvs, (void *)&run_task__12TObjEneLappyFPv,
    (void *)&render__12TObjEneLappyFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&select_target__12TObjEneLappyFPv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&is_lying_down__12TObjEneLappyFv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold__12TObjEneLappyFi, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&try_clear_flags_60__10TObjPlayerFi,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&enter_idle_state__12TObjEneLappyFPv, (void *)&enter_moving_state__12TObjEneLappyFPv,
    (void *)&enter_down_state__10TObjPlayerFPv, (void *)&set_action_state_3__10TObjPlayerFPv, (void *)&enter_state_4__10TObjPlayerFPv, (void *)&handle_death__10TObjPlayerFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)0x0,
};

__declspec(section ".data") s32 lbl_80500BE0[2];
__declspec(section ".data") s32 lbl_80500BE8[2];
__declspec(section ".data") s32 lbl_80500BF0[2];
__declspec(section ".data") s32 lbl_80500BF8[2];
#define lbl_80492F28 ((M2C_UNK *)lbl_80492F28)

typedef struct Desc_800C17B8 {
    s32 a;
    void *b;
    s32 c;
    s32 d;
} Desc_800C17B8;

void cleanup_handles__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
s32 get_main_phase();
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_boss__6TLobbyFPv(s32);
s32 load_resource_from_descriptor(s32, int, void *, int, int, int);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 load_gvm_texture_file(void *);
void spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern u8 lbl_8043BA28[];
extern u8 lbl_8043BA44[];
extern const Desc_800C17B8 lbl_8043B9F8;
extern const f32 lbl_805D9F28;
extern const f32 lbl_805D9F4C;
extern s32 lbl_805D5550;
extern s32 lbl_805D55A0;
extern s32 lbl_805D516C;
#define lbl_805D5164 (*(u32 *)&lbl_805D5164)
#define lbl_805D516C (*(u32 *)&lbl_805D516C)

void cleanup_handles__6TLobbyFv(void) {
    if (get_instance__6TLobbyFv() == 0) {
        if ((u32) lbl_805D516C != 0U) {
            TLobby__sub_803DA16C((void*)lbl_805D516C);
            safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D516C);
            lbl_805D516C = 0U;
        }
    } else {
        lbl_805D516C = 0U;
    }
    if ((u32) lbl_805D5164 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5164, 1);
        lbl_805D5164 = 0U;
    }
}

#define RES_800C17B8 ((u8 *)lbl_805D5164)

void load_resources__12TObjEneLappyFv(void) {
    int rare;
    s32 p;
    s32 i;

    rare = lbl_805D5550 == 3;
    if (get_main_phase() == 0xF) {
        switch (lbl_805D55A0) {
        case 1:
            lbl_805D5160 = 1;
            if (rare) {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492E08, 0, 0, 0);
                }
                lbl_805D5164 = p;
            } else {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492DC0, 0, 0, 0);
                }
                lbl_805D5164 = p;
            }
            break;
        case 4:
            lbl_805D5160 = 2;
            if (rare) {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492CE8, 0, 0, 0);
                }
                lbl_805D5164 = p;
            } else {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492CA0, 0, 0, 0);
                }
                lbl_805D5164 = p;
            }
            break;
        case 5:
            lbl_805D5160 = 3;
            if (rare) {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492D78, 0, 0, 0);
                }
                lbl_805D5164 = p;
            } else {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492D30, 0, 0, 0);
                }
                lbl_805D5164 = p;
            }
            break;
        default:
            lbl_805D5160 = 0;
            if (rare) {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492C58, 0, 0, 0);
                }
                lbl_805D5164 = p;
            } else {
                p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
                if (p != 0) {
                    p = load_resource_from_descriptor(p, 1, lbl_80492C10, 0, 0, 0);
                }
                lbl_805D5164 = p;
            }
            break;
        }
    } else {
        lbl_805D5160 = 0;
        if (rare) {
            p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
            if (p != 0) {
                p = load_resource_from_descriptor(p, 1, lbl_80492C58, 0, 0, 0);
            }
            lbl_805D5164 = p;
        } else {
            p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
            if (p != 0) {
                p = load_resource_from_descriptor(p, 1, lbl_80492C10, 0, 0, 0);
            }
            lbl_805D5164 = p;
        }
    }
    if (get_instance__6TLobbyFv() == 0) {
        if (rare) {
            lbl_805D516C = load_gvm_texture_file(lbl_8043BA28);
        } else {
            lbl_805D516C = load_gvm_texture_file(lbl_8043BA44);
        }
    } else {
        lbl_805D516C = *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 0x1C);
    }
    lbl_805D5168 = ((s32 (*)(s32, s32))collect_and_count__12TBoss3VoloptFUii)(*(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 8), 0x12);
    for (i = 0; i < 2; i++) {
        lbl_80500BE0[i] = register_boss__6TLobbyFPv(i + 0x18);
        lbl_80500BE8[i] = dispatch_shared_handler_b__6TLobbyFPv(i + 0x18);
        lbl_80500BF0[i] = register_object__6TLobbyFPv(i + 0x18);
        lbl_80500BF8[i] = dispatch_shared_handler_a__6TLobbyFPv(i + 0x18);
    }
    {
        u8 *res = RES_800C17B8;
        Desc_800C17B8 d = lbl_8043B9F8;
        d.a = *(s32 *)(res + 0x430);
        spawn_npc_enemy__6TLobbyFsiiiff(5, *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 8),
                                        *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 0xC), &d, lbl_805D9F28, lbl_805D9F4C);
        if (get_instance__6TLobbyFv() == 0) {
            spawn_npc_enemy__6TLobbyFsiiiff(6, *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 8), lbl_805D516C, &d,
                                            lbl_805D9F28, lbl_805D9F4C);
        } else {
            spawn_npc_enemy__6TLobbyFsiiiff(6, *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 0x18),
                                            *(s32 *)(*(u8 **)(RES_800C17B8 + 0x42C) + 0x1C), &d, lbl_805D9F28, lbl_805D9F4C);
        }
    }
}

#undef RES_800C17B8
#undef lbl_805D5164
#undef lbl_805D516C

void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492F28;
        free_collision_body_parts(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define CLAMP_800C1C4C(x, lo, hi) ((x) < (lo) ? (lo) : ((x) < (hi) ? (x) : (hi)))

u8 *TObjEneLappy__ct(u8 *self, s32 arg1, Set_800C1C4C *set) {
    s32 i;
    f32 scale;

    initialize__9TObjEnemyFPv(self, arg1, set);
    *(void **)(self + 0x18) = (u8 *)lbl_80492F28;
    *(s32 *)(self + 0) = lbl_805D2A40;
    ((VObj_18_fe72f9 *)self)->m79(set);
    *(s32 *)(self + 0xDC) = *(s32 *)((u8 *)lbl_805D5164 + 0x430);
    VecCopy__FP3VecPC3Vec(self + 0x38, set->pos);
    copy_xyz__10TObjPlayerFPvPv(self + 0x5C, set->rot);
    for (i = 0; i < 5; i++) {
        ((Lappy_800C1C4C *)self)->params[i] = set->params[i];
    }
    *(s32 *)(self + 0x368) = set->f3c != 0 ? 1 : 0;
    if (calc_boss4_scale__10TObjPlayerFi(self) < lbl_805D9F94) {
        *(s32 *)(self + 0x368) = 1;
        if (get_instance__6TLobbyFv() == 1) {
            lbl_805D5168 = collect_and_count__12TBoss3VoloptFUii(*(void **)(*(u8 **)((u8 *)lbl_805D5164 + 0x42C) + 0x18), 0x12);
        }
    }
    if (*(s32 *)(self + 0x368) == 0) {
        set_param__12TObjEneLappyFPvi(self, 5);
    } else if (get_instance__6TLobbyFv() == 1) {
        switch (lbl_805D5160) {
        case 1:
            set_param__12TObjEneLappyFPvi(self, 0x4F);
            break;
        case 2:
            set_param__12TObjEneLappyFPvi(self, 0x51);
            break;
        case 3:
            set_param__12TObjEneLappyFPvi(self, 0x50);
            break;
        default:
            set_param__12TObjEneLappyFPvi(self, 0x33);
            break;
        }
    } else {
        set_param__12TObjEneLappyFPvi(self, 6);
    }
    *(s32 *)(self + 0x36C) = set->f3e;
    *(s16 *)(self + 0x33A) = 0xF;
    *(s16 *)(self + 0x33C) = *(s16 *)(self + 0x33A);
    VecCopy__FP3VecPC3Vec(self + 0x44, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x50, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x290, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x29C, self + 0x38);
    *(s16 *)(self + 0x374) = 0;
    *(s16 *)(self + 0x396) = 0;
    *(s16 *)(self + 0x382) = -1;
    *(s16 *)(self + 0x384) = 0;
    *(s16 *)(self + 0x380) = 0;
    *(u8 *)(self + 0x378) = CLAMP_800C1C4C((s16)*(f32 *)(self + 0x354), 0, 1);
    *(s16 *)(self + 0x37A) = 0;
    *(void **)(self + 0x350) = (u8 *)lbl_80492EC4;
    init_collision_body_parts(self, (u8 *)lbl_80492EFC, 1);
    if (set->fa > 0) {
        *(s16 *)(self + 0x374) |= 0x60;
        *(u8 *)(self + 0x378) = 1;
        *(u32 *)(self + 0x30) &= ~0x800000;
        *(u32 *)(*(u8 **)(self + 0xA4) + 0x18) &= ~1;
    }
    bind_enemy_combat_stats(self, lbl_80500BE0[*(s32 *)(self + 0x368)], lbl_80500BE8[*(s32 *)(self + 0x368)], lbl_80500BF0[*(s32 *)(self + 0x368)]);
    apply_variant_speeds__12TObjEneLappyFPv(self);
    *(s16 *)(self + 0x32C) = *(s16 *)(self + 0x2B8);
    *(s16 *)(self + 0x32E) = *(s16 *)(self + 0x2BA);
    *(s16 *)(self + 0x33E) = *(s16 *)(self + 0x32C);
    update_prev_position__10TObjPlayerFPv(self);
    copy_position__20TBoss3VoloptHiraisinFi(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    scale = lbl_805D9F84 * (lbl_805D9F60 + calc_boss4_scale__10TObjPlayerFi(self));
    *(s16 *)(self + 0x37E) = lbl_805D9F2C * scale;
    add_flags_2e4__10TObjPlayerFPvUi(self, 1, scale, lbl_805D9F84);
    *(u32 *)(self + 0x30) |= 0x40000;
    *(void **)(self + 0xD8) = (u8 *)lbl_80492E18;
    set_field_d8__10TObjPlayerFPvi(self, *(void **)(self + 0xD8));
    *(s16 *)(self + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(self, *(s16 *)(self + 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(self, *(s16 *)(self + 0xB8));
    *(u8 *)(self + 0x379) = *(u8 *)(self + 0x378);
    if (check_v2_mode__9TObjEneDDFv() != 0 && calc_boss4_scale__10TObjPlayerFi(self) < lbl_805D9F98) {
        *(s16 *)(self + 0x374) |= 0x400;
    }
    ((VObj_18_fe72f9 *)self)->m80();
    return self;
}

int is_lying_down__12TObjEneLappyFv(void) { return 0; }

extern void *lbl_805D5164;
extern s32 lbl_805D516C;

void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (get_instance__6TLobbyFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 8);
    } else {
        if (arg1 == 0) {
            var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 8);
        } else {
            var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 0x18);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = var_r0;
    }
    if (arg1 == 0) {
        var_r0_2 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 0xC);
    } else {
        var_r0_2 = lbl_805D516C;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_2;
}

void fn_800C20B0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) & 0xFFFFFFFE);
}

void fn_800C20C0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) | 1);
}
void TObjPlayer__sub_800C20D0(Obj_800C20D0 *o) {
    s32 save8;
    s32 save14;
    if (o->m8(lbl_805D9FA0, lbl_805D9FA4) == 0) {
        return;
    }
    Vec_800C20D0 v = lbl_8043BBC0[0];
    update_player_state__9TObjEneDDFPv(o, &v, 0);
    if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
        save8 = o->model->mat->f8;
        save14 = o->model->mat->f14;
        o->model->mat->f8 = o->model->mat->f20;
        o->model->mat->f14 = o->model->mat->f2C;
    }
    set_global_param__8TObjFishFi(o->model);
    push_matrix();
    post_translate_matrix(&o->pos);
    rotate_matrix_y(0, o->f60);
    clear_global_flag_400__9TObjEneDDFv();
    toggle_particle_effect__10TObjPlayerFv();
    set_scene_override(0);
    draw_chunk_object(o->f34);
    restore_default_scene();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
        o->model->mat->f8 = save8;
        o->model->mat->f14 = save14;
    }
}
void TObjPlayer__sub_800C220C(Obj_800C220C *o) {
    s32 visible;
    s32 save8;
    s32 save14;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        o->m104();
        return;
    }
    if (o->f326 == 11) {
        return;
    }
    if (is_main_phase_15__9TObjEneDDFv() != 0) {
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) != 0) {
            visible = o->m9(600.0f, 600.0f, lbl_805D9FA4);
        } else {
            visible = o->m9(lbl_805D9E88, lbl_805D9E84, lbl_805D9FA4);
        }
    } else if (o->m8(lbl_805D9FA0, lbl_805D9FA4) != 0) {
        visible = 1;
    } else {
        visible = 0;
    }
    if (visible != 0) {
        if (o->f326 != 10) {
            Vec_800C220C v = lbl_8043BBB4[0];
            update_player_state__9TObjEneDDFPv(o, &v, 0);
        }
        update_secondary_light__9TObjEneDDFPv(o);
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
            save8 = o->model->mat->f8;
            save14 = o->model->mat->f14;
            o->model->mat->f8 = o->model->mat->f20;
            o->model->mat->f14 = o->model->mat->f2C;
        }
        set_global_param__8TObjFishFi(o->model);
        push_matrix();
        post_translate_matrix(&o->pos);
        rotate_matrix_y(0, o->f3C0);
        lbl_805D5660 = some_id_805c6f74;
        set_scene_override(0);
        clear_global_flag_400__9TObjEneDDFv();
        translate_matrix(0, lbl_805D9FAC, o->f3C8, lbl_805D9FAC);
        lbl_805D517C = o->f60 - o->f3C0;
        lbl_805D5180 = &o->f3DC;
        o->f3DC = lbl_805D9FAC;
        o->f3E0 = lbl_805D9FB0;
        o->f3E4 = lbl_805D9FAC;
        o->f3E8 = lbl_805D9FAC;
        o->f3EC = lbl_805D9FB4;
        o->f3F0 = lbl_805D9FAC;
        scale_matrix(0, lbl_805D9FB8, lbl_805D9FB8, lbl_805D9FB8);
        set_global_state__16TObjEneRe7BeruraFi((void *)update_effect_sequence__10TObjPlayerFv);
        if (o->f326 == 8) {
            s32 c = (o->f3D8 & 0xFF) << 16;
            lbl_805D5178 = -1;
            toggle_particle_effect__10TObjPlayerFv();
            draw_with_alt_model__10TObjPlayerFPvi(o, c);
            end_effect_render__13TParticleCtrlFv();
        } else {
            lbl_805D5178 = 0;
            toggle_particle_effect__10TObjPlayerFv();
            if (o->f3C4 & 8) {
                if (o->sub.m8() != 0) {
                    o->sub.m6();
                    if (toggle_flag_9__10TObjPlayerFPv(o) == 0) {
                        draw__16TObjEneRe7BeruraFPv(o);
                    }
                    o->sub.m7();
                }
            } else if (visible == 1) {
                draw__16TObjEneRe7BeruraFPv(o);
            } else {
                render_world_model__10TObjPlayerFPv(o);
            }
            end_effect_render__13TParticleCtrlFv();
        }
        set_global_state__16TObjEneRe7BeruraFi(0);
        restore_default_scene();
        some_id_805c6f74 = lbl_805D5660;
        pop_matrix();
        update_primary_light__9TObjEneDDFPv(o);
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
            o->model->mat->f8 = save8;
            o->model->mat->f14 = save14;
        }
        return;
    }
    o->f3DC = o->pos.x;
    o->f3E0 = lbl_805D9FB0 + o->pos.y;
    o->f3E4 = o->pos.z;
    o->f3E8 = o->pos.x;
    o->f3EC = lbl_805D9FB4 + o->pos.y;
    o->f3F0 = o->pos.z;
}

}
