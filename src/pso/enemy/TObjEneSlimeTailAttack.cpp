#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Obj_800E9BCC {
    u8 pad0[0x38];
    f32 pos[3];
    f32 prev[3];
    u8 pad50[0x60 - 0x50];
    s32 f60;
    u8 pad64[0x390 - 0x64];
    s32 f390;
    u8 pad394[0x3CC - 0x394];
    s32 f3CC;
};

typedef struct { f32 x, y, z; } Vec_800EB654;

struct Vec_800EAD84 { f32 x, y, z; };

struct Obj_800EAD84 { u8 pad0[0x38]; Vec_800EAD84 pos; };

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

struct Vec_800EAEE8 { f32 x, y, z; };

struct Stack_800EAEE8 {
    s32 sp8;
    f32 spC;
    s32 sp10;
};

extern "C" {
void calc_distance_to_client__10TObjPlayerFiUsUi(void *, u16, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u32 csnLookAt(void *, void *);
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
s32 project_actor_to_ground(void *, void *, int);
M2C_UNK vec3_add_to(void *, void *);
f32 vector_length(void *);
void normalize_vector(void *);
extern const f64 lbl_8043D280[];
extern const f32 lbl_805DA718;
extern const f32 lbl_805DA71C;
extern const f32 lbl_805DA720;
extern const f32 lbl_805DA724;
void TObjPlayer__sub_800E9BCC(Obj_800E9BCC *o);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_slime_in_slot(void *, s32, Vec_800EB654 *, Vec_800EB654 *);
M2C_UNK play_sound_effect(int, void *, int, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vector_length(void *);
void normalize_vector(void *);
extern const f32 lbl_805DA66C;
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA718;
extern const f32 lbl_805DA758;
M2C_UNK try_spawn_child__15TObjEneSlimeOneFiPv(int arg0, void *arg1);
s32 project_actor_to_ground(void *, void *, int);
extern const f32 lbl_805DA6AC;
s32 TObjEneSlimeOne__sub_800EAD84(Obj_800EAD84 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK init_render_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800EBE48(f32);
M2C_UNK draw_part__15TObjEneSlimeOneFPvi(int, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern const f32 lbl_805DA67C;
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA6E4;
extern const f32 lbl_805DA728;
void render__15TObjEneSlimeOneFv(u8 *arg0);
}

extern "C" {

struct RecoveredGlobal_800E8128_lbl_80496704 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800E8128_lbl_80496710 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800E8128_lbl_80501010 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800E80C0_lbl_80501010 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct B_800E80E8 { s32 w[3]; };

struct A_800E80E8 { s32 w[12]; };

struct S_800E80E8 { B_800E80E8 a; A_800E80E8 d; };

typedef struct { f32 x, y, z; } Vec_800E81B4;

struct Rot_800E81B4 { s32 x, y, z; };

struct Obj_800E81B4 { u8 pad[0x39C]; Vec_800E81B4 pts[4]; };

struct Vec_800E82B8 { f32 x, y, z; };

typedef char RecoveredGlobal_800E8128_lbl_80496704_size[sizeof(RecoveredGlobal_800E8128_lbl_80496704) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_800E8128_lbl_80496710_size[sizeof(RecoveredGlobal_800E8128_lbl_80496710) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_800E8128_lbl_80501010_size[sizeof(RecoveredGlobal_800E8128_lbl_80501010) == 0x40 ? 1 : -1];

typedef char RecoveredGlobal_800E80C0_lbl_80501010_size[sizeof(RecoveredGlobal_800E80C0_lbl_80501010) == 0x40 ? 1 : -1];

struct Hit_800E8AD0 { s32 kind; f32 dmg; };

struct Base_800E8AD0 { u8 pad[0x18]; };

struct Ent_800E8AD0 : Base_800E8AD0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
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
    virtual f32 m21(s32, Hit_800E8AD0, s32, s32, s32);
    virtual void v22();
    virtual void m23(void *);
};

struct Vec_800E8D4C { f32 x, y, z; };

struct Bomb_800E8D4C {
    u8 pad0[0x38];
    Vec_800E8D4C pos;
    u8 pad44[0x248 - 0x44];
    u8 hit[0x374 - 0x248];
    Vec_800E8D4C vel;
    f32 ground;
    f32 life;
    void *link;
    s32 owner;
    u8 pad390[4];
    s32 timer;
};

typedef struct { f32 x, y, z; } Vec_800E8C6C;

struct Vec_800E9090 { f32 x, y, z; };

struct Bomb_800E9090 {
    u8 pad0[0x38];
    Vec_800E9090 pos;
    u8 pad44[0x374 - 0x44];
    Vec_800E9090 vel;
    s32 f380;
    u8 pad384[0x3A0 - 0x384];
    f32 f3A0;
    u8 pad3A4[0x3F4 - 0x3A4];
    s32 f3F4;
};

struct Stack_800E9238 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

typedef struct Vec_800E984C { f32 x, y, z; } Vec_800E984C;

typedef struct Tgt_800E984C { u8 pad[0x30]; u32 flags; u8 pad34[4]; Vec_800E984C pos; } Tgt_800E984C;

typedef struct Self_800E984C {
    u8 pad0[0x38];
    Vec_800E984C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x388 - 0x64];
    s32 f388;
    u8 pad38C[0x390 - 0x38C];
    s32 f390;
    u8 pad394[0x3CC - 0x394];
    s32 target;
    Vec_800E984C dest;
} Self_800E984C;

struct Obj_800E9DC8 { u8 pad0[0x60]; s32 f60; u8 pad1[0x390 - 0x64]; s32 f390; u8 pad2[0x3C4 - 0x394]; s32 f3C4; };

struct RecoveredGlobal_800EA678_lbl_8043D230 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800EA678_lbl_8043D23C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Vec_800EA364 { f32 x, y, z; };

typedef char RecoveredGlobal_800EA678_lbl_8043D230_size[sizeof(RecoveredGlobal_800EA678_lbl_8043D230) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_800EA678_lbl_8043D23C_size[sizeof(RecoveredGlobal_800EA678_lbl_8043D23C) == 0xC ? 1 : -1];

struct Stack_800EB3D4 {
    s32 sp8;
    u8 pad_C[0x2];
    s16 spE;
    u8 trailing_storage[0x4];
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

struct RecoveredGlobal_800EB3D4___vt__15TObjEneSlimeOne {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct Stack_800EB4A0 {
    s32 sp8;
    u8 pad_C[0x2];
    s16 spE;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_800EB4A0___vt__15TObjEneSlimeOne {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct TSlime_800EAE78;

typedef void (TSlime_800EAE78::*Action_800EAE78)();

struct Ent_800EAE78 { Action_800EAE78 fn; u8 pad[0xC]; };

struct TSlime_800EAE78 {
    u8 pad[0x384];
    s32 state;
    void run(s32 s);
};

typedef char RecoveredGlobal_800EB3D4___vt__15TObjEneSlimeOne_size[sizeof(RecoveredGlobal_800EB3D4___vt__15TObjEneSlimeOne) == 0x14C ? 1 : -1];

typedef char RecoveredGlobal_800EB4A0___vt__15TObjEneSlimeOne_size[sizeof(RecoveredGlobal_800EB4A0___vt__15TObjEneSlimeOne) == 0x14C ? 1 : -1];

struct Vec_800E9EFC { f32 x, y, z; };

u16 find_nearest_visible_player(void *, void *, f32);
void calc_distance_to_client__10TObjPlayerFiUsUi(void *, u16, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 add_flags_2e4__10TObjPlayerFPvUi(void *, int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void queue_destruction__7TObjectFv(void *);
f32 * dispatch_shared_handler_a__6TLobbyFPv(s32);
u8 * get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 exchange_object_state__6TLobbyFPvis(void *, void *, int);
void transform_to_view__11TCameraCtrlFii(s32, s32);
u32 csnLookAt(void *, void *);
void request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK spawn_particle_effect(void *, int);
s32 create_particle_emitter(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
void TObjPlayer__sub_800E80C0(u8 *arg0);
S_800E80E8 * TObjPlayer__sub_800E80E8(S_800E80E8 *dst, S_800E80E8 *src);
void TObjPlayer__sub_800E8128(void);
void TObjPlayer__sub_800E81A8(void);
void draw_blob_shadows__10TObjPlayerFPv(Obj_800E81B4 *arg0);
void draw_stretched_segment__10TObjPlayerFPvPvPvf(u8 *arg0, Vec_800E82B8 *arg1, Vec_800E82B8 *arg2, f32 t);
void TObjPlayer__sub_800E841C(u8 *arg0);
void TObjPlayer__sub_800E84F8(u8 *arg0);
M2C_UNK TObjPlayer__sub_800E85BC();
void TObjPlayer__sub_800E87FC(u8 *arg0);
void * create__22TObjEneSlimeTailAttackFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void * dt__22TObjEneSlimeTailAttackFPvs(void *arg0, s16 arg1);
void * TObjEneSlimeTailAttack__ct(void *, void *, s32, s32, s32);
s32 water_bomb_hit_nearby(u8 *arg0);
void render__21TObjEneSlimeWaterBombFv(u8 *arg0);
void run_task__21TObjEneSlimeWaterBombFv(Bomb_800E8D4C *arg0);
void * create__21TObjEneSlimeWaterBombFPvPv(void *arg0, void *arg1);
void * __dt__21TObjEneSlimeWaterBombFv(void *arg0, s16 arg1);
void * TObjEneSlimeWaterBomb__ct(void *arg0, void *arg1, void *arg2);
void TObjPlayer__sub_800E9090(Bomb_800E9090 *self);
void fn_800E9238(s32 arg0);
void copy_position__15TObjEneSlimeOneFi(s32 arg0);
void fn_800E9538(u8 *arg0);
void update_effect_fade_lifetime(u8 *arg0);
void fn_800E95F4(u8 *arg0);
void TObjEneSlimeOne__sub_800E969C(void *arg0);
void init_split_effect__15TObjEneSlimeOneFPv(u8 *arg0);
void update_tick__15TObjEneSlimeOneFPv(u8 *arg0);
void reset_display_state__15TObjEneSlimeOneFPv(void* a0);
void tick_timer__15TObjEneSlimeOneFPv(void *arg0);
void start_tail_attack__15TObjEneSlimeOneFPv(Self_800E984C *self);
void update_water_bomb_timer__15TObjEneSlimeOneFPv(u8 *arg0);
void begin_appear__15TObjEneSlimeOneFPv(void* p);
void TObjPlayer__sub_800E9D7C(void* p);
void TObjPlayer__sub_800E9DC8(Obj_800E9DC8 *arg0);
void init_slime_state__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_800EA120(u8 *arg0);
void update_dive_timer__10TObjPlayerFPv(u8 *arg0);
void enter_appear_state__10TObjPlayerFPv(u8 *arg0);
void update_slime_timer__10TObjPlayerFPv(u8 *arg0);
void enter_slime_state__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_800EA364(u8 *arg0);
void TObjPlayer__sub_800EA56C(u8 *arg0);
void TObjPlayer__sub_800EA678(u8 *arg0);
void init_slime_display__10TObjPlayerFPv(void* a0);
void TObjPlayer__sub_800EA820(u8 *arg0);
void reset_display__15TObjEneSlimeOneFPv(void* a0);
void update_wait_search__15TObjEneSlimeOneFPv(void *arg0);
void init_state__15TObjEneSlimeOneFPv(void* a0);
void set_random_timer_15__15TObjEneSlimeOneFPv(void* p);
void TObjEneSlimeOne__vt59(u8 *arg0);
void TObjEneSlimeOne__vt60(u8 *arg0);
void TObjEneSlimeOne__vt61(void* p);
void clear_child_flag__15TObjEneSlimeOneFPv(void *arg0);
void set_target_flag_bit0__15TObjEneSlimeOneFPv(void *arg0);
void set_display_mode__15TObjEneSlimeOneFPvi(void *arg0, s32 arg1);
void set_random_timer__15TObjEneSlimeOneFPvii(void *arg0, s32 arg1, s32 arg2);
void set_state__15TObjEneSlimeOneFPvi(TSlime_800EAE78 *arg0, s32 arg1);
void * __dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1);
s32 TObjEneSlimeOne__sub_800EB1B4(void *);
u8 * TObjEneSlimeOne__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
u8 * init__15TObjEneSlimeOneFPviii(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2);
s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1);
void fn_800EB778(void *, s32);
M2C_UNK init_render_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800EBE48(f32);
void push_material_color_override__10TObjPlayerFffff(f32, f32, f32, f32);
s32 get_attack_target__15TObjEneSlimeOneFPv(s32);
s32 is_in_water_bomb_states__15TObjEneSlimeOneFPv(int);
s32 find_nearest_enemy_masked__15TObjEneSlimeOneFPvf(void *, f32);
s32 is_timer_active__15TObjEneSlimeOneFPv(void *);
s32 find_nearest_enemy_with_flag__15TObjEneSlimeOneFPvif(void *, f32 *, f32);
s16 check_player_field_7cc__15TObjEneSlimeOneFPv();
s32 is_reached_target_depth__15TObjEneSlimeOneFPv(s32);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
void __dt__15TObjEneSlimeOneFis(void *, int);
M2C_UNK draw_blob_shadow(int);
void * TObjControl__ct(void *, s32);
Ent_800E8AD0 * get_enemy_entity(u16);
void refresh_lobby_state__10TObjPlayerFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 initialize__9TObjEnemyFPv(void *);
f32 horizontal_distance_squared(void *, void *);
s32 angle_difference_abs(s32, s32);
M2C_UNK direction_to_rotation_xz(Rot_800E81B4 *, s32 *, s32 *);
s32 approach_angle_limited(s32, s32, s32);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK advance_animation_playback(void *);
void free_collision_body_parts(void *);
s32 project_actor_to_ground(void *, void *, int);
s32 get_player_by_client_id(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(M2C_UNK);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
f32 vector_length(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
void subtract_vector(void *, void *);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
void normalize_vector(void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK scale_current_matrix(Vec_800E8C6C *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
void draw_chunk_object(s32);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);

extern M2C_UNK __vt__15TObjEneSlimeOne[];
extern M2C_UNK __vt__21TObjEneSlimeWaterBomb[];
extern const RecoveredGlobal_800EA678_lbl_8043D230 lbl_8043D230;
extern const RecoveredGlobal_800EA678_lbl_8043D23C lbl_8043D23C;
extern Hit_800E8AD0 lbl_8043D260[];
extern const f64 lbl_8043D280[];
extern RecoveredGlobal_800E8128_lbl_80501010 lbl_80501010;
extern s32 TObjEneSlimeOne_class_name;
extern s32 lbl_805D2AE0;
extern int lbl_805D52B4;
extern s32 lbl_805D586C;
extern const f32 lbl_805DA66C;
extern const f32 lbl_805DA670;
extern const f32 lbl_805DA674;
extern const f32 lbl_805DA678;
extern const f32 lbl_805DA67C;
extern const f32 lbl_805DA680;
extern const f32 lbl_805DA684;
extern const f32 lbl_805DA688;
extern const f32 lbl_805DA68C;
extern const f32 lbl_805DA690;
extern const f32 lbl_805DA694;
extern const f32 lbl_805DA698;
extern const f32 lbl_805DA69C;
extern const f32 lbl_805DA6A8;
extern const f32 lbl_805DA6AC;
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA6B8;
extern const f32 lbl_805DA6BC;
extern const f32 lbl_805DA6C0;
extern const f32 lbl_805DA6C4;
extern const f32 lbl_805DA6C8;
extern const f32 lbl_805DA6CC;
extern const f32 lbl_805DA6D0;
extern const f32 lbl_805DA6D4;
extern const f32 lbl_805DA6D8;
extern const f32 lbl_805DA6DC;
extern const f32 lbl_805DA6E0;
extern const f32 lbl_805DA6E4;
extern const f32 lbl_805DA6E8;
extern const f32 lbl_805DA6EC;
extern const f32 lbl_805DA6F0;
extern const f32 lbl_805DA6F4;
extern const f32 lbl_805DA6F8;
extern const f32 lbl_805DA6FC;
extern const f32 lbl_805DA708;
extern const f32 lbl_805DA70C;
extern const f32 lbl_805DA710;
extern const f32 lbl_805DA714;
extern const f32 lbl_805DA718;
extern const f32 lbl_805DA720;
extern const f32 lbl_805DA728;
extern const f32 lbl_805DA72C;
extern const f32 lbl_805DA730;
extern const f32 lbl_805DA734;
extern const f32 lbl_805DA738;
extern const f32 lbl_805DA73C;
extern const f32 lbl_805DA740;
extern const f32 lbl_805DA744;
extern const f32 lbl_805DA748;
extern const f32 lbl_805DA74C;
extern const f32 lbl_805DA750;
extern s32 tl_04;

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
extern "C" {
void set_state__15TObjEneSlimeOneFPvi(TSlime_800EAE78 *arg0, s32 arg1);
}

extern "C" {
void TObjPlayer__sub_800E9090(Bomb_800E9090 *self);
}

extern "C" void TBoss8Dragon__sub_800E92D8();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_80011010();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014884();
extern "C" void TObjPlayer__sub_80014888();
extern "C" void TObjPlayer__sub_8001488C();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_vt78__10TObjPlayerFPv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void clear_lobby_object_state();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_8043D008[];
extern "C" u8 lbl_8043D01C[];
extern "C" u8 lbl_8043D030[];
extern "C" u8 lbl_8043D044[];
extern "C" u8 lbl_8043D058[];
extern "C" u8 lbl_8043D06C[];
extern "C" u8 lbl_8043D080[];
extern "C" u8 lbl_8043D09C[];
extern "C" u8 lbl_8043D0B8[];
extern "C" u8 lbl_8043D0D4[];
extern "C" u8 lbl_8043D0F0[];
extern "C" u8 lbl_8043D108[];
extern "C" u8 lbl_8043D120[];
extern "C" u8 lbl_8043D138[];
extern "C" u8 lbl_8043D150[];
extern "C" u8 lbl_8043D16C[];
extern "C" u8 lbl_8043D188[];
extern "C" u8 lbl_8043D1A0[];
extern "C" u8 lbl_8043D1B8[];
extern "C" u8 lbl_8043D1D0[];
extern "C" u8 lbl_8043D1EC[];
extern "C" u8 lbl_8043D210[];
extern "C" u8 lbl_805DA668[];
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
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern void *slime_model_name_ptr_table[7];
extern void *lbl_80496314[15];
extern "C" void TObjPlayer__sub_800E9EFC(u8 *arg0);
void *slime_model_name_ptr_table[7] = {
    (void *)&lbl_8043D008, (void *)&lbl_8043D01C, (void *)&lbl_8043D030, (void *)&lbl_8043D044,
    (void *)&lbl_8043D058, (void *)&lbl_8043D06C, (void *)0x0,
};
void *lbl_80496314[15] = {
    (void *)&lbl_8043D080, (void *)&lbl_8043D09C, (void *)&lbl_8043D0B8, (void *)&lbl_8043D0D4,
    (void *)&lbl_8043D0F0, (void *)&lbl_8043D108, (void *)&lbl_8043D120, (void *)&lbl_8043D138,
    (void *)&lbl_8043D150, (void *)&lbl_8043D16C, (void *)&lbl_8043D188, (void *)&lbl_8043D1A0,
    (void *)&lbl_8043D1B8, (void *)&lbl_8043D1D0, (void *)0x0,
};
void *slime_pair_resource_descriptor[4] = {
    (void *)&lbl_8043D1EC, (void *)&slime_model_name_ptr_table, (void *)&lbl_80496314, (void *)0x6000e,
};
__declspec(section ".data") void *slime_debug_label_table[2] = {
    (void *)&lbl_8043D210, (void *)&lbl_805DA668,
};
void *lbl_80496368[13] = {
    (void *)0x4, (void *)0x5, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x40f00000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_8049639C[118] = {
    (void *)0x10000, (void *)0xa, (void *)0x3f000000, (void *)0x0,
    (void *)0x20002, (void *)0xa, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0xd, (void *)0x3f000000, (void *)0x0,
    (void *)0x20000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x9, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x0, (void *)0xffffffff, (void *)&init_state__15TObjEneSlimeOneFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&update_wait_search__15TObjEneSlimeOneFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&reset_display__15TObjEneSlimeOneFPv, (void *)0x0, (void *)0xffffffff, (void *)&TObjPlayer__sub_800EA820,
    (void *)0x0, (void *)0xffffffff, (void *)&init_slime_display__10TObjPlayerFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjPlayer__sub_800EA678, (void *)0x0, (void *)0xffffffff,
    (void *)&TObjPlayer__sub_800EA56C, (void *)0x0, (void *)0xffffffff, (void *)&TObjPlayer__sub_800EA364,
    (void *)0x0, (void *)0xffffffff, (void *)&enter_slime_state__10TObjPlayerFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&update_slime_timer__10TObjPlayerFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&enter_appear_state__10TObjPlayerFPv, (void *)0x0, (void *)0xffffffff, (void *)&update_dive_timer__10TObjPlayerFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TObjPlayer__sub_800EA120, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjPlayer__sub_800E9EFC, (void *)0x0, (void *)0xffffffff,
    (void *)&init_slime_state__10TObjPlayerFPv, (void *)0x0, (void *)0xffffffff, (void *)&TObjPlayer__sub_800E9DC8,
    (void *)0x0, (void *)0xffffffff, (void *)&TObjPlayer__sub_800E9D7C, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjPlayer__sub_800E9BCC, (void *)0x0, (void *)0xffffffff,
    (void *)&begin_appear__15TObjEneSlimeOneFPv, (void *)0x0, (void *)0xffffffff, (void *)&update_water_bomb_timer__15TObjEneSlimeOneFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&start_tail_attack__15TObjEneSlimeOneFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&tick_timer__15TObjEneSlimeOneFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&reset_display_state__15TObjEneSlimeOneFPv, (void *)0x0, (void *)0xffffffff, (void *)&update_tick__15TObjEneSlimeOneFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&init_split_effect__15TObjEneSlimeOneFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjEneSlimeOne__sub_800E969C, (void *)0x0, (void *)0xffffffff,
    (void *)&fn_800E95F4, (void *)0x0, (void *)0xffffffff, (void *)&update_effect_fade_lifetime,
    (void *)0x0, (void *)0xffffffff, (void *)&fn_800E9538, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_800E92D8,
};
void *lbl_80496574[92] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x2,
};
__declspec(section ".data") void *lbl_804966E4[2] = {
    (void *)0x4, (void *)0x5,
};
__declspec(section ".data") void *lbl_804966EC[2] = {
    (void *)0x30, (void *)0x34,
};
__declspec(section ".data") void *lbl_804966F4[2] = {
    (void *)0x1, (void *)0x3,
};
__declspec(section ".data") void *lbl_804966FC[2] = {
    (void *)0x30, (void *)0x34,
};
void *lbl_80496704[3] = {
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80496710[3] = {
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_8049671C[83] = {
    (void *)0x0, (void *)0x0, (void *)&dt__22TObjEneSlimeTailAttackFPvs, (void *)&TObjPlayer__sub_800E87FC,
    (void *)&TObjPlayer__sub_800E84F8, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjPlayer__sub_80011010, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjPlayer__sub_8001488C, (void *)&TObjPlayer__sub_80014888, (void *)&TObjPlayer__sub_80014884,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state,
};
#define lbl_80496574 ((Ent_800EAE78 *)lbl_80496574)
#define lbl_804966E4 ((s32 *)lbl_804966E4)
#define lbl_804966EC ((s32 *)lbl_804966EC)
#define lbl_80496704 (*(RecoveredGlobal_800E8128_lbl_80496704 *)lbl_80496704)
#define lbl_80496710 (*(RecoveredGlobal_800E8128_lbl_80496710 *)lbl_80496710)
#define lbl_8049671C ((M2C_UNK *)lbl_8049671C)

void TObjPlayer__sub_800E80C0(u8 *arg0) {
    TObjPlayer__sub_800E80E8((S_800E80E8 *)(arg0), (S_800E80E8 *)(&(*(RecoveredGlobal_800E80C0_lbl_80501010 *)&lbl_80501010).value));
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
S_800E80E8 *TObjPlayer__sub_800E80E8(S_800E80E8 *dst, S_800E80E8 *src) {
    dst->a = src->a;
    dst->d = src->d;
    return dst;
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_800E8128(void) {
    if ((s32) (*(s32 *)&lbl_805D52B4) == 7) {
        transform_to_view__11TCameraCtrlFii((s32) &lbl_80496704.value, (s32) &lbl_80501010.value);
    }
    if (((s32) (*(s32 *)&lbl_805D52B4) >= 4) && ((s32) (*(s32 *)&lbl_805D52B4) < 8)) {
        transform_to_view__11TCameraCtrlFii((s32) &lbl_80496710.value, (s32) ((u8 *)&lbl_80501010.value + (((*(s32 *)&lbl_805D52B4) - 4) * 0xC) + 0xC));
    }
    (*(s32 *)&lbl_805D52B4) += 1;
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_800E81A8(void) { lbl_805D52B4 = 0; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void draw_blob_shadows__10TObjPlayerFPv(Obj_800E81B4 *arg0) {
    s32 i;
    f32 k;
    s32 spC;
    s32 sp8;
    k = lbl_805DA66C;
    for (i = 0; i < 4; i++) {
        Vec_800E81B4 v = arg0->pts[i];
        Rot_800E81B4 rot;
        v.y += k;
        if (((s32 (*)(void *, Vec_800E81B4 *, Rot_800E81B4 *))project_actor_to_ground)(arg0, &v, &rot) != 0) {
            push_matrix();
            translate_matrix(0, v.x, lbl_805DA670 + v.y, v.z);
            direction_to_rotation_xz(&rot, &spC, &sp8);
            rotate_matrix_z(0, sp8);
            rotate_matrix_x(0, spC + 0x4000);
            scale_matrix(0, lbl_805DA674, lbl_805DA674, lbl_805DA674);
            draw_blob_shadow(0);
            pop_matrix();
        }
    }
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma fp_contract on
void draw_stretched_segment__10TObjPlayerFPvPvPvf(u8 *arg0, Vec_800E82B8 *arg1, Vec_800E82B8 *arg2, f32 t) {
    f32 len;
    f32 k;
    f32 saved;
    Vec_800E82B8 d;
    VecCopy__FP3VecPC3Vec(&d, arg2);
    ((M2C_UNK (*)(void *, void *))subtract_vector)(&d, arg1);
    len = vector_length(&d);
    push_matrix();
    k = lbl_805DA678 * (lbl_805DA67C + t);
    {
        Vec_800E82B8 p = *arg1;
        p.x += k * d.x;
        p.y += k * d.y + lbl_805DA680;
        p.z += k * d.z;
        post_translate_matrix(&p);
    }
    rotate_matrix_y(0, (s32)(lbl_8043D280[0] * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z)));
    {
        f32 r = lbl_805DA67C - t;
        scale_matrix(0, lbl_805DA67C, lbl_805DA678, r * len / lbl_805DA66C);
    }
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
    TObjPlayer__sub_800EBE48(lbl_805DA688 * t + lbl_805DA684);
    saved = M2C_FIELD(arg0, f32 *, 0xC0);
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DA68C;
    draw__16TObjEneRe7BeruraFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xC0) = saved;
    init_render_globals__10TObjPlayerFv();
    pop_matrix();
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_800E841C(u8 *arg0) {
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x378) != 0) {
        TObjPlayer__sub_800E81A8();
        set_global_state__16TObjEneRe7BeruraFi((void *) (TObjPlayer__sub_800E8128));
        draw__16TObjEneRe7BeruraFPv((void *) (arg0));
        set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
        TObjPlayer__sub_800E80C0(arg0 + 0x390);
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x390));
    } else {
        TObjPlayer__sub_800EBE48((f32) (M2C_FIELD(arg0, f32 *, 0x38C)));
        set_monitor_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x380));
        TObjPlayer__sub_800E81A8();
        set_global_state__16TObjEneRe7BeruraFi((void *) (TObjPlayer__sub_800E8128));
        draw__16TObjEneRe7BeruraFPv((void *) (arg0));
        set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
        TObjPlayer__sub_800E80C0(arg0 + 0x390);
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x390));
        init_render_globals__10TObjPlayerFv();
    }
    pop_matrix();
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_800E84F8(u8 *arg0) {
  f32 temp_f1;
  f32 temp_f3;
  TObjPlayer__sub_800E841C((u8 *)(arg0));
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x378)))) != 0)
  {
    temp_f3 = *((f32 *) (((s8 *) arg0) + 0xC0));
    temp_f1 = lbl_805DA68C;
    if (temp_f3 < temp_f1)
    {
      draw_stretched_segment__10TObjPlayerFPvPvPvf((u8 *)((void *) arg0), (Vec_800E82B8 *)((void *) ((*((s32 *) (((s8 *) arg0) + 0x374))) + 0x38)), (Vec_800E82B8 *)((void *) (arg0 + 0x38)), (f32) (temp_f3 / temp_f1));
    }
    else
      if ((temp_f3 >= lbl_805DA690) && (temp_f3 < lbl_805DA694))
    {
      draw_stretched_segment__10TObjPlayerFPvPvPvf((u8 *)((void *) arg0), (Vec_800E82B8 *)((void *) (arg0 + 0x38)), (Vec_800E82B8 *)((void *) ((*((s32 *) (((s8 *) arg0) + 0x374))) + 0x38)), (f32) ((temp_f3 - lbl_805DA690) / temp_f1));
    }
  }
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0xC0));
  if ((temp_f1 >= lbl_805DA698) && (temp_f1 < lbl_805DA69C))
  {
    draw_blob_shadows__10TObjPlayerFPv((Obj_800E81B4 *)((void *) arg0));
  }
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma fp_contract on
void TObjPlayer__sub_800E87FC(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x378) != 0) {
        TObjPlayer__sub_800E85BC();
        advance_animation_playback((void *) (arg0));
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if (is_in_water_bomb_states__15TObjEneSlimeOneFPv((int) (M2C_FIELD(arg0, s32 *, 0x374))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x378) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xC0) += lbl_805DA670 * (lbl_805DA68C - M2C_FIELD(arg0, f32 *, 0xC0));
        M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38C) + lbl_805DA6B8);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DA6BC);
        M2C_FIELD(arg0, f32 *, 0x380) = (f32) (M2C_FIELD(arg0, f32 *, 0x380) + lbl_805DA6C0);
        M2C_FIELD(arg0, f32 *, 0x384) = (f32) (M2C_FIELD(arg0, f32 *, 0x384) + lbl_805DA6C4);
        M2C_FIELD(arg0, f32 *, 0x388) = (f32) (M2C_FIELD(arg0, f32 *, 0x388) + lbl_805DA6C0);
        if (M2C_FIELD(arg0, f32 *, 0x384) <= lbl_805DA684) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
extern int fold_flush_7;
#pragma pop

void *create__22TObjEneSlimeTailAttackFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *obj;
    void *ctrl;

    obj = __nw__7TObjectFUl(0x3CC);
    if (obj != 0) {
        ctrl = __nw__7TObjectFUl(0x20);
        if (ctrl != 0) {
            ctrl = TObjControl__ct(ctrl, tl_04);
        }
        obj = TObjEneSlimeTailAttack__ct(obj, ctrl, arg2, arg3, arg4);
    }
    return obj;
}

void *dt__22TObjEneSlimeTailAttackFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049671C;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern "C" {
u8 *get_instance__15TObjEneSlimeOneFv();
void set_field_b8__14TObjEnePanarmsFPvs(void *, int);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
extern s32 lbl_805D2AE4;
void *TObjEneSlimeTailAttack__ct(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
  unsigned int id;
  u8 *inst;
  ((s32 (*)(void *, void *)) initialize__9TObjEnemyFPv)(arg0, arg1);
  *((u8 **) (((s8 *) arg0) + 0x18)) = (u8 *) lbl_8049671C;
  *((s32 *) (((s8 *) arg0) + 0)) = lbl_805D2AE4;
  *((s32 *) (((s8 *) arg0) - -0x374)) = arg4;
  inst = get_instance__15TObjEneSlimeOneFv();
  id = ((s32 *) lbl_804966F4)[get_attack_target__15TObjEneSlimeOneFPv(*((s32 *) (((s8 *) arg0) + (0x374 & 0xFFFF))))];
  *((s32 *) (((s8 *) arg0) + 0x24)) = TObjFish__sub_8001EDB0((s32) inst, id);
  *((s32 *) (((s8 *) arg0) + 0x34)) = get_bml_model((s32) inst, id);
  *((u8 **) (((s8 *) arg0) + 0xD8)) = (u8 *) lbl_8049639C;
  set_field_d8__10TObjPlayerFPvi(arg0, (s32) ((u8 *) lbl_8049639C));
  *((s32 *) (((s8 *) arg0) + 0xDC)) = *((s32 *) (((s8 *) inst) + 0x430));
  set_field_dc__10TObjPlayerFPvi(arg0, *((s32 *) (((s8 *) inst) + 0x430)));
  *((s16 *) (((s8 *) arg0) + 0xB8)) = 6;
  set_animation__10TObjPlayerFPvs(arg0, *((s16 *) (((s8 *) arg0) + 0xB8)));
  set_field_b8__14TObjEnePanarmsFPvs(arg0, *((s16 *) (((s8 *) arg0) + 0xB8)));
  *((s32 *) (((s8 *) arg0) + 0x60)) = arg3;
  VecCopy__FP3VecPC3Vec(((u8 *) arg0) + 0x38, (void *) arg2);
  *((s32 *) (((s8 *) arg0) + 0x378)) = 1;
  *((s32 *) (((s8 *) arg0) + 0x37C)) = 0xFFFF;
  *((f32 *) (((s8 *) arg0) + 0x388)) = lbl_805DA67C;
  *((f32 *) (((s8 *) arg0) + 0x384)) = lbl_805DA67C;
  *((f32 *) (((s8 *) arg0) + 0x380)) = lbl_805DA67C;
  *((f32 *) (((s8 *) arg0) + 0x38C)) = lbl_805DA67C;
  return arg0;
}
}
s32 water_bomb_hit_nearby(u8 *arg0) {
    s32 hit;
    Ent_800E8AD0 *e;
    Ent_800E8AD0 *e2;
    Hit_800E8AD0 h = lbl_8043D260[0];
    u16 id;
    s32 id2;
    hit = 0;
    h.dmg = M2C_FIELD(arg0, f32 *, 0x390);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    id = ((u16 (*)(void *, s32, f32))find_nearest_visible_player)(arg0, 0, lbl_805DA6A8);
    if (id != 0xFFFF) {
        e = ((Ent_800E8AD0 *(*)(s32))get_player_by_client_id)(id);
        if (e != NULL && !(horizontal_distance_squared(arg0 + 0x2FC, (u8 *)e + 0x2FC) > lbl_805DA6A8)) {
            if (lbl_805DA6B4 != e->m21(M2C_FIELD(arg0, s32 *, 0x38C), h, 0, -1, -1)) {
                e->m23(arg0);
            }
            hit = 1;
        }
    }
    id2 = find_nearest_enemy_masked__15TObjEneSlimeOneFPvf(arg0, lbl_805DA6A8);
    if (id2 != 0xFFFF) {
        e2 = get_enemy_entity(id2);
        if (e2 != NULL && !(horizontal_distance_squared(arg0 + 0x2FC, (u8 *)e2 + 0x2FC) > lbl_805DA6A8)) {
            if (lbl_805DA6B4 != e2->m21(M2C_FIELD(arg0, s32 *, 0x38C), h, 0, -1, -1)) {
                e2->m23(arg0);
            }
            hit = 1;
        }
    }
    return hit;
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void render__21TObjEneSlimeWaterBombFv(u8 *arg0) {
    Vec_800E8C6C v;
    s32 spC;
    s32 sp8;
    f32 d;
    f32 k;
    ((int (*)(void*))push_matrix)(arg0);
    translate_matrix(0, M2C_FIELD(arg0, f32 *, 0x38), lbl_805DA670 + M2C_FIELD(arg0, f32 *, 0x380), M2C_FIELD(arg0, f32 *, 0x40));
    ((M2C_UNK (*)(void *, s32 *, s32 *))direction_to_rotation_xz)(arg0 + 0x248, &spC, &sp8);
    rotate_matrix_z(0, sp8);
    rotate_matrix_x(0, spC + 0x4000);
    d = M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x380);
    if (d > lbl_805DA6C8) {
        d = lbl_805DA6C8;
    } else if (d < lbl_805DA6B4) {
        d = lbl_805DA6B4;
    }
    k = lbl_805DA6CC * (lbl_805DA67C - d / lbl_805DA6C8) + lbl_805DA670;
    v.x = v.y = k;
    v.z = lbl_805DA67C;
    scale_current_matrix(&v);
    draw_blob_shadow(0);
    ((int (*)(void))pop_matrix)();
}
extern int fold_flush_8;
#pragma pop

void run_task__21TObjEneSlimeWaterBombFv(Bomb_800E8D4C *arg0) {
    s32 die = 0;
    arg0->vel.y += lbl_805DA6D0;
    vec3_add_to(&arg0->pos, &arg0->vel);
    if (++arg0->timer > 0x14F) {
        die = 1;
    }
    {
        Vec_800E8D4C p = arg0->pos;
        p.y += lbl_805DA6AC;
        if (((s32 (*)(void *, void *, void *))project_actor_to_ground)(arg0, &p, arg0->hit) != 0) {
            arg0->ground = p.y;
            if (arg0->pos.y <= arg0->ground) {
                arg0->pos.y = arg0->ground;
                arg0->vel.y *= lbl_805DA6D4;
                spawn_particle_effect(&arg0->pos, 0xE2);
            }
        } else {
            die = 1;
        }
    }
    if (arg0->link != NULL) {
        copy_pos__11TNowLoadingFPvPv(arg0->link, &arg0->pos);
    }
    if (((s32 (*)(s32))is_in_water_bomb_states__15TObjEneSlimeOneFPv)(arg0->owner) != 0 || ((s32 (*)(void *))water_bomb_hit_nearby)(arg0) != 0) {
        die = 1;
    }
    {
        f32 t = arg0->life + lbl_805DA6D8;
        arg0->life = t;
        if (t >= lbl_805DA6DC || die != 0) {
            spawn_particle_effect(&arg0->pos, 0xE2);
            ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(arg0);
        }
    }
}

void * create__21TObjEneSlimeWaterBombFPvPv(void *arg0, void *arg1) {
    void *o;
    o = ((void * (*)(int))__nw__7TObjectFUl)(0x398);
    if (o != NULL) {
        o = TObjEneSlimeWaterBomb__ct((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

void *__dt__21TObjEneSlimeWaterBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneSlimeWaterBomb;
        if (M2C_FIELD(arg0, void **, 0x388) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x388)); M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0; }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void *TObjEneSlimeWaterBomb__ct(void *arg0, void *arg1, void *arg2) {
    f32 s;
    f32 c;
    ((s32 (*)(void *, void *))initialize__9TObjEnemyFPv)(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneSlimeWaterBomb;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D2AE0;
    M2C_FIELD(arg0, void **, 0x38C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x10), s32 *, 0x60);
    VecCopy__FP3VecPC3Vec((u8 *) arg0 + 0x38, M2C_FIELD(arg0, u8 **, 0x10) + 0x38);
    s = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    c = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x38) += lbl_805DA6E0 * s;
    M2C_FIELD(arg0, f32 *, 0x3C) += lbl_805DA6E4;
    M2C_FIELD(arg0, f32 *, 0x40) += lbl_805DA6E0 * c;
    M2C_FIELD(arg0, f32 *, 0x374) = lbl_805DA6D8 * s;
    M2C_FIELD(arg0, f32 *, 0x378) = lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805DA6D8 * c;
    M2C_FIELD(arg0, f32 *, 0x384) = lbl_805DA6B4;
    M2C_FIELD(arg0, s32 *, 0x388) = create_particle_emitter((u8 *) arg0 + 0x38, 0xCF);
    M2C_FIELD(arg0, f32 *, 0x390) = *dispatch_shared_handler_a__6TLobbyFPv(lbl_804966EC[get_attack_target__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x38C))]);
    if (M2C_FIELD(arg0, f32 *, 0x390) < lbl_805DA6B4) {
        M2C_FIELD(arg0, f32 *, 0x390) = lbl_805DA6B4;
    }
    M2C_FIELD(arg0, s32 *, 0x394) = 0;
    return arg0;
}
extern int fold_flush_9;
#pragma pop

void TObjPlayer__sub_800E9090(Bomb_800E9090 *self) {
    Vec_800E9090 c;
    Vec_800E9090 b;
    f32 s;
    s32 ang;
    s32 t;
    s32 w1;
    s32 w0;
    s = lbl_805DA678 * self->f3A0;
    Vec_800E9090 a = self->pos;
    subtract_vector(&a, &self->vel);
    a.x *= lbl_805DA678;
    a.y *= lbl_805DA678;
    a.z *= lbl_805DA678;
    VecCopy__FP3VecPC3Vec(&c, &self->vel);
    vec3_add_to(&c, &a);
    c.y += lbl_805DA6E8;
    ang = (*(const f64 *)&lbl_8043D280) * ((f32 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(a.x, a.z);
    b.x = lbl_805DA6EC;
    b.y = lbl_805DA6F0;
    b.z = lbl_805DA6EC * vector_length(&a) / lbl_805DA6F4;
    if (b.x > b.z) {
        b.x = b.z;
    }
    if (s < lbl_805DA684 || b.x < lbl_805DA684) {
        return;
    }
    push_material_color_override__10TObjPlayerFffff(s, lbl_805DA6F8, lbl_805DA6B4, lbl_805DA67C);
    ((void (*)(void))push_matrix)();
    ((void (*)(void *))post_translate_matrix)(&c);
    rotate_matrix_y(0, ang);
    ((void (*)(int, void *))set_monitor_position_vec3__10TObjPlayerFPvPv)(0, &b);
    t = lbl_804966E4[self->f3F4];
    ((M2C_UNK (*)(int))set_global_param__8TObjFishFi)(TObjFish__sub_8001EDB0(self->f380, t));
    draw_chunk_object(get_bml_model(self->f380, t));
    ((int (*)(void))pop_matrix)();
    ((void (*)(void))init_render_globals__10TObjPlayerFv)();
}

void fn_800E9238(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800E9238, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800E9238, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800E9238, sp10) == 0x8) ? 1 : -1];
    Stack_800E9238 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    ((f32 (*)(void *, void *))subtract_vector)((void *) (&stack.sp8), (void *) (arg0 + 0x374));
    stack.sp8 *= lbl_805DA6FC;
    stack.spC *= lbl_805DA6FC;
    stack.sp10 *= lbl_805DA6FC;
    ((f32 (*)(void *, void *))vec3_add_to)((void *) (arg0 + 0x374), (void *) (&stack.sp8));
}

void copy_position__15TObjEneSlimeOneFi(s32 arg0) {
    ((M2C_UNK (*)(s32, s32))VecCopy__FP3VecPC3Vec)(arg0 + 0x374, arg0 + 0x38);
}

void fn_800E9538(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E8) = create_particle_emitter((void *) (arg0 + 0x38), (int) (0xE1));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) lbl_805DA708;
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) lbl_805DA6B4;
    ((void (*)(void *, s32))TObjEneSlimeOne__sub_800EC7F4)((void *)((int) (M2C_FIELD(arg0, s32 *, 0x388))), (s32)((int) (7)));
    set_display_mode__15TObjEneSlimeOneFPvi((void *)((void *) (arg0)), (s32)((int) (0)));
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void update_effect_fade_lifetime(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3A0) + lbl_805DA70C;
    M2C_FIELD(arg0, f32 *, 0x3A0) = temp_f1;
    if (temp_f1 < lbl_805DA6B4) {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) lbl_805DA6B4;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv(arg0);
    }
}
extern int fold_flush_10;
#pragma pop

