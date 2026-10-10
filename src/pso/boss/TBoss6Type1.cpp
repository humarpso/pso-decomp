#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802B5938_lbl_80470FFC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B5938_lbl_80471008 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B5970_lbl_80470FE4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B5970_lbl_80470FF0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B7E88_lbl_80470CEC {
    M2C_UNK value;
    u8 remaining[0x2C];
};

#include <stddef.h>
struct Stack_802B5140 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_802B5140_lbl_80470CD4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B5140_lbl_80470CE0 {
    const f32 value;
    u8 remaining[0x8];
};

struct Obj_802B4B34 { u8 pad[0x508]; s32 f508; s32 arr[1]; };

struct Obj_802B5E48 { u8 pad[0x498]; s32 f498; };

struct Obj_802B4D38 { u8 pad[0x4f8]; s32 arr[4]; };

struct Obj_802B5100 { u8 pad[0x3c]; f32 f3c; u8 pad2[0x424 - 0x40]; f32 f424; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Blk_802B8624 { s32 a; s32 b; s32 rest[14]; };

struct Obj_802B5DD4 { u8 pad[0x4e0]; s32 f4e0; s32 f4e4; };

struct V3_802B4BA8 { s32 x, y, z; };

struct T1_802B4BA8 {
    u8 pad0[0x38];
    V3_802B4BA8 pos;
};

struct Tbl_802B4BA8 { s32 a; s32 b; };

struct T1_802B529C {
    u8 pad0[0x378];
    s32 v[0x20];
};

struct V3_802B600C { s32 x; f32 y; s32 z; };

struct T1_802B600C { u8 pad0[0x38]; V3_802B600C pos; };

struct Ent_802B7944 { u8 pad0[0x18]; u32 f; u8 pad1c[0x10]; };

struct T1_802B7944 { u8 pad0[0xA4]; Ent_802B7944 *p; };

struct Vec_802B4C28 { s32 x, y, z; };
struct Obj_802B4C28 {
    u8 pad0[0x38];
    Vec_802B4C28 pos;
    u8 pad44[0x4F8 - 0x44];
    u32 parts[4];
    u8 pad508[0x578 - 0x508];
    Vec_802B4C28 pts[1];
};
struct Anim_802B82B8 { s32 id; f32 t; s32 f8; f32 blend; f32 f10; s32 prevId; f32 prevT; };
struct Boss_802B82B8 {
    u8 pad0[0x3FC];
    s32 f3FC;
    u8 pad400[0x43C - 0x400];
    s32 f43C;
    s32 f440;
    Anim_802B82B8 anim[2];
};
struct Tbl_802B82B8 { s32 f0; s32 f4; s32 ids[2]; };
struct Msg_802B9178 { u8 b[0x10]; };
struct S_802B8E1C { u8 a; s8 b; };

struct T1_802B8E1C { u8 pad0[0x3C]; f32 y; u8 pad40[0x438 - 0x40]; s32 f438; };

struct Boss_802B5434 { u8 pad[0x378]; s32 list[32]; };

struct Vec_802B54F0 { f32 x, y, z; };

struct Boss_802B54F0 { u8 pad[0x38]; Vec_802B54F0 pos; };

struct Boss_802B5648 { u8 pad0[0x3C]; f32 f3C; u8 pad40[0x374 - 0x40]; u32 f374; u8 pad378[0x41C - 0x378]; s8 f41C; };

struct Vec_802B5648 { f32 x, y, z; };

struct Vec_802B683C { f32 x, y, z; };

struct Boss_802B683C {
    u8 pad0[0x38];
    Vec_802B683C pos;
    u8 pad44[0x41C - 0x44];
    s8 f41C;
};

struct Vec_802B79DC { f32 x, y, z; };

struct Ent_802B79DC { Vec_802B79DC m; u8 padC[0x1C - 0xC]; Vec_802B79DC n; u8 pad28[0x2C - 0x28]; };

struct Tbl_802B79DC { s32 kind; s32 idx; };

struct Boss_802B79DC {
    u8 pad0[0x38];
    Vec_802B79DC pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xA4 - 0x64];
    Ent_802B79DC *ents;
    u8 padA8[0x578 - 0xA8];
    Vec_802B79DC a578[11];
    Vec_802B79DC a5FC[1];
};

class Boss_802B865C;
union Action_802B865C { s32 words[3]; void (Boss_802B865C::*action)(); };

struct Entry_802B865C { s32 f0; s32 anim; s32 f8; s32 act[3]; u8 pad18[0x30 - 0x18]; };

class Boss_802B865C {
public:
    u8 pad0[0x374];
    s32 state;
    s32 hist[32];
    u8 pad3F8[0x418 - 0x3F8];
    s32 f418;
    u8 pad41C[0x4B8 - 0x41C];
    s32 f4B8;
    s32 f4BC;
    s32 f4C0;
    s32 f4C4;
};

struct V3_802B6B34 { s32 x; f32 y; s32 z; };

union Val_802B6B34 { f32 f; s32 i; };

struct Arg_802B6B34 { s32 kind; Val_802B6B34 v; };

struct Base_802B6B34 { u8 pad[0x18]; };

struct Player_802B6B34 : Base_802B6B34 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Arg_802B6B34 *, s32, s32, s32);
    u8 pad1c[0x38 - 0x1C];
    V3_802B6B34 pos;
};

struct Boss_802B6B34 { u8 pad[0x488]; s32 f488; };

typedef s32 M2C_UNK;
struct Vec_802B73AC { f32 x, y, z; };

struct Boss_802B73AC {
    u8 pad0[0x408];
    s32 f408;
    u8 pad40c[0x5D8 - 0x40C];
    Vec_802B73AC a;
    Vec_802B73AC b;
};

struct Vec_802B4D5C { f32 x, y, z; };

struct Vec_802B57D4 { f32 x, y, z; };

struct Vec_802B4EAC { f32 x, y, z; };

struct Boss_802B4EAC {
    u8 pad0[0x38];
    Vec_802B4EAC pos;
    u8 pad44[0x420 - 0x44];
    Vec_802B4EAC target;
};

struct T1_802B600C;
struct Boss_802B8EE0 {
    u8 pad0[0x60];
    s32 f60;
};

struct Atk_802B8EE0 {
    s8 b0;
    u8 b1;
    s8 b2;
};

struct Boss_802B7B44 {
    u8 pad0[0x374];
    s32 f374;
    u8 pad378[0x4E8 - 0x378];
    f32 f4E8;
    s32 f4EC;
    s32 f4F0;
    s32 f4F4;
};

struct Vec_802B57D4;
struct Player_802B6B34;

struct V3_802B6C30 { s32 x; f32 y; s32 z; };

union Val_802B6C30 { f32 f; s32 i; };

struct Arg_802B6C30 { s32 kind; Val_802B6C30 v; };

struct Base_802B6C30 { u8 pad[0x18]; };

struct Player_802B6C30 : Base_802B6C30 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Arg_802B6C30 *, s32, s32, s32);
    u8 pad1c[0x38 - 0x1C];
    V3_802B6C30 pos;
};

struct ArgPair_802B6C30 {
    Arg_802B6C30 a[2];
    inline ArgPair_802B6C30(s32 r) {
        a[0].kind = 0;
        a[1].kind = 0;
        a[1].v.f = (f32)r;
        a[0].v.i = a[1].v.i;
    }
};

struct Vec_802B6C30 { f32 x, y, z; };

struct Line_802B6C30 { Vec_802B6C30 p; Vec_802B6C30 d; };

struct Boss_802B6C30 {
    u8 pad0[0x60];
    s32 angle;
    u8 pad64[0x484 - 0x64];
    s32 f484;
    u8 pad488[0x4DC - 0x488];
    f32 f4DC;
    u8 pad4E0[0x5A8 - 0x4E0];
    Vec_802B6C30 a;
    u8 pad5B4[0x5C0 - 0x5B4];
    Vec_802B6C30 b;
};

struct Anim_802B81A4 { s32 id; f32 t; s32 f8; f32 blend; f32 f10; s32 prevId; f32 prevT; };

struct Boss_802B81A4 {
    u8 pad0[0x3FC];
    s32 f3FC;
    u8 pad400[0x444 - 0x400];
    Anim_802B81A4 anim[2];
    u8 pad47C[0x650 - 0x47C];
    u32 f650[2];
};

struct Blend_802B81A4 { s32 ids[2]; f32 ts[2]; };
struct Motion_802B8384 { s32 f0; u32 frames; };

struct Anim_802B8384 {
    Motion_802B8384 *motion;
    f32 t;
    f32 speed;
    f32 blend;
    f32 rate;
    s32 f14;
    f32 f18;
};

struct Boss_802B8384 {
    u8 pad0[0x43C];
    s32 f43C;
    s32 f440;
    Anim_802B8384 anims[2];
};

