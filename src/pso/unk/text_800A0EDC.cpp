#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_800A2F94 { char pad[0x18]; };
struct VObj_18_800A2F94 : VBase_18_800A2F94 {
#define V(n) virtual void m##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29)
    V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39)
    V(40) V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49)
    V(50) V(51) V(52) V(53) V(54) V(55) V(56) V(57) V(58) V(59)
    V(60) V(61) V(62) V(63) V(64) V(65) V(66) V(67) V(68) V(69)
    V(70) V(71) V(72) V(73) V(74) V(75) V(76) V(77) V(78)
#undef V
    virtual void m79(void *);
};

struct Atk_800A2F94 { s32 w[4]; };
struct Obj_800A2F94 { u8 pad[0x3F0]; s32 f3F0[4]; };

typedef s32 M2C_UNK;
struct V_800A1FEC { f32 x, y, z; };

struct Obj_800A1FEC {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x38 - 0x34];
    V_800A1FEC pos;
    u8 pad44[0xB8 - 0x44];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x2A8 - 0xC4];
    u8 *target;
    u8 pad2AC[0x338 - 0x2AC];
    u16 f338;
    u8 pad33A[0x37C - 0x33A];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 f388;
    u8 pad38C[0x394 - 0x38C];
    f32 f394;
    u8 pad398[0x39A - 0x398];
    s16 timer;
    u8 pad39C[0x3B0 - 0x39C];
    s32 count;
    V_800A1FEC f3B4;
    V_800A1FEC f3C0[4];
    void *parts[4];
};

typedef struct Obj_800A1814 Obj_800A1814;
struct Sub_800A2390 { u8 pad[0x18]; u32 f18; };

struct P_800A2390 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x60 - 0x34];
    s32 f60;
    s32 f64;
    u8 pad68[0xA4 - 0x68];
    Sub_800A2390 *fA4;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0x308 - 0xBA];
    f32 f308;
    f32 f30C;
    f32 f310;
    u8 pad314[0x37C - 0x314];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 f388;
    u8 pad38C[0x398 - 0x38C];
    s16 f398;
    u8 pad39A[0x39E - 0x39A];
    s16 f39E;
    f32 f3A0;
    f32 f3A4;
    s32 f3A8;
    s32 f3AC;
};