void fn_800E95F4(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3F0));
    if ((temp_r3 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0)) {
        fn_800EB778(M2C_FIELD(arg0, u8 **, 0x3F0), (s32) M2C_FIELD(arg0, u16 *, 0x1C));
    }
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, s32 *, 0x390) = 5;
    refresh_lobby_state__10TObjPlayerFPv(arg0);
    ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x4003A81B, (u32) (arg0 + 0x38), 0, 0);
    ((s32 (*)(s32, s32))spawn_particle_effect)((s32) (arg0 + 0x2FC), 0xFE);
    ((void (*)(void *, s32))TObjEneSlimeOne__sub_800EC7F4)(M2C_FIELD(arg0, u8 **, 0x388), 5);
    set_display_mode__15TObjEneSlimeOneFPvi(arg0, 0);
}

void TObjEneSlimeOne__sub_800E969C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        ((M2C_UNK (*)(void *, s32))set_state__15TObjEneSlimeOneFPvi)((void *)(arg0), (s32)(5));
    }
}

void init_split_effect__15TObjEneSlimeOneFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA67C;
    spawn_particle_effect((void *)((void *) (arg0 + 0x2FC)), (int)((int) (0xCE)));
    play_sound_effect((int) (0x4003A61A), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    ((M2C_UNK (*)(int, int))TObjEneSlimeOne__sub_800EC7F4)((int) (M2C_FIELD(arg0, s32 *, 0x388)), (int) (5));
    ((M2C_UNK (*)(void *, int))set_display_mode__15TObjEneSlimeOneFPvi)((void *) (arg0), (int) (0));
}

