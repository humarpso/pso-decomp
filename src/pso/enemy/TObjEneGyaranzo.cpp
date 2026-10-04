#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    virtual s32 m17(M2C_UNK);
};

extern "C" {
u16 find_nearest_visible_player(void *, int, int, f32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
M2C_UNK TObjGyaranzoMissile__sub_800D20BC(void *);
f32 xz_distance_squared(void *, void *);
extern const f32 lbl_805DA25C;
extern const f32 lbl_805DA290;
void TObjPlayer__sub_800D37F4(u8 *arg0);
}

extern "C" {

typedef struct Ene_800D2E8C {
    u8 pad0[0x38C];
    s32 count;
    u8 pad390[0x3A8 - 0x390];
    s32 f3A8;
} Ene_800D2E8C;

typedef struct Ene_800D2F6C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x38 - 0x28];
    f32 pos[3];
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0x2FC - 0xBA];
    f32 v2FC[3];
    u8 pad308[0x33C - 0x308];
    s16 timer;
    u8 pad33E[0x37C - 0x33E];
    s32 state;
} Ene_800D2F6C;

struct VBase_14_fddec9 { char pad[0x14]; };

struct VObj_14_fddec9 : VBase_14_fddec9 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual s32 m8();
};

struct VBase_18_ca64a0 { char pad[0x18]; };

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

struct Elem_800D35D8 { u8 pad[0x1C]; };

struct Obj_800D35D8 { u8 pad[0x3D0]; VObj_14_fddec9 light; u8 pad2[0x3EC - 0x3D0 - sizeof(VObj_14_fddec9)]; Elem_800D35D8 arr[2]; };

struct Vec_800D35D8 { s32 x, y, z; };

struct Ene_800D2E8C;

struct Base_800D3BA0_800D3B38 { char pad[0xC]; };

struct VObj_800D3BA0_800D3B38 : Base_800D3BA0_800D3B38 {
    virtual void m0(s32);
};

struct Pos_800D3C04 { s32 w[4]; };

struct Res_800D3C04 { u8 pad0[0x38]; s32 r38; s32 r3C; u8 pad40[8]; s32 r48; };

struct Area_800D3C04 { u8 pad0[0x42C]; Res_800D3C04 *res; s32 f430; };

struct Obj_800D3E54 { u8 pad0[0x18]; void *vt; };

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

struct E_800D3ED8 { u8 pad[0x1C]; };

struct Gy_800D3ED8 { u8 pad[0x3EC]; E_800D3ED8 e3EC[4]; };