extern "C" {
struct V3_802B5AD4 { f32 x, y, z; };
struct Boss_802B5AD4 {
    u8 pad0[0x38];
    V3_802B5AD4 pos;
    u8 pad44[0x438 - 0x44];
    s32 f438;
};

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 vector_length(void *, f32);
f32 subtract_vector(void *, void *);
Player_802B6B34 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
f32 get_random_float__8TObjFishFv(f32);
s32 obj_getField1c(void *);
s32 request_jittered_camera__11TBoss6Type1FPvPvPvi(void *arg0, void *arg1, void *arg2, int arg3);
extern Vec_802B57D4 TBoss6Type1__data_80470FB4;
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE2E4;
extern const f32 TBoss6Type1__data_805DE310;
extern const f32 TBoss6Type1__data_805DE338;
extern const float TBoss6Type1__data_805DE344;
extern const f32 lbl_805DE330;
extern const f32 lbl_805DE334;
extern const f32 lbl_805DE33C;
extern const f32 lbl_805DE340;
s32 count_matches__11TBoss6Type1FPvii(T1_802B529C *arg0, s32 arg1, s32 arg2);
s32 pick_random_entry__11TBoss6Type1Fiii(M2C_UNK arg0, s32 arg1, s32 arg2);
int rand_range_inclusive__11TBoss6Type1Fiii(M2C_UNK arg0, int arg1, int arg2);
s32 pick_remapped_list_value__11TBoss6Type1FPviii(Boss_802B5434 *o, s32 a, s32 b, s32 n);
s32 TBoss6Type1__sub_802B5FDC(u8 *arg0);
s32 TBoss6Type1__sub_802B5FF4(u8 *arg0);
s32 TBoss6Type1__sub_802B600C(T1_802B600C *arg0, f32 _w1);
void randomize_attack__11TBoss6Type1FPvPv(Boss_802B8EE0 *self, Atk_802B8EE0 *atk);
M2C_UNK send_6xA4_action__11TBoss6Type1FPviPv(void *o, M2C_UNK t, M2C_UNK *src);
void send_flow_action_if_idle__11TBoss6Type1FPvc(u8 *arg0, s8 arg1);
s32 rand();
extern u8 lbl_80470EB8[];
extern const f32 TBoss6Type1__data_805DE304;
extern const f32 lbl_805DE3D8;
void TBoss6Type1__sub_802B8BB4(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 vector_length(void *, f32);
f32 subtract_vector(void *, void *);
Player_802B6B34 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 project_actor_to_ground(void *, void *, s32);
s32 is_active__14TBoss6PlotFalzFPv();
s32 rand_vary_count__14TBoss6PlotFalzFif(s32, f32);
void TBoss6PlotFalz__sub_802AC724(void *, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vec3_add_to(void *, void *);
void vec3_cross(void *, void *, void *);
void normalize_vector(void *);
f32 project_point_onto_line(void *, void *, void *);
f32 xyz_distance(void *, void *);
extern const f32 TBoss6Type1__data_805DE2E0;
extern const f32 TBoss6Type1__data_805DE310;
extern const float TBoss6Type1__data_805DE344;
extern const f32 lbl_805DE378;
extern const f32 lbl_805DE388;
extern const f32 lbl_805DE38C;
void TBoss6Type1__sub_802B6C30(Boss_802B6C30 *self);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
void clear_render_callback__8TObjFishFv(u32);
void set_draw_callback_list__8TObjFishFPv(u32);
void set_global_param__8TObjFishFi(s32);
void draw_model_blend_motion(s32, Blend_802B81A4 *, f32);
void draw_model_motion(s32, s32, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
extern s32 lbl_804DF614[];
extern const f32 TBoss6Type1__data_805DE2D0;
void draw_part_motions__11TBoss6Type1FPv(Boss_802B81A4 *arg0);
extern const s32 lbl_805DE3C8;
void advance_animations__11TBoss6Type1FPv(Boss_802B8384 *self);
}

extern "C" {
void TBoss6Type1__sub_802B4B04(u8 *arg0);
u8 is_timer_expired__11TBoss6Type1FPv(u8 *arg0);
f32 sin_table_lookup(s32);
extern const f32 lbl_805DE314;
extern const f32 TBoss6Type1__data_805DE318;
extern const f32 lbl_805DE31C;
void TBoss6Type1__sub_802B5598(void *arg0, void *arg1);
extern const f32 lbl_805DE354;
s32 TBoss6Type1__sub_802B5FDC(u8 *arg0);
extern const f32 lbl_805DE358;
s32 TBoss6Type1__sub_802B5FF4(u8 *arg0);
extern const f32 TBoss6Type1__data_805DE318;
s32 TBoss6Type1__sub_802B6060(u8 *arg0);
s32 rand();
extern const f32 lbl_805DE300;
extern const f32 TBoss6Type1__data_805DE304;
s32 pick_random_entry__11TBoss6Type1Fiii(M2C_UNK arg0, s32 arg1, s32 arg2);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void decode_polar_position__11TBoss6Type1FPvPv(u8 *arg0, u8 *arg1);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
extern const f32 lbl_805DE34C;
s32 check_field4b0_threshold__11TBoss6Type1FPv(u8 *arg0);
s32 rand();
extern const f32 TBoss6Type1__data_805DE304;
extern const f32 lbl_805DE308;
int rand_range_inclusive__11TBoss6Type1Fiii(M2C_UNK arg0, int arg1, int arg2);
extern RecoveredGlobal_802B5938_lbl_80470FFC lbl_80470FFC;
extern RecoveredGlobal_802B5938_lbl_80471008 lbl_80471008;
void request_default_jittered_camera__11TBoss6Type1Fi(s32 arg0);
extern RecoveredGlobal_802B5970_lbl_80470FE4 lbl_80470FE4;
extern RecoveredGlobal_802B5970_lbl_80470FF0 lbl_80470FF0;
void TBoss6Type1__sub_802B5970(s32 arg0);
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
extern RecoveredGlobal_802B7E88_lbl_80470CEC TBoss6Type1__param_table;
extern const f32 TBoss6Type1__data_805DE2D0;
void load_params_from_table__11TBoss6Type1FPv(u8 *arg0);
extern const f32 TBoss6Type1__data_805DE2D0;
extern const s32 lbl_805DE3A8;
extern const s32 lbl_805DE3B0;
void TBoss6Type1__sub_802B7D50(u8 *arg0);
f32 cosine_ease__14TBoss6PlotFalzFf(f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 sin_table_lookup(s32);
f32 vec3_add_to(void *, void *);
f32 subtract_vector(void *, void *);
extern RecoveredGlobal_802B5140_lbl_80470CD4 lbl_80470CD4;
extern RecoveredGlobal_802B5140_lbl_80470CE0 lbl_80470CE0;
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE2E4;
extern const f32 lbl_805DE2F4;
extern const f32 lbl_805DE2F8;
extern const f32 lbl_805DE2FC;
void TBoss6Type1__sub_802B5140(s32 arg0, s32 arg1, s32 arg2);
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 lbl_805DE370;
void decrease_field_clamped_min__11TBoss6Type1FPv(u8 *arg0);
extern const f32 TBoss6Type1__data_805DE2E4;
extern const f32 lbl_805DE374;
void increase_field_clamped_max__11TBoss6Type1FPv(u8 *arg0);
s32 request_destroy__11TBoss4Type2FUi(int);
void release_effect_slot__11TBoss6Type1Fii(s32 arg0, s32 arg1);
void release_effect_slot__11TBoss6Type1Fii(s32 arg0, s32 arg1);
void TBoss6Type1__sub_802B4CF4(s32 arg0);
void request_default_jittered_camera__11TBoss6Type1Fi(s32 arg0);
void TBoss6Type1__sub_802B5970(s32 arg0);
void TBoss6Type1__sub_802B59A8(void);
void TBoss6Type1__sub_802B59CC(void *);
void TBoss6Type1__sub_802B5AB0(void);
extern const f32 lbl_805DE348;
void TBoss6Type1__sub_802B5CB4(u8 *arg0);
extern const s32 lbl_805DE2D4;
void clear_slot_array__11TBoss6Type1FPv(Obj_802B4B34 *self);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
int is_field4b0_delta_reached__11TBoss6Type1FPv(Obj_802B5E48 *self);
void TBoss6Type1__sub_802B4D38(Obj_802B4D38 *self);
extern const f32 lbl_805DE2F0;
extern const f32 lbl_805DE2EC;
void ease_toward_target__11TBoss6Type1FPvii(Obj_802B5100 *self, s32 a, s32 b);
Blk_802B8624 *copy_block__11TBoss6Type1FPvPv(Blk_802B8624 *d, Blk_802B8624 *s);
void TBoss6Type1__sub_802B5DD4(Obj_802B5DD4 *self);
u32 create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(u32, int);
extern Tbl_802B4BA8 TBoss6Type1__effect_slot_table[];
s32 copy_vec3__11TBoss4Type2FPvPv(int, void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
extern u8 lbl_80471014[];
s32 get_bml_motion(s32, s32);
extern Tbl_802B82B8 TBoss6Type1__motion_set_table[];
extern const s32 TBoss6Type1__data_805DE3C4;
void spawn_effect_slot__11TBoss6Type1FPvi(u8 *arg0, s32 arg1);
s32 count_matches__11TBoss6Type1FPvii(T1_802B529C *arg0, s32 arg1, s32 arg2);
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 lbl_805DE35C;
s32 TBoss6Type1__sub_802B600C(T1_802B600C *arg0, f32 _w1);
void clear_part_flag_bit0__11TBoss6Type1FPv(T1_802B7944 *arg0);
M2C_UNK TBoss6Type1__sub_802B909C(void *, M2C_UNK *);
M2C_UNK send_6xA4_action__11TBoss6Type1FPviPv(void *, M2C_UNK, M2C_UNK *);
extern const f32 lbl_805DE3DC;
void TBoss6Type1__sub_802B8E1C(T1_802B8E1C *arg0);
s32 rand();
extern const f32 TBoss6Type1__data_805DE304;
extern const f32 TBoss6Type1__data_805DE30C;
s32 pick_remapped_list_value__11TBoss6Type1FPviii(Boss_802B5434 *o, s32 a, s32 b, s32 n);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 vector_length(void *, f32);
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE310;
extern const f32 lbl_805DE314;
extern const f32 TBoss6Type1__data_805DE318;
void clamp_to_arena_radius__11TBoss6Type1FPvPvf(Boss_802B54F0 *o, Vec_802B54F0 *out, f32 _w2);
extern const f32 lbl_805DE320;
extern const f32 lbl_805DE324;
void calc_grid_cell_position__11TBoss6Type1FPvPv(Boss_802B5648 *o, Vec_802B5648 *out);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_by_client_id(s32);
s32 is_active__14TBoss6PlotFalzFPv();
void create_grav_ball__11TBoss6Type1FPvPv(void *, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 TBoss6Type1__data_805DE32C;
extern const float TBoss6Type1__data_805DE344;
extern const f32 TBoss6Type1__data_805DE360;
void spawn_grav_ball__11TBoss6Type1FPv(Boss_802B683C *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 vec3_add_to(void *, void *);
f32 subtract_vector(void *, void *);
s32 matrix_mult_vec(int, void *, void *);
s32 set_matrix_identity(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
extern Tbl_802B79DC TBoss6Type1__part_position_sources[];
void update_part_positions__11TBoss6Type1FPv(Boss_802B79DC *arg0);
void set_motion_set__11TBoss6Type1FPvi(void *, s32);
extern Entry_802B865C lbl_804DED14[];
void set_action_state__11TBoss6Type1FPvi(Boss_802B865C *arg0, s32 arg1);
Player_802B6B34 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_active__14TBoss6PlotFalzFPv();
s32 rand_vary_count__14TBoss6PlotFalzFif(s32, f32);
f32 vector_length(void *, f32);
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE2E0;
extern const float TBoss6Type1__data_805DE344;
void damage_players_in_range__11TBoss6Type1FPv(Boss_802B6B34 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_random_float__8TObjFishFv(f32);
M2C_UNK play_sound_effect(int, void *, int, int, void *);
void apply_radial_effect_to_players__14TBoss6PlotFalzFPvssf(void *, int, int, f32);
int TBoss6Type1__sub_802B60E8(void*);
void fn_8035648C(void *, void *, int, f32);
f32 subtract_vector(void *, void *);
extern f32 TBoss6Type1__sword_shot_hit_radii[];
extern s32 game_difficulty_selection;
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE2E4;
extern const f32 TBoss6Type1__data_805DE310;
extern const f32 TBoss6Type1__data_805DE318;
extern const f32 lbl_805DE394;
void TBoss6Type1__sub_802B73AC(Boss_802B73AC *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vector_length(void *, f32);
extern const f64 TBoss6Type1__data_80471038;
extern const f32 TBoss6Type1__data_805DE2D0;
void rotate_around_center__11TBoss6Type1FPvii(u8 *self, s32 num, s32 den);
s32 rand();
f32 xyz_distance(void *, void *);
f32 vec3_add_to(void *, void *);
void request_follow_camera_offsets(void *, void *, int);
extern Vec_802B57D4 TBoss6Type1__data_80470FB4;
extern Vec_802B57D4 lbl_80470FC0;
extern const f32 TBoss6Type1__data_805DE2E0;
extern const f32 TBoss6Type1__data_805DE304;
extern const f32 TBoss6Type1__data_805DE30C;
s32 request_jittered_camera__11TBoss6Type1FPvPvPvi(void *arg0, void *arg1, void *arg2, int arg3);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 vector_length(void *, f32);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 angle_diff_s16(s32, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f64 TBoss6Type1__data_80471038;
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE2E0;
extern const f32 TBoss6Type1__data_805DE2E4;
extern const f32 lbl_805DE2DC;
extern const f32 lbl_805DE2E8;
void interpolate_pos_to_target__11TBoss6Type1FPvii(Boss_802B4EAC *self, s32 step, s32 total);
M2C_UNK TBoss6Type1__sub_802B909C(void *, M2C_UNK *);
s32 rand();
s32 TBoss6Type1__sub_802B600C(T1_802B600C *arg0, f32 _w1);
s32 TBoss6Type1__sub_802B5FF4(u8 *arg0);
s32 TBoss6Type1__sub_802B5FDC(u8 *arg0);
extern const s8 lbl_805DE2C8[2];
extern const s8 lbl_805DE2CC[2];
extern const f32 TBoss6Type1__data_805DE2E0;
extern const f32 TBoss6Type1__data_805DE304;
extern const f32 TBoss6Type1__data_805DE30C;
extern const f32 TBoss6Type1__data_805DE32C;
extern const f32 lbl_805DE3E0;
extern const f32 lbl_805DE3E4;
void randomize_attack__11TBoss6Type1FPvPv(Boss_802B8EE0 *self, Atk_802B8EE0 *atk);
s32 rand();
f32 sin_table_lookup(s32);
f32 get_random_float__8TObjFishFv(f32);
extern const f32 TBoss6Type1__data_805DE304;
extern const f32 TBoss6Type1__data_805DE338;
extern const f32 TBoss6Type1__data_805DE360;
extern const s32 lbl_805DE3A8;
extern const s32 lbl_805DE3AC;
extern const s32 lbl_805DE3B0;
extern const s32 lbl_805DE3B4;
extern const f32 lbl_805DE3B8;
void update_sway__11TBoss6Type1FPv(Boss_802B7B44 *self);
}

extern "C" {

int TBoss6Type1__sub_802B4A70(void* p);
void TBoss6Type1__sub_802B4A90(void* p);
int TBoss6Type1__sub_802B4B14(void* p);
void TBoss6Type1__sub_802B59A8(void);
void TBoss6Type1__sub_802B5AB0(void);
void handle_6xa4_action__11TBoss6Type1FPv(void* p, u8 * _w1);
void init_parts__11TBoss6Type1FPv(void* p);
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0);
s32 is_ready__11TBoss6Type1FPv(void *arg0);
int is_time_up__11TBoss6Type1FPv(void *arg0);
void reset_fields_4e0__11TBoss6Type1FPv(void* p);
void set_flag_on_threshold__11TBoss6Type1FPv(void *arg0);
void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1);
s32 TBoss6PlotFalz__sub_802AAC74(s32);
int TBoss6Type1__sub_802B4A9C(void*);
struct Boss_802B5AD4;
void fire_at_all_players__11TBoss6Type1FPvf(Boss_802B5AD4 *, f32);
int TBoss6Type1__sub_802B60E8(void*);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
int release_object__11TBoss6Type1FPv(void*);

int TBoss6Type1__sub_802B4A70(void* p) { return release_object__11TBoss6Type1FPv(p); }
void TBoss6Type1__sub_802B4A90(void* p) { *(s32*)((char*)p + 0x680) = 0; }

void TBoss6Type1__sub_802B4B04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x508) = (s32) (M2C_FIELD(arg0, s32 *, 0x508) + 1);
}

int TBoss6Type1__sub_802B4B14(void* p) { return TBoss6Type1__sub_802B4A9C(p); }

void clear_slot_array__11TBoss6Type1FPv(Obj_802B4B34 *self) {
    s32 i;
    self->f508 = 0;
    for (i = 0; i < lbl_805DE2D4; i++) self->arr[i] = 0;
}

#pragma push
#pragma opt_common_subs off
void release_effect_slot__11TBoss6Type1Fii(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    temp_r3 = M2C_FIELD(temp_r31, u32 *, 0x4F8);
    if (temp_r3 != 0U) {
        request_destroy__11TBoss4Type2FUi((int) (temp_r3));
        M2C_FIELD(temp_r31, u32 *, 0x4F8) = 0U;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
typedef char RecoveredGlobal_802B5140_lbl_80470CD4_size[sizeof(RecoveredGlobal_802B5140_lbl_80470CD4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802B5140_lbl_80470CE0_size[sizeof(RecoveredGlobal_802B5140_lbl_80470CE0) == 0xC ? 1 : -1];

void spawn_effect_slot__11TBoss6Type1FPvi(u8 *arg0, s32 arg1) {
    u8 *p = arg0 + arg1 * 4;
    if (*(u32 *)(p + 0x4F8) == 0U) {
        V3_802B4BA8 v = ((T1_802B4BA8 *)arg0)->pos;
        *(u32 *)(p + 0x4F8) = create_particle_emitter(&v, TBoss6Type1__effect_slot_table[arg1].a);
        if (*(u32 *)(p + 0x4F8) != 0U) {
            set_flags__11TBoss4Type2FPvUi(*(u32 *)(p + 0x4F8), 0x40);
        }
    }
}

#pragma push
#pragma opt_common_subs on
#pragma opt_propagation on
void TBoss6Type1__sub_802B4C28(Obj_802B4C28 *o) {
    s32 i;
    Tbl_802B4BA8 *t = TBoss6Type1__effect_slot_table;
    for (i = 0; i < 4; i++) {
        Vec_802B4C28 v = o->pos;
        Tbl_802B4BA8 *e = &t[i];
        if (o->parts[i] != 0) {
            s32 k = e->b;
            if (k >= 0) {
                VecCopy__FP3VecPC3Vec(&v, &o->pts[k]);
            }
            copy_pos__11TNowLoadingFPvPv(o->parts[i], &v);
            switch (i) {
            case 0:
            case 1:
                copy_vec3__11TBoss4Type2FPvPv(o->parts[i], lbl_80471014);
                break;
            }
        }
    }
}
#pragma pop

void TBoss6Type1__sub_802B4CF4(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        release_effect_slot__11TBoss6Type1Fii(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

void TBoss6Type1__sub_802B4D38(Obj_802B4D38 *self) {
    s32 i;
    for (i = 0; i < 4; i++) self->arr[i] = 0;
}

void rotate_around_center__11TBoss6Type1FPvii(u8 *self, s32 num, s32 den) {
    Vec_802B4D5C v;
    f32 dist;
    s32 angle;
    s32 off;
    if (den <= 0 || num <= 0) {
        return;
    }
    {
    {
        VecCopy__FP3VecPC3Vec(&v, self + 0x38);
        v.y = TBoss6Type1__data_805DE2D0;
        dist = ((f32 (*)(void *))vector_length)(&v);
        angle = (s32)(TBoss6Type1__data_80471038 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z));
        off = (s32)(40960.0f * sin_table_lookup((s32)(32768.0f * ((f32)num / (f32)den))) / (f32)num);
        if (self[0x41C] & 1) {
            off *= -1;
        }
        angle += off;
        *(f32 *)(self + 0x38) = dist * sin_table_lookup(angle);
        *(f32 *)(self + 0x40) = dist * cos_table_lookup(angle);
        }
    }
}

#pragma push
#pragma fp_contract on
void interpolate_pos_to_target__11TBoss6Type1FPvii(Boss_802B4EAC *self, s32 step, s32 total) {
    Vec_802B4EAC v;
    s32 a0;
    s32 a1;
    f32 r0;
    f32 r1;
    f32 t;
    f32 k;
    f32 r;
    s32 a;
    if (total <= 0) return;
    if (step <= 0) {
        VecCopy__FP3VecPC3Vec(&self->pos, &self->target);
        return;
    }
    VecCopy__FP3VecPC3Vec(&v, &self->pos);
    v.y = TBoss6Type1__data_805DE2D0;
    r0 = ((f32 (*)(void *))vector_length)(&v);
    a0 = ((const f64 *)&TBoss6Type1__data_80471038)[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
    VecCopy__FP3VecPC3Vec(&v, &self->target);
    v.y = TBoss6Type1__data_805DE2D0;
    r1 = ((f32 (*)(void *))vector_length)(&v);
    a1 = ((const f64 *)&TBoss6Type1__data_80471038)[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
    t = (f32)step / (f32)total;
    if (total <= 10 || t <= TBoss6Type1__data_805DE2E0) {
        k = TBoss6Type1__data_805DE2E4 / (f32)step;
    } else {
        k = lbl_805DE2E8 * sin_table_lookup(lbl_805DE2DC * t) / (f32)step;
    }
    r = k * (r1 - r0) + r0;
    a = k * (f32)angle_diff_s16(a0, a1) + (f32)a0;
    self->pos.x = r * sin_table_lookup(a);
    self->pos.z = r * cos_table_lookup(a);
    self->pos.y += k * (self->target.y - self->pos.y);
}
#pragma pop

#pragma push
#pragma fp_contract on
void ease_toward_target__11TBoss6Type1FPvii(Obj_802B5100 *self, s32 a, s32 b) {
    s32 h = b / 2;
    if (b <= 0 || a <= h) return;
    self->f3c += lbl_805DE2EC * ((lbl_805DE2F0 + self->f424) - self->f3c);
}
#pragma pop

void TBoss6Type1__sub_802B5140(s32 arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_802B5140, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802B5140, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802B5140, sp10) == 0x8) ? 1 : -1];
    Stack_802B5140 stack;
    f32 temp_f31;
    f32 var_f30;
    f32 var_f31;
    s32 temp_r31;
    var_f30 = TBoss6Type1__data_805DE2E4 - ((f32) arg1 / (f32) arg2);
    if (var_f30 < TBoss6Type1__data_805DE2D0) {
        var_f30 = TBoss6Type1__data_805DE2D0;
    } else if (var_f30 > TBoss6Type1__data_805DE2E4) {
        var_f30 = TBoss6Type1__data_805DE2E4;
    }
    temp_r31 = (s32) (lbl_805DE2F4 * var_f30);
    temp_f31 = sin_table_lookup((s32)((int) (0x6000)));
    var_f31 = sin_table_lookup((s32)((int) (temp_r31))) / temp_f31;
    if (temp_r31 > 0x4000) {
        var_f31 += (TBoss6Type1__data_805DE2E4 - var_f31) * cosine_ease__14TBoss6PlotFalzFf((var_f30 - lbl_805DE2F8) / lbl_805DE2FC);
    }
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (&lbl_80470CE0.value));
    subtract_vector((void *) (&stack.sp8), (void *) (&lbl_80470CD4.value));
    stack.sp8 *= var_f31;
    stack.spC *= var_f31;
    stack.sp10 *= var_f31;
    vec3_add_to((void *) (&stack.sp8), (void *) (&lbl_80470CD4.value));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&stack.sp8));
}
#pragma pop

s32 count_matches__11TBoss6Type1FPvii(T1_802B529C *arg0, s32 arg1, s32 arg2) {
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

s32 pick_random_entry__11TBoss6Type1Fiii(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    var_r0 = (s32) (((f32) arg2 - lbl_805DE300) * ((*(const f32 *)&TBoss6Type1__data_805DE304) * (f32) rand()));
    if (var_r0 >= arg2) {
        var_r0 = 0;
    }
    return M2C_FIELD(arg1, M2C_UNK *, (var_r0 * 4));
}

#pragma push
#pragma fp_contract on
int rand_range_inclusive__11TBoss6Type1Fiii(M2C_UNK arg0, int arg1, int arg2) {
    if (arg1 >= arg2) {
        return arg1;
    }
    return (int) (((lbl_805DE308 + ((f32) arg2 - (f32) arg1)) * ((*(const f32 *)&TBoss6Type1__data_805DE304) * (f32) rand())) + (f32) arg1);
}
#pragma pop

s32 pick_remapped_list_value__11TBoss6Type1FPviii(Boss_802B5434 *o, s32 a, s32 b, s32 n) {
    s32 i;
    if (n > 0x20) {
        n = 0x20;
    }
    for (i = 0; i < n; i++) {
        s32 v = o->list[i];
        if (v == a) {
            return b;
        }
        if (v == b) {
            return a;
        }
    }
    if (TBoss6Type1__data_805DE304 * (f32)rand() < TBoss6Type1__data_805DE30C) {
        return a;
    }
    return b;
}

void clamp_to_arena_radius__11TBoss6Type1FPvPvf(Boss_802B54F0 *o, Vec_802B54F0 *out, f32 _w2) {
    Vec_802B54F0 v = o->pos;
    f32 len;
    f32 s;
    v.y = TBoss6Type1__data_805DE2D0;
    len = vector_length((void *)(&v), _w2);
    if (len <= TBoss6Type1__data_805DE310) {
        VecCopy__FP3VecPC3Vec((void *)(out), (void *)(&o->pos));
        return;
    }
    s = lbl_805DE314 / len;
    v.x = v.x * s;
    v.z = v.z * s;
    out->x = v.x;
    out->y = TBoss6Type1__data_805DE318;
    out->z = v.z;
}

#pragma push
#pragma fp_contract on
void TBoss6Type1__sub_802B5598(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 var_f31;
    s32 temp_r31;
    s32 var_r4;
    u32 temp_r5;
    u32 var_r5;
    {
        s32 k = M2C_FIELD(arg0, s32 *, 0x374) * 0x12D687;
        s8 c = M2C_FIELD(arg0, s8 *, 0x41C);
        temp_r5 = c * k;
    }
    var_r4 = ((temp_r5 & 3) * 0x1800) + 0x2000;
    var_r5 = (temp_r5 >> 3U) & 1;
    if ((temp_r5 >> 2U) & 1) {
        var_r4 = -var_r4;
    }
    var_f31 = lbl_805DE314;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x60) + var_r4;
    if ((s32) var_r5 != 0) {
        var_f31 = lbl_805DE31C;
    }
    temp_f1 = var_f31 * sin_table_lookup(temp_r31);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) TBoss6Type1__data_805DE318;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (var_f31 * cos_table_lookup(temp_r31));
}
#pragma pop

#pragma push
#pragma fp_contract on
void calc_grid_cell_position__11TBoss6Type1FPvPv(Boss_802B5648 *o, Vec_802B5648 *out) {
    u32 t = o->f374;
    s8 b = o->f41C;
    s32 sh = (t >> 1) & 3;
    s32 a = (b >> sh) & 0xF;
    s32 c = (b >> ((sh + 2) & 3)) & 0xF;
    if (t & 1) {
        a = ~a & 0xF;
        c = ~c & 0xF;
    }
    out->x = lbl_805DE320 * (f32)a - lbl_805DE324;
    out->y = o->f3C;
    out->z = lbl_805DE320 * (f32)c - lbl_805DE324;
}
#pragma pop

void handle_6xa4_action__11TBoss6Type1FPv(void* p, u8 * _w1) { decode_polar_position__11TBoss6Type1FPvPv((u8 *)((char*)p + 0x1), (u8 *)(_w1)); }

extern const f32 TBoss6Type1__data_805DE2D0;

void decode_polar_position__11TBoss6Type1FPvPv(u8 *arg0, u8 *arg1) {
  f32 temp_f31;
  f32 temp_f30;
  s32 temp_r31;
  temp_r31 = ((s8) (*((u8 *) (((s8 *) arg0) + 0)))) << 8;
  temp_f31 = (f32) (((s8) (*((u8 *) (((s8 *) arg0) + 1)))) * 0xA);
  temp_f30 = (f32) (((s8) (*((u8 *) (((s8 *) arg0) + 2)))) * 0xA);
  *((f32 *) (((s8 *) arg1) + 0)) = (f32) (temp_f31 * sin_table_lookup(temp_r31));
  *((f32 *) (((s8 *) arg1) + 8)) = (f32) (temp_f31 * cos_table_lookup((s32)(temp_r31)));
  *((f32 *) (((s8 *) arg1) + 4)) = temp_f30;
}

typedef char RecoveredGlobal_802B5938_lbl_80470FFC_size[sizeof(RecoveredGlobal_802B5938_lbl_80470FFC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802B5938_lbl_80471008_size[sizeof(RecoveredGlobal_802B5938_lbl_80471008) == 0xC ? 1 : -1];

#pragma push
#pragma fp_contract on
s32 request_jittered_camera__11TBoss6Type1FPvPvPvi(void *arg0, void *arg1, void *arg2, int arg3) {
    f32 dist;
    Vec_802B57D4 off;
    if (arg1 == NULL) {
        arg1 = &TBoss6Type1__data_80470FB4;
    }
    if (arg2 == NULL) {
        arg2 = &lbl_80470FC0;
    }
    dist = TBoss6Type1__data_805DE2E0 * xyz_distance(arg1, arg2);
    if (dist < 4.0f) {
        dist = 4.0f;
    }
    off.x = dist * (TBoss6Type1__data_805DE304 * (f32)rand() - TBoss6Type1__data_805DE30C);
    off.y = dist * (TBoss6Type1__data_805DE304 * (f32)rand() - TBoss6Type1__data_805DE30C);
    off.z = dist * (TBoss6Type1__data_805DE304 * (f32)rand() - TBoss6Type1__data_805DE30C);
    {
        Vec_802B57D4 p = *(Vec_802B57D4 *)arg1;
        vec3_add_to(&p, &off);
        request_follow_camera_offsets(&p, arg2, arg3);
    }
}
#pragma pop

void request_default_jittered_camera__11TBoss6Type1Fi(s32 arg0) {
    request_jittered_camera__11TBoss6Type1FPvPvPvi((void *)((void *) (arg0)), (void *)((void *) (&lbl_80470FFC.value)), (void *)((void *) (&lbl_80471008.value)), (int)((int) (0xFFFF)));
}

typedef char RecoveredGlobal_802B5970_lbl_80470FE4_size[sizeof(RecoveredGlobal_802B5970_lbl_80470FE4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802B5970_lbl_80470FF0_size[sizeof(RecoveredGlobal_802B5970_lbl_80470FF0) == 0xC ? 1 : -1];
void TBoss6Type1__sub_802B5970(s32 arg0) {
    request_jittered_camera__11TBoss6Type1FPvPvPvi((void *)((void *) (arg0)), (void *)((void *) (&lbl_80470FE4.value)), (void *)((void *) (&lbl_80470FF0.value)), (int)((int) (0xFFFF)));
}

void TBoss6Type1__sub_802B59A8(void) {
    ((M2C_UNK (*)(f32))fire_at_all_players__11TBoss6Type1FPvf)(TBoss6Type1__data_805DE2D0);
}

extern const f32 TBoss6Type1__data_805DE32C;

void TBoss6Type1__sub_802B5AB0(void) {
    ((M2C_UNK (*)(f32))fire_at_all_players__11TBoss6Type1FPvf)(TBoss6Type1__data_805DE32C);
}

#pragma push
#pragma fp_contract on
void fire_at_all_players__11TBoss6Type1FPvf(Boss_802B5AD4 *self, f32 dy) {
    V3_802B5AD4 me;
    V3_802B5AD4 pp;
    V3_802B5AD4 ofs;
    V3_802B5AD4 d;
    V3_802B5AD4 out;
    s32 n;
    s32 i;
    Player_802B6B34 *p;
    f32 h;
    f32 dist;
    f32 a;
    f32 b;
    f32 c;

    n = get_game_mode__6TLobbyFv();
    VecCopy__FP3VecPC3Vec(&me, &self->pos);
    if (self->f438 != 0) {
        me.y -= dy;
    } else {
        me.y += dy;
    }
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        VecCopy__FP3VecPC3Vec(&ofs, &TBoss6Type1__data_80470FB4);
        if (p == 0) continue;
        VecCopy__FP3VecPC3Vec(&pp, (u8 *)p + 0x38);
        pp.y += ofs.y;
        VecCopy__FP3VecPC3Vec(&d, &me);
        subtract_vector(&d, &pp);
        h = d.y;
        d.y = 0.0f;
        dist = ofs.z + ((f32 (*)(void *))vector_length)(&d);
        if (dist <= 1.0f) dist = 1.0f;
        out.x = 0.0f;
        out.z = lbl_805DE330;
        out.y = 25.43f - h * lbl_805DE330 / dist;
        if (out.y < 5.0f) {
            out.y = 5.0f;
            if (h > 1e-5f) {
                a = 14.799999f * dist;
                out.z = a / h;
                if (out.z < 35.42f) {
                    b = 35.42f + dist;
                    out.z = 35.42f;
                    c = 35.42f * h - a;
                    if (get_random_float__8TObjFishFv(b) > 1e-5f) {
                        a = c / b;
                        if (a > 10.0f) a = 10.0f;
                        ofs.y += a;
                    }
                }
            }
        }
        request_jittered_camera__11TBoss6Type1FPvPvPvi(self, &ofs, &out, obj_getField1c(p));
    }
}
#pragma pop

void TBoss6Type1__sub_802B5CB4(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x374);
    switch (temp_r0) {
    case 1:
    case 2:
    case 4:
    case 24:
    case 25:
        TBoss6Type1__sub_802B5AB0();
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        TBoss6Type1__sub_802B5970((s32) arg0);
        break;
    case 22:
        TBoss6Type1__sub_802B59CC(arg0);
        break;
    case 21:
        TBoss6Type1__sub_802B59A8();
        break;
    case 26:
        TBoss6Type1__sub_802B5AB0();
        break;
    case 30:
    case 31:
        TBoss6Type1__sub_802B5970((s32) arg0);
        break;
    case 27:
        TBoss6Type1__sub_802B5970((s32) arg0);
        break;
    case 32:
        TBoss6Type1__sub_802B5970((s32) arg0);
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 34:
    case 35:
    case 36:
        request_default_jittered_camera__11TBoss6Type1Fi((s32) arg0);
        break;
    case 37:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x410) > (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x40C) - lbl_805DE348)) {
            request_default_jittered_camera__11TBoss6Type1Fi((s32) arg0);
            break;
        }
        break;
    default:
        request_jittered_camera__11TBoss6Type1FPvPvPvi((void *)((void *)((s32) arg0)), (void *)((void *)(NULL)), (void *)((void *)(NULL)), (int)((int)(0xFFFF)));
        break;
    }
}

u8 is_timer_expired__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4E0);
    if ((temp_r5 <= 0) || (temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4), ((temp_r0 < 0) != 0))) {
        return 1U;
    }
    return (u8) (temp_r5 <= temp_r0);
}

void TBoss6Type1__sub_802B5DD4(Obj_802B5DD4 *self) {
    if (self->f4e0 <= 0 || self->f4e4 < 0) return;
    self->f4e4++;
}

void reset_fields_4e0__11TBoss6Type1FPv(void* p) { *(s32*)((char*)p + 0x4e0) = 0; *(s32*)((char*)p + 0x4e4) = 0; }
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0) {
    return TBoss6PlotFalz__sub_802AAC74(M2C_FIELD(arg0, s32 *, 0x3F8)) > 0x20;
}

int is_field4b0_delta_reached__11TBoss6Type1FPv(Obj_802B5E48 *self) {
    return calc_field4b0_delta__11TBoss6Type1FPv(self) >= self->f498 ? 1 : 0;
}

s32 is_ready__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) && (calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= (s32) M2C_FIELD(arg0, s32 *, 0x48C))) {
        return 1;
    }
    return 0;
}

