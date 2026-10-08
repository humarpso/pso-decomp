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
    virtual void m82();
    virtual M2C_UNK m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct SubBase { char pad[0x14]; };

struct VSub : SubBase { virtual void m0(); virtual void m1(); virtual void m2(); };

struct VBase_802D0C14 { char pad[0x18]; };

struct VObj_802D0C14 : VBase_802D0C14 {
    virtual void m0(s32);
};

struct S_802D0C14 { u8 pad[0x3C0]; void *arr[2]; };

struct VBase_18_0ab400 { char pad[0x18]; };

struct VObj_18_0ab400 : VBase_18_0ab400 {
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
    virtual M2C_UNK m19(s32, void *, s32);
};

struct VBase14_802D0D3C { char pad[0x14]; };
struct VObj14_802D0D3C : VBase14_802D0D3C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
};
struct VBase18_802D0D3C { char pad[0x18]; };
struct VObj18_802D0D3C : VBase18_802D0D3C {
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
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85(s32, s32);
    virtual void m86();
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DE704;
void TObjEneBm9Mericarol__sub_802D095C(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
s32 transition_enemy_state(void * a0, s32 a1);
void TObjEneBm9Mericarol__sub_802D095C(u8 *arg0);
void TObjEneBm9Mericarol__sub_802D0B04(u8 *arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_persistent_sound(void *, void *, void *, int, int);
void TObjEneBm9Mericarol__sub_802D073C(s32 arg0);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
extern const f32 lbl_805DE6F4;
extern const f32 lbl_805DE714;
extern const f32 lbl_805DE728;
extern const f32 lbl_805DE740;
extern const f32 lbl_805DE744;
extern const f32 lbl_805DE748;
void TObjEneBm9Mericarol__sub_802D078C(u8 *arg0);
s32 TObjEneBm9Mericarol__sub_802CEDA0(void *, void *);
s32 handle_motion_event__19TObjEneBm9MericarolFPvi(void *, void *);
s32 TObjEneBm9Mericarol__sub_802CF178(void *, void *);
s32 state_burrow__19TObjEneBm9MericarolFPvi(void *, void *);
s32 TObjEneBm9Mericarol__sub_802CF368(void *, void *);
s32 TObjEneBm9Mericarol__sub_802CF4F8(void *, void *);
s32 TObjEneDD__sub_802CF7B4(void *, void *);
s32 TObjPlayer__sub_802CFB64(void *, void *);
s32 handle_shot_state__19TObjEneBm9MericarolFPvi(void *, void *);
s32 TObjEneBm9Mericarol__sub_802D01D8(void *, void *);
s32 handle_event__19TObjEneBm9MericarolFPvi(void *, void *);
s32 TObjEneBm9Mericarol__sub_802D05BC(void *, void *);
s32 handle_action__19TObjEneBm9MericarolFPvi(void *, void *);
void dispatch_state_handler__19TObjEneBm9MericarolFiUii(s32 arg0, u32 arg1, s32 arg2);
s32 obj_isState2_324(s32);
s32 get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_valid_target__9TObjEneDDFPv(s32);
f32 horizontal_distance_squared(void *, void *);
extern const f32 lbl_805DE74C;
s32 TObjEneBm9Mericarol__sub_802D0854(s32 arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK __dt__9TObjEneDDFv(void *, int);
M2C_UNK delete_buffer__12TBoss8DragonFis(void *, int);
M2C_UNK __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __destroy_arr(void *, void *, u32, u32);
void TObjPlayer__sub_800D7C58(void);
u8 *__dt__19TObjEneBm9MericarolFPvs(u8 *arg0, s16 arg1);
s32 obj_is_hit_receivable(u32);
f32 get_random_float__8TObjFishFv(f32);
s32 get_battle_param__10TObjPlayerFi(s32);
s32 is_area_attack_target_eligible(void *, u32);
s32 attack_target_history_add(s32, s32);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK mark_enemy_body_contacts(void *);
M2C_UNK TObjPlayer__sub_801561C4(void *, f32);
extern const f32 lbl_805DE758;
s32 apply_area_attack_hits__10TObjPlayerFPvPviUif(u8 *arg0, u8 *arg1, s32 arg2, u32 arg3, f32 farg0);
}

extern "C" {

void TObjEneBm9Mericarol__sub_802D093C(void);
void TObjEneBm9Mericarol__sub_802D0940(void);
void TObjEneBm9Mericarol__sub_802D09AC(void);
void TObjEneBm9Mericarol__sub_802D0A2C(void);
void TObjPlayer__sub_802D14B4(u8 *arg0);
void change_state__19TObjEneBm9MericarolFPv(void *arg0);
void *create__19TObjEneBm9MericarolFPv(void *arg0);
void free_shared_instances__19TObjEneBm9MericarolFv(void);
s32 get_phase__19TObjEneBm9MericarolFPv(void* p);
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0);
s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0);
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0);
s32 clear_attack_receipts(void);
void TLobby__sub_8001FE7C(void*, int);
struct Obj_802D0D3C;
Obj_802D0D3C *TObjEneBm9Mericarol__ct(Obj_802D0D3C *, void *, s32);
M2C_UNK draw_oriented_shadow__9TObjEneDDFiiiUi(void *, void *, M2C_UNK, M2C_UNK);
s32 transition_enemy_state(void * a0 = 0, s32 a1 = 0);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_802D1C84();

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneBm9Mericarol__sub_802CED3C();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
extern "C" void TObjEneDD__vt86();
extern "C" void TObjEneDD__vt87();
extern "C" void TObjEneDD__vt88();
extern "C" void TObjEneDD__vt89();
extern "C" void TObjEneDD__vt90();
extern "C" void TObjEneDD__vt91();
extern "C" void TObjEneDD__vt92();
extern "C" void TObjEneDD__vt93();
extern "C" void TObjEneDD__vt94();
extern "C" void TObjEneDD__vt95();
extern "C" void TObjEneDD__vt96();
extern "C" void TObjEneDD__vt97();
extern "C" void TObjEneDD__vt98();
extern "C" void TObjEneDD__vt99();
extern "C" void TObjEneEpsilon__vt101();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void TObjPlayer__sub_800F673C();
extern "C" void draw_color_variant__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_802CE8CC();
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
extern "C" u8 lbl_80472324[];
extern "C" u8 lbl_80472338[];
extern "C" u8 lbl_80472354[];
extern "C" u8 lbl_80472370[];
extern "C" u8 lbl_8047238C[];
extern "C" u8 lbl_804723A8[];
extern "C" u8 lbl_804723C4[];
extern "C" u8 lbl_804723E0[];
extern "C" u8 lbl_804723FC[];
extern "C" u8 lbl_80472418[];
extern "C" u8 lbl_80472434[];
extern "C" u8 lbl_8047244C[];
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
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_804E15BC[2];
extern void *lbl_804E15C4[9];
extern void *lbl_804E15F8[2];
extern void *lbl_804E1600[9];
struct Res_802D0D3C {
    u8 pad0[0x42C];
    s32 *f42C;
    s32 f430;
};

struct Obj_802D0D3C {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt18;
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    u8 pad38[0xB8 - 0x38];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 f326;
    u8 pad328[0x350 - 0x328];
    void *f350;
    u8 pad354[0x37C - 0x354];
    f32 f37C;
    u8 pad380[0x3C0 - 0x380];
    s32 f3C0;
    s32 f3C4;
    u8 a3C8[4][0x1C];
    s32 f438;
    f32 f43C;
    u8 pad440[0x44C - 0x440];
    s32 f44C;
    s32 f450;
    s32 f454;
    s32 f458;
    u8 pad45C[0x46C - 0x45C];
    u8 o46C[0x14];
    void **vt480;
    u8 pad484[0x488 - 0x484];
    void *f488;
    void *f48C;
    s32 f490;
    s32 f494;
    s32 f498;
    s32 f49C;
    s32 f4A0;
    f32 f4A4;
    u8 pad4A8[4];
    s32 f4AC;
};

typedef void (*VFn0_802D0D3C)(void *);
typedef void (*VFn2_802D0D3C)(void *, s32, s32);

void init_object__9TObjEneDDFPv(void *, void *);
void __construct_array(void *, void *, void *, u32, u32);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, s32);
void init_position_vectors__9TObjEneDDFPv(void *);
void init_model__9TObjEneDDFPv(void *, void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
s32 create__12TObjEneSaverFPvPv(s32, s32);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void initialize_enemy_state__9TObjEneDDFPv(void *, s32);
void enemy_init_acquire_period(void *, s32);
void enemy_init_validate_period(void *, s32);
void *construct_collider_proxy__10TObjPlayerFPv(void *, s32);
void init_collision_body_parts(void *, void *, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void *TBoss8Dragon__sub_800BC5EC(void *, s32);
void transform_part_positions__9TObjEneDDFPv(void *);
void fn_8002AE64(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
void init_and_activate__10TObjPlayerFPv(void *);
extern const s32 lbl_80472318[];
extern s32 lbl_805D3F28;
extern const f32 lbl_805DE6EC;
extern const f32 lbl_805DE70C;
extern const f32 lbl_805DE750;

void *lbl_804E1548[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x200, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804E1564[22] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41c80000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x42480000, (void *)0x0,
    (void *)0x0, (void *)0x9d03, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
__declspec(section ".data") void *lbl_804E15BC[2] = {
    (void *)&lbl_80472324, (void *)0x0,
};
void *lbl_804E15C4[9] = {
    (void *)&lbl_80472338, (void *)&lbl_80472354, (void *)&lbl_80472370, (void *)&lbl_8047238C,
    (void *)&lbl_804723A8, (void *)&lbl_804723C4, (void *)&lbl_804723E0, (void *)&lbl_804723FC,
    (void *)0x0,
};
void *lbl_804E15E8[4] = {
    (void *)&lbl_80472418, (void *)&lbl_804E15BC, (void *)&lbl_804E15C4, (void *)0x10008,
};
__declspec(section ".data") void *lbl_804E15F8[2] = {
    (void *)&lbl_80472434, (void *)0x0,
};
void *lbl_804E1600[9] = {
    (void *)&lbl_80472338, (void *)&lbl_80472354, (void *)&lbl_80472370, (void *)&lbl_8047238C,
    (void *)&lbl_804723A8, (void *)&lbl_804723C4, (void *)&lbl_804723E0, (void *)&lbl_804723FC,
    (void *)0x0,
};
void *lbl_804E1624[4] = {
    (void *)&lbl_8047244C, (void *)&lbl_804E15F8, (void *)&lbl_804E1600, (void *)0x10008,
};
void *lbl_804E1634[36] = {
    (void *)0x30000, (void *)0x3, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10000, (void *)0x5, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x6, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0x5, (void *)0x3f000000, (void *)0x0,
    (void *)0x20003, (void *)0x7, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x1, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x2, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0x4, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10000, (void *)0x0, (void *)0x3f333333, (void *)0x0,
};
void *lbl_804E16C4[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__19TObjEneBm9MericarolFPvs, (void *)&TObjEneBm9Mericarol__sub_802D0B04,
    (void *)&TObjPlayer__sub_802CE8CC, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneBm9Mericarol__sub_802D0A2C, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneBm9Mericarol__sub_802D09AC, (void *)&set_state_a__19TObjEneBm9MericarolFPv, (void *)&change_state__19TObjEneBm9MericarolFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&dispatch_state_handler__19TObjEneBm9MericarolFiUii,
    (void *)&update_shadow_height__19TObjEneBm9MericarolFPv, (void *)&TObjEneDD__vt86, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneEpsilon__vt101, (void *)&TObjEneBm9Mericarol__sub_802CED3C, (void *)&draw_color_variant__10TObjPlayerFPv,
};
#define lbl_804E16C4 ((u8 *)lbl_804E16C4)
u32 lbl_80540B58[3];
u32 lbl_80540B64[3];
u32 lbl_80540B70[3];
u32 lbl_80540B7C[3];
u32 lbl_80540B88[4];

void TObjEneBm9Mericarol__sub_802D073C(s32 arg0) {
    play_persistent_sound((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3A810))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

s32 get_phase__19TObjEneBm9MericarolFPv(void* p) { return *(s32*)((char*)p + 0x45c); }

#pragma push
#pragma opt_common_subs off
void TObjEneBm9Mericarol__sub_802D078C(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x45C) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x45C);
    if ((temp_r0 < 0) || (temp_r0 > 2)) {
        temp_f1 = calc_boss4_scale__10TObjPlayerFi((s32) arg0);
        if (temp_f1 > lbl_805DE728) {
            M2C_FIELD(arg0, s32 *, 0x45C) = 2;
        } else if (temp_f1 > lbl_805DE740) {
            M2C_FIELD(arg0, s32 *, 0x45C) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x45C) = 0;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x440) = (f32) (lbl_805DE744 + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, f32 *, 0x444) = (f32) (lbl_805DE748 + M2C_FIELD(arg0, f32 *, 0x358));
    if (M2C_FIELD(arg0, f32 *, 0x444) < lbl_805DE6F4) {
        M2C_FIELD(arg0, f32 *, 0x444) = (f32) lbl_805DE6F4;
    }
    M2C_FIELD(arg0, f32 *, 0x448) = (f32) (lbl_805DE714 + M2C_FIELD(arg0, f32 *, 0x35C));
}
#pragma pop

s32 TObjEneBm9Mericarol__sub_802D0854(s32 arg0) {
    s32 best = 0;
    s32 n = get_game_mode__6TLobbyFv();
    s32 pl;
    s32 i;
    for (i = 0; i < n; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (is_valid_target__9TObjEneDDFPv(pl) != 0 && obj_isState2_324(pl) == 0) {
            best = pl;
            break;
        }
    }
    if (is_valid_target__9TObjEneDDFPv(best) != 0 && horizontal_distance_squared((void *)(arg0 + 0x38), (void *)(best + 0x38)) < lbl_805DE74C) {
        return best;
    }
    return 0;
}

s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x438) & 2) {
        transition_enemy_state(arg0, 8);
        return 1;
    }
    return 0;
}
void TObjEneBm9Mericarol__sub_802D093C(void) {  }
void TObjEneBm9Mericarol__sub_802D0940(void) {  }
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