M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
u8 * VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 obj_clearFlags30(void *, int);
s32 is_split_screen();
void queue_destruction__7TObjectFv(void *);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 get_bml_motion(u32, int);
M2C_UNK TLobby__sub_8001FE7C(u32, s32);
u32 load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
s32 get_camera_mode__11TCameraCtrlFv();
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
void * alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 check_demo_mode__10TObjPlayerFv();
VObj_800D3BA0_800D3B38 * TBreakUpMdl__sub_80096FD8(void *, s32, s32, f32);
s32 check_v2_mode__9TObjEneDDFv(void);
u32 load_enemy_bml_resource_named(void *, void *);
M2C_UNK TObjEnemyCustom__sub_800C7860(void *);
s32 update_state__15TObjEnemyCustomFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
M2C_UNK TObjEnemyCustom__ct(void *);
s32 TObjPlayer__sub_800D1E4C(void *);
M2C_UNK TObjGyaranzoMissile__sub_800D1F84(void *);
s32 update__19TObjGyaranzoMissileFPv(void *);
s32 fn_800D2900(void *);
s32 fn_800D2A68(void *);
s32 TObjPlayer__sub_800D2CE4(void *);
void TObjPlayer__sub_800D2E8C(Ene_800D2E8C *arg0);
void TObjPlayer__sub_800D2F6C(Ene_800D2F6C *arg0);
void TObjPlayer__sub_800D306C(u8 *arg0);
s32 TObjPlayer__sub_800D30A8(void *);
void TObjPlayer__sub_800D31EC(u8 *arg0);
s32 TObjPlayer__sub_800D3314(void *);
void TObjPlayer__sub_800D35D4(void);
void TObjPlayer__sub_800D35D8(u8 *arg0);
void TObjPlayer__sub_800D39EC(u8 *arg0);
void update_main__10TObjPlayerFPv(u8 *arg0);
void * create__15TObjEneGyaranzoFPv(void *arg0);
void free_static_instances__15TObjEneGyaranzoFv(void);
Obj_800D3E54 * fn_800D3E54(Obj_800D3E54 *arg0, s16 arg1);
u8 * TObjEneGyaranzo__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
s32 __dt__18TObjEneMe3SinowZoaFPvs(void *, s16);
M2C_UNK init_common__18TObjEneMe3SinowZoaFPv(void *);
M2C_UNK fn_800D7AD0(int);
s32 updateFromCamera__15RenderFadeStateFPCf(int, void *);
M2C_UNK activate_and_dispatch__10TObjPlayerFPv(void *);
void TObjPlayer__sub_800D7C58();
void init_and_activate__10TObjPlayerFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, void *, s32, void *, s32);
void create_dead_spot__10TObjPlayerFiif(void *, s32, f32);
void trigger_dell_biter_events__10TObjPlayerFPv(void *);
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int, int, int);
M2C_UNK initialize_enemy_photon_effect(void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
void * TObjControl__ct(void *, void *);
void refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK bind_enemy_combat_stats(void *, void *, void *, void *);
s32 collect_and_count__12TBoss3VoloptFUii(s32, int);
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
s32 advance_animation_playback(void *);
s32 free_collision_body_parts(void *);
M2C_UNK init_collision_body_parts(void *, void *, int);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
void send_entity_set_flags__6TLobbyFPv(void *);
s32 play_sound_effect(void *, void *, int, int);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
s32 __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
void __destroy_arr(void *, void *, int, int);
M2C_UNK __construct_array(void *, void *, void *, int, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);

extern Pos_800D3C04 lbl_8043C25C;
extern Vec_800D35D8 lbl_8043C26C;
extern M2C_UNK lbl_8043C428[];
extern u32 *lbl_80500ED0[];
extern u8 *lbl_80500F28[];
extern s32 lbl_805D2A78;
extern s32 lbl_805D51E0;
extern s32 lbl_805D51E4;
extern s32 lbl_805D51E8;
extern s32 lbl_805D51EC;
extern u32 lbl_805D51FC;
extern u32 *lbl_805D5200;
extern u32 *lbl_805D5204;
extern s32 lbl_805D5208;
extern s32 lbl_805D5660;
extern const f32 lbl_805DA258;
extern const f32 lbl_805DA27C;
extern const f32 lbl_805DA284;
extern const f32 lbl_805DA288;
extern const f32 lbl_805DA28C;
extern const f32 lbl_805DA294;
extern const f32 lbl_805DA298;
extern s32 some_id_805c6f74;
extern void *tl_04;

extern "C" {
void TBoss3Volopt__sub_800C762C();
}
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjEnemyCustom__sub_800C7DF4();
}
extern "C" {
void TObjGyaranzoMissile__sub_800D40D8();
}
extern "C" {
void TObjGyaranzoMissile__sub_800D40DC();
}
extern "C" {
void TObjGyaranzoMissile__sub_800D40E0();
}
extern "C" {
void TObjGyaranzoMissile__sub_800D40E8();
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
void TObjPlayer__sub_80015884();
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
void TObjPlayer__sub_800F673C();
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
void call_player_preserving_field__15TObjEnemyCustomFPv();
}
extern "C" {
void check_and_update__16TObjEneBm5GibonUFi();
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
void get_actor_body_center();
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
extern u8 lbl_8043C100[];
}
extern "C" {
extern u8 lbl_8043C114[];
}
extern "C" {
extern u8 lbl_8043C128[];
}
extern "C" {
extern u8 lbl_8043C13C[];
}
extern "C" {
extern u8 lbl_8043C14C[];
}
extern "C" {
extern u8 lbl_8043C15C[];
}
extern "C" {
extern u8 lbl_8043C16C[];
}
extern "C" {
extern u8 lbl_8043C180[];
}
extern "C" {
extern u8 lbl_8043C198[];
}
extern "C" {
extern u8 lbl_8043C1B0[];
}
extern "C" {
extern u8 lbl_8043C1C8[];
}
extern "C" {
extern u8 lbl_8043C1DC[];
}
extern "C" {
extern u8 lbl_8043C1F0[];
}
extern "C" {
extern u8 lbl_8043C208[];
}
extern "C" {
extern u8 lbl_8043C220[];
}
extern "C" {
extern u8 lbl_8043C238[];
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
void test_flag_256__10TObjPlayerFPv();
}
extern "C" {
void trigger_switch_attack__10TObjPlayerFi();
}
extern "C" {
void try_activate__16TObjEneBm5GibonUFi();
}
extern "C" {
void try_start_action__10TObjPlayerFPvii();
}
extern "C" {
void update_action_hold_status__10TObjPlayerFv();
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
void update_gigue__15TObjEnemyCustomFPv();
}
extern "C" {
void update_object_view_visibility();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
extern void *lbl_80494108[8];
extern void *lbl_80494128[9];
void *lbl_80494108[8] = {
    (void *)&lbl_8043C100, (void *)&lbl_8043C114, (void *)&lbl_8043C128, (void *)&lbl_8043C13C,
    (void *)&lbl_8043C14C, (void *)&lbl_8043C15C, (void *)&lbl_8043C16C, (void *)0x0,
};
void *lbl_80494128[9] = {
    (void *)&lbl_8043C180, (void *)&lbl_8043C198, (void *)&lbl_8043C1B0, (void *)&lbl_8043C1C8,
    (void *)&lbl_8043C1DC, (void *)&lbl_8043C1F0, (void *)&lbl_8043C208, (void *)&lbl_8043C220,
    (void *)0x0,
};
void *lbl_8049414C[4] = {
    (void *)&lbl_8043C238, (void *)&lbl_80494108, (void *)&lbl_80494128, (void *)0x70008,
};
void *lbl_8049415C[32] = {
    (void *)0x20000, (void *)0x4, (void *)0x3f333333, (void *)0x0,
    (void *)0x20005, (void *)0x5, (void *)0x3f333333, (void *)0x1,
    (void *)0x20000, (void *)0x0, (void *)0x3f800000, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x8,
    (void *)0x30004, (void *)0x3, (void *)0x3f800000, (void *)0x10,
    (void *)0x10005, (void *)0x6, (void *)0x3f333333, (void *)0x1,
    (void *)0x20000, (void *)0x7, (void *)0x3f4ccccd, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f800000, (void *)0x8,
};
void *lbl_804941DC[7] = {
    (void *)0x43160000, (void *)0x3f0e38e3, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *lbl_804941F8[11] = {
    (void *)0x0, (void *)0x41900000, (void *)0x0, (void *)0x41900000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80494224[11] = {
    (void *)0x60007, (void *)0xa000b, (void *)0xc000f, (void *)0xe0009,
    (void *)0x80025, (void *)0x210036, (void *)0x2c0010, (void *)0x110012,
    (void *)0x130014, (void *)0x150016, (void *)0x170018,
};
void *lbl_80494250[7] = {
    (void *)0x20003, (void *)0x4000b, (void *)0xc0000, (void *)0x10005,
    (void *)0x60007, (void *)0x80009, (void *)0xa0000,
};
void *lbl_8049426C[7] = {
    (void *)0x14, (void *)0x3d75c28f, (void *)0x3fc00000, (void *)0x3f666666,
    (void *)0x3df5c28f, (void *)0x3f0ccccd, (void *)0x3f000000,
};
void *lbl_80494288[83] = {
    (void *)0x0, (void *)0x0, (void *)&fn_800D3E54, (void *)&update_main__10TObjPlayerFPv,
    (void *)&TObjPlayer__sub_800D35D8, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEnemyCustom__sub_800C7DF4, (void *)&TObjPlayer__sub_8000FF3C, (void *)&TObjGyaranzoMissile__sub_800D40E0, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&check_and_update__16TObjEneBm5GibonUFi,
    (void *)&try_activate__16TObjEneBm5GibonUFi, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&TObjPlayer__sub_80015884, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjGyaranzoMissile__sub_800D40E8, (void *)&TObjGyaranzoMissile__sub_800D40DC,
    (void *)&update_gigue__15TObjEnemyCustomFPv, (void *)&TObjGyaranzoMissile__sub_800D40D8, (void *)&TObjPlayer__sub_800D31EC, (void *)&TObjPlayer__sub_800D306C,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TBoss3Volopt__sub_800C762C, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80,
};
#define lbl_8049414C ((M2C_UNK *)lbl_8049414C)
#define lbl_80494224 ((s16 *)lbl_80494224)
#define lbl_80494250 ((s16 *)lbl_80494250)
#define lbl_8049426C ((u8 *)lbl_8049426C)
#define lbl_80494288 ((u8 *)lbl_80494288)

void TObjPlayer__sub_800D2E8C(Ene_800D2E8C *arg0) {
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        *lbl_80500ED0[lbl_80494250[i]] |= 8;
    }
    for (; i < 13; i++) {
        *lbl_80500ED0[lbl_80494250[i]] &= ~8;
    }
    if (arg0->f3A8 >= 1) {
        *lbl_805D5200 |= 8;
        *lbl_805D5204 |= 8;
    } else {
        *lbl_805D5200 &= ~8;
        *lbl_805D5204 &= ~8;
    }
}

void TObjPlayer__sub_800D2F6C(Ene_800D2F6C *arg0) {
    switch (arg0->state) {
    case 0:
        arg0->fB8 = 4;
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        arg0->timer = 0x5A;
        create_dead_spot__10TObjPlayerFiif(arg0->v2FC, 0x5A, lbl_805DA27C);
        create_dead_spot__10TObjPlayerFiif(arg0->v2FC, 0x5A, lbl_805DA27C);
        arg0->state = 1;
    case 1:
        advance_animation_playback(arg0);
        arg0->timer--;
        if (arg0->timer < 0) {
            create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D5208, lbl_8049426C, arg0->f24, arg0->v2FC, arg0->f60);
            send_entity_set_flags__6TLobbyFPv(arg0);
            trigger_dell_biter_events__10TObjPlayerFPv(arg0->v2FC);
            play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD10), arg0->pos, 0, 0);
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    case -1:
        return;
    }
}