void update_tick__15TObjEneSlimeOneFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x394) + 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r3;
    if (!(temp_r3 & 3)) {
        spawn_particle_effect((void *)(arg0 + 0x2FC), (int)(0xE0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (is_timer_active__15TObjEneSlimeOneFPv(arg0) != 0) {
            ((M2C_UNK (*)(void *, s32))set_state__15TObjEneSlimeOneFPvi)((void *)(arg0), (s32)(7));
            return;
        }
        ((M2C_UNK (*)(void *, s32))set_state__15TObjEneSlimeOneFPvi)((void *)(arg0), (s32)(6));
    }
}

void reset_display_state__15TObjEneSlimeOneFPv(void* a0) { *(float*)((char*)a0 + 0x3b0) = lbl_805DA67C; *(float*)((char*)a0 + 0x3ac) = lbl_805DA67C; *(float*)((char*)a0 + 0x3a8) = lbl_805DA67C; *(int*)((char*)a0 + 0x394) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)4); ((int (*)(void*, void*))set_display_mode__15TObjEneSlimeOneFPvi)(a0, (void*)2); }

void tick_timer__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        ((M2C_UNK (*)(void *, s32))set_state__15TObjEneSlimeOneFPvi)(arg0, 5);
    }
}

#pragma push
#pragma fp_contract on
void start_tail_attack__15TObjEneSlimeOneFPv(Self_800E984C *self) {
    f32 r;
    s32 ang;
    s32 n;
    f32 len;
    Tgt_800E984C *t;
    t = ((Tgt_800E984C * (*)(s32))get_player_by_client_id)(self->target);
    if (t == NULL || (t->flags & 0x02000800)) {
        ((M2C_UNK (*)(void *, s32))set_state__15TObjEneSlimeOneFPvi)(self, 5);
        return;
    }
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&self->dest, &t->pos);
    r = lbl_805DA6AC * calc_boss4_scale__10TObjPlayerFi(self) + lbl_805DA710;
    ang = lbl_805DA714 * calc_boss4_scale__10TObjPlayerFi(self);
    self->dest.x = r * sin_table_lookup(ang) + self->dest.x;
    self->dest.z = r * cos_table_lookup(ang) + self->dest.z;
    Vec_800E984C dir = self->dest;
    subtract_vector(&dir, &self->pos);
    len = vector_length(&dir);
    if (lbl_805DA6B4 == len) {
        ((M2C_UNK (*)(void *, s32))set_state__15TObjEneSlimeOneFPvi)(self, 5);
        return;
    }
    n = len / lbl_805DA66C;
    if (vector_length(&dir) <= lbl_805DA718) {
        dir.x = (*(const f32 *)&lbl_805DA67C);
        dir.z = dir.y = lbl_805DA6B4;
    } else {
        normalize_vector(&dir);
    }
    dir.x *= lbl_805DA66C;
    dir.y *= lbl_805DA66C;
    dir.z *= lbl_805DA66C;
    Vec_800E984C pos = self->pos;
    pos.y += lbl_805DA6AC;
    while (n > 0) {
        Vec_800E984C tmp = pos;
        if (project_actor_to_ground(self, &tmp, 0) == 0 || csnLookAt(&self->pos, &pos) != 0) {
            ((M2C_UNK (*)(void *, s32))set_state__15TObjEneSlimeOneFPvi)(self, 9);
            return;
        }
        n--;
        ((void (*)(void *, void *))vec3_add_to)(&pos, &dir);
    }
    self->f390 = 0x5A;
    TObjEneSlimeOne__sub_800EC7F4((void*)((void *)self->f388), (void*)((void *)0));
    play_sound_effect(0x4003A318, &self->dest, 0, 0);
    ((void (*)(void *, void *, s32, void *))create__22TObjEneSlimeTailAttackFiiii)(self, &self->dest, self->f60, self);
    ((int (*)(void*, void*))set_display_mode__15TObjEneSlimeOneFPvi)((void*)(self), (void*)((void *)2));
}
extern int fold_flush_11;
#pragma pop