s32 check_field4b0_threshold__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = (s32) (M2C_FIELD(arg0, f32 *, 0x4B4) * (f32) M2C_FIELD(arg0, s32 *, 0x494));
    if (calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= temp_r31) {
        M2C_FIELD(arg0, f32 *, 0x4B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x4B4) * lbl_805DE34C);
        return 1;
    }
    return 0;
}

int is_time_up__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        return 0;
    }
    return calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= (s32) M2C_FIELD(arg0, s32 *, 0x490) ? 1 : 0;
}

extern f32 lbl_805DE350;

void set_flag_on_threshold__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x4AC) == 0) && (M2C_FIELD(arg0, f32 *, 0x4D8) < lbl_805DE350)) {
        M2C_FIELD(arg0, s32 *, 0x4AC) = 1;
    }
}

    extern const float TBoss6Type1__data_805DE344;

s32 TBoss6Type1__sub_802B5FDC(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805DE354;
}

s32 TBoss6Type1__sub_802B5FF4(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) > lbl_805DE358;
}

s32 TBoss6Type1__sub_802B600C(T1_802B600C *arg0, f32 _w1) {
    V3_802B600C v = arg0->pos;
    v.y = TBoss6Type1__data_805DE2D0;
    return vector_length((void *)(&v), _w1) < lbl_805DE35C;
}