void TObjEneBm9Mericarol__sub_802D095C(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805DE704);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void TObjEneBm9Mericarol__sub_802D09AC(void) {  }
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        if (M2C_FIELD(arg0, s32 *, 0x438) & 0x20) {
            clear_attack_receipts();
            return;
        }
        transition_enemy_state(arg0, 0xA);
    }
}
void change_state__19TObjEneBm9MericarolFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xB) && (temp_r0 != 0xC)) {
        transition_enemy_state(arg0, 0xB);
    }
}
void TObjEneBm9Mericarol__sub_802D0A2C(void) {  }

extern u32 lbl_805D6860;
extern u32 lbl_805D6864;
extern u32 lbl_805D6868;

void dispatch_state_handler__19TObjEneBm9MericarolFiUii(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        handle_action__19TObjEneBm9MericarolFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 1:
        TObjEneBm9Mericarol__sub_802D05BC((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        handle_event__19TObjEneBm9MericarolFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TObjEneBm9Mericarol__sub_802D01D8((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        handle_shot_state__19TObjEneBm9MericarolFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjPlayer__sub_802CFB64((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneDD__sub_802CF7B4((void *) (arg0), (void *) (arg2));
        return;
    case 10:
        TObjEneBm9Mericarol__sub_802CF368((void *) (arg0), (void *) (arg2));
        return;
    case 11:
        state_burrow__19TObjEneBm9MericarolFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        TObjEneBm9Mericarol__sub_802CF4F8((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        handle_motion_event__19TObjEneBm9MericarolFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        TObjEneBm9Mericarol__sub_802CEDA0((void *) (arg0), (void *) (arg2));
        return;
    case 12:
        TObjEneBm9Mericarol__sub_802CF178((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

#pragma push
#pragma fp_contract on
void TObjEneBm9Mericarol__sub_802D0B04(u8 *arg0) {
    s16 temp_r3_2;
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x438);
    if (temp_r3 & 0x10) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r3 & 0xFFFFFFEF);
        }
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0x390) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r3 | 0x10);
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    } else {
        temp_r3_2 = M2C_FIELD(arg0, s16 *, 0x326);
        if ((temp_r3_2 == 0) || (temp_r3_2 == 1)) {
            ((VSub *)(arg0 + 0x46C))->m2();
            transition_enemy_state((void *)((void *) (arg0)), (s32)((int) (2)));
        }
    }
    TObjEneBm9Mericarol__sub_802D095C((u8 *)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}
#pragma pop

Obj_802D0D3C *TObjEneBm9Mericarol__ct(Obj_802D0D3C *self, void *parent, s32 arg2) {
    s32 ph;
    s32 i;
    void *p;

    init_object__9TObjEneDDFPv(self, parent);
    self->vt18 = lbl_804E16C4;
    __construct_array(self->a3C8, (void *)init_and_activate__10TObjPlayerFPv, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
    init_common__18TObjEneMe3SinowZoaFPv(self->o46C);
    self->f0 = lbl_805D3F28;
    invoke_initialization_hook__9TObjEneDDFPv(self, arg2);
    TObjEneBm9Mericarol__sub_802D078C((u8 *)self);
    self->f438 = 0;
    if (calc_boss4_scale__10TObjPlayerFi((s32)self) <= lbl_805DE750) {
        self->f438 |= 0x400;
    }
    init_position_vectors__9TObjEneDDFPv(self);
    self->f34 = ((Res_802D0D3C *)lbl_805D6868)->f42C[2];
    self->f24 = ((Res_802D0D3C *)lbl_805D6868)->f42C[3];
    init_model__9TObjEneDDFPv(self, lbl_804E1564, 1);
    set_field_d8__10TObjPlayerFPvi(self, lbl_804E1634);
    set_field_dc__10TObjPlayerFPvi(self, ((Res_802D0D3C *)lbl_805D6868)->f430);
    self->fB8 = 2;
    set_animation__10TObjPlayerFPvs(self, self->fB8);
    set_field_b8__14TObjEnePanarmsFPvs(self, self->fB8);
    ph = get_phase__19TObjEneBm9MericarolFPv(self);
    reset_hp__9TObjEneDDFPv(self, lbl_80540B58[ph], lbl_80540B64[ph], lbl_80540B70[ph]);
    self->f3C0 = create__12TObjEneSaverFPvPv(0xA0303030, lbl_80472318[ph]);
    self->f3C4 = create__12TObjEneSaverFPvPv(0xA0303030, lbl_80472318[ph]);
    add_flags_2e4__10TObjPlayerFPvUi(self, 0x12);
    self->f350 = lbl_804E1548;
    switch (get_phase__19TObjEneBm9MericarolFPv(self)) {
    case 0:
        initialize_enemy_state__9TObjEneDDFPv(self, 0x38);
        break;
    case 1:
        initialize_enemy_state__9TObjEneDDFPv(self, 0x39);
        break;
    case 2:
        initialize_enemy_state__9TObjEneDDFPv(self, 0x3A);
        break;
    }
    self->f37C = lbl_805DE6EC;
    enemy_init_acquire_period(self, 0x1E);
    enemy_init_validate_period(self, 0x1E);
    self->f43C = lbl_805DE70C;
    self->f44C = 0;
    self->f450 = 0;
    self->f454 = 0;
    self->f458 = 0;
    ((VObj14_802D0D3C *)self->o46C)->m3();
    p = __nw__7TObjectFUl(0xAC);
    if (p != NULL) {
        p = construct_collider_proxy__10TObjPlayerFPv(p, 0);
    }
    self->f48C = p;
    init_collision_body_parts(self->f48C, (u8 *)lbl_804E1564 + 0x2C, 1);
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != NULL) {
        p = TBoss8Dragon__sub_800BC5EC(p, 8);
    }
    self->f488 = p;
    self->f490 = 0;
    self->f494 = 0;
    self->f498 = 0;
    self->f49C = 0;
    self->f4A0 = 0;
    self->f4A4 = lbl_805DE70C;
    self->f4AC = 0;
    TObjEneBm9Mericarol__sub_802D095C((u8 *)self);
    ((VObj18_802D0D3C *)self)->m86();
    transform_part_positions__9TObjEneDDFPv(self);
    self->f326 = 0;
    ((VObj18_802D0D3C *)self)->m85(self->f326, 4);
    fn_8002AE64(self);
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(self->a3C8[i]);
    }
    return self;
}

u8 *__dt__19TObjEneBm9MericarolFPvs(u8 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = lbl_804E16C4;
        for (i = 0; i < 2; i++) {
            if (((S_802D0C14 *)arg0)->arr[i] != NULL) {
                queue_destruction__7TObjectFv(((S_802D0C14 *)arg0)->arr[i]);
                ((S_802D0C14 *)arg0)->arr[i] = NULL;
            }
        }
        if (M2C_FIELD(arg0, void **, 0x488) != NULL) {
            delete_buffer__12TBoss8DragonFis(M2C_FIELD(arg0, void **, 0x488), 1);
            M2C_FIELD(arg0, void **, 0x488) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x48C) != NULL) {
            free_collision_body_parts(M2C_FIELD(arg0, void **, 0x48C));
            if (M2C_FIELD(arg0, VObj_802D0C14 **, 0x48C) != NULL) {
                M2C_FIELD(arg0, VObj_802D0C14 **, 0x48C)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x48C) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x4AC) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4AC));
            M2C_FIELD(arg0, void **, 0x4AC) = NULL;
        }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs(arg0 + 0x46C, -1);
        __destroy_arr(arg0 + 0x3C8, (void *) TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void free_shared_instances__19TObjEneBm9MericarolFv(void) {
    if ((u32) lbl_805D6864 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D6864, 1);
        lbl_805D6864 = 0U;
    }
    if ((u32) lbl_805D6860 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D6860, 1);
        lbl_805D6860 = 0U;
    }
    fn_802D1C84();
    if ((u32) lbl_805D6868 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6868, 1);
        lbl_805D6868 = 0U;
    }
}