void update_water_bomb_timer__15TObjEneSlimeOneFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x394) = (s32) (M2C_FIELD(arg0, s32 *, 0x394) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0 > 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))spawn_particle_effect)(arg0 + 0x2FC, 0xFF);
    } else if (temp_r0 == 0) {
        ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0x4003A017, arg0 + 0x38, 0, 0);
        ((M2C_UNK (*)(void *, M2C_UNK))spawn_particle_effect)(arg0 + 0x2FC, 0xE2);
        ((M2C_UNK (*)(void *, void *))create__21TObjEneSlimeWaterBombFPvPv)(arg0, arg0);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (is_timer_active__15TObjEneSlimeOneFPv(arg0) != 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 7);
            return;
        }
        ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 5);
    }
}

void begin_appear__15TObjEneSlimeOneFPv(void* p) { *(int*)((char*)p + 0x390) = 90; *(int*)((char*)p + 0x394) = 19; TObjEneSlimeOne__sub_800EC7F4(*(void**)((char*)p + 0x388), (void*)3); ((int (*)(void*, void*))set_display_mode__15TObjEneSlimeOneFPvi)(p, (void*)2); }

void TObjPlayer__sub_800E9BCC(Obj_800E9BCC *o) {
    f32 v[3];
    s32 t;
    v[0] = 1.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    if (o->f3CC != 0xFFFF) {
        calc_distance_to_client__10TObjPlayerFiUsUi((void *)(o), (u16)(o->f3CC), (void *)(v));
    }
    t = (s32) (lbl_8043D280[0] * get_ad_end_text_start__10TObjPlayerFv(v[0], v[2]));
    o->f60 = approach_angle_limited(o->f60, t, 0x200);
    if (angle_difference_abs(o->f60, t) < 0x200) {
        o->f390 = 0;
    }
    VecCopy__FP3VecPC3Vec(o->prev, o->pos);
    if (vector_length((void *)(v)) <= lbl_805DA718) {
        v[0] = 1.0f;
        v[1] = 0.0f;
        v[2] = 0.0f;
    } else {
        normalize_vector((void *)(v));
    }
    v[0] *= lbl_805DA71C;
    v[1] *= lbl_805DA71C;
    v[2] *= lbl_805DA71C;
    vec3_add_to((void *)(o->pos), (void *)(v));
    if (project_actor_to_ground((void *)(o), (void *)(o->pos), (int)(0)) == 0 || csnLookAt(o->prev, o->pos) != 0) {
        VecCopy__FP3VecPC3Vec(o->pos, o->prev);
    }
    if (--o->f390 <= 0) {
        if (vector_length((void *)(v)) > lbl_805DA720 || calc_boss4_scale__10TObjPlayerFi(o) < lbl_805DA724) {
            set_state__15TObjEneSlimeOneFPvi((TSlime_800EAE78 *)(o), (s32)(9));
        } else {
            set_state__15TObjEneSlimeOneFPvi((TSlime_800EAE78 *)(o), (s32)(10));
        }
    }
}