s32 TBoss6Type1__sub_802B6060(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) > TBoss6Type1__data_805DE318;
}

void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1) { *(float*)((char*)a1 + 0x4) = TBoss6Type1__data_805DE344; }

void init_parts__11TBoss6Type1FPv(void* p) { set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5d8)); set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5e4)); set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5f0)); TBoss6Type1__sub_802B60E8(p); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C_boss6_1 { u8 bytes[0xc]; };

struct Stack_802B7D74_boss6_1
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

#include <stddef.h>
struct Stack_802B9204_boss6_1 {
    M2C_UNK sp8;
    s8 spC;
    u8 trailing_storage[0xF];
};

extern "C" {
u8 * TBoss6Type1__sub_802B96C0(s32 arg0, s32 arg1);
M2C_UNK render_actor_shadows_default();
extern const f32 lbl_805DE3D0;
void render_shadows__11TBoss6Type1Fv(u8 *arg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 angle_difference_abs(int, int);
s32 approach_angle_limited(int, int, int);
extern const f64 TBoss6Type1__data_80471038;
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE310;
void update_turn_to_center__11TBoss6Type1FPv(u8 *arg0);
void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
int is_idle__11TBoss6Type1FPv(void* p);
void step_and_send_60__11TBoss6Type1FPv(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);
void send_flow_action_if_idle__11TBoss6Type1FPvc(u8 *arg0, s8 arg1);
}

extern "C" {

void TBoss6Type1__vt42(void);
void TBoss6Type1__vt43(void);
void TBoss6Type1__vt44(void);
void TBoss6Type1__vt45(void);
void TBoss6Type1__vt46(void);
void TBoss6Type1__vt47(void);
void TBoss6Type1__vt48(void);
void TBoss6Type1__vt60(u8 *arg0);
void TBoss6Type1__vt61(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
void copy_transform__11TBoss6Type1FPvPv(void* p, void* q);
s32 create__11TBoss6Type1Fi(s32 arg0);
void do_attack__11TBoss6Type1FPv(void *arg0);
void enable_parts__11TBoss6Type1FPv(void *arg0);
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p);
int is_idle__11TBoss6Type1FPv(void* p);
void latch_phase_counter__11TBoss6Type1FPv(void *arg0);
void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1);
int read_be16_field2__11TBoss6Type1FPv(void* p);
void reset_param__11TBoss6Type1FPv(void *arg0);
void set_child_flags__11TBoss6Type1FPv(void *arg0);
void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
void step_and_send_60__11TBoss6Type1FPv(void* p);
void update_parts_flags__11TBoss6Type1FPv(void *arg0);
void update_position__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK play_sound_effect(int, void *, int, int, void *);
s32 TBoss6Type1__ct(s32, s32, s32);
M2C_UNK TBoss6Type1__sub_802B909C(void *, M2C_UNK *);
M2C_UNK send_6xA4_action__11TBoss6Type1FPviPv(void *, M2C_UNK, M2C_UNK *);
int TLobby__send_and_handle_60(void*);
s32 TObjControl__ct(s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 rand();
int read_be16_field2__10TObjPlayerFPv(void*);

extern const f32 TBoss6Type1__data_805DE2D0;

void reset_param__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2D0;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void decrease_field_clamped_min__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) (M2C_FIELD(arg0, f32 *, 0x4DC) + lbl_805DE370);
    if (M2C_FIELD(arg0, f32 *, 0x4DC) < TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2D0;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
void increase_field_clamped_max__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) (M2C_FIELD(arg0, f32 *, 0x4DC) + lbl_805DE374);
    if (M2C_FIELD(arg0, f32 *, 0x4DC) > TBoss6Type1__data_805DE2E4) {
        M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2E4;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void spawn_grav_ball__11TBoss6Type1FPv(Boss_802B683C *arg0) {
    Vec_802B683C v;
    s32 flag;
    u8 *pl;
    s8 b;
    s32 ang;
    f32 r;
    flag = 1;
    pl = get_player_by_client_id(arg0->f41C & 3);
    if (is_active__14TBoss6PlotFalzFPv() != 0) {
        VecCopy__FP3VecPC3Vec(&v, pl + 0x38);
        flag = 0;
        v.y = arg0->pos.y;
    }
    b = arg0->f41C;
    if (b & 0x40) {
        flag = 1;
    }
    if (flag != 0) {
        ang = (b & 0xF) << 12;
        r = TBoss6Type1__data_805DE32C * ((f32)((b >> 3) & 0xF) / TBoss6Type1__data_805DE360) + (*(const f32 *)&TBoss6Type1__data_805DE344);
        VecCopy__FP3VecPC3Vec(&v, &arg0->pos);
        v.x += r * sin_table_lookup(ang);
        v.z += r * cos_table_lookup(ang);
    }
    create_grav_ball__11TBoss6Type1FPvPv(arg0, &v);
}
#pragma pop

void damage_players_in_range__11TBoss6Type1FPv(Boss_802B6B34 *arg0) {
    s32 n;
    s32 i;
    Player_802B6B34 *p;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv() != 0) {
            V3_802B6B34 v = p->pos;
            v.y = TBoss6Type1__data_805DE2D0;
            if (!(((f32 (*)(void *))vector_length)(&v) > (*(const f32 *)&TBoss6Type1__data_805DE344))) {
                Arg_802B6B34 a[2];
                s32 r = rand_vary_count__14TBoss6PlotFalzFif(arg0->f488, TBoss6Type1__data_805DE2E0);
                a[0].kind = 1;
                a[1].kind = 1;
                a[1].v.f = (f32)r;
                a[0].v.i = a[1].v.i;
                p->m21(arg0, a, 0, -1, -1);
            }
        }
    }
}