extern "C" {
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK obj_clearFlags30(void *, s32);
void set_hidden_flag__10TObjPlayerFPv(void *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
extern const f32 lbl_805D9984;
void TObjPlayer__sub_800A16C4(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK obj_clearFlags30(void *, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK spawn_particle_effect(void *, int);
s32 TObjPlayer__sub_800A3210(s32 i, s32 _w1, s32 _w2);
int is_flag_set_388_bit26__10TObjPlayerFPv(void* p);
u8 *TObjPlayer__sub_800A34E8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
void *TObjPlayer__sub_800A4204(void *, void *, void *, void *, s32);
void find_target_in_range__10TObjPlayerFPvf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_sound_effect(int, void *, int, int);
void * __nw__7TObjectFUl(int);
extern const f32 lbl_805D9984;
extern const f32 lbl_805D9994;
extern const f32 lbl_805D99AC;
extern const f32 lbl_805D99B0;
s32 TObjPlayer__sub_800A1FEC(void *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK obj_clearFlags30(void *, s32);
void enemy_set_heading_velocity(void *, f32, s32);
void step_along_ground__10TObjPlayerFPv(u8 *arg0);
f32 TObjPlayer__sub_800A3200(s32 arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
extern s32 actor_frame_tick;
extern const f32 lbl_805D9984;
extern const f32 lbl_805D99B4;
extern const f32 lbl_805D99B8;
extern const f32 lbl_805D99BC;
extern const f32 lbl_805D99C4;
s32 TObjPlayer__sub_800A2390(void *arg0_);
}

extern "C" {

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

typedef struct Obj_800A0EDC {
    u8 pad0[0x30];
    s32 flags;
    u8 pad34[0x38 - 0x34];
    u8 pos[0x2FC - 0x38];
    u8 home[0x374 - 0x2FC];
    s32 f374;
    u8 pad378[0x37C - 0x378];
    s32 count;
    s32 sel;
    u16 ids[16];
    s32 f3A4;
} Obj_800A0EDC;

typedef struct Vec_800A12C0 {
    f32 x, y, z;
} Vec_800A12C0;

typedef struct Pair_800A12C0 {
    Vec_800A12C0 dest;
    Vec_800A12C0 pos;
} Pair_800A12C0;

typedef struct Obj_800A12C0 {
    u8 pad0[0x30];
    s32 flags30;
    u8 pad34[0x38 - 0x34];
    Vec_800A12C0 pos;
    u8 pad44[0x50 - 0x44];
    Vec_800A12C0 dest;
    u8 pad5C[0xB8 - 0x5C];
    s16 fB8;
    u8 padBA[0x37C - 0xBA];
    s32 state;
    u8 pad380[0x388 - 0x380];
    s32 flags388;
} Obj_800A12C0;

struct G_800A3210 { u8 pad[0x18]; s32 arr[1]; };

struct Obj_800A2EDC { u8 pad0[0x18]; void *vt; u8 pad1c[0x3F0 - 0x1C]; void *items[4]; void *p400; void *p404; };

typedef struct Vec_800A159C {
    f32 x, y, z;
} Vec_800A159C;

typedef struct Obj_800A159C {
    u8 pad0[0x38];
    Vec_800A159C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    s32 f64;
    u8 pad68[0x326 - 0x68];
    s16 f326;
    u8 pad328[0x38C - 0x328];
    f32 f38C;
    f32 f390;
    f32 f394;
    u8 pad398[0x3B4 - 0x398];
    u8 mtx3B4[0xC];
    Vec_800A159C v3C0[4];
} Obj_800A159C;

typedef struct Vec_800A1814 {
    f32 x, y, z;
} Vec_800A1814;

typedef struct XZ_800A1814 {
    f32 x, z;
} XZ_800A1814;

typedef struct Ofs_800A1814 {
    XZ_800A1814 v[4];
} Ofs_800A1814;

typedef struct Obj_800A1814 {
    u8 pad0[0x38];
    Vec_800A1814 pos;
    u8 pad44[0x38C - 0x44];
    f32 f38C;
} Obj_800A1814;

struct VBase_18_4a35f9 { char pad[0x18]; };

struct VObj_18_4a35f9 : VBase_18_4a35f9 {
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
    virtual M2C_UNK m21(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK);
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
};

struct Pair_800A3290 { s32 a; f32 b; };

struct Sub_800A3290 { u8 pad0[0x18]; u32 flags; };

struct Obj_800A3290 { u8 pad0[0xA4]; Sub_800A3290 *sub; };

struct Vec_800A1D70 { f32 x, y, z; };

struct Vec_800A34E8 { f32 x, y, z; };

struct Raw_800A10A0 { u8 b[12]; };

M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 update_movement_status__10TObjPlayerFv();
s32 update_action_hold_status__10TObjPlayerFv();
M2C_UNK move_with_wall_slide(void *);
void calc_velocity_toward_destination(void *, Vec_800A12C0, Vec_800A12C0, f32);
s32 check_path_obstructed(void *, Vec_800A1D70 *);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_is_hit_receivable();
s32 obj_testFlags30(s32, s32);
s16 obj_getField1c(void *, f32);
M2C_UNK obj_clearFlags30(void *, s32);
f32 atan2_float(f32, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
int TObjFish__sub_8001EDB0(void*, void*);
int get_bml_model(void*);
void TLobby__sub_8001FE7C(void*, int);
int reset_photon_effect__12TBoss3VoloptFPv(void *);
VObj_18_4a35f9 * get_battle_param__10TObjPlayerFi(s32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);
u8 * csnVector(void *, Vec_800A34E8 *, s32);
s32 spawn_particle_effect_with_rotation(void *, void *, int, int);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
void * TObjPlayer__sub_800A05B8(void *, s16);
M2C_UNK trigger_targets_action__10TObjPlayerFPv();
u8 * TObjEneDarkGunCenter__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void clear_lappy_flag_set_param(u8 *arg0);
void fn_800A0FDC(u8 *arg0);
void TObjPlayer__sub_800A100C(s32 _w0);
s32 update_movement_and_notify__10TObjPlayerFi(s32 arg0);
s32 update_action_hold_and_notify__10TObjPlayerFi(s32 arg0);
void init_scale_global__10TObjPlayerFv(void);
void update_move_to_destination__10TObjPlayerFPv(Obj_800A12C0 *o);
s32 update_hide_sequence__10TObjPlayerFPv(u8 *arg0);
void trigger_action_if_not_flagged__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_800A1520(u8 *arg0);
void TObjPlayer__sub_800A159C(Obj_800A159C *o);
void TObjPlayer__sub_800A17B4(u8 *arg0);
int TObjPlayer__sub_800A1808(void* p);
void spawn_hamon_effects__10TObjPlayerFPviif(Obj_800A1814 *o, s32 arg1, s32 arg2, f32 farg0);
void render_shadow__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_800A1974(void);
s32 TObjPlayer__sub_800A1C84(void *);
void TObjPlayer__sub_800A1D70(u8 *arg0);
void handle_status_326__10TObjPlayerFPv(void *arg0);
void set_hidden_flag__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_800A27CC(void *);
void apply_fall_damage_flag__10TObjPlayerFi(s32 arg0);
void * create_instance__10TObjPlayerFPv(void *arg0);
void cleanup_effects__10TObjPlayerFv(void);
Obj_800A2EDC * TObjPlayer__sub_800A2EDC(Obj_800A2EDC *arg0, s16 arg1);
u8 *TObjPlayer__sub_800A2F94(u8 *, s32, u8 *);
void TObjPlayer__sub_800A31F4(void);
void TObjPlayer__sub_800A31F8(void);
void TObjPlayer__sub_800A31FC(void);
f32 TObjPlayer__sub_800A3200(s32 arg0);
s32 TObjPlayer__sub_800A3210(s32 i, s32 _w1, s32 _w2);
int is_flag_set_388_bit26__10TObjPlayerFPv(void* p);
void set_fields_24_34_from_global__10TObjPlayerFPvPv(void* a0, void* a1);
void clear_counter__10TObjPlayerFPv(void* p);
void set_cancel_flag__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_800A3290(Obj_800A3290 *self, s32 id);
void update_projectile_lifetime__10TObjPlayerFPv(u8 *arg0);
void * TObjPlayer__sub_800A3478(void *arg0, s16 arg1);
u8 * TObjPlayer__sub_800A34E8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
M2C_UNK TEneEffHamon__sub_800A380C();
u8 * __ct__12TEneEffHamonFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
M2C_UNK reset_effect_count__10TObjPlayerFv();
void __dt__15TObjEnemyCustomFv(void *, int);
void set_param__12TObjEneLappyFPvi(void *, s32);
u32 get_enemy_entity(u16);
s32 initialize__9TObjEnemyFPv(void *);
M2C_UNK scale_velocity__19TObjGyaranzoMissileFPvf(void *, f32);
f32 horizontal_distance__10TObjPlayerFPvPv(void *, int);
f32 xz_distance_squared(void *, void *);
s32 angle_diff_s16(s32, s32);
M2C_UNK advance_animation_playback(void *);
Obj_800A3290 * find_entity_by_id(s32);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK init_collision_body_parts(void *, void *, int);
s32 project_actor_to_ground(void *, void *, int);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK construct_collider_proxy__10TObjPlayerFPv(void *, void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
void free_if_valid__10TObjPlayerFi(void*);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 rand();
M2C_UNK vec3_add_to(void *, void *);
s32 matrix_mult_vec(int, void *, void *);
f32 vector_length(void *);
void rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(s32);

extern M2C_UNK __vt__20TObjEneDarkGunCenter[];
extern Ofs_800A1814 lbl_8043A684;
extern Vec_800A159C lbl_8043A6A4;
extern const f64 lbl_8043A6B0[];
extern const f64 lbl_8043A6C0[];
extern Pair_800A3290 lbl_8043A6E8[];
extern const f64 lbl_8043A6F8[];
extern M2C_UNK lbl_80490998[];

void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void obj_setFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, s32);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void TObjEnemyCustom__ct(void *, s32, void *);
void initialize_enemy_photon_effect(void *);
void update_prev_position__10TObjPlayerFPv(void *);
void bind_enemy_combat_stats(void *, s32, s32, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void spawn_npc_enemy__6TLobbyFsiiiff(s16, s32, s32, s32, f32, f32);
extern Atk_800A2F94 lbl_8043A658;
extern s32 lbl_805D29D0;
extern s32 lbl_805D4FF8[1];
extern s32 lbl_805D4FFC[1];
extern s32 lbl_805D5000[1];

extern "C" {
void TBoss3Volopt__sub_800C762C();
}
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjEnemyCustom__sub_800C789C();
}
extern "C" {
void TObjPlayer__sub_8000FF3C();
}
extern "C" {
void TObjPlayer__sub_80010A80();
}
extern "C" {
void consume_timer_field__10TObjPlayerFPvi();
}
extern "C" {
void TObjPlayer__sub_80014830();
}
extern "C" {
void TObjPlayer__sub_80014838();
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
void TObjPlayer__sub_800A1978();
}
extern "C" {
void TObjPlayer__sub_800A28A4();
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
void call_player_preserving_field__15TObjEnemyCustomFPv();
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
void clear_lobby_object_state();
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
void is_target_in_attack_range__10TObjPlayerFv();
}
extern "C" {
extern u8 lbl_8043A498[];
}
extern "C" {
extern u8 lbl_8043A4B0[];
}
extern "C" {
extern u8 lbl_8043A4C8[];
}
extern "C" {
extern u8 lbl_8043A4E0[];
}
extern "C" {
extern u8 lbl_8043A4F0[];
}
extern "C" {
extern u8 lbl_8043A508[];
}
extern "C" {
extern u8 lbl_8043A520[];
}
extern "C" {
extern u8 lbl_8043A538[];
}
extern "C" {
extern u8 lbl_8043A550[];
}
extern "C" {
extern u8 lbl_8043A564[];
}
extern "C" {
extern u8 lbl_8043A578[];
}
extern "C" {
extern u8 lbl_8043A590[];
}
extern "C" {
extern u8 lbl_8043A5A8[];
}
extern "C" {
extern u8 lbl_8043A5C0[];
}
extern "C" {
extern u8 lbl_8043A5D8[];
}
extern "C" {
extern u8 lbl_8043A5EC[];
}
extern "C" {
extern u8 lbl_8043A600[];
}
extern "C" {
extern u8 lbl_8043A618[];
}
extern "C" {
extern u8 lbl_8043A62C[];
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
void update_gigue__15TObjEnemyCustomFPv();
}
extern "C" {
void update_object_view_visibility();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
void *lbl_80490608[5] = {
    (void *)&lbl_8043A498, (void *)&lbl_8043A4B0, (void *)&lbl_8043A4C8, (void *)&lbl_8043A4E0,
    (void *)0x0,
};
void *lbl_8049061C[15] = {
    (void *)&lbl_8043A4F0, (void *)&lbl_8043A508, (void *)&lbl_8043A520, (void *)&lbl_8043A538,
    (void *)&lbl_8043A550, (void *)&lbl_8043A564, (void *)&lbl_8043A578, (void *)&lbl_8043A590,
    (void *)&lbl_8043A5A8, (void *)&lbl_8043A5C0, (void *)&lbl_8043A5D8, (void *)&lbl_8043A5EC,
    (void *)&lbl_8043A600, (void *)&lbl_8043A618, (void *)0x0,
};
void *lbl_80490658[4] = {
    (void *)&lbl_8043A62C, (void *)&lbl_80490608, (void *)&lbl_8049061C, (void *)0x4000e,
};
void *lbl_80490668[56] = {
    (void *)0x10000, (void *)0xd, (void *)0x3f800000, (void *)0x0,
    (void *)0x20000, (void *)0xb, (void *)0x3f4ccccd, (void *)0x1,
    (void *)0x20000, (void *)0x5, (void *)0x3f19999a, (void *)0x1,
    (void *)0x20004, (void *)0x0, (void *)0x3f4ccccd, (void *)0x4,
    (void *)0x10004, (void *)0x1, (void *)0x3f800000, (void *)0x4,
    (void *)0x20000, (void *)0x3, (void *)0x3f333333, (void *)0x8,
    (void *)0x20000, (void *)0x2, (void *)0x3f333333, (void *)0x8,
    (void *)0x30007, (void *)0x4, (void *)0x3f333333, (void *)0x10,
    (void *)0x2000b, (void *)0xa, (void *)0x3f333333, (void *)0x0,
    (void *)0x2000c, (void *)0x6, (void *)0x3f19999a, (void *)0x8,
    (void *)0x3000a, (void *)0x7, (void *)0x3f000000, (void *)0x10,
    (void *)0x1000b, (void *)0x8, (void *)0x3f333333, (void *)0x0,
    (void *)0x20000, (void *)0x9, (void *)0x3f19999a, (void *)0x0,
    (void *)0x20000, (void *)0xc, (void *)0x3f333333, (void *)0x4,
};
void *lbl_80490748[14] = {
    (void *)0x42a00000, (void *)0x3e8e38e3, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0, (void *)0x42a00000,
    (void *)0x3e8e38e3, (void *)0x400, (void *)0x1e0000, (void *)0x0,
    (void *)0x1, (void *)0x0,
};
void *lbl_80490780[11] = {
    (void *)0x0, (void *)0x40600000, (void *)0x0, (void *)0x41200000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804907AC[4] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
Vec_800A159C lbl_804907BC[4] = {
    {0.0f, 10.0f, 2.0f}, {0.0f, 10.0f, -2.0f}, {2.0f, 10.0f, 0.0f}, {-2.0f, 10.0f, 0.0f},
};
void *lbl_804907EC[83] = {
    (void *)0x0, (void *)0x0, (void *)&TObjPlayer__sub_800A2EDC, (void *)&TObjPlayer__sub_800A28A4,
    (void *)&TObjPlayer__sub_800A1978, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjPlayer__sub_800A31F4, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_and_notify__10TObjPlayerFi, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_and_notify__10TObjPlayerFi,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_800A31F8, (void *)&TObjPlayer__sub_800A31FC,
    (void *)&update_gigue__15TObjEnemyCustomFPv, (void *)&TObjPlayer__sub_800A17B4, (void *)&handle_status_326__10TObjPlayerFPv, (void *)&TObjEnemyCustom__sub_800C789C,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TBoss3Volopt__sub_800C762C, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state,
};

extern M2C_UNK lbl_804909C4[];
extern u8 identity_matrix[];
extern s32 lbl_805D29C8;
extern s32 lbl_805D5004;
extern f32 lbl_805D5008;
extern u32 player_effect_bml_resource;
extern u32 TObjPlayer__effect_resource;
extern s32 lbl_805D5014;
extern s32 lbl_805D5018;
extern s32 TObjPlayer__shadow_chunk_object;
extern const f32 lbl_805D9978;
extern const f32 lbl_805D997C;
extern const f32 lbl_805D9980;
extern const f32 lbl_805D9984;
extern const f32 lbl_805D9988;
extern const f32 lbl_805D998C;
extern const f32 lbl_805D9990;
extern const f32 lbl_805D9994;
extern const f32 lbl_805D9998;
extern const f32 lbl_805D99D0;
extern const f32 lbl_805D99D4;
extern const f32 lbl_805D99D8;
extern const f32 lbl_805D99DC;
extern void *tl_04;

extern "C" {
void spawn_hamon_effects__10TObjPlayerFPviif(Obj_800A1814 *o, s32 arg1, s32 arg2, f32 farg0);
}

u8 *TObjEneDarkGunCenter__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    Obj_800A0EDC *o;
    s32 i;
    initialize__9TObjEnemyFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjEneDarkGunCenter;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D29C8;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    o = (Obj_800A0EDC *)arg0;
    VecCopy__FP3VecPC3Vec(o->home, o->pos);
    o->flags = o->flags | 0x06000000 | 0x800;
    o->f374 = 0;
    set_param__12TObjEneLappyFPvi(arg0, 0x22);
    o->sel = -1;
    o->count = 0;
    for (i = 0; i < 16; i++) {
        o->ids[i] = 0xFFFF;
    }
    o->f3A4 = -1;
    return arg0;
}

void clear_lappy_flag_set_param(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFBFFFFFF);
    set_param__12TObjEneLappyFPvi(arg0, 0x22);
}

void fn_800A0FDC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x04000000);
    set_param__12TObjEneLappyFPvi(arg0, 0x23);
}

void TObjPlayer__sub_800A100C(s32 _w0) {  }

s32 update_movement_and_notify__10TObjPlayerFi(s32 arg0) {
    if (update_movement_status__10TObjPlayerFv() != 0) {
        TObjPlayer__sub_800A100C((s32)(arg0));
        return 1;
    }
    return 0;
}

s32 update_action_hold_and_notify__10TObjPlayerFi(s32 arg0) {
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        TObjPlayer__sub_800A100C(arg0);
        return 1;
    }
    return 0;
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
void step_along_ground__10TObjPlayerFPv(u8 *arg0) {
    Raw_800A10A0 pos;
    Raw_800A10A0 vel;
    Raw_800A10A0 dir;
    Raw_800A10A0 v;
    s32 ang;
    s32 sign;
    s32 b;
    s32 a;
    s32 i;
    u8 *hit;
    u8 *q;

    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(&pos, arg0 + 0x2FC);
    vel = *(Raw_800A10A0 *)(arg0 + 0x308);
    ((void (*)(void *, f32))scale_velocity__19TObjGyaranzoMissileFPvf)(&vel, lbl_805D9978 + ((f32 (*)(int))TObjPlayer__sub_800A3200)(0));
    ((void (*)(void *, void *))vec3_add_to)(&pos, &vel);
    hit = ((u8 * (*)(void *, void *, s32))csnVector)(arg0 + 0x2FC, &pos, -1);
    if (hit != NULL) {
        a = lbl_8043A6B0[0] * ((f64 (*)(f32, f32))atan2_float)(*(f32 *)(arg0 + 0x308), *(f32 *)(arg0 + 0x310));
        q = *(u8 **)(hit + 4);
        b = lbl_8043A6B0[0] * ((f64 (*)(f32, f32))atan2_float)(*(f32 *)(q + 0xC), *(f32 *)(q + 0x14));
        *(s32 *)(arg0 + 0x3A8) = b - (0x8000 - angle_diff_s16(a, b));
    }
    if (lbl_805D997C * (f32)rand() < lbl_805D9980) {
        sign = -1;
    } else {
        sign = 1;
    }
    for (i = 0, ang = 0; i < 15; i++, ang += 0x1000) {
        if (i == 0) {
            VecCopy__FP3VecPC3Vec(&dir, arg0 + 0x308);
        } else {
            ((void (*)(void *))push_matrix_from)(identity_matrix);
            ((void (*)(int, s32))rotate_matrix_y)(0, sign * ang);
            rotate_vector_by_matrix(0, arg0 + 0x308, &dir);
            ((void (*)(void))pop_matrix)();
        }
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
        ((void (*)(void *, void *))vec3_add_to)(&v, &dir);
        if (project_actor_to_ground(arg0, &v, 0) == 1) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &v);
            VecCopy__FP3VecPC3Vec(arg0 + 0x308, arg0 + 0x38);
            ((void (*)(void *, void *))subtract_vector)(arg0 + 0x308, arg0 + 0x44);
            return;
        }
    }
}
extern int fold_flush_0;
#pragma pop

void init_scale_global__10TObjPlayerFv(void) {
    lbl_805D5008 = ((f32 (*)(int))TObjPlayer__sub_800A3200)((int) (3));
}

void update_move_to_destination__10TObjPlayerFPv(Obj_800A12C0 *o) {
    switch (o->state) {
    case -1:
        break;
    case 0:
        o->flags388 &= ~0x200000;
        o->flags388 |= 0x480000;
        o->fB8 = 0;
        o->state = 1;
    case 1: {
        advance_animation_playback(o);
        if (!(o->flags30 & 0x800000)) {
            ((M2C_UNK (*)(void *, int, f32))apply_actor_gravity)(o, 0, lbl_805D9984);
        }
        calc_velocity_toward_destination(o, o->pos, o->dest, ((f32 (*)(int))TObjPlayer__sub_800A3200)(0));
        move_with_wall_slide(o);
        if (xz_distance_squared(&o->pos, &o->dest) <= lbl_805D9988) {
            o->flags388 &= ~0x80000;
            ((void (*)(void *))apply_fall_damage_flag__10TObjPlayerFi)(o);
        }
        break;
    }
    }
}

s32 update_hide_sequence__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        obj_clearFlags30(arg0, 0x240300);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x800000);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        temp_r4 = temp_r5 & 0xFFB7FFFF;
        M2C_FIELD(arg0, s32 *, 0x388) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        M2C_FIELD(arg0, s16 *, 0x39C) = TObjPlayer__sub_800A3210((s32)(1), (s32)(temp_r4), (s32)(temp_r5));
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity(arg0, 0, lbl_805D9984);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x39C) - 1;
        M2C_FIELD(arg0, s16 *, 0x39C) = (s16) temp_r3;
        if ((s16) temp_r3 <= 0) {
            set_hidden_flag__10TObjPlayerFPv((void *)(arg0));
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFF7FFFFF);
        break;
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    submit_cursor_candidate(arg0, -1);
}