extern void *tl_04;

void *create__19TObjEneBm9MericarolFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4B0);
    if (o != NULL) {
        o = TObjEneBm9Mericarol__ct((Obj_802D0D3C *)o, tl_04, (s32)arg0);
    }
    return o;
}

s32 apply_area_attack_hits__10TObjPlayerFPvPviUif(u8 *arg0, u8 *arg1, s32 arg2, u32 arg3, f32 farg0) {
    s32 hit;
    u32 mask;
    s32 obj;
    s32 i;
    s32 ok;
    hit = 0;
    mask = 0;
    if (M2C_FIELD(arg0, u32 *, 0xAC) == 0) {
        return 0;
    }
    init_all_slots__10TObjPlayerFv();
    if (M2C_FIELD(arg1, s32 *, 4) & 1) {
        TObjPlayer__sub_801561C4(arg0, farg0);
        mask |= 0x80000;
    }
    if (M2C_FIELD(arg1, s32 *, 4) & 2) {
        mark_enemy_body_contacts(arg0);
        mask |= 0x100000;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), u32 *, 0x18) & mask) {
        for (i = 0; i < 0x10; i++) {
            obj = get_battle_param__10TObjPlayerFi(i);
            if (obj == 0) {
                break;
            }
            if (obj_is_hit_receivable(obj) != 0 && (u32)obj != M2C_FIELD(arg0, u32 *, 0xAC) &&
                is_area_attack_target_eligible(arg0, M2C_FIELD(obj, u32 *, 0x30)) != 0 &&
                !(get_random_float__8TObjFishFv(M2C_FIELD(arg0, f32 *, 0xB8) - M2C_FIELD(obj, f32 *, 0x300)) > lbl_805DE758)) {
                ok = 1;
                if (arg3 != 0 && attack_target_history_add(arg3, obj) == 0) {
                    ok = 0;
                }
                if (ok != 0) {
                    ((VObj_18_0ab400 *)(arg0))->m19(obj, arg1, arg2);
                    hit = 1;
                }
            }
        }
    }
    return hit;
}

void TObjPlayer__sub_802D14B4(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10C) != 0) {
        draw_oriented_shadow__9TObjEneDDFiiiUi(arg0 + 0x38, arg0 + 0xD8, 0, 0);
    }
}

}