void TObjPlayer__sub_800D306C(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

void TObjPlayer__sub_800D31EC(u8 *arg0) {
  s32 temp_r0;
  unsigned long var_r3;
  if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != 4)
  {
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3B8)))) <= 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x3B8)) = 0x3C;
      fn_800D2A68((void *) arg0);
    }
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x3A8));
    var_r3 = 0;
    switch (temp_r0)
    {
      case 0:
        var_r3 = (*((s16 *) (((s8 *) arg0) + 0x32C))) <= (((s16) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) / 3);
        break;
      case 1:
        var_r3 = (*((s16 *) (((s8 *) arg0) + 0x32C))) <= (((s16) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) / 4);
        break;
    }
    if (((s32) var_r3) != 0)
    {
      fn_800D2900((void *) arg0);
    }
    *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
    play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv((void *) arg0, (int) 0x4003AD0F), (void *) (arg0 + 0x38), (int) 0, (int) 0);
    if (!((*((s32 *) (((s8 *) arg0) + 0x388))) & 0x40000))
    {
      set_state__15TObjEneMe1GiGueFPvi((void *)((void *) arg0), (s32)((int) 4));
      *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x388))) | 1);
      return;
    }
    obj_clearFlags30((void *) arg0, (int) 0x200200);
  }
}