#define VLEN(p) ((f32 (*)(void *))vector_length)(p)
#pragma push
#pragma fp_contract on
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss6Type1__sub_802B6C30(Boss_802B6C30 *self) {
    s32 n;
    Vec_802B6C30 *p4;
    Vec_802B6C30 *p3;
    Vec_802B6C30 *p2;
    Vec_802B6C30 *p1;
    Vec_802B6C30 *pA;
    Vec_802B6C30 *pB;
    s32 i;
    Player_802B6C30 *pl;
    s32 inside;
    Vec_802B6C30 *a;
    Vec_802B6C30 *b;
    s32 j;
    f32 prev;
    f32 t;
    Vec_802B6C30 pts[5];
    Line_802B6C30 line;
    Vec_802B6C30 A;
    Vec_802B6C30 B;
    Vec_802B6C30 mid;
    Vec_802B6C30 off;
    Vec_802B6C30 e;
    Vec_802B6C30 f;
    Vec_802B6C30 c;
    Vec_802B6C30 m;
    Vec_802B6C30 d3;
    Vec_802B6C30 d0;
    Vec_802B6C30 q2;
    Vec_802B6C30 q1;
    if (0.0f == self->f4DC) {
        return;
    }
    n = get_game_mode__6TLobbyFv();
    b = &self->b;
    a = &self->a;
    if (xyz_distance(a, b) < TBoss6Type1__data_805DE344) {
        return;
    }
    VecCopy__FP3VecPC3Vec(&mid, a);
    vec3_add_to(&mid, b);
    mid.x *= 0.5f;
    mid.y *= 0.5f;
    mid.z *= 0.5f;
    pA = &A;
    pB = &B;
    p4 = &pts[4];
    p3 = &pts[3];
    p2 = &pts[2];
    p1 = &pts[1];
    A.x = self->f4DC * (a->x - mid.x) + mid.x;
    A.y = self->f4DC * (a->y - mid.y) + mid.y;
    A.z = self->f4DC * (a->z - mid.z) + mid.z;
    B.x = self->f4DC * (b->x - mid.x) + mid.x;
    B.y = self->f4DC * (b->y - mid.y) + mid.y;
    B.z = self->f4DC * (b->z - mid.z) + mid.z;
    for (i = 0; i < n; i++) {
        pl = ((Player_802B6C30 *)get_player_data__10TObjPlayerFi(i));
        if (is_active__14TBoss6PlotFalzFPv() == 0) {
            continue;
        }
        inside = 1;
        VecCopy__FP3VecPC3Vec(&pts[0], (void *)VecCopy__FP3VecPC3Vec(p3, (void *)VecCopy__FP3VecPC3Vec(p4, pA)));
        VecCopy__FP3VecPC3Vec(p1, (void *)VecCopy__FP3VecPC3Vec(p2, pB));
        off.x = lbl_805DE388 * sin_table_lookup(self->angle);
        off.y = 0.0f;
        off.z = lbl_805DE388 * cos_table_lookup(self->angle);
        vec3_add_to(p2, &off);
        vec3_add_to(p3, &off);
        for (j = 0; j < 4; j++) {
            VecCopy__FP3VecPC3Vec(&e, &pts[j + 1]);
            subtract_vector(&e, &pts[j]);
            e.y = 0.0f;
            VecCopy__FP3VecPC3Vec(&f, &pl->pos);
            subtract_vector(&f, &pts[j]);
            e.y = 0.0f;
            vec3_cross(&e, &f, &c);
            if (j > 0 && ((prev < 0.0f && c.y >= 0.0f)
                          || (prev > 0.0f && c.y <= 0.0f))) {
                inside = 0;
                break;
            }
            prev = c.y;
        }
        if (inside == 0) {
            continue;
        }
        pl->m21(self, ArgPair_802B6C30(rand_vary_count__14TBoss6PlotFalzFif(self->f484, TBoss6Type1__data_805DE2E0)).a, 0, -1, -1);
        VecCopy__FP3VecPC3Vec(&d0, pA);
        subtract_vector(&d0, pB);
        d0.y = 0.0f;
        VecCopy__FP3VecPC3Vec(&d3, &pl->pos);
        d3.y = 0.0f;
        line.p.x = 0.5f * (A.x + B.x);
        line.p.y = 0.0f;
        line.p.z = 0.5f * (A.z + B.z);
        line.d.x = -sin_table_lookup(self->angle);
        line.d.y = 0.0f;
        line.d.z = -cos_table_lookup(self->angle);
        t = project_point_onto_line(&d3, &line, NULL);
        t = 0.5f * VLEN(&d0) - t;
        if (t <= 0.0f) {
            continue;
        }
        VecCopy__FP3VecPC3Vec(&m, pA);
        subtract_vector(&m, pB);
        m.y = 0.0f;
        if (VLEN(&m) <= TBoss6Type1__data_805DE310) {
            continue;
        }
        normalize_vector(&m);
        m.x *= t;
        m.z *= t;
        VecCopy__FP3VecPC3Vec(&q2, pA);
        subtract_vector(&q2, &pl->pos);
        q2.y = 0.0f;
        VecCopy__FP3VecPC3Vec(&q1, pB);
        subtract_vector(&q1, &pl->pos);
        q1.y = 0.0f;
        t = VLEN(&q1);
        if (VLEN(&q2) > t) {
            m.x *= lbl_805DE38C;
            m.z *= lbl_805DE38C;
        }
        vec3_add_to(&m, &pl->pos);
        if (project_actor_to_ground(self, &m, 0) == 0) {
            m.y = 0.0f;
            if (VLEN(&m) <= TBoss6Type1__data_805DE310) {
                continue;
            }
            normalize_vector(&m);
            m.x *= lbl_805DE378;
            m.z *= lbl_805DE378;
        }
        TBoss6PlotFalz__sub_802AC724(pl, &m);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss6Type1__sub_802B73AC(Boss_802B73AC *self) {
    Vec_802B73AC *a;
    Vec_802B73AC *b;
    s32 ok;
    s32 flag;
    Vec_802B73AC p;
    Vec_802B73AC d;
    f32 sc;
    f32 t;
    s32 idx;
    TBoss6Type1__sub_802B60E8(self);
    a = &self->a;
    b = &self->b;
    ok = 0;
    if ((b->y < a->y && b->y < TBoss6Type1__data_805DE2D0) || (b->y > a->y && b->y > TBoss6Type1__data_805DE2D0)) {
        ok = 1;
    }
    if (get_random_float__8TObjFishFv(a->y) > lbl_805DE394 || get_random_float__8TObjFishFv(b->y) > lbl_805DE394) {
        ok = 0;
    }
    if (ok != 0) {
        VecCopy__FP3VecPC3Vec(&d, b);
        subtract_vector(&d, a);
        if (d.y <= TBoss6Type1__data_805DE310) {
            t = TBoss6Type1__data_805DE2E4;
        } else {
            t = -a->y / d.y;
        }
        p.x = t * d.x + a->x;
        p.y = TBoss6Type1__data_805DE2D0;
        p.z = t * d.z + a->z;
        idx = game_difficulty_selection;
        if (idx < 0 || idx >= 4) {
            idx = 0;
        }
        sc = TBoss6Type1__sword_shot_hit_radii[idx];
        flag = 0;
        if ((self->f408 & 3) == 0) {
            flag = 1;
        }
        fn_8035648C(self, &p, flag, sc);
        if (flag != 0) {
            ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)(0x4003B210, &p, 0, 0);
            apply_radial_effect_to_players__14TBoss6PlotFalzFPvssf(&p, 0xC0, 0xF, TBoss6Type1__data_805DE318);
        }
    }
}
#pragma pop

struct ArgPair_802B7530 {
    Arg_802B6B34 a[2];
    inline ArgPair_802B7530(s32 r) {
        a[0].kind = 0;
        a[1].kind = 0;
        a[1].v.f = (f32)r;
        a[0].v.i = a[1].v.i;
    }
};
struct Vec_802B7530 { f32 x, y, z; };
struct W3_802B7530 { s32 x, y, z; };
struct Line_802B7530 { Vec_802B7530 p; Vec_802B7530 d; };
struct Boss_802B7530 {
    u8 pad0[0x3FC];
    s32 f3FC;
    u8 pad400[0x408 - 0x400];
    u32 f408;
    u8 pad40C[0x460 - 0x40C];
    u32 f460;
    f32 f464;
    f32 f468;
    u8 pad46C[0x47C - 0x46C];
    s32 f47C;
    u8 pad480[0x56C - 0x480];
    Vec_802B7530 f56C;
    u8 pad578[0x5D8 - 0x578];
    Vec_802B7530 a;
    Vec_802B7530 b;
};

f32 project_point_onto_line(void *, void *, void *);
f32 vec3_dot(void *, void *);
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
extern const f32 TBoss6Type1__data_805DE2E0;
extern const f32 TBoss6Type1__data_805DE360;
extern const f32 lbl_805DE398;
extern const f32 lbl_805DE39C;
extern const f32 lbl_805DE3A0;
#pragma push
#pragma fp_contract on
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_beam_attack__11TBoss6Type1FPv(Boss_802B7530 *self) {
    Line_802B7530 line;
    Vec_802B7530 v;
    Vec_802B7530 w;
    Vec_802B7530 out;
    Vec_802B7530 A;
    Vec_802B7530 B;
    f32 t = self->f464;
    u32 motion = self->f460;
    s32 n;
    s32 i;

    if (motion != get_bml_motion(self->f3FC, TBoss6Type1__motion_set_table[13].ids[1])) return;
    if (t < lbl_805DE398 || t > lbl_805DE39C) return;
    {
    f32 end = lbl_805DE398 + self->f468;
    if (t >= lbl_805DE398 && t < end) {
        ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)(0x40039209, &self->b, 0, 0);
    }
    }
    init_parts__11TBoss6Type1FPv(self);
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        Player_802B6B34 *p = get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv() != 0) {
            Vec_802B7530 *a = &self->a;
            VecCopy__FP3VecPC3Vec(&v, &p->pos);
            v.y = TBoss6Type1__data_805DE2D0;
            VecCopy__FP3VecPC3Vec(&w, &self->b);
            subtract_vector(&w, a);
            line.p.x = a->x;
            line.p.y = TBoss6Type1__data_805DE2D0;
            line.p.z = a->z;
            line.d.x = w.x;
            line.d.y = TBoss6Type1__data_805DE2D0;
            line.d.z = w.z;
            if (!(project_point_onto_line(&v, &line, &out) > TBoss6Type1__data_805DE360)) {
                A.x = line.p.x;
                A.y = line.p.z;
                B.x = line.p.x + line.d.x;
                B.z = line.p.z + line.d.z;
                subtract_vector(&A, &out);
                subtract_vector(&B, &out);
                A.y = TBoss6Type1__data_805DE2D0;
                B.y = TBoss6Type1__data_805DE2D0;
                if (!(vec3_dot(&A, &B) > TBoss6Type1__data_805DE2D0)) {
                    p->m21(self, ArgPair_802B7530(rand_vary_count__14TBoss6PlotFalzFif(self->f47C, TBoss6Type1__data_805DE2E0)).a, 0, -1, -1);
                }
            }
        }
    }
    if (self->f408 & 1) return;
    W3_802B7530 c = *(W3_802B7530 *)&self->b;
    W3_802B7530 e;
    Vec_802B7530 dlt;
    f32 dist;
    *(f32 *)&c.y = TBoss6Type1__data_805DE2D0;
    dist = xyz_distance(&c, &self->f56C);
    if (!(dist < lbl_805DE3A0)) {
        f32 r = dist / lbl_805DE3A0;
        s32 cnt;
        f32 s;
        s32 j;
        e.x = c.x;
        e.y = c.y;
        e.z = c.z;
        cnt = (s32)(1.0f + r);
        if (cnt > 4) cnt = 4;
        s = 1.0f / (f32)cnt;
        VecCopy__FP3VecPC3Vec(&dlt, &self->f56C);
        subtract_vector(&dlt, &c);
        dlt.x *= s;
        dlt.y *= s;
        dlt.z *= s;
        for (j = 0; j < cnt; j++) {
            spawn_particle_effect_with_flags(&e, 0x212, 0x40);
            spawn_particle_effect_with_flags(&e, 0x213, 0x40);
            vec3_add_to(&e, &dlt);
        }
        VecCopy__FP3VecPC3Vec(&self->f56C, &c);
    }
    {
        ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)(0x4003B00A, &c, 0, 0);
        apply_radial_effect_to_players__14TBoss6PlotFalzFPvssf(&c, 0xC0, 0xF, TBoss6Type1__data_805DE318);
    }
}
#pragma pop