void trigger_action_if_not_flagged__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x800000)) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 6);
    }
}

void TObjPlayer__sub_800A1520(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((0, (s8 *) arg0)) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        TObjPlayer__sub_800A27CC((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_800A2390((void *)(arg0));
        return;
      case 2:
        TObjPlayer__sub_800A1FEC((void *)((void *) arg0));
        return;
      case 4:
        TObjPlayer__sub_800A1D70((u8 *)((void *) arg0));
        return;
      case 3:
        TObjPlayer__sub_800A16C4((u8 *)((void *) arg0));
        return;
      case 5:
        TObjPlayer__sub_800A1C84((void *) arg0);
        return;
      case 6:
        update_hide_sequence__10TObjPlayerFPv((u8 *)((void *) arg0));
        return;
      case 8:
        ((s32 (*)(void *))update_move_to_destination__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void TObjPlayer__sub_800A159C(Obj_800A159C *o) {
    f32 v;
    f32 lo;
    s32 i;
    o->f394 += lbl_805D998C;
    o->f390 += o->f394;
    v = o->f390;
    o->f390 = (v < lbl_805D9984) ? lbl_805D9984 : ((v < lbl_805D9990) ? v : lbl_805D9990);
    push_matrix_from(identity_matrix);
    post_translate_matrix((s32)&o->pos);
    rotate_matrix_z(0, o->f64);
    rotate_matrix_y(0, o->f60);
    Vec_800A159C t = lbl_8043A6A4;
    lo = lbl_805D9994 + o->f390;
    t.y = lo + o->f38C;
    matrix_mult_vec(0, &t, o->mtx3B4);
    if (o->f326 == 2) {
        for (i = 0; i < 4; i++) {
            matrix_mult_vec(0, &lbl_804907BC[i], &o->v3C0[i]);
        }
    }
    pop_matrix();
}

void TObjPlayer__sub_800A16C4(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
        obj_clearFlags30((void *) (arg0), (int) (0x100));
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9FFFFF);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        goto case1;
    case 1:
    case1:
        advance_animation_playback((void *) (arg0));
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity((void *)((void *) (arg0)), (M2C_UNK)((int) (0)), (f32) (lbl_805D9984));
        }
        update_collisions__10TObjPlayerFPv((void *) (arg0));
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
        if (temp_r4 < 0) {
            M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            set_hidden_flag__10TObjPlayerFPv((void *) (arg0));
        }
        break;
    case -1:
        break;
    }
    minimap_render_dot((void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (-0x5DB4)), (M2C_UNK)((int) (1)), (M2C_UNK)((int) (0)));
}

void TObjPlayer__sub_800A17B4(u8 *arg0) {
    obj_clearFlags30((void *)(arg0), (s32)(0x100U));
    spawn_particle_effect((void *) (arg0 + 0x2FC), (int) (0xD7));
    play_sound_effect((int) (0x4003B22D), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

int TObjPlayer__sub_800A1808(void* p) { return (*(u32*)((char*)p + 0x30) >> 23) & 0x1; }

#pragma push
#pragma opt_loop_invariants off
void spawn_hamon_effects__10TObjPlayerFPviif(Obj_800A1814 *o, s32 arg1, s32 arg2, f32 farg0) {
    Vec_800A1814 p;
    Ofs_800A1814 ofs = lbl_8043A684;
    s32 i;
    void *e;
    p.y = lbl_805D9998 + (o->pos.y + o->f38C);
    for (i = 0; i < 4; i++) {
        p.x = o->pos.x + ofs.v[i].x;
        p.z = o->pos.z + ofs.v[i].z;
        e = __nw__7TObjectFUl(0x60);
        if (e != NULL) {
            __ct__12TEneEffHamonFv((u8 *)e, (s32)&p, arg1, arg2, farg0);
        }
    }
}
extern int fold_flush_1;
#pragma pop

void render_shadow__10TObjPlayerFi(s32 arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        if (is_flag_set_388_bit26__10TObjPlayerFPv((void*)((s32)(arg0))) == 0) {
            set_global_param__8TObjFishFi(lbl_805D5014);
        } else {
            set_global_param__8TObjFishFi(lbl_805D5018);
        }
        push_matrix();
        post_translate_matrix(arg0 + 0x3B4);
        draw_chunk_object(TObjPlayer__shadow_chunk_object);
        pop_matrix();
    }
}

void TObjPlayer__sub_800A1974(void) {  }

void TObjPlayer__sub_800A1D70(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r4;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        if (M2C_FIELD(arg0, s32 *, 0x388) & 0x800000) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        }
        temp_f31 = vector_length((void *) (arg0 + 0x308));
        temp_f1 = TObjPlayer__sub_800A3200((int) (2));
        if (temp_f31 > temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x308) = (f32) ((M2C_FIELD(arg0, f32 *, 0x308) * temp_f1) / temp_f31);
            M2C_FIELD(arg0, f32 *, 0x310) = (f32) ((M2C_FIELD(arg0, f32 *, 0x310) * temp_f1) / temp_f31);
        }
        if (M2C_FIELD(arg0, s32 *, 0x388) & 0x400000) {
            spawn_particle_effect((void *) (arg0 + 0x2FC), (int) (0xD7));
        }
        M2C_FIELD(arg0, s16 *, 0x39E) = 0;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) ((f64) M2C_FIELD(arg0, f32 *, 0x308) * lbl_8043A6C0[0]);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) ((f64) M2C_FIELD(arg0, f32 *, 0x310) * lbl_8043A6C0[0]);
        advance_animation_playback((void *) (arg0));
        {
        Vec_800A1D70 v = *(Vec_800A1D70 *)(arg0 + 0x2FC);
        v.x = v.x + M2C_FIELD(arg0, f32 *, 0x308);
        v.z = v.z + M2C_FIELD(arg0, f32 *, 0x310);
        if (check_path_obstructed((void *) (arg0), &v) == 0) {
            move_with_wall_slide((void *) (arg0));
        } else {
            M2C_FIELD(arg0, f32 *, 0x310) = (f32) lbl_805D9984;
            M2C_FIELD(arg0, f32 *, 0x308) = (f32) lbl_805D9984;
        }
        }
        apply_actor_gravity((void *)((void *) (arg0)), (M2C_UNK)((int) (0)), (f32) (lbl_805D9984));
        update_collisions__10TObjPlayerFPv((void *) (arg0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            obj_clearFlags30((void *) (arg0), (int) (0x40300));
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFF7FFFFE);
            M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
            set_hidden_flag__10TObjPlayerFPv((void *) (arg0));
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        break;
    }
    minimap_render_dot((void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (-0x5DB4)), (M2C_UNK)((int) (1)), (M2C_UNK)((int) (0)));
    submit_cursor_candidate((void *)((void *) (arg0)), (M2C_UNK)((int) (-1)));
}