void TObjPlayer__sub_800D35D4(void) {  }

#pragma push
#pragma opt_common_subs off
void TObjPlayer__sub_800D35D8(u8 *arg0) {
    s32 temp_r3;
    s32 var_r30;
    s32 var_r29;
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        var_r30 = 0;
        if (is_split_screen() != 0) {
            var_r30 = get_camera_mode__11TCameraCtrlFv();
        }
        var_r29 = 1;
        temp_r3 = ((VObj_18_ca64a0 *)(arg0))->m9(lbl_805DA284, lbl_805DA288, lbl_805DA28C);
        if (temp_r3 != 0) {
            lbl_805D5660 = some_id_805c6f74;
            var_r30 = (s32)&((Obj_800D35D8 *)arg0)->arr[var_r30];
            fn_800D7AD0(var_r30);
            if (updateFromCamera__15RenderFadeStateFPCf(var_r30, (void *) (arg0 + 0x2FC)) != 0) {
                ((VObj_14_fddec9 *)(var_r30))->m6();
                if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
                    some_id_805c6f74 = lbl_805D5660;
                    return;
                }
            }
            TObjPlayer__sub_800D2E8C((Ene_800D2E8C *) (arg0));
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            select_actor_lighting((void *) (arg0));
            toggle_particle_effect__10TObjPlayerFv();
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
            } else if (M2C_FIELD(arg0, s32 *, 0x388) & 4) {
                if (((Obj_800D35D8 *)arg0)->light.m8() != 0) {
                    ((Obj_800D35D8 *)arg0)->light.m6();
                    if (temp_r3 == 1) {
                        draw__16TObjEneRe7BeruraFPv((void *) (arg0));
                    } else {
                        render_world_model__10TObjPlayerFPv((void *) (arg0));
                    }
                    ((Obj_800D35D8 *)arg0)->light.m7();
                } else {
                    var_r29 = 0;
                }
            } else if (temp_r3 == 1) {
                draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            } else {
                render_world_model__10TObjPlayerFPv((void *) (arg0));
            }
            pop_matrix();
            restore_scene_lighting();
            end_effect_render__13TParticleCtrlFv();
            if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && (var_r29 != 0)) {
                Vec_800D35D8 sp8 = lbl_8043C26C;
                render_with_position_override__10TObjPlayerFPvPvi((void *) (arg0), (void *) (&sp8), 0);
            }
            ((VObj_14_fddec9 *)(var_r30))->m7();
        }
    }
}
extern int fold_flush_0;
#pragma pop