void enable_parts__11TBoss6Type1FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x70) | 1);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x9C) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x9C) | 1);
        temp_r4_3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_3, s32 *, 0xC8) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 0xC8) | 1);
        temp_r4_4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_4, s32 *, 0xF4) = (s32) (M2C_FIELD(temp_r4_4, s32 *, 0xF4) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x120) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x120) | 1);
    }
}

void set_child_flags__11TBoss6Type1FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x44) | 1);
    }
}

void clear_part_flag_bit0__11TBoss6Type1FPv(T1_802B7944 *arg0) {
    Ent_802B7944 *p = arg0->p;
    if (p != NULL) {
        Ent_802B7944 *end = (Ent_802B7944 *)((u8 *)p + 0x134);
        for (; p < end; p++) {
            p->f &= ~1;
        }
    }
}

void update_parts_flags__11TBoss6Type1FPv(void *arg0) {
    clear_part_flag_bit0__11TBoss6Type1FPv((T1_802B7944 *)(arg0));
    if (M2C_FIELD(arg0, s32 *, 0x418) & 1) {
        set_child_flags__11TBoss6Type1FPv((void *)(arg0));
    }
    if (M2C_FIELD(arg0, s32 *, 0x418) & 2) {
        enable_parts__11TBoss6Type1FPv((void *)(arg0));
    }
}

extern const f32 lbl_805DE3A0;
extern const f32 lbl_805DE3A4;

void update_part_positions__11TBoss6Type1FPv(Boss_802B79DC *arg0) {
    Vec_802B79DC v;
    s32 i;
    Vec_802B79DC *base;
    Ent_802B79DC *e;
    if (arg0->ents != NULL) {
        for (i = 0; i < 7; i++) {
            Tbl_802B79DC *t;
            e = &arg0->ents[i];
            t = &TBoss6Type1__part_position_sources[i];
            base = NULL;
            switch (t->kind) {
            case 1:
                base = arg0->a578;
                break;
            case 0:
                base = arg0->a5FC;
                break;
            }
            if (base == NULL) {
                return;
            }
            VecCopy__FP3VecPC3Vec(&v, &base[t->idx]);
            subtract_vector(&v, &arg0->pos);
            push_matrix();
            set_matrix_identity(0);
            rotate_matrix_y(0, -arg0->f60);
            matrix_mult_vec(0, &v, e);
            pop_matrix();
            VecCopy__FP3VecPC3Vec(&e->n, e);
            vec3_add_to(&e->n, &arg0->pos);
        }
    }
}

void update_position__11TBoss6Type1FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x438) != 0) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A0);
}

typedef struct Stack_802B7D74_boss6_1 Stack_802B7D74_boss6_1;

#pragma push
#pragma fp_contract on
void update_sway__11TBoss6Type1FPv(Boss_802B7B44 *self) {
    f32 d;
    f32 target;
    s32 v;
    if (--self->f4F4 < 0) {
        self->f4F0 = (f32)lbl_805DE3AC * (TBoss6Type1__data_805DE304 * (f32)rand()) + (f32)lbl_805DE3A8;
        self->f4F4 = (f32)lbl_805DE3B4 * (TBoss6Type1__data_805DE304 * (f32)rand()) + (f32)lbl_805DE3B0;
    }
    target = 0.0f;
    switch (self->f374) {
    case 29:
    case 30:
    case 31:
    case 32:
    case 37:
        break;
    case 23:
        target = self->f4E8 - lbl_805DE3B8 * get_random_float__8TObjFishFv(sin_table_lookup(self->f4EC));
        break;
    default:
        v = self->f4F0;
        if (self->f4E8 < 0.0f) {
            v = TBoss6Type1__data_805DE338 * (f32)v;
        }
        self->f4EC += v;
        target = TBoss6Type1__data_805DE360 * sin_table_lookup(self->f4EC);
        break;
    }
    d = 0.75f * (target - self->f4E8);
    if (d < -5.0f) {
        d = -5.0f;
    } else if (d > 5.0f) {
        d = 5.0f;
    }
    self->f4E8 += d;
}
#pragma pop

void TBoss6Type1__sub_802B7D50(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4E8) = (f32) TBoss6Type1__data_805DE2D0;
    M2C_FIELD(arg0, s32 *, 0x4EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4F0) = (s32) lbl_805DE3A8;
    M2C_FIELD(arg0, s32 *, 0x4F4) = (s32) lbl_805DE3B0;
}