void TObjPlayer__sub_800E9D7C(void* p) { ((int (*)(void*, void*, void*))set_random_timer__15TObjEneSlimeOneFPvii)(p, (void*)30, (void*)30); TObjEneSlimeOne__sub_800EC7F4(*(void**)((char*)p + 0x388), (void*)0); ((int (*)(void*, void*))set_display_mode__15TObjEneSlimeOneFPvi)(p, (void*)2); }

void TObjPlayer__sub_800E9DC8(Obj_800E9DC8 *arg0) {
    f32 sp[3];
    s32 r = 0;
    s32 t;
    arg0->f60 = arg0->f60 + arg0->f3C4;
    if (find_nearest_enemy_with_flag__15TObjEneSlimeOneFPvif(arg0, sp, lbl_805DA728) != 0xFFFF) {
        t = (s32) (lbl_8043D280[0] * get_ad_end_text_start__10TObjPlayerFv(sp[0], sp[2]));
        if (angle_difference_abs(arg0->f60, t) < 0x444) {
            arg0->f60 = t;
            r = 1;
        }
    }
    arg0->f390 = arg0->f390 - 1;
    if (r != 0 || arg0->f390 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)((void *)(arg0), (M2C_UNK)(9));
    }
}

void init_slime_state__10TObjPlayerFPv(void *arg0) {
    ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))set_random_timer__15TObjEneSlimeOneFPvii)(arg0, 0x1E, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0x888;
    if (calc_boss4_scale__10TObjPlayerFi(arg0) > lbl_805DA678) {
        M2C_FIELD(arg0, s32 *, 0x3C4) = M2C_FIELD(arg0, s32 *, 0x3C4) * 0xFFFFFFFF;
    }
    TObjEneSlimeOne__sub_800EC7F4((void*)(M2C_FIELD(arg0, s32 *, 0x388)), (void*)(1));
    ((int (*)(void*, int))set_display_mode__15TObjEneSlimeOneFPvi)((void*)(arg0), (int)(2));
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800E9EFC(u8 *arg0) {
    Vec_800E9EFC sp14;
    Vec_800E9EFC sp8;
    f32 f;
    u16 r;
    s32 n;

    f = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x39C));
    if (f < lbl_805DA6B4) {
        f = lbl_805DA6B4;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = f * (f32)M2C_FIELD(arg0, s32 *, 0x3C4) + (f32)M2C_FIELD(arg0, s32 *, 0x60);
    if (M2C_FIELD(arg0, s32 *, 0x3CC) == 0xFFFF) {
        r = find_nearest_visible_player(arg0, &sp14, lbl_805DA72C);
        if (r != 0xFFFF &&
            angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32)(lbl_8043D280[0] * ((f32 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(sp14.x, sp14.z))) < 0x1C71) {
            M2C_FIELD(arg0, s32 *, 0x39C) = 0;
            M2C_FIELD(arg0, s32 *, 0x3CC) = r;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x39C) -= 0x600;
    if (M2C_FIELD(arg0, s32 *, 0x39C) <= 0) {
        n = (f32)M2C_FIELD(get_bml_motion(M2C_FIELD(arg0, s32 *, 0x380), 10), u32 *, 4) / lbl_805DA678;
        M2C_FIELD(arg0, s32 *, 0x39C) = 0;
        if (M2C_FIELD(arg0, s32 *, 0x3CC) != 0xFFFF) {
            sp8.x = 1.0f;
            sp8.y = 0.0f;
            sp8.z = 0.0f;
            calc_distance_to_client__10TObjPlayerFiUsUi(arg0, M2C_FIELD(arg0, s32 *, 0x3CC), &sp8);
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), (s32)(lbl_8043D280[0] * ((f32 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(sp8.x, sp8.z)), 0x280);
        }
        if (M2C_FIELD(arg0, s32 *, 0x390) > n) {
            TObjEneSlimeOne__sub_800EC7F4((void *)M2C_FIELD(arg0, s32 *, 0x388), (void *)0);
            M2C_FIELD(arg0, s32 *, 0x390) = n;
        } else if (--M2C_FIELD(arg0, s32 *, 0x390) <= 0) {
            if (M2C_FIELD(arg0, s32 *, 0x3CC) == 0xFFFF) {
                ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 5);
            } else {
                ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 8);
            }
        }
    }
}
extern int fold_flush_12;
#pragma pop