void TObjPlayer__sub_800D37F4(u8 *arg0) {
    s32 a;
    u16 r;
    switch (M2C_FIELD(arg0, s16 *, 0x326)) {
    case 0:
    case 8:
        if (((VObj_18 *)(arg0))->m17(0x1E) != 0) {
            TObjGyaranzoMissile__sub_800D20BC(arg0);
            if (M2C_FIELD(arg0, s32 *, 0x3CC) > 0) {
                switch (M2C_FIELD(arg0, s32 *, 0x3A8)) {
                case 0:
                    if (M2C_FIELD(arg0, s16 *, 0x32C) <= M2C_FIELD(arg0, s32 *, 0x3B0)) {
                        M2C_FIELD(arg0, u16 *, 0x338) = M2C_FIELD(arg0, s32 *, 0x3C8);
                        a = 9;
                    } else {
                        M2C_FIELD(arg0, u16 *, 0x338) = M2C_FIELD(arg0, s32 *, 0x3C0);
                        a = 1;
                    }
                    if (M2C_FIELD(arg0, u16 *, 0x338) != 0xFFFF) {
                        update_if_active__15TObjEneMe1GiGueFPv(arg0, a);
                        M2C_FIELD(arg0, s32 *, 0x378) = 2;
                    }
                    break;
                case 1:
                    M2C_FIELD(arg0, u16 *, 0x338) = M2C_FIELD(arg0, s32 *, 0x3C0);
                    if (M2C_FIELD(arg0, u16 *, 0x338) != 0xFFFF) {
                        update_if_active__15TObjEneMe1GiGueFPv(arg0, 9);
                        M2C_FIELD(arg0, s32 *, 0x378) = 2;
                    }
                    break;
                case 2:
                    M2C_FIELD(arg0, u16 *, 0x338) = M2C_FIELD(arg0, s32 *, 0x3BC);
                    if (M2C_FIELD(arg0, u16 *, 0x338) != 0xFFFF) {
                        update_if_active__15TObjEneMe1GiGueFPv(arg0, 9);
                        M2C_FIELD(arg0, s32 *, 0x378) = 2;
                    }
                    break;
                }
            } else if (((VObj_18 *)(arg0))->m17(0x1E) != 0 &&
                       xz_distance_squared(arg0 + 0x38, arg0 + 0x50) > lbl_805DA25C) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 8);
            }
        }
        break;
    case 1:
        if (((VObj_18 *)(arg0))->m17(0x1E) != 0) {
            f32 *p = M2C_FIELD(arg0, f32 **, 0x350);
            r = find_nearest_visible_player(arg0, 0, (int)p, lbl_805DA290 + *p);
            if (M2C_FIELD(arg0, u16 *, 0x338) == 0xFFFF) {
                M2C_FIELD(arg0, u16 *, 0x338) = r;
            }
            if (M2C_FIELD(arg0, u16 *, 0x338) == 0xFFFF) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 8);
            }
        }
        break;
    }
}