void update_turn_to_center__11TBoss6Type1FPv(u8 *arg0) {
  Stack_802B7D74_boss6_1 stack;
  M2C_UNK var_r5;
  int new_var;
  f32 temp_f1;
  s32 var_r31;
  s32 var_r4;
  var_r31 = 0;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x438)))) != 0)
  {
    var_r31 = 0x8000;
  }
  if (angle_difference_abs((int) (*((s32 *) (((s8 *) arg0) + 0x5C))), (int) var_r31) < 0x666)
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = var_r31;
  }
  else
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x5C))) + 0x666);
  }
  stack.sp8 = -(*((f32 *) (((s8 *) arg0) + 0x38)));
  temp_f1 = -(*((f32 *) (((s8 *) arg0) + 0x40)));
  stack.spC = (*(const f32 *)&TBoss6Type1__data_805DE2D0);
  stack.sp10 = temp_f1;
  if (!(vector_length((void *) (&stack.sp8), (f32) temp_f1) <= TBoss6Type1__data_805DE310))
  {
    var_r4 = (s32) (TBoss6Type1__data_80471038 * get_ad_end_text_start__10TObjPlayerFv((f64) stack.sp8, (f64) stack.sp10));
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x438)))) != 0)
    {
      var_r4 += 0x8000;
    }
    var_r5 = 0x1555;
    new_var = (int) (*((s32 *) (((s8 *) arg0) + 0x60)));
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x414)))) == 0)
    {
      var_r5 = 0x1B4;
    }
    *((s32 *) (((s8 *) arg0) + 0x60)) = approach_angle_limited(new_var, (int) var_r4, (int) var_r5);
  }
}

s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4B0) - M2C_FIELD(arg0, s16 *, 0x32C);
}

void latch_phase_counter__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4B0) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}

typedef char RecoveredGlobal_802B7E88_lbl_80470CEC_size[sizeof(RecoveredGlobal_802B7E88_lbl_80470CEC) == 0x30 ? 1 : -1];
void load_params_from_table__11TBoss6Type1FPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(dispatch_shared_handler_a__6TLobbyFPv(0x2B));
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) M2C_FIELD(temp_r3, f32 *, 0);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x47C) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x47C) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x480) = (s32) M2C_FIELD(temp_r3, f32 *, 8);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x480) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x480) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 4);
    }
    M2C_FIELD(arg0, s32 *, 0x484) = (s32) M2C_FIELD(temp_r3, f32 *, 0xC);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x484) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x484) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 8);
    }
    M2C_FIELD(arg0, s32 *, 0x488) = (s32) M2C_FIELD(temp_r3, f32 *, 0x10);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x488) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x488) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0xC);
    }
    M2C_FIELD(arg0, s32 *, 0x4A4) = (s32) M2C_FIELD(temp_r3, f32 *, 0x14);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x4A4) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x4A4) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0x28);
    }
    M2C_FIELD(arg0, s32 *, 0x48C) = (s32) M2C_FIELD(temp_r3, s32 *, 0x18);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48C) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x48C) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0x10);
    }
    M2C_FIELD(arg0, s32 *, 0x490) = (s32) M2C_FIELD(temp_r3, s32 *, 0x1C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x490) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x490) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0x14);
    }
    M2C_FIELD(arg0, s32 *, 0x494) = (s32) M2C_FIELD(temp_r3, s32 *, 0x20);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x494) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x494) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0x18);
    }
    M2C_FIELD(arg0, s32 *, 0x498) = (s32) M2C_FIELD(temp_r3, s32 *, 0x24);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x498) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x498) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0x1C);
    }
    M2C_FIELD(arg0, s32 *, 0x49C) = (s32) M2C_FIELD(temp_r3, s32 *, 0x28);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x49C) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x49C) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0x20);
    }
    M2C_FIELD(arg0, s32 *, 0x4A0) = (s32) M2C_FIELD(temp_r3, s32 *, 0x2C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4A0) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x4A0) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0x24);
    }
    M2C_FIELD(arg0, s32 *, 0x4A8) = (s32) M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2F), f32 *, 0x14);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x4A8) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x4A8) = (s32) M2C_FIELD(&TBoss6Type1__param_table.value, s32 *, 0x2C);
    }
}

#pragma opt_propagation off
void draw_part_motions__11TBoss6Type1FPv(Boss_802B81A4 *arg0) {
    Blend_802B81A4 b;
    s32 i;
    s32 id;
    s32 p;
    Anim_802B81A4 *a;
    u32 cb;
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < 2; i++) {
        {
            s32 t = lbl_804DF614[i];
            id = t;
            p = TObjFish__sub_8001EDB0(arg0->f3FC, t);
        }
        id = get_bml_model(arg0->f3FC, id);
        cb = arg0->f650[i];
        a = &arg0->anim[i];
        if (cb != 0) {
            set_global_param__8TObjFishFi(p);
            if (TBoss6Type1__data_805DE2D0 == a->blend) {
                set_draw_callback_list__8TObjFishFPv(cb);
                draw_model_motion(id, a->id, a->t);
                clear_render_callback__8TObjFishFv(cb);
            } else {
                b.ids[0] = a->prevId;
                b.ts[0] = a->prevT;
                b.ids[1] = a->id;
                b.ts[1] = a->t;
                set_draw_callback_list__8TObjFishFPv(cb);
                draw_model_blend_motion(id, &b, a->blend);
                clear_render_callback__8TObjFishFv(cb);
            }
        }
    }
    clear_global_state__10TObjPlayerFv();
}

void copy_transform__11TBoss6Type1FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

void advance_animations__11TBoss6Type1FPv(Boss_802B8384 *self) {
    s32 cur;
    s32 i;
    Anim_802B8384 *a;
    f32 len;
    f32 b;
    f32 lim;
    s32 n;
    cur = lbl_805DE3C8;
    n = TBoss6Type1__data_805DE3C4;
    for (i = 0; i < n; i++) {
        if (i == cur) continue;
        a = &self->anims[i];
        len = a->motion->frames;
        a->t += a->speed;
        if (a->t >= len) a->t -= len;
        if (TBoss6Type1__data_805DE2D0 != a->blend) {
            if ((a->blend += a->rate) >= TBoss6Type1__data_805DE2E4) a->blend = TBoss6Type1__data_805DE2D0;
        }
    }
    a = &self->anims[lbl_805DE3C8];
    len = a->motion->frames;
    a->t += a->speed;
    switch (self->f440) {
    case 0:
        if (a->t >= len) a->t -= len;
        break;
    case 1:
        break;
    case 2:
        lim = len - TBoss6Type1__data_805DE2E4;
        if (a->t >= lim) {
            a->t = lim;
            set_motion_set__11TBoss6Type1FPvi((void *)(self), (s32)(TBoss6Type1__motion_set_table[self->f43C].f4));
        }
        break;
    }
    if (TBoss6Type1__data_805DE2D0 != a->blend) {
        if ((a->blend += a->rate) >= TBoss6Type1__data_805DE2E4) a->blend = TBoss6Type1__data_805DE2D0;
    }
}

void set_motion_set__11TBoss6Type1FPvi(void *arg0_, s32 arg1) {
    Boss_802B82B8 *arg0 = (Boss_802B82B8 *)arg0_;
    f32 z;
    s32 n;
    Tbl_802B82B8 *t;
    s32 i;
    Anim_802B82B8 *a;

    if (arg1 != -1 && arg1 != arg0->f43C) {
    arg0->f43C = arg1;
    z = TBoss6Type1__data_805DE2D0;
    n = TBoss6Type1__data_805DE3C4;
    t = &TBoss6Type1__motion_set_table[arg1];
    arg0->f440 = t->f0;
    for (i = 0; i < n; i++) {
        a = &arg0->anim[i];
        s32 id = get_bml_motion(arg0->f3FC, t->ids[i]);
        a->blend = a->f10;
        a->prevId = a->id;
        a->prevT = a->t;
        a->id = id;
        a->t = z;
    }
    }
}

Blk_802B8624 *copy_block__11TBoss6Type1FPvPv(Blk_802B8624 *d, Blk_802B8624 *s) {
    *d = *s;
    return d;
}

void set_action_state__11TBoss6Type1FPvi(Boss_802B865C *arg0, s32 arg1) {
    Action_802B865C a;
    Entry_802B865C *e;
    s32 i;
    arg0->state = arg1;
    for (i = 31; i > 0; i--) {
        arg0->hist[i] = arg0->hist[i - 1];
    }
    arg0->hist[0] = arg0->state;
    switch (arg0->state) {
    case 24:
        arg0->f4B8++;
        break;
    case 26:
        arg0->f4BC++;
        arg0->f4C0++;
        break;
    case 34:
        arg0->f4BC++;
        arg0->f4C4++;
        break;
    }
    e = &lbl_804DED14[arg0->state];
    set_motion_set__11TBoss6Type1FPvi(arg0, e->anim);
    arg0->f418 = e->f8;
    a.words[0] = e->act[0];
    a.words[1] = e->act[1];
    a.words[2] = e->act[2];
    if (a.action != 0) {
        (arg0->*a.action)();
    }
}

void render_shadows__11TBoss6Type1Fv(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DE3D0) {
        render_actor_shadows_default();
    }
}

void TBoss6Type1__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 40) { set_action_state__11TBoss6Type1FPvi((Boss_802B865C *)(p), (s32)((void*)40)); } }

extern const f32 TBoss6Type1__data_805DE2E4;

void TBoss6Type1__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) TBoss6Type1__data_805DE2E4;
    play_sound_effect(0x39E01, arg0 + 0x584, 0, 1, arg0);
}

struct T1_802B529C;
struct Boss_802B5434;
struct Boss_802B8EE0;
void TBoss6Type1__sub_802B8BB4(u8 *arg0) {
    Atk_802B8EE0 s;
    s32 r4;
    s32 n;
    s32 id;
    switch (M2C_FIELD(arg0, s32 *, 0x414)) {
    case 0:
        if (((s32 (*)(void *))TBoss6Type1__sub_802B600C)(arg0) != 0) {
            ((void (*)(u8 *, s32))send_flow_action_if_idle__11TBoss6Type1FPvc)(arg0, rand_range_inclusive__11TBoss6Type1Fiii((M2C_UNK)arg0, 5, 6));
            break;
        }
        switch (pick_remapped_list_value__11TBoss6Type1FPviii((Boss_802B5434 *)arg0, 3, 5, 0x20)) {
        case 3:
            send_flow_action_if_idle__11TBoss6Type1FPvc(arg0, 3);
            return;
        case 5:
            ((void (*)(u8 *, s32))send_flow_action_if_idle__11TBoss6Type1FPvc)(arg0, rand_range_inclusive__11TBoss6Type1Fiii((M2C_UNK)arg0, 5, 6));
            return;
        case 4:
            return;
        }
        break;
    case 1:
        randomize_attack__11TBoss6Type1FPvPv((Boss_802B8EE0 *)arg0, &s);
        if (TBoss6Type1__sub_802B5FDC(arg0) != 0) {
            id = 0x15;
            n = count_matches__11TBoss6Type1FPvii((T1_802B529C *)arg0, 0x15, 8);
            if (n == 0 || TBoss6Type1__data_805DE304 * (f32)rand() < lbl_805DE3D8 / (f32)n) {
                s.b2 = -2;
            } else {
                id = 2;
            }
            send_6xA4_action__11TBoss6Type1FPviPv(arg0, id, (M2C_UNK *)&s);
            break;
        }
        if (TBoss6Type1__sub_802B5FF4(arg0) != 0) {
            send_6xA4_action__11TBoss6Type1FPviPv(arg0, 4, (M2C_UNK *)&s);
            break;
        }
        r4 = pick_random_entry__11TBoss6Type1Fiii((M2C_UNK)arg0, (s32)lbl_80470EB8, 5);
        switch (r4) {
        case 4:
            if (s.b2 == -2) {
                r4 = 2;
            } else {
                s.b1 = 0x1C;
            }
            break;
        case 22:
            s.b2 = 10;
            break;
        case 5:
            s.b2 = 10;
            r4 = rand_range_inclusive__11TBoss6Type1Fiii((M2C_UNK)arg0, 6, 7);
            break;
        case 8:
            s.b2 = 10;
            r4 = rand_range_inclusive__11TBoss6Type1Fiii((M2C_UNK)arg0, 8, 10);
            break;
        }
        send_6xA4_action__11TBoss6Type1FPviPv(arg0, r4, (M2C_UNK *)&s);
        break;
    }
}