void TObjPlayer__sub_800EA120(u8 *arg0) {
  unsigned int new_var;
  *((s32 *) (((s8 *) arg0) + 0x3CC)) = 0xFFFF;
  *((s32 *) (((s8 *) arg0) + 0x39C)) = (s32) ((((s32) (lbl_805DA730 * calc_boss4_scale__10TObjPlayerFi((void *)((s32) arg0)))) + 4) << 0x10);
  *((s32 *) (((s8 *) arg0) + 0x390)) = 0x7FFFFFFF;
  *((s32 *) (((s8 *) arg0) + 0x3C4)) = 0x400;
  new_var = 1;
  if (calc_boss4_scale__10TObjPlayerFi((void *)((s32) arg0)) > (*(const f32 *)&lbl_805DA678))
  {
    *((s32 *) (((s8 *) arg0) + 0x3C4)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x3C4))) * (-new_var));
  }
  TObjEneSlimeOne__sub_800EC7F4((void*)((int) (*((s32 *) (((s8 *) arg0) + 0x388)))), (void*)((int) new_var));
  ((int (*)(void*, int))set_display_mode__15TObjEneSlimeOneFPvi)((void*)(arg0), (int)(2));
}

void update_dive_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394) - 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0;
    if (temp_r0 == 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))spawn_particle_effect)(arg0 + 0x2FC, 0xCD);
    }
    if (is_reached_target_depth__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x388)) == 1) {
        ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 3);
    }
}

void enter_appear_state__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x394) = 0x14;
    ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0x4003AD1D, arg0 + 0x38, 0, 0);
    TObjEneSlimeOne__sub_800EC7F4((void*)(M2C_FIELD(arg0, s32 *, 0x388)), (void*)(0xA));
    ((int (*)(void*, int))set_display_mode__15TObjEneSlimeOneFPvi)((void*)(arg0), (int)(1));
}