void handle_status_326__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 4) {
        if ((temp_r0 == 2) && (is_flag_set_388_bit26__10TObjPlayerFPv((void*)((s32)(arg0))) != 0) && (get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x428)) != 0U)) {
            trigger_targets_action__10TObjPlayerFPv();
            return;
        }
        set_state__15TObjEneMe1GiGueFPvi(arg0, 4);
    }
}

#define self ((Obj_800A1FEC *)arg0)
#pragma push
#pragma opt_loop_invariants off
s32 TObjPlayer__sub_800A1FEC(void *arg0) {
    switch (self->state) {
    case 0:
        self->f30 |= 0x200000;
        self->f388 &= 0xFFB7FFFF;
        self->count = 0;
        self->fB8 = 3;
        play_sound_effect(0x4003B52F, &self->pos, 0, 0);
        play_sound_effect(0x4003AD29, (u8 *)arg0 + 0x38, 0, 0);
        self->state = 1;
        break;
    case 1:
        if (self->fC0 >= lbl_805D9994) {
            self->f394 = lbl_805D99AC;
        }
        if (self->fB8 != 4) break;
        self->f388 |= 0x200000;
        self->timer = ((s32 (*)(s32))TObjPlayer__sub_800A3210)(0);
        self->state = 2;
        play_sound_effect(0x4003B52A, &self->pos, 0, 0);
        {
            s32 i;
            for (i = 0; i < 4; i++) {
                void *p = __nw__7TObjectFUl(0x348);
                if (p != NULL) {
                    p = TObjPlayer__sub_800A4204(p, self, &self->f3B4, &self->f3C0[i], 2);
                }
                self->parts[i] = p;
            }
        }
        break;
    case 2:
        self->f394 = lbl_805D99AC;
        if (--self->timer > 0) break;
        self->timer = 4;
        self->f388 &= ~0x200000;
        {
            s32 i;
            for (i = 0; i < 4; i++) {
                void *q = self->parts[i];
                if (q != NULL) {
                    queue_destruction__7TObjectFv(q);
                    self->parts[i] = NULL;
                }
            }
        }
        self->state = 3;
        if (is_flag_set_388_bit26__10TObjPlayerFPv(self) != 0) {
            spawn_particle_effect(&self->f3B4, 0xD8);
        } else {
            spawn_particle_effect(&self->f3B4, 0xD2);
        }
        break;
    case 3:
        self->f394 = lbl_805D99AC;
        if (--self->timer > 0) break;
        self->count++;
        self->timer = 15;
        self->state = 4;
        find_target_in_range__10TObjPlayerFPvf(self, lbl_805D99B0);
        if (self->f338 == 0xFFFF) break;
        {
            u8 *p = (u8 *)__nw__7TObjectFUl(0xD4);
            if (p != NULL) {
                TObjPlayer__sub_800A34E8(p, (u8 *)self, (s32)&self->f3B4, (s32)(self->target + 0x2FC));
            }
        }
        play_sound_effect(0x40039E2B, &self->pos, 0, 0);
        break;
    case 4:
        self->f394 = lbl_805D99AC;
        if (--self->timer > 0) break;
        self->state = 5;
        self->fB8 = 13;
        self->f394 = lbl_805D9984;
        break;
    case 5:
        if (self->fB8 != 0) break;
        if (self->count < 2) {
            self->state = 1;
            self->fB8 = 3;
            break;
        }
        update_if_active__15TObjEneMe1GiGueFPv(self, 1);
        break;
    case -1:
        self->f388 &= ~0x200000;
        self->f30 &= ~0x200000;
        {
            s32 i;
            for (i = 0; i < 4; i++) {
                void *q = self->parts[i];
                if (q != NULL) {
                    queue_destruction__7TObjectFv(q);
                    self->parts[i] = NULL;
                }
            }
        }
        break;
    }
    obj_clearFlags30(self, 0x40000);
    advance_animation_playback(self);
    apply_actor_gravity(self, 0, lbl_805D9984);
    update_collisions__10TObjPlayerFPv(self);
    minimap_render_dot(&self->pos, -23988, 1, 0);
    submit_cursor_candidate(self, -1);
}
#pragma pop
#undef self

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline f32 fmax_800A2390(f32 a, f32 b) {
    if (a > b) {
        return a;
    }
    return b;
}
s32 TObjPlayer__sub_800A2390(void *arg0_) {
    P_800A2390 *arg0 = (P_800A2390 *)arg0_;
    obj_clearFlags30(arg0, 0x40000);
    switch (arg0->state) {
    case 0:
        arg0->f388 &= ~0x00200000;
        arg0->f388 |= 0x400000;
        if (arg0->f388 & 0x10000) {
            arg0->f388 &= ~0x30000;
            arg0->f310 = lbl_805D9984;
            arg0->f30C = lbl_805D9984;
            arg0->f308 = lbl_805D9984;
            arg0->state = 1;
        } else {
            arg0->f30 &= 0xFBFBFFFF;
            arg0->state = 3;
        }
        break;
    case 1:
        apply_actor_gravity(arg0, 0, lbl_805D9984);
        arg0->f64 -= 0x1000;
        if (arg0->f64 < 0) {
            arg0->f64 = 0;
        }
        if (arg0->f30 & 0x800000) {
            arg0->f64 = 0;
            arg0->fB8 = 2;
            arg0->state = 2;
            arg0->f30 &= 0xFBFBFFFF;
            arg0->fA4->f18 &= ~4;
            arg0->fA4->f18 |= 2;
            spawn_hamon_effects__10TObjPlayerFPviif((Obj_800A1814 *)arg0, 0xF, 0, lbl_805D99B4);
            spawn_hamon_effects__10TObjPlayerFPviif((Obj_800A1814 *)arg0, 0xF, 3, lbl_805D99B8);
            spawn_hamon_effects__10TObjPlayerFPviif((Obj_800A1814 *)arg0, 0xF, 6, lbl_805D99BC);
        }
        break;
    case 2:
        apply_actor_gravity(arg0, 0, lbl_805D9984);
        if (arg0->fB8 == 0) {
            arg0->state = 3;
        }
        break;
    case 3:
        arg0->f64 = 0;
        arg0->fA4->f18 &= ~4;
        arg0->fA4->f18 |= 2;
        advance_animation_playback(arg0);
        if (arg0->f388 & 0x20000) {
            arg0->f388 &= ~0x20000;
            arg0->f388 |= 0x80000;
            if (arg0->f388 & 0x40000) {
                arg0->f388 &= ~0x40000;
                arg0->state = 4;
            } else {
                arg0->f398 = 0;
                arg0->state = 6;
            }
        } else {
            arg0->f388 &= ~0x80000;
        }
        break;
    case 6:
        arg0->f60 += 0x555;
        arg0->f398++;
        if (arg0->f398 >= 4) {
            arg0->state = 4;
        }
        break;
    case 4:
        arg0->f3A8 = arg0->f60;
        arg0->f3A0 = TObjPlayer__sub_800A3200(0);
        arg0->f3A4 = lbl_805D9984;
        arg0->f3AC = 0;
        arg0->f39E = 0;
        arg0->fB8 = 1;
        arg0->state = 5;
        arg0->f64 = 0;
        arg0->fA4->f18 &= ~4;
        arg0->fA4->f18 |= 2;
    case 5:
        advance_animation_playback(arg0);
        enemy_set_heading_velocity(arg0, arg0->f3A0, arg0->f3A8);
        step_along_ground__10TObjPlayerFPv((u8 *)arg0);
        arg0->f3A4 += arg0->f3A0;
        arg0->f3A0 = fmax_800A2390(-0.2f + arg0->f3A0, 0.5f);
        if (arg0->f3A4 >= TObjPlayer__sub_800A3200(1)) {
            arg0->f388 &= ~0x80000;
            arg0->state = 3;
        }
        play_persistent_sound(0x4003AD28, arg0, (u8 *)arg0 + 0x38, 0, 0);
        if (arg0->f3AC > 0) {
            arg0->f3AC--;
            if (arg0->fA4->f18 & 0x300000) {
                arg0->f3A8 += 0x4000;
                arg0->f3AC = 5;
            }
        }
        if (!(actor_frame_tick & 2)) {
            spawn_hamon_effects__10TObjPlayerFPviif((Obj_800A1814 *)arg0, 0xF, 0, lbl_805D99C4);
        }
        apply_actor_gravity(arg0, 0, lbl_805D9984);
        break;
    case -1:
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
    minimap_render_dot((u8 *)arg0 + 0x38, -0x5DB4, 1, 0);
    return submit_cursor_candidate(arg0, -1);
}
#pragma pop

void set_hidden_flag__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800)) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x20000);
    }
}