void TBoss6Type1__sub_802B8E1C(T1_802B8E1C *arg0) {
    S_802B8E1C s;
    s32 r4;
    TBoss6Type1__sub_802B909C((void *)(arg0), (M2C_UNK *)((s32 *)&s));
    s.b = 0x1C;
    r4 = 0x21;
    arg0->f438 = 1;
    if (arg0->y < lbl_805DE3DC) {
        r4 = 0x26;
    }
    send_6xA4_action__11TBoss6Type1FPviPv((void *)(arg0), (M2C_UNK)(r4), (M2C_UNK *)((s32 *)&s));
}

void do_attack__11TBoss6Type1FPv(void *arg0) {
    M2C_UNK sp8;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        TBoss6Type1__sub_802B909C(arg0, &sp8);
    } else {
        randomize_attack__11TBoss6Type1FPvPv((Boss_802B8EE0 *)(arg0), (Atk_802B8EE0 *)(&sp8));
    }
    M2C_FIELD(arg0, s32 *, 0x438) = 1;
    send_6xA4_action__11TBoss6Type1FPviPv(arg0, 2, &sp8);
}

#pragma push
#pragma fp_contract on
void randomize_attack__11TBoss6Type1FPvPv(Boss_802B8EE0 *self, Atk_802B8EE0 *atk) {
    const s8 *tab;
    s8 base;
    s8 v;
    f32 r;
    s8 w;
    s8 u;
    TBoss6Type1__sub_802B909C(self, (M2C_UNK *)atk);
    base = (u8)((u32)self->f60 >> 8);
    v = TBoss6Type1__data_805DE32C * (TBoss6Type1__data_805DE304 * (f32)rand()) + lbl_805DE3E0;
    if (TBoss6Type1__data_805DE304 * (f32)rand() < TBoss6Type1__data_805DE30C) {
        v = -v;
    }
    atk->b0 = base + v;
    if ((s32)atk->b1 == 0x12 && ((s32 (*)(void *))TBoss6Type1__sub_802B600C)(self) == 0) return;
    atk->b1 = 0x1C;
    if (TBoss6Type1__sub_802B5FF4((u8 *)self) != 0) {
        r = TBoss6Type1__data_805DE304 * (f32)rand();
        w = 0x12;
        if (r < TBoss6Type1__data_805DE2E0) {
            w = -2;
        } else if (r < lbl_805DE3E4) {
            w = 10;
        }
        atk->b2 = w;
        return;
    }
    tab = TBoss6Type1__sub_802B5FDC((u8 *)self) != 0 ? lbl_805DE2C8 : lbl_805DE2CC;
    u = tab[0];
    if (TBoss6Type1__data_805DE304 * (f32)rand() < TBoss6Type1__data_805DE30C) {
        u = tab[1];
    }
    atk->b2 = u;
}
#pragma pop

M2C_UNK send_6xA4_action__11TBoss6Type1FPviPv(void *o, M2C_UNK t, M2C_UNK *src) {
    Msg_802B9178 m;
    u8 *s;
    s32 i;
    if (is_idle__11TBoss6Type1FPv(*(void **)((u8 *)o + 0x3F8)) != 0) {
        build_6xA4_olga_flow_boss_actions(&m);
        set_sync_data__11TBoss6Type1FPvPv(o, &m);
        m.b[4] = t;
        s = (u8 *)src;
        for (i = 1; i < 4; i++) {
            m.b[i + 4] = *s++;
        }
        step_and_send_60__11TBoss6Type1FPv(&m);
    }
}

void send_flow_action_if_idle__11TBoss6Type1FPvc(u8 *arg0, s8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_802B9204_boss6_1, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802B9204_boss6_1, spC) == 0x4) ? 1 : -1];
    Stack_802B9204_boss6_1 stack;
    if (((s32)is_idle__11TBoss6Type1FPv((void*)((int) (M2C_FIELD(arg0, s32 *, 0x3F8))))) != 0) {
        build_6xA4_olga_flow_boss_actions((void*)((void *) (&stack.sp8)));
        set_sync_data__11TBoss6Type1FPvPv((void *) (arg0), (void *) (&stack.sp8));
        stack.spC = arg1;
        step_and_send_60__11TBoss6Type1FPv((void*)((void *) (&stack.sp8)));
    }
}

void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) (s8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x414) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0x41C) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
}

extern M2C_UNK TBoss6Type1__data_80471040;
extern const f32 TBoss6Type1__data_805DE304;
extern f32 lbl_805DE3EC;

void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg1, s8 *, 8) = (s8) M2C_FIELD(arg0, s32 *, 0x438);
    M2C_FIELD(arg1, s8 *, 9) = (s8) M2C_FIELD(arg0, s32 *, 0x414);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) (lbl_805DE3EC * (TBoss6Type1__data_805DE304 * (f32) rand()));
}

extern s32 tl_04;

struct VBase_18_f05d67 { char pad[0x18]; };
struct VObj_18_f05d67 : VBase_18_f05d67 {
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

struct Arr_802B93C4 { u8 pad[0x378]; s32 arr[32]; };
struct Tmp_802B93C4 { s32 a; s16 b; s16 c; u8 pad[0x10]; };

void add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
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
void TBoss6Type1__sub_802B854C(void *);
s32 create_zanzo__11TBoss6Type1FPvPvPv(void *, int, int);
extern u8 lbl_80470D1C[];
extern u8 lbl_80470D48[];
extern u8 lbl_80470E08[];
extern u8 lbl_80470E88[];
extern u8 lbl_80470EA0[];
extern u8 lbl_80470EAC[];
extern u8 lbl_804DF4E0[];
extern u8 __vt__11TBoss6Type1[];
extern s32 lbl_805D3EB0;

#define arg0 ((u8 *)arg0_)
#define arg2 ((s32 *)arg2_)

#pragma push
#pragma opt_common_subs off
s32 TBoss6Type1__ct(s32 arg0_, s32 arg1, s32 arg2_) {
    Tmp_802B93C4 tmp;
    s32 i;

    ((void (*)(void *, s32))initialize__9TObjEnemyFPv)(arg0, arg1);
    M2C_FIELD(arg0, u8 **, 0x18) = __vt__11TBoss6Type1;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3EB0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 8);
    M2C_FIELD(arg0, s32 *, 0x3F8) = arg2[0];
    ((VObj_18_f05d67 *)(arg0))->m79(arg2 + 1);
    if (exchange_object_state__6TLobbyFPvis(arg0, &tmp, 1) != 0) {
        tmp.a = 0;
        tmp.c = 0;
        exchange_object_state__6TLobbyFPvis(arg0, &tmp, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3FC) = get_fish_count__8TObjFishFv();
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, &lbl_80470CD4);
    copy_xyz__10TObjPlayerFPvPv(arg0 + 0x5C, lbl_80470D1C);
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, (void *)VecCopy__FP3VecPC3Vec(arg0 + 0x50, (void *)VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    init_collision_body_parts(arg0, lbl_804DF4E0, 7);
    update_position__11TBoss6Type1FPv(arg0);
    M2C_FIELD(arg0, f32 *, 0x310) = TBoss6Type1__data_805DE2D0;
    M2C_FIELD(arg0, f32 *, 0x30C) = TBoss6Type1__data_805DE2D0;
    M2C_FIELD(arg0, f32 *, 0x308) = TBoss6Type1__data_805DE2D0;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    bind_enemy_combat_stats(arg0, register_boss__6TLobbyFPv(0x2B), dispatch_shared_handler_b__6TLobbyFPv(0x2B), register_object__6TLobbyFPv(0x2B));
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    set_param__12TObjEneLappyFPvi(arg0, 0x4E);
    TBoss6Type1__sub_802B854C(arg0);
    M2C_FIELD(arg0, s32 *, 0x654) = TObjFish__sub_800E3124(lbl_80470D48, arg0 + 0x578);
    M2C_FIELD(arg0, s32 *, 0x650) = TObjFish__sub_800E3124(lbl_80470E08, arg0 + 0x5FC);
    build_tables__14TBoss6PlotFalzFPvPvi(arg0 + 0x658, lbl_80470E88, 2);
    build_tables__14TBoss6PlotFalzFPvPvi(arg0 + 0x66C, lbl_80470EA0, 1);
    M2C_FIELD(arg0, s32 *, 0x400) = create_zanzo__11TBoss6Type1FPvPvPv(arg0, 7, 0xF);
    M2C_FIELD(arg0, s32 *, 0x404) = create_zanzo__11TBoss6Type1FPvPvPv(arg0, 2, 0xF);
    M2C_FIELD(arg0, s32 *, 0x414) = 0;
    M2C_FIELD(arg0, s8 *, 0x41C) = 0;
    TBoss6Type1__sub_802B96C0((s32)(arg0 + 0x420), (s32)lbl_80470EAC);
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, arg0 + 0x38);
    TBoss6Type1__sub_802B96C0((s32)(arg0 + 0x42C), (s32)lbl_80470EAC);
    M2C_FIELD(arg0, s32 *, 0x438) = 1;
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    for (i = 0; i < 32; i++) {
        ((Arr_802B93C4 *)arg0)->arr[i] = 0;
    }
    load_params_from_table__11TBoss6Type1FPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
    M2C_FIELD(arg0, f32 *, 0x4B4) = TBoss6Type1__data_805DE2E4;
    latch_phase_counter__11TBoss6Type1FPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x4B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, f32 *, 0x4D4) = TBoss6Type1__data_805DE2D0;
    M2C_FIELD(arg0, f32 *, 0x4D8) = TBoss6Type1__data_805DE2E4;
    reset_fields_4e0__11TBoss6Type1FPv(arg0);
    reset_param__11TBoss6Type1FPv(arg0);
    TBoss6Type1__sub_802B7D50(arg0);
    M2C_FIELD(arg0, s32 *, 0x408) = 0;
    TBoss6Type1__sub_802B4D38((Obj_802B4D38 *)arg0);
    clear_slot_array__11TBoss6Type1FPv((Obj_802B4B34 *)arg0);
    TBoss6Type1__sub_802B4A90(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x56C, arg0 + 0x38);
    set_action_state__11TBoss6Type1FPvi((Boss_802B865C *)arg0, 0);
    return arg0_;
}
#pragma pop
#undef arg2
#undef arg0

u8 * TBoss6Type1__sub_802B96C0(s32 arg0, s32 arg1) {
    *(M2CCopy_C_boss6_1 *)(arg0) = *(const M2CCopy_C_boss6_1 *)(arg1);
    return (u8 *)arg0;
}

s32 create__11TBoss6Type1Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x684);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type1__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss6Type1__vt42(void) {  }
void TBoss6Type1__vt43(void) {  }
void TBoss6Type1__vt44(void) {  }
void TBoss6Type1__vt45(void) {  }
void TBoss6Type1__vt46(void) {  }
void TBoss6Type1__vt47(void) {  }
void TBoss6Type1__vt48(void) {  }
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p) { return (char*)p + 0x388; }
int is_idle__11TBoss6Type1FPv(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int read_be16_field2__11TBoss6Type1FPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void step_and_send_60__11TBoss6Type1FPv(void* p) { read_be16_field2__11TBoss6Type1FPv((void*)(p)); TLobby__send_and_handle_60(p); }
void build_6xA4_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 164; *(u8*)((char*)p + 0x1) = 5; }

}