void update_slime_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394) - 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0;
    if (temp_r0 == 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))spawn_particle_effect)(arg0 + 0x2FC, 0xCD);
    }
    if (is_reached_target_depth__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x388)) == 1) {
        if (is_timer_active__15TObjEneSlimeOneFPv(arg0) != 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 7);
            return;
        }
        ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 6);
    }
}

void enter_slime_state__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x394) = 8;
    TObjEneSlimeOne__sub_800EC7F4((void*)(M2C_FIELD(arg0, s32 *, 0x388)), (void*)(9));
    ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0x4003AD1D, arg0 + 0x38, 0, 0);
    ((int (*)(void*, int))set_display_mode__15TObjEneSlimeOneFPvi)((void*)(arg0), (int)(1));
}

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void TObjPlayer__sub_800EA364(u8 *arg0) {
    Vec_800EA364 sp8;
    f32 s;
    f32 c;
    f32 t;
    f32 d;
    s32 i;
    s32 ang;
    M2C_FIELD(arg0, s32 *, 0x60) += 0x100;
    if (M2C_FIELD(arg0, f32 *, 0x398) > lbl_805DA6B4) {
        M2C_FIELD(arg0, s32 *, 0x39C) += 0xC00;
        d = 0.25f * (0.5f * (0.5f + sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x39C))));
        t = M2C_FIELD(arg0, f32 *, 0x3B4) + d;
        M2C_FIELD(arg0, f32 *, 0x3B4) = t;
        if (t > 2.5f) {
            M2C_FIELD(arg0, f32 *, 0x3B4) = 2.5f;
        }
    } else {
        t = M2C_FIELD(arg0, f32 *, 0x3B4) - lbl_805DA734;
        M2C_FIELD(arg0, f32 *, 0x3B4) = t;
        if (t < lbl_805DA6B4) {
            M2C_FIELD(arg0, f32 *, 0x3B4) = lbl_805DA6B4;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x398) -= M2C_FIELD(arg0, f32 *, 0x3B4);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x44, arg0 + 0x38);
    for (i = 1; i < 15; i++) {
        M2C_FIELD(arg0, f32 *, 0x38) += M2C_FIELD(arg0, f32 *, 0x3B4) * M2C_FIELD(arg0, f32 *, 0x3B8);
        M2C_FIELD(arg0, f32 *, 0x3C) += M2C_FIELD(arg0, f32 *, 0x3B4) * M2C_FIELD(arg0, f32 *, 0x3BC);
        M2C_FIELD(arg0, f32 *, 0x40) += M2C_FIELD(arg0, f32 *, 0x3B4) * M2C_FIELD(arg0, f32 *, 0x3C0);
        if (TObjEneSlimeOne__sub_800EAD84((Obj_800EAD84 *)(arg0)) != 0 && csnLookAt(arg0 + 0x44, arg0 + 0x38) == 0) {
            break;
        }
        ang = i << 12;
        if (i & 1) {
            ang *= -1;
        }
        s = sin_table_lookup(ang);
        c = cos_table_lookup(ang);
        M2C_FIELD(arg0, f32 *, 0x3B8) = c * M2C_FIELD(arg0, f32 *, 0x3B8) - s * M2C_FIELD(arg0, f32 *, 0x3C0);
        M2C_FIELD(arg0, f32 *, 0x3C0) = s * M2C_FIELD(arg0, f32 *, 0x3B8) + c * M2C_FIELD(arg0, f32 *, 0x3C0);
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x38, arg0 + 0x44);
    }
    if (M2C_FIELD(arg0, f32 *, 0x398) <= lbl_805DA6B4 && lbl_805DA6B4 == M2C_FIELD(arg0, f32 *, 0x3B4)) {
        if (find_nearest_visible_player(arg0, &sp8, lbl_805DA720) != 0xFFFF && vector_length(&sp8) > lbl_805DA6E0) {
            ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 4);
        } else {
            ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 3);
        }
    }
}
extern int fold_flush_13;
#pragma pop

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void TObjPlayer__sub_800EA56C(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r31;
    M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) (*(const f32 *)&lbl_805DA6B4);
    if (find_nearest_visible_player(arg0, arg0 + 0x3B8, lbl_805DA6DC) == 0xFFFF) {
        ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)((void *) (arg0), (int) (2));
        return;
    }
    temp_r31 = (s32) (lbl_805DA738 * calc_boss4_scale__10TObjPlayerFi((void *) (arg0)));
    M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) ((lbl_805DA6E0 * sin_table_lookup((int) (temp_r31))) + M2C_FIELD(arg0, f32 *, 0x3B8));
    M2C_FIELD(arg0, f32 *, 0x3C0) = (f32) ((lbl_805DA6E0 * cos_table_lookup(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x3C0));
    if (vector_length(arg0 + 0x3B8) <= lbl_805DA718) {
        ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)((void *) (arg0), (int) (2));
        return;
    }
    ((M2C_UNK (*)(void *))normalize_vector)((void *) (arg0 + 0x3B8));
    temp_f1 = (lbl_805DA6E4 * calc_boss4_scale__10TObjPlayerFi((void *) (arg0))) + lbl_805DA720;
    M2C_FIELD(arg0, f32 *, 0x398) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (*(const f32 *)&lbl_805DA67C);
    TObjEneSlimeOne__sub_800EC7F4((void *) M2C_FIELD(arg0, s32 *, 0x388), (void *) 8);
    ((int (*)(void*, int))set_display_mode__15TObjEneSlimeOneFPvi)((void *) (arg0), (int) (1));
}
extern int fold_flush_14;
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800EA678(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f31;
    var_f31 = (*(const f32 *)&lbl_805DA67C);
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) (lbl_805DA708 * ((*(const f32 *)&lbl_805DA67C) - M2C_FIELD(arg0, f32 *, 0x398)));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 0) - M2C_FIELD(&lbl_8043D230.value, f32 *, 0))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 4) - M2C_FIELD(&lbl_8043D230.value, f32 *, 4))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 8) - M2C_FIELD(&lbl_8043D230.value, f32 *, 8))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1 > lbl_805DA740) {
        var_f31 = ((*(const f32 *)&lbl_805DA67C) - temp_f1) / lbl_805DA73C;
    }
    temp_f1_2 = var_f31 * (lbl_805DA744 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x390) << 0xA));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A8) * ((*(const f32 *)&lbl_805DA67C) + temp_f1_2));
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B0) * ((*(const f32 *)&lbl_805DA67C) - temp_f1_2));
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (M2C_FIELD(arg0, s32 *, 0x390) + 1);
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1_3 >= (*(const f32 *)&lbl_805DA678)) {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (*(const f32 *)&lbl_805DA67C);
    } else {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (lbl_805DA748 * temp_f1_3);
    }
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x398) + lbl_805DA74C;
    M2C_FIELD(arg0, f32 *, 0x398) = temp_f1_4;
    if (temp_f1_4 < (*(const f32 *)&lbl_805DA6B4)) {
        ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)((void *)(arg0), (M2C_UNK)(0));
    }
}
extern int fold_flush_15;
#pragma pop

void init_slime_display__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x398) = lbl_805DA67C; *(float*)((char*)a0 + 0x3a4) = lbl_805DA6B4; ((int (*)(void*, int))set_display_mode__15TObjEneSlimeOneFPvi)((void*)(a0), (int)(0)); TObjEneSlimeOne__sub_800EC7F4((void*)((void*)(*(int*)((char*)a0 + 0x388))), (void*)((void*)7)); }

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800EA820(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f31;
    var_f31 = (*(const f32 *)&lbl_805DA67C);
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) (lbl_805DA708 * ((*(const f32 *)&lbl_805DA67C) - M2C_FIELD(arg0, f32 *, 0x398)));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 0) - M2C_FIELD(&lbl_8043D230.value, f32 *, 0))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 4) - M2C_FIELD(&lbl_8043D230.value, f32 *, 4))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 8) - M2C_FIELD(&lbl_8043D230.value, f32 *, 8))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1 > lbl_805DA740) {
        var_f31 = ((*(const f32 *)&lbl_805DA67C) - temp_f1) / lbl_805DA73C;
    }
    temp_f1_2 = var_f31 * (lbl_805DA670 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x390) << 0xC));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A8) * ((*(const f32 *)&lbl_805DA67C) + temp_f1_2));
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B0) * ((*(const f32 *)&lbl_805DA67C) - temp_f1_2));
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (M2C_FIELD(arg0, s32 *, 0x390) + 1);
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1_3 >= (*(const f32 *)&lbl_805DA678)) {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (*(const f32 *)&lbl_805DA67C);
    } else {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (lbl_805DA748 * temp_f1_3);
    }
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x398) + lbl_805DA750;
    M2C_FIELD(arg0, f32 *, 0x398) = temp_f1_4;
    if (temp_f1_4 > (*(const f32 *)&lbl_805DA67C)) {
        if (find_nearest_visible_player(arg0, 0, lbl_805DA6DC) != 0xFFFF) {
            ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 3);
        } else {
            ((M2C_UNK (*)(void *, M2C_UNK))set_state__15TObjEneSlimeOneFPvi)(arg0, 2);
        }
    }
}
extern int fold_flush_16;
#pragma pop

void reset_display__15TObjEneSlimeOneFPv(void* a0) { set_display_mode__15TObjEneSlimeOneFPvi((void *)((void*)(a0)), (s32)((void*)(0))); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffbffff); *(float*)((char*)a0 + 0x398) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; }

void update_wait_search__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        if (((u16 (*)(void *, M2C_UNK, f32))find_nearest_visible_player)(arg0, 0, (*(f32 *)&lbl_805DA6DC)) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C8) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C8) = 5;
            }
            set_random_timer_15__15TObjEneSlimeOneFPv((void*)((void*)(arg0)));
            return;
        }
        set_state__15TObjEneSlimeOneFPvi((TSlime_800EAE78 *)((void*)(arg0)), (s32)((void*)(1)));
    }
}