void apply_fall_damage_flag__10TObjPlayerFi(s32 arg0) {
    M2C_UNK var_r4;
    if (((f32 (*)(s32, s32))xz_distance_squared)(arg0 + 0x38, arg0 + 0x50) > (*(f32 *)&lbl_805D9988)) {
        var_r4 = 8;
    } else {
        var_r4 = 0;
    }
    update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (M2C_UNK)(var_r4));
}

void *create_instance__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjPlayer__sub_800A2F94)(o, tl_04, arg0);
    }
    return o;
}

void cleanup_effects__10TObjPlayerFv(void) {
    if ((u32) player_effect_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)player_effect_bml_resource, 1);
        player_effect_bml_resource = 0U;
    }
    if ((u32) TObjPlayer__effect_resource != 0U) {
        free_if_valid__10TObjPlayerFi((void*)TObjPlayer__effect_resource);
        TObjPlayer__effect_resource = 0U;
    }
    reset_effect_count__10TObjPlayerFv();
    TEneEffHamon__sub_800A380C();
}

Obj_800A2EDC *TObjPlayer__sub_800A2EDC(Obj_800A2EDC *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = lbl_804907EC;
        free_collision_body_parts(arg0);
        for (i = 0; i < 4; i++) {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
            }
        }
        if (arg0->p400 != NULL) {
            queue_destruction__7TObjectFv(arg0->p400);
        }
        if (arg0->p404 != NULL) {
            queue_destruction__7TObjectFv(arg0->p404);
        }
        TObjPlayer__sub_800A05B8((u8 *)arg0 + 0x408, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define F(T, o) (*(T *)((u8 *)self + (o)))
#define G500C ((u8 *)player_effect_bml_resource)
u8 *TObjPlayer__sub_800A2F94(u8 *self, s32 arg1, u8 *arg2) {
    s32 i;

    TObjEnemyCustom__ct(self, arg1, arg2);
    F(void *, 0x18) = lbl_804907EC;
    init_vtable_and_field18__10TObjPlayerFPv(self + 0x408);
    F(s32, 0) = lbl_805D29D0;
    ((VObj_18_800A2F94 *)self)->m79(arg2);
    initialize_enemy_photon_effect(self);
    F(s32, 0x368) = 0;
    set_param__12TObjEneLappyFPvi(self, 0x22);
    add_flags_2e4__10TObjPlayerFPvUi(self, 8);
    F(s32, 0x36C) = *(s16 *)(arg2 + 0x3E);
    F(s16, 0x33A) = 0xF;
    F(s16, 0x33C) = F(s16, 0x33A);
    VecCopy__FP3VecPC3Vec(self + 0x44, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x50, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x290, self + 0x38);
    VecCopy__FP3VecPC3Vec(self + 0x29C, self + 0x38);
    set_fields_24_34_from_global__10TObjPlayerFPvPv(self, (void *)1);
    F(s32, 0xDC) = *(s32 *)(G500C + 0x430);
    F(void *, 0xD8) = lbl_80490668;
    set_field_d8__10TObjPlayerFPvi(self, F(s32, 0xD8));
    F(s16, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(self, F(s16, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(self, F(s16, 0xB8));
    init_collision_body_parts(self, lbl_80490780, 1);
    F(void *, 0x350) = lbl_80490748;
    bind_enemy_combat_stats(self, lbl_805D4FF8[F(s32, 0x368)], lbl_805D4FFC[F(s32, 0x368)], lbl_805D5000[F(s32, 0x368)]);
    ((void (*)(void *))init_scale_global__10TObjPlayerFv)(self);
    F(s16, 0x32C) = F(s16, 0x2B8);
    F(s16, 0x32E) = F(s16, 0x2BA);
    F(s16, 0x33E) = F(s16, 0x32C);
    update_prev_position__10TObjPlayerFPv(self);
    F(s32, 0x388) = 0x550000;
    obj_setFlags30(self, 0x04040000);
    F(s32, 0x64) = 0x8000;
    F(f32, 0x38C) = lbl_805D9984;
    F(f32, 0x394) = lbl_805D9984;
    F(f32, 0x390) = lbl_805D9984;
    F(s32, 0x400) = 0;
    F(s32, 0x404) = 0;
    *(u32 *)(F(u8 *, 0xA4) + 0x18) |= 4;
    *(u32 *)(F(u8 *, 0xA4) + 0x18) &= ~2;
    F(s16, 0x39E) = 0;
    for (i = 0; i < 4; i++) {
        ((Obj_800A2F94 *)self)->f3F0[i] = 0;
    }
    {
        Atk_800A2F94 atk = lbl_8043A658;
        atk.w[0] = *(s32 *)(G500C + 0x430);
        spawn_npc_enemy__6TLobbyFsiiiff(0x19, *(s32 *)(*(u8 **)(G500C + 0x42C) + 0x18), *(s32 *)(*(u8 **)(G500C + 0x42C) + 0x1C), (s32)&atk, lbl_805D9978, lbl_805D9984);
    }
    return self;
}

#undef F
#undef G500C

void TObjPlayer__sub_800A31F4(void) {  }

void TObjPlayer__sub_800A31F8(void) {  }

void TObjPlayer__sub_800A31FC(void) {  }

f32 TObjPlayer__sub_800A3200(s32 arg0) {
    return M2C_FIELD((lbl_805D5004 + (arg0 * 4)), f32 *, 0);
}

s32 TObjPlayer__sub_800A3210(s32 i, s32 _w1, s32 _w2) {
    return (*(G_800A3210 * *)&lbl_805D5004)->arr[i];
}

int is_flag_set_388_bit26__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x388) >> 26) & 0x1; }

void set_fields_24_34_from_global__10TObjPlayerFPvPv(void* a0, void* a1) { *(int*)((char*)a0 + 0x34) = get_bml_model((void*)((*(int *)&player_effect_bml_resource))); *(int*)((char*)a0 + 0x24) = TObjFish__sub_8001EDB0((void*)((*(int *)&player_effect_bml_resource)), a1); }

void clear_counter__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x340) = 0; }