void TObjPlayer__sub_800D39EC(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        update_state__15TObjEnemyCustomFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_800D3314((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_800D2CE4((void *) arg0);
        return;
      case 4:
        TObjPlayer__sub_800D30A8((void *) arg0);
        return;
      case 5:
        TObjPlayer__sub_800D2F6C((Ene_800D2F6C *)((void *) arg0));
        return;
      case 7:
        update__19TObjGyaranzoMissileFPv((void *) arg0);
        return;
      case 9:
        TObjPlayer__sub_800D3314((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_800D1E4C((void *) arg0);
        break;
    }
  }
}

void update_main__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((M2C_UNK (*)(void *))TObjPlayer__sub_800D35D4)(arg0);
        return;
    }
    TObjPlayer__sub_800D37F4((u8 *)(arg0));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3B8);
    if (temp_r3 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x3B8) = (s32) (temp_r3 - 1);
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            ((M2C_UNK (*)(void *))TObjPlayer__sub_800D39EC)(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    ((M2C_UNK (*)(void *))TObjPlayer__sub_800D39EC)(arg0);
    update_prev_position__10TObjPlayerFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    submit_cursor_candidate(arg0, -1);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void * create__15TObjEneGyaranzoFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x45C);
    if (o2 != NULL) {
        o2 = ((void * (*)(void *, void *, void *))TObjEneGyaranzo__ct)(o2, o, arg0);
    }
    return o2;
}

void free_static_instances__15TObjEneGyaranzoFv(void) {
    if (lbl_805D51FC != 0U) {
        TLobby__sub_8001FE7C(lbl_805D51FC, 1);
        lbl_805D51FC = 0U;
    }
    if ((*(struct VObj_800D3BA0_800D3B38 * *)&lbl_805D5208) != 0) {
        if ((*(struct VObj_800D3BA0_800D3B38 * *)&lbl_805D5208) != 0) {
            (*(struct VObj_800D3BA0_800D3B38 * *)&lbl_805D5208)->m0(1);
        }
        (*(struct VObj_800D3BA0_800D3B38 * *)&lbl_805D5208) = 0;
    }
}

#define AREA ((Area_800D3C04 *)lbl_805D51FC)
void TLobby__sub_800D3C04(void) {
    s32 i;
    void *p;

    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D51FC = load_enemy_bml_resource_named(lbl_8049414C, lbl_8043C428);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = (void *)load_resource_from_descriptor(p, 5, lbl_8049414C, 0, 0, 0);
        }
        lbl_805D51FC = (u32)p;
    }
    for (i = 0; i < 0x16; i++) {
        ((s32 *)lbl_80500ED0)[i] = collect_and_count__12TBoss3VoloptFUii(AREA->res->r38, lbl_80494224[i]);
    }
    for (i = 0; i < 0xD; i++) {
        lbl_80500F28[i] = (u8 *)collect_and_count__12TBoss3VoloptFUii(AREA->res->r48, lbl_80494224[i]);
    }
    for (i = 0; i < 0xD; i++) {
        M2C_FIELD(lbl_80500F28[i], s32 *, 0x30) = 0;
    }
    (*(s32 *)&lbl_805D5200) = collect_and_count__12TBoss3VoloptFUii(AREA->res->r38, 0x19);
    (*(s32 *)&lbl_805D5204) = collect_and_count__12TBoss3VoloptFUii(AREA->res->r38, 0xD);
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != NULL) {
        p = TBreakUpMdl__sub_80096FD8(p, AREA->res->r38, get_bml_motion(lbl_805D51FC, 3), lbl_805DA294);
    }
    (*(struct VObj_800D3BA0_800D3B38 * *)&lbl_805D5208) = (VObj_800D3BA0_800D3B38 *)p;
    lbl_805D51E0 = register_boss__6TLobbyFPv(0x1D);
    lbl_805D51E4 = dispatch_shared_handler_b__6TLobbyFPv(0x1D);
    lbl_805D51E8 = register_object__6TLobbyFPv(0x1D);
    lbl_805D51EC = dispatch_shared_handler_a__6TLobbyFPv(0x1D);
    {
        Pos_800D3C04 pos = lbl_8043C25C;
        pos.w[0] = AREA->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0x20, AREA->res->r38, AREA->res->r3C, &pos, lbl_805DA298, lbl_805DA258);
        spawn_npc_enemy__6TLobbyFsiiiff(0x21, AREA->res->r48, AREA->res->r3C, &pos, lbl_805DA298, lbl_805DA258);
    }
}