void init_state__15TObjEneSlimeOneFPv(void* a0) { ((int (*)(void))TObjEneSlimeOne__sub_800EAD84)(); *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; *(float*)((char*)a0 + 0x3b0) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3ac) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a8) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a0) = lbl_805DA6B4; *(int*)((char*)a0 + 0x3c8) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)7); set_display_mode__15TObjEneSlimeOneFPvi((void *)((void*)(a0)), (s32)((void*)((void*)0))); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x40000); set_random_timer_15__15TObjEneSlimeOneFPv((void*)((void*)(a0))); }

void set_random_timer_15__15TObjEneSlimeOneFPv(void* p) { set_random_timer__15TObjEneSlimeOneFPvii((void *)(p), (s32)(15), (s32)(15)); }

void TObjEneSlimeOne__vt59(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0xB) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        set_state__15TObjEneSlimeOneFPvi((TSlime_800EAE78 *)((void*)(arg0)), (s32)((void*)(0xB)));
    }
}

void TObjEneSlimeOne__vt60(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0xC) {
        if (((s32) M2C_FIELD(arg0, u16 *, 0x2D4) < (s32) lbl_805D586C) && (((u32 (*)(void))get_player_by_client_id)() != 0U) && (check_player_field_7cc__15TObjEneSlimeOneFPv() == 2) && ((u32) M2C_FIELD(arg0, u32 *, 0x3F0) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) M2C_FIELD(arg0, u32 *, 0x3F0)) != 0)) {
            try_spawn_child__15TObjEneSlimeOneFiPv((int)((int) (M2C_FIELD(arg0, u32 *, 0x3F0))), (void *)((void *) (arg0 + 0x38)));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        set_state__15TObjEneSlimeOneFPvi((TSlime_800EAE78 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0xC))));
    }
}

void TObjEneSlimeOne__vt61(void* p) { if (*(int*)((char*)p + 0x384) != 13) { set_state__15TObjEneSlimeOneFPvi((TSlime_800EAE78 *)((void*)(p)), (s32)((void*)((void*)13))); } }

void clear_child_flag__15TObjEneSlimeOneFPv(void *arg0) {
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x3EC) == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
    }
}

void set_target_flag_bit0__15TObjEneSlimeOneFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x38C);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
}

void set_display_mode__15TObjEneSlimeOneFPvi(void *arg0, s32 arg1) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x38C);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xF5FFF297);
    switch (arg1) {
    case 0:
        temp_r5 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x0A000000 | 0x528);
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        return;
    case 1:
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 0x18) | 0x0A000000 | 0x28);
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3EC) = 1;
        return;
    }
}

#pragma push
#pragma fp_contract on
s32 TObjEneSlimeOne__sub_800EAD84(Obj_800EAD84 *arg0) {
    Vec_800EAD84 sp = arg0->pos;
    sp.y = sp.y + lbl_805DA6AC;
    if (project_actor_to_ground((void *)(arg0), (void *)(&sp), (int)(0)) != 0) {
        arg0->pos.y += 0.5f * (sp.y - arg0->pos.y);
        return 1;
    }
    return 0;
}
#pragma pop

void set_random_timer__15TObjEneSlimeOneFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (arg1 + (s32) ((f32) arg2 * ((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)()));
}

void set_state__15TObjEneSlimeOneFPvi(TSlime_800EAE78 *arg0, s32 arg1) {
    arg0->state = arg1;
    Action_800EAE78 a = lbl_80496574[arg0->state].fn;
    if (a != 0) {}
    (arg0->*a)();
}

struct Bomb_800E9090;
void render__15TObjEneSlimeOneFv(u8 *arg0) {
    s32 temp_r31;
    if ((check_demo_mode__10TObjPlayerFv() == 0) && !(M2C_FIELD(arg0, f32 *, 0x3A0) <= lbl_805DA6B4) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805DA728, lbl_805DA6E4) != 0)) {
        temp_r31 = toggle_flag_9__10TObjPlayerFPv((void *) (arg0));
        if (M2C_FIELD(arg0, f32 *, 0x3A0) < lbl_805DA67C) {
            TObjPlayer__sub_800EBE48(M2C_FIELD(arg0, f32 *, 0x3A0));
        }
        toggle_particle_effect__10TObjPlayerFv();
        push_matrix();
        {
            Vec_800EAEE8 v = *(Vec_800EAEE8 *)(arg0 + 0x38);
            v.y += M2C_FIELD(arg0, f32 *, 0x3A4);
            post_translate_matrix(&v);
        }
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_monitor_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x3A8));
        draw_part__15TObjEneSlimeOneFPvi((int) (M2C_FIELD(arg0, s32 *, 0x388)), (int) (temp_r31));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        if (M2C_FIELD(arg0, f32 *, 0x3A0) < lbl_805DA67C) {
            init_render_globals__10TObjPlayerFv();
        }
        TObjPlayer__sub_800E9090((Bomb_800E9090 *) (arg0));
    }
}

void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneSlimeOne;
        free_collision_body_parts(arg0);
        M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0;
        if (M2C_FIELD(arg0, void **, 0x3E8) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3E8)); M2C_FIELD(arg0, M2C_UNK *, 0x3E8) = 0; }
        __dt__15TObjEneSlimeOneFis(M2C_FIELD(arg0, void **, 0x388), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneSlimeOne__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    typedef char sp8_offset[(offsetof(Stack_800EB3D4, sp8) == 0x0) ? 1 : -1];
    typedef char spE_offset[(offsetof(Stack_800EB3D4, spE) == 0x6) ? 1 : -1];
    Stack_800EB3D4 stack;
    initialize__9TObjEnemyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800EB3D4___vt__15TObjEneSlimeOne *)&__vt__15TObjEneSlimeOne).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjEneSlimeOne_class_name;
    add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (2));
    ((VObj_18_aa4667 *)(arg0))->m79(arg3);
    if (exchange_object_state__6TLobbyFPvis((void *) (arg0), (void *) (&stack.sp8), (int) (1)) != 0) {
        stack.sp8 = 0;
        stack.spE = 0;
        exchange_object_state__6TLobbyFPvis((void *) (arg0), (void *) (&stack.sp8), (int) (0));
    }
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg2;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3DC), (void *) (arg4));
    TObjEneSlimeOne__sub_800EB1B4((void *) (arg0));
    set_state__15TObjEneSlimeOneFPvi((TSlime_800EAE78 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0xE))));
    return arg0;
}

u8 *init__15TObjEneSlimeOneFPviii(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    typedef char sp8_offset[(offsetof(Stack_800EB4A0, sp8) == 0x0) ? 1 : -1];
    typedef char spE_offset[(offsetof(Stack_800EB4A0, spE) == 0x6) ? 1 : -1];
    Stack_800EB4A0 stack;
    initialize__9TObjEnemyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800EB4A0___vt__15TObjEneSlimeOne *)&__vt__15TObjEneSlimeOne).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjEneSlimeOne_class_name;
    add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (2));
    ((VObj_18_aa4667 *)(arg0))->m79(arg3);
    if (exchange_object_state__6TLobbyFPvis((void *) (arg0), (void *) (&stack.sp8), (int) (1)) != 0) {
        stack.sp8 = 0;
        stack.spE = 0;
        exchange_object_state__6TLobbyFPvis((void *) (arg0), (void *) (&stack.sp8), (int) (0));
    }
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg2;
    TObjEneSlimeOne__sub_800EB1B4((void *) (arg0));
    project_actor_to_ground((void *) (arg0), (void *) (arg0 + 0x38), (int) (0));
    set_state__15TObjEneSlimeOneFPvi((TSlime_800EAE78 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0))));
    return arg0;
}

s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x3F8);
    if (var_r31 != 0) {
        var_r4 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x20);
        if (var_r4 != 0) {
            var_r4 = ((s32 (*)(s32, s32))TObjControl__ct)(var_r4, tl_04);
        }
        var_r31 = ((s32)TObjEneSlimeOne__ct((u8 *)(var_r31), (M2C_UNK)(var_r4), (s32)(arg0), (s32)(arg1), (s32)(arg2)));
    }
    return var_r31;
}

s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x3F8);
    if (var_r31 != 0) {
        var_r4 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x20);
        if (var_r4 != 0) {
            var_r4 = ((s32 (*)(s32, s32))TObjControl__ct)(var_r4, tl_04);
        }
        var_r31 = ((s32)init__15TObjEneSlimeOneFPviii((u8 *)(var_r31), (M2C_UNK)(var_r4), (s32)(arg0), (s32)(arg1)));
    }
    return var_r31;
}
M2C_UNK try_spawn_child__15TObjEneSlimeOneFiPv(int arg0, void *arg1) {
    s32 i;
    Vec_800EB654 pos;
    Vec_800EB654 dir;
    s32 ang;
    s32 n;
    n = M2C_FIELD(arg0, s32 *, 0x3B4);
    for (i = 0; i < n && M2C_FIELD((u8 *) arg0 + i * 8, s32 *, 0x3B8) != 0; i++) {
    }
    if (i == n) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&pos, arg1);
    pos.y += lbl_805DA66C;
    ang = (s16) (lbl_805DA758 * ((f32 (*)(int)) calc_boss4_scale__10TObjPlayerFi)(arg0));
    dir.x = sin_table_lookup(ang);
    dir.y = lbl_805DA6B4;
    dir.z = cos_table_lookup(ang);
    if (vector_length((void *)(&dir)) <= lbl_805DA718) {
        dir.x = 1.0f;
        dir.y = 0.0f;
        dir.z = 0.0f;
    } else {
        normalize_vector((void *)(&dir));
    }
    play_sound_effect((int)(0x4003A619), (void *)(&pos), (int)(0), (int)(0));
    return spawn_slime_in_slot((void *) arg0, i, &pos, &dir);
}

}