void set_cancel_flag__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x340) = 1; }

s32 TObjPlayer__sub_800A3290(Obj_800A3290 *self, s32 id) {
    Obj_800A3290 *other;
    s32 result = 0;
    s32 i;
    VObj_18_4a35f9 *p;
    other = find_entity_by_id(id);
    if (other == NULL) {
        return 0;
    }
    other->sub->flags &= ~1;
    init_all_slots__10TObjPlayerFv();
    check_object_collisions__10TObjPlayerFPv(self);
    check_enemy_body_collisions(self);
    other->sub->flags |= 1;
    if (self->sub->flags & 0x180000) {
        for (i = 0; i < 16; i++) {
            p = get_battle_param__10TObjPlayerFi(i);
            if (p == NULL) {
                break;
            }
            if (obj_is_hit_receivable() != 0 && p != (VObj_18_4a35f9 *)other) {
                Pair_800A3290 t = lbl_8043A6E8[0];
                t.b = ((s32 (*)(s32))TObjPlayer__sub_800A3210)(3);
                Pair_800A3290 u = t;
                p->m21(other, &u, 0, -1, -1);
                p->m23(other, lbl_805D99D0);
                result = 1;
            }
        }
    }
    return result;
}

void update_projectile_lifetime__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
    vec3_add_to((void *) (arg0 + 0x38), (void *) (arg0 + 0xAC));
    {
        void *p = (void *) M2C_FIELD(arg0, void **, 0xD0);
        if (p != NULL) {
            copy_pos__11TNowLoadingFPvPv(p, (void *) (arg0 + 0x38));
        }
    }
    if (TObjPlayer__sub_800A3290((Obj_800A3290 *)((void *) (arg0)), (s32)((int) (M2C_FIELD(arg0, u16 *, 0xC8)))) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC4) - 1;
    M2C_FIELD(arg0, s32 *, 0xC4) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *TObjPlayer__sub_800A3478(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804909C4;
        free_collision_body_parts(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0));
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_800A34E8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 var_r0;
    u8 *temp_r3;
    construct_collider_proxy__10TObjPlayerFPv(arg0, tl_04);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804909C4;
    init_collision_body_parts((void *) (arg0), (void *) (lbl_80490998), (int) (1));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = lbl_805D99D4 * lbl_805D5008;
    M2C_FIELD(arg0, s16 *, 0xC8) = obj_getField1c((void *) (arg1), lbl_805D99D4);
    if (is_flag_set_388_bit26__10TObjPlayerFPv((void *) (arg1)) != 0) {
        var_r0 = 0xDA;
    } else {
        var_r0 = 0xD5;
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = var_r0;
    M2C_FIELD(arg0, s16 *, 0x28) = M2C_FIELD(arg1, s16 *, 0x28);
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0x38), (void *) (arg2));
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0xAC), (void *) (arg3));
    subtract_vector((void *) (arg0 + 0xAC), (void *) (arg2));
    M2C_FIELD(arg0, f32 *, 0xB0) = lbl_805D99D8;
    scale_velocity__19TObjGyaranzoMissileFPvf((void *) (arg0 + 0xAC), lbl_805D5008);
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (lbl_8043A6F8[0] * atan2_float(M2C_FIELD(arg0, f32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xB4))) + 0x4000;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0x4000;
    M2C_FIELD(arg0, s32 *, 0xD0) = spawn_particle_effect_with_rotation((void *) (arg0 + 0x38), (void *) (arg0 + 0xB8), M2C_FIELD(arg0, s32 *, 0xCC), 0x42);
    {
    Vec_800A34E8 v = *(Vec_800A34E8 *)(arg0 + 0xAC);
    scale_velocity__19TObjGyaranzoMissileFPvf((void *) (&v), lbl_805D99DC);
    vec3_add_to((void *) (&v), (void *) (arg0 + 0x38));
    temp_r3 = csnVector(arg0 + 0x38, &v, -1);
    }
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (horizontal_distance__10TObjPlayerFPvPv((void *) (arg0 + 0x38), M2C_FIELD(temp_r3, s32 *, 4)) / lbl_805D5008);
    } else {
        M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (lbl_805D99DC / lbl_805D5008);
    }
    return arg0;
}

}