#undef AREA
Obj_800D3E54 *fn_800D3E54(Obj_800D3E54 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->vt = lbl_80494288;
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x3EC, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3D0, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneGyaranzo__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    s16 temp_r6;
    s32 temp_r5;
    s32 var_r29;
    s32 var_r31;

    ((void (*)(void *, M2C_UNK, void *)) TObjEnemyCustom__ct)(arg0, arg1, arg2);
    M2C_FIELD(arg0, u8 **, 0x18) = (u8 *) ((void * *)lbl_80494288);
    init_common__18TObjEneMe3SinowZoaFPv((void *) ((u8 *)(arg0) + 0x3D0));
    __construct_array((void *) ((u8 *)(arg0) + 0x3EC), (void *) (&init_and_activate__10TObjPlayerFPv), (void *) (&TObjPlayer__sub_800D7C58), (int) (0x1C), (int) (4));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A78;
    ((VObj_18_fe72f9 *)(arg0))->m79(arg2);
    VecCopy__FP3VecPC3Vec((u8 *)(arg0) + 0x290, VecCopy__FP3VecPC3Vec((u8 *)(arg0) + 0x29C, (u8 *)(arg0) + 0x38));
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD((*(u8 * *)&lbl_805D51FC), s32 *, 0x430);
    M2C_FIELD(arg0, u8 **, 0xD8) = (u8 *) lbl_8049415C;
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0xD8)));
    init_collision_body_parts((void *) (arg0), (void *) lbl_804941F8, (int) (1));
    M2C_FIELD(arg0, s32 *, 0x368) = 0;
    M2C_FIELD(arg0, u8 **, 0x350) = (u8 *) lbl_804941DC;
    bind_enemy_combat_stats((void *) (arg0), (void *) (lbl_805D51E0), (void *) (lbl_805D51E4), (void *) (lbl_805D51E8));
    TObjGyaranzoMissile__sub_800D1F84((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x32E) = (s16) M2C_FIELD(arg0, s16 *, 0x2BA);
    M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    temp_r6 = M2C_FIELD(arg0, s16 *, 0x32C);
    temp_r5 = temp_r6 / 3;
    M2C_FIELD(arg0, s32 *, 0x3B0) = temp_r5;
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3B8) = 0;
    set_param__12TObjEneLappyFPvi((void *) (arg0), (int) (0x19), (int) (temp_r5), (int) (temp_r6));
    add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (4));
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    initialize_enemy_photon_effect((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D51FC), u8 **, 0x42C), s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D51FC), u8 **, 0x42C), s32 *, 0x3C);
    if (M2C_FIELD(arg2, s16 *, 0xA) != 0) {
        TObjEnemyCustom__sub_800C7860((void *) (arg0));
    }
    for (var_r29 = 0; var_r29 < 4; var_r29++) {
        activate_and_dispatch__10TObjPlayerFPv(&((Gy_800D3ED8 *) arg0)->e3EC[var_r29]);
    }
    ((VObj_18_fe72f9 *)(arg0))->m80();
    return arg0;
}

}
