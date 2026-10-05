#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct MojaCollision_800ADE48 {
    u8 pad[0x18];
    u32 flags;
} MojaCollision_800ADE48;

typedef struct Moja_800ADE48 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0xA4 - 0x34];
    MojaCollision_800ADE48 *collision;
    u8 padA8[0xB8 - 0xA8];
    s16 action;
    u8 padBA[0x326 - 0xBA];
    s16 mode;
    s16 phase;
    u8 pad32A[0x374 - 0x32A];
    s32 f374;
    u8 pad378[0x380 - 0x378];
    s32 attack_kind;
} Moja_800ADE48;

struct Vec_800AE18C { f32 x, y, z; };

struct VBase_18_cc39a7 { char pad[0x18]; };

struct VObj_18_cc39a7 : VBase_18_cc39a7 {
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

struct Vec_800AEE54 { f32 x, y, z; };

typedef s32 M2C_UNK;

struct V398Base_800ADAAC { char pad[0x18]; };

struct V398_800ADAAC : V398Base_800ADAAC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(void *, void *);
};

struct Vec_800ADAAC { f32 x, y, z; };

struct VBase_18_247a8e { char pad[0x18]; };

struct VObj_18_247a8e : VBase_18_247a8e {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *);
};

struct Vec_800ACFE8 { f32 x, y, z; };
struct Hit_800ACFE8 { s32 a; f32 b; };
struct VBase_800ACFE8 { u8 pad[0x18]; };
struct VObj_800ACFE8 : VBase_800ACFE8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Hit_800ACFE8, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *);
};
struct Sub_800ACFE8 { u8 pad[0x18]; u32 f18; };
struct Obj_800ACFE8 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x38 - 0x34];
    Vec_800ACFE8 f38;
    u8 pad44[0xA4 - 0x44];
    Sub_800ACFE8 *fA4;
    u8 padA8[0xB4 - 0xA8];
    u32 fB4;
    u8 padB8[0xC8 - 0xB8];
    f32 fC8;
    u8 padCC[0x290 - 0xCC];
    Vec_800ACFE8 f290;
    Vec_800ACFE8 f29C;
    u8 *f2A8;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_800ACFE8 f2FC;
    u8 pad308[0x318 - 0x308];
    s32 f318;
    u8 pad31C[0x328 - 0x31C];
    s16 f328;
    u8 pad32A[0x33C - 0x32A];
    s16 f33C;
    u8 pad33E[0x378 - 0x33E];
    f32 f378;
    u8 pad37C[0x384 - 0x37C];
    s32 f384;
};

struct Vec_800AE7F4 { f32 x, y, z; };

struct Hit_800AE7F4 {
    s32 type; s32 power; s32 c; f32 fpow;
    Hit_800AE7F4(f32 f) { type = 0; fpow = f; power = *(s32 *)&fpow; c = 0; }
};

struct VBase_800AE7F4 { char pad[0x18]; };

struct VObj_800AE7F4 : VBase_800AE7F4 {
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
    virtual void m21(void *, const Hit_800AE7F4 &, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *);
};

struct Col_800AE7F4 { u8 pad[0x18]; u32 flags; };

struct Moja_800AE7F4 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x38 - 0x34];
    Vec_800AE7F4 pos;
    u8 pad44[0x50 - 0x44];
    Vec_800AE7F4 home;
    u8 pad5C[0x60 - 0x5C];
    s32 angle;
    u8 pad64[0xA4 - 0x64];
    Col_800AE7F4 *collision;
    u8 padA8[0xB4 - 0xA8];
    u32 fB4;
    u8 padB8[0xC8 - 0xB8];
    f32 fC8;
    u8 padCC[0x290 - 0xCC];
    Vec_800AE7F4 from;
    Vec_800AE7F4 dest;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_800AE7F4 center;
    Vec_800AE7F4 vel;
    u8 pad314[0x328 - 0x314];
    s16 phase;
    u8 pad32A[0x33C - 0x32A];
    s16 f33C;
    u8 pad33E[0x374 - 0x33E];
    s32 f374;
    f32 speed;
    u8 pad37C[0x384 - 0x37C];
    s32 f384;
};

struct Vec_800AF080 { f32 x, y, z; };

struct FadeBase_800AF080 { u8 pad[0x14]; };

struct Fade_800AF080 : FadeBase_800AF080 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void m6(); virtual void m7();
    u32 f18;
};

struct Body_800AF080 { u8 pad[0x39C]; Fade_800AF080 fades[4]; };

struct EneBase_800AF080 { u8 pad[0x18]; };

struct Ene_800AF080 : EneBase_800AF080 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual s32 m9(f32, f32, f32);
};

struct Vec_800AE450 { f32 x, y, z; };

struct Hit_800AE450 {
    s32 type; s32 power; s32 c; f32 fpow;
    Hit_800AE450(f32 f) { type = 0; fpow = f; power = *(s32 *)&fpow; c = 0; }
};

struct VBase_800AE450 { char pad[0x18]; };

struct VObj_800AE450 : VBase_800AE450 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, const Hit_800AE450 &, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *);
};

struct Col_800AE450 { u8 pad[0x18]; u32 flags; };

struct Turn_800AE450 { u8 pad[8]; s32 step; };

struct Moja_800AE450 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x38 - 0x34];
    Vec_800AE450 pos;
    u8 pad44[0x50 - 0x44];
    Vec_800AE450 home;
    u8 pad5C[0x60 - 0x5C];
    s32 angle;
    u8 pad64[0xA4 - 0x64];
    Col_800AE450 *collision;
    u8 padA8[0xB4 - 0xA8];
    u32 fB4;
    s16 fB8;
    u8 padBA[0xC8 - 0xBA];
    f32 fC8;
    u8 padCC[0x290 - 0xCC];
    Vec_800AE450 from;
    Vec_800AE450 dest;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_800AE450 center;
    Vec_800AE450 vel;
    u8 pad314[0x328 - 0x314];
    s16 phase;
    u8 pad32A[0x33C - 0x32A];
    s16 f33C;
    u8 pad33E[0x350 - 0x33E];
    Turn_800AE450 *turn;
    u8 pad354[0x374 - 0x354];
    s32 f374;
    f32 speed;
    u8 pad37C[0x384 - 0x37C];
    s32 f384;
};

struct Ang_800AD3D8 { s32 x, y, z; };

struct TgtBase_800AD3D8 { u8 pad[0x18]; };

struct Tgt_800AD3D8 : TgtBase_800AD3D8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Hit_800ACFE8, s32, s32, s32);
    u8 pad1C[0x2FC - 0x1C];
    Vec_800AE18C pos;
};

struct MojaInfo_800AD3D8 { u8 pad0[4]; f32 speed; s32 turn; };

struct Moja_800AD3D8 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x60 - 0x34];
    s32 rot_y;
    u8 pad64[0xB4 - 0x64];
    u32 anim_state;
    s16 anim;
    u8 padBA[0x2A8 - 0xBA];
    Tgt_800AD3D8 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_800AE18C pos;
    u8 pad308[0x318 - 0x308];
    u32 f318;
    u8 pad31C[0x328 - 0x31C];
    s16 phase;
    u8 pad32A[0x338 - 0x32A];
    u16 target_id;
    u8 pad33A[2];
    s16 timer;
    u8 pad33E[0x350 - 0x33E];
    MojaInfo_800AD3D8 *info;
    u8 pad354[0x368 - 0x354];
    s32 kind;
    u8 pad36C[0x384 - 0x36C];
    s32 count;
};

typedef struct Info_800AEBB8 {
    u8 pad0[4];
    f32 f4;
    s32 f8;
} Info_800AEBB8;

typedef struct Moja_800AEBB8 {
    u8 pad0[0x50];
    Vec_800AE18C pos;
    u8 pad5C[0x2FC - 0x5C];
    Vec_800AE18C f2FC;
    u8 pad308[0x328 - 0x308];
    s16 phase;
    u8 pad32A[0x350 - 0x32A];
    Info_800AEBB8 *info;
    u8 pad354[0x374 - 0x354];
    s32 f374;
} Moja_800AEBB8;

extern "C" {
void begin_attack__11TObjEneMojaFPv(Moja_800ADE48 *self);
s32 update_movement_status__10TObjPlayerFv();
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 update_freeze_timer__11TObjEneMojaFPv(void *arg0);
s32 update_action_hold_status__10TObjPlayerFv();
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 update_action_hold__11TObjEneMojaFPv(void *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
f32 enemy_pursue_point(void *, s32, Vec_800AE18C *, void *, f32, f32);
s32 select_enemy_destination(void *, Vec_800AE18C *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800AE18C *);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
f32 horizontal_distance_squared(int, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK play_sound_effect(void *, void *, int, int);
extern u8 **lbl_805D50D4;
extern const f32 lbl_805D9BD8;
extern const f32 lbl_805D9BF0;
extern const f32 lbl_805D9C34;
extern const f32 lbl_805D9C38;
u16 find_nearest_visible_player(void *, int, f32);
s32 check_path_obstructed(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
s32 obj_getField1c(void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
u32 csnVector(void *, void *, int);
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(u16);
M2C_UNK subtract_vector(void *, void *);
extern M2C_UNK lbl_8043B0B4[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void acquire_target__11TObjEneMojaFPv(u8 *arg0);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800ACA0C(void *);
M2C_UNK update_death_state__11TObjEneMojaFv(void *);
M2C_UNK update_ground_effect__10TObjPlayerFPv(void *);
void update_invincibility__10TObjPlayerFPv(void *arg0);
void update_attack_jump__11TObjEneMojaFv(Obj_800ACFE8 *);
M2C_UNK update_approach_state__11TObjEneMojaFPv(u8 *arg0);
struct Moja_800AE450;
u8 *get_enemy_entity(u16);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
u8 *get_player_by_client_id(u16);
M2C_UNK minimap_render_dot(void *, int, int, int, f32);
extern const f32 lbl_805D9BDC;
void run_task__11TObjEneMojaFPv(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 select_enemy_destination(void *, Vec_800AE18C *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800AE18C *);
f32 TObjPlayer__sub_800186E8(void *, void *, Vec_800AE18C *);
s32 get_field_0c__10TObjPlayerFPv(u32);
f32 get_pos_x__10TObjPlayerFPv(u32);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
extern const f64 lbl_8043B0C8[];
extern u32 *lbl_805D50CC;
extern const f32 lbl_805D9BE8;
extern const f32 lbl_805D9C1C;
extern const f32 lbl_805D9C30;
s32 select_attack__11TObjEneMojaFPv(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 obj_is_hit_receivable();
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK play_sound_effect(void *, void *, int, int);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern u8 **lbl_805D50D4;
extern void *lbl_805D50DC;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D9BD8;
extern const f32 lbl_805D9BDC;
extern const f32 lbl_805D9BEC;
extern const f32 lbl_805D9C04;
extern const f32 lbl_805D9C28;
extern const f32 lbl_805D9C2C;
M2C_UNK move_with_wall_slide(void *);
M2C_UNK calc_velocity_toward_destination(void *, Vec_800ACFE8, Vec_800ACFE8, f32);
s16 get_id__10TObjPlayerFPv(s32);
s32 is_split_screen();
f32 newton_sqrtf(f32);
M2C_UNK set_shake_preset__11TCameraCtrlFi(int);
M2C_UNK spawn_particle_effect(void *, int);
f32 get_pos_x__14TObjEneGibblesFPv(s32);
extern s32 lbl_805D53A0;
extern s32 lbl_805D5868;
extern const f32 lbl_805D9BF8;
extern const f32 lbl_805D9C00;
extern const f32 lbl_805D9C08;
extern const f32 lbl_805D9C0C;
M2C_UNK update_punch_attack__11TObjEneMojaFPv(void *self_800ADAAC);
M2C_UNK advance_animation_playback();
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
f32 horizontal_distance_squared(int, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK play_sound_effect(void *, void *, int, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_getField1c(void *);
M2C_UNK subtract_vector(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
extern const f64 lbl_8043B0C8[];
s32 push_matrix_from(void *);
M2C_UNK rotate_matrix_y(int, int);
s32 rotate_vector_by_matrix(int, void *, void *);
void pop_matrices(s32);
f32 newton_sqrtf(f32);
M2C_UNK calc_velocity_toward_destination(void *, Vec_800ACFE8, Vec_800ACFE8, f32);
s32 obj_is_hit_receivable();
s32 is_split_screen();
M2C_UNK set_shake_preset__11TCameraCtrlFi(int);
M2C_UNK spawn_particle_effect(void *, int);
extern u8 lbl_8058D490[];
extern s32 lbl_805D5868;
extern s32 lbl_805D53A0;
extern const f32 lbl_805D9BD8;
extern const f32 lbl_805D9C00;
extern const f32 lbl_805D9C04;
extern const f32 lbl_805D9C08;
extern const f32 lbl_805D9C0C;
extern const f32 lbl_805D9C3C;
extern const f32 lbl_805D9C40;
extern const f32 lbl_805D9C44;
extern const f32 lbl_805D9C48;
void update_appearance_jump__11TObjEneMojaFv(Moja_800AE7F4 *self);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, f32 *, M2C_UNK, f32);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *, s32, s32, s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_scene_lighting(s32, s32);
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(s32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9BD8;
extern const f32 lbl_805D9BDC;
extern const f32 lbl_805D9BF0;
extern const f32 lbl_805D9C50;
extern const f32 lbl_805D9C54;
extern const f32 lbl_805D9C58;
void render__11TObjEneMojaFv(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK calc_velocity_toward_destination(void *, Vec_800ACFE8, Vec_800ACFE8, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_is_hit_receivable();
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_getField1c(void *);
s32 is_split_screen();
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
M2C_UNK set_shake_preset__11TCameraCtrlFi(int);
M2C_UNK spawn_particle_effect(void *, int);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
f32 horizontal_distance_squared(int, void *);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK play_sound_effect(void *, void *, int, int);
M2C_UNK subtract_vector(void *, void *);
extern const f64 lbl_8043B0C8[];
extern Vec_800AE450 lbl_8050BEE0;
extern s32 lbl_805D53A0;
extern s32 lbl_805D5868;
extern const f32 lbl_805D9BD8;
extern const f32 lbl_805D9C00;
extern const f32 lbl_805D9C04;
extern const f32 lbl_805D9C08;
extern const f32 lbl_805D9C0C;
extern const f32 lbl_805D9C3C;
extern const f32 lbl_805D9C40;
void update_appearance_drop__11TObjEneMojaFv(Moja_800AE450 *self);
u8 *get_player_by_client_id(u16);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
u8 *get_enemy_entity(u16);
M2C_UNK advance_animation_playback();
s32 select_enemy_destination(void *, Vec_800AE18C *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800AE18C *);
s32 enemy_turn_toward_dest(void *, s32);
void enemy_set_heading_velocity(void *, s32, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK subtract_vector(void *, void *);
s32 update_angle__10TObjPlayerFPviPv(void *, s32, void *);
s32 objInBand__FP7GameObjf(void *, f32);
s32 push_matrix_from(void *);
M2C_UNK rotate_matrix_y(int, int);
s32 rotate_vector_by_matrix(int, void *, void *);
void pop_matrices(s32);
void vec3_add_to(void *, void *);
s32 get_field_0c__10TObjPlayerFPv(u32);
s32 calc_technique_level__11TObjEneMojaFPv(void *);
void create__9TTecMegidFiiii(void *, void *, void *, s32);
void create_ex__9TTecMegidFiiii(void *, void *, s32, s32);
M2C_UNK play_sound_effect(void *, void *, int, int);
M2C_UNK spawn_particle_effect(void *, int);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(u32);
f32 get_pos_x__10TObjPlayerFPv(u32);
void TTecZonde__sub_8023DA10(void *, s32, void *, void *, s32, s32, f32, f32);
void create_ex__11TTecGiBartaFPvPvPvPv(void *, void *, s32, s32);
void create_ex__8TTecFoieFPvPvPvPv(void *, void *, void *, s32);
void create__8TTecFoieFPvPvPvPv(void *, void *, s32, s32);
f32 newton_sqrtf(f32);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void spawn_directional_particle(void *, void *, s32);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
extern const f64 lbl_8043B0C8[];
extern u8 lbl_8058D490[];
extern s32 lbl_805D5550;
extern s32 tl_07;
extern const f32 lbl_805D9BD8;
extern const f32 lbl_805D9BDC;
extern const f32 lbl_805D9C08;
extern const f32 lbl_805D9C10;
extern const f32 lbl_805D9C14;
extern const f32 lbl_805D9C18;
extern const f32 lbl_805D9C1C;
extern const f32 lbl_805D9C20;
extern const f32 lbl_805D9C24;
M2C_UNK update_technique_state__11TObjEneMojaFv(void *self_800AD3D8);
void enemy_wander_home(void *, s32, f32, f32, f32);
s32 select_enemy_destination(void *, Vec_800AE18C *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800AE18C *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK advance_animation_playback();
void refresh_collision_body_centers(void *);
extern const f32 lbl_805D9C4C;
void update_idle_state__11TObjEneMojaFv(Moja_800AEBB8 *self);
}

extern "C" {

void enter_state_3__10TObjPlayerFPv(void *arg0);
void update_down_state__10TObjPlayerFPv(void *arg0);
void update_invincibility__10TObjPlayerFPv(void *arg0);
void update_meseta_anim_state__10TObjPlayerFPv(void *arg0);
void update_state_flags__10TObjPlayerFPv(void *arg0);
M2C_UNK advance_animation_playback();
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

void update_state_flags__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    void *temp_r5;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FFF9FF);
        temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 8;
    case 8:
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDBFFFF);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
}

extern const f32 lbl_805D9BD8;
extern const s32 lbl_805D9BFC;

void update_invincibility__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    void *temp_r4_2;

    advance_animation_playback();
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity(arg0, 0, lbl_805D9BD8);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFFEFF;
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) |= lbl_805D9BFC;
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}

extern const s32 lbl_805D9BFC;

void update_down_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s32 gbits;
    void *temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFFEFF;
        temp_r6 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r6, s32 *, 0x18) |= lbl_805D9BFC;
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x33C) = 0xF;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9BFFFF);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
}

void update_attack_jump__11TObjEneMojaFv(Obj_800ACFE8 *arg0) {
    Vec_800ACFE8 delta;
    u8 *p;
    s32 i;
    f32 d;

    arg0->f30 |= 0x06000000;
    arg0->fA4->f18 &= ~1;
    ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
    switch (arg0->f328) {
    case 0:
    default:
        apply_actor_gravity(arg0, 0, lbl_805D9BD8);
        if (objInBand__FP7GameObjf(arg0, lbl_805D9C00) != 0) {
            if (arg0->f2A8 != NULL) {
                Vec_800ACFE8 dest = *(Vec_800ACFE8 *)(arg0->f2A8 + 0x2FC);
                if (select_enemy_destination(arg0, (Vec_800AE18C *)&dest, 1) != 0) {
                    Vec_800ACFE8 pos = arg0->f2FC;
                    copy_position_if_valid__10TObjPlayerFii(arg0, (Vec_800AE18C *)&pos);
                    VecCopy__FP3VecPC3Vec(&delta, &arg0->f29C);
                    subtract_vector(&delta, &arg0->f2FC);
                    arg0->f378 = lbl_805D9BF8 + newton_sqrtf(delta.x * delta.x + delta.z * delta.z);
                    arg0->f378 = arg0->f378 / (lbl_805D9C04 / arg0->fC8);
                    arg0->f328 = 1;
                } else {
                    arg0->f328 = 2;
                }
            } else {
                arg0->f328 = 2;
            }
            spawn_particle_effect(&arg0->f38, 0xF3);
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A802), &arg0->f38, 0, 0);
        }
        break;
    case 1:
        calc_velocity_toward_destination(arg0, arg0->f290, arg0->f29C, arg0->f378);
        move_with_wall_slide(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805D9C08) != 0) {
            arg0->f328 = 2;
            for (i = 0; i < lbl_805D5868; i++) {
                p = get_player_data__10TObjPlayerFi(i);
                if (p == NULL || (u16)obj_getField1c(p) >= 0x1000) {
                    break;
                }
                if (((s32 (*)(void *))obj_is_hit_receivable)(p) != 0) {
                    d = horizontal_distance_squared((s32)(p + 0x2FC), &arg0->f2FC);
                    if (d <= get_pos_x__14TObjEneGibblesFPv(arg0->f318) * get_pos_x__14TObjEneGibblesFPv(arg0->f318)) {
                        Hit_800ACFE8 hit;
                        hit.a = 0;
                        hit.b = get_id__10TObjPlayerFPv(arg0->f318);
                        ((VObj_800ACFE8 *)p)->m21(arg0, hit, 0, -1, -1);
                        ((VObj_800ACFE8 *)p)->m23(arg0);
                    }
                    if (d <= lbl_805D9C0C && is_split_screen() == 0 && lbl_805D53A0 == (u16)obj_getField1c(p)) {
                        set_shake_preset__11TCameraCtrlFi(0);
                    }
                }
            }
            spawn_particle_effect(&arg0->f38, 0xCB);
            spawn_particle_effect(&arg0->f38, 0xF0);
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD03), &arg0->f38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x300);
        }
        break;
    case 2:
        apply_actor_gravity(arg0, 0, lbl_805D9BD8);
        if (arg0->fB4 != 4) {
            arg0->f30 &= ~0x06200000;
            arg0->fA4->f18 |= 1;
            arg0->f384 = -1;
            arg0->f33C = 0;
        }
        break;
    }
}

#define arg0 ((u8 *)self_800ADAAC)

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
#define self ((Moja_800AD3D8 *)self_800AD3D8)
M2C_UNK update_technique_state__11TObjEneMojaFv(void *self_800AD3D8) {
    Vec_800AE18C dir;
    Vec_800AE18C pos;
    Ang_800AD3D8 ang;
    s32 ang2;
    void *obj;
    u8 *p;
    s32 a;
    u16 id;
    id = self->target_id;
    if (id < 0x1000) {
        p = get_player_by_client_id(id);
        if (p != NULL && get_field_3e4__10TObjPlayerFPv((int) p) == get_current_floor() &&
            get_stat_by_key_state__10TObjPlayerFPv(self) == get_stat_by_key_state__10TObjPlayerFPv(p)) {
            self->target = (Tgt_800AD3D8 *) p;
        } else {
            self->target = NULL;
        }
    } else if (id < 0x4000) {
        self->target = (Tgt_800AD3D8 *) get_enemy_entity(id);
    } else {
        self->target_id = 0xFFFF;
        self->target = NULL;
    }
    ((M2C_UNK (*)(void *)) advance_animation_playback)(self);
    switch (self->phase) {
    case 0:
    default:
        if (self->target == NULL) {
            self->phase = 2;
            self->count = -1;
            self->flags &= 0xFFDFFFFF;
        } else {
            Vec_800AE18C dest = self->target->pos;
            if (select_enemy_destination(self, &dest, 1) != 0) {
                Vec_800AE18C cur = self->pos;
                copy_position_if_valid__10TObjPlayerFii(self, &cur);
                a = enemy_turn_toward_dest(self, self->info->turn);
                enemy_set_heading_velocity(self, self->rot_y, self->info->speed);
                move_with_wall_slide(self);
            } else {
                VecCopy__FP3VecPC3Vec(&dir, &self->target->pos);
                subtract_vector(&dir, &self->pos);
                a = update_angle__10TObjPlayerFPviPv(self, self->info->turn, &dir);
            }
            if (a < 0x100) {
                self->phase = 1;
                self->anim = 4;
            } else {
                self->anim = 2;
            }
        }
        break;
    case 1:
        if (objInBand__FP7GameObjf(self, lbl_805D9C10) != 0) {
            pos.x = lbl_805D9BD8;
            pos.y = lbl_805D9C14;
            pos.z = lbl_805D9C18;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, self->rot_y);
            rotate_vector_by_matrix((int)(0), (void *)(&pos), (void *)(&pos));
            pop_matrices(1);
            vec3_add_to(&pos, &self->pos);
            if (self->target != NULL) {
                VecCopy__FP3VecPC3Vec(&dir, &self->target->pos);
                subtract_vector(&dir, &self->pos);
                ang2 = update_angle__10TObjPlayerFPviPv(self, self->info->turn, &dir);
            } else {
                ang2 = get_field_0c__10TObjPlayerFPv(self->f318);
            }
            if (lbl_805D5550 == 3) {
                switch (self->kind) {
                case 1:
                    if (ang2 < get_field_0c__10TObjPlayerFPv(self->f318) / 2 && self->target != NULL) {
                        create__9TTecMegidFiiii(self, &pos, &self->target->pos, calc_technique_level__11TObjEneMojaFPv(self));
                    } else {
                        create_ex__9TTecMegidFiiii(self, &pos, self->rot_y, calc_technique_level__11TObjEneMojaFPv(self));
                    }
                    play_sound_effect((void *) 0x4002A60B, &pos, 0, 0);
                    break;
                default:
                    spawn_particle_effect(&pos, 0xB9);
                    spawn_particle_effect(&pos, 0xBA);
                    if (ang2 < get_field_0c__10TObjPlayerFPv(self->f318) / 2) {
                        if (update_scale__15TObjBoss2TunnelFPv(&dir) < lbl_805D9C1C) {
                            dir.y = dir.x = lbl_805D9BD8;
                            dir.z = lbl_805D9BDC;
                            push_matrix_from(lbl_8058D490);
                            rotate_matrix_y(0, self->rot_y);
                            rotate_vector_by_matrix((int)(0), (void *)(&dir), (void *)(&dir));
                            pop_matrix();
                        }
                        if (self->target != NULL) {
                            Hit_800ACFE8 hit;
                            hit.a = 3;
                            hit.b = lbl_805D9C08 * (f32) calc_technique_level__11TObjEneMojaFPv(self) + lbl_805D9C20;
                            self->target->m21(self, hit, 0, -1, -1);
                        }
                    } else {
                        dir.y = dir.x = lbl_805D9BD8;
                        dir.z = lbl_805D9BDC;
                        push_matrix_from(lbl_8058D490);
                        rotate_matrix_y(0, self->rot_y);
                        rotate_vector_by_matrix((int)(0), (void *)(&dir), (void *)(&dir));
                        pop_matrix();
                    }
                    obj = __nw__7TObjectFUl(0x260);
                    if (obj != NULL) {
                        TTecZonde__sub_8023DA10(obj, tl_07, &pos, &dir, 0x14000000, 20,
                                                get_pos_x__10TObjPlayerFPv(self->f318), lbl_805D9C24);
                    }
                    play_sound_effect((void *) 0x4002A408, &pos, 0, 0);
                    break;
                }
            } else {
                switch (self->kind) {
                case 1:
                    create_ex__11TTecGiBartaFPvPvPvPv(self, &pos, self->rot_y, calc_technique_level__11TObjEneMojaFPv(self));
                    break;
                default:
                    if (ang2 < get_field_0c__10TObjPlayerFPv(self->f318) / 2 && self->target != NULL) {
                        create_ex__8TTecFoieFPvPvPvPv(self, &pos, &self->target->pos, calc_technique_level__11TObjEneMojaFPv(self));
                    } else {
                        create__8TTecFoieFPvPvPvPv(self, &pos, self->rot_y, calc_technique_level__11TObjEneMojaFPv(self));
                    }
                    break;
                }
                dir.y = dir.x = lbl_805D9BD8;
                dir.z = lbl_805D9BDC;
                push_matrix_from(lbl_8058D490);
                rotate_matrix_y(0, self->rot_y);
                rotate_vector_by_matrix((int)(0), (void *)(&dir), (void *)(&dir));
                pop_matrices(1);
                {
                    f32 xx = dir.x * dir.x;
                    f32 yy = dir.y * dir.y;
                    ang.x = (s32) (lbl_8043B0C8[0] * get_ad_end_text_start__10TObjPlayerFv(dir.z, newton_sqrtf(xx + yy)));
                }
                ang.y = 0;
                ang.z = -(s32) (lbl_8043B0C8[0] * get_ad_end_text_start__10TObjPlayerFv(dir.x, dir.y));
                spawn_directional_particle(&pos, &ang, 0xCC);
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(self, 0x3E405), &pos, 0, 0);
            }
        }
        if (self->anim_state != 4) {
            self->phase = 2;
            self->timer = 30;
        }
        break;
    case 2:
        self->count++;
        if (self->count >= 2) {
            self->count = -1;
            self->flags &= 0xFFDFFFFF;
        } else {
            self->phase = 0;
            self->timer = 0;
        }
        break;
    }
    apply_actor_gravity(self, 0, lbl_805D9BD8);
    update_collisions__10TObjPlayerFPv(self);
}
#undef self
#pragma pop

M2C_UNK update_punch_attack__11TObjEneMojaFPv(void *self_800ADAAC) {
    Vec_800ADAAC sp14;
    Vec_800ADAAC sp8;
    f32 temp_f1;
    s32 t;
    s32 n;
    s32 i;
    u8 *p;
    V398_800ADAAC *o;
    s32 e;
    switch (*(s16 *)(arg0 + 0x328)) {
    case 0:
        TObjPlayer__sub_800A7798(arg0, *(f32 *)lbl_805D50D4[*(s32 *)(arg0 + 0x368)]);
        *(s16 *)(arg0 + 0x328) = 1;
    case 1:
        ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805D9C28) != 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD04), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x300);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D9C04) != 0) {
            t = obj_testFlags30(arg0, 0x10);
            n = lbl_805D586C;
            if (t != 0) {
                n += lbl_805D5870;
            }
            for (i = 0; i < n; i++) {
                p = get_player_data__10TObjPlayerFi(i);
                if (p == NULL || p == arg0) {
                    break;
                }
                if ((obj_is_hit_receivable() != 0) && !(*(s32 *)(p + 0x30) & 0x02000800) && (((VObj_18_247a8e *)p)->m18(arg0, lbl_805D9BDC) != 0)) {
                    ((VObj_18_247a8e *)p)->m20(arg0, lbl_805D9BDC);
                    ((VObj_18_247a8e *)p)->m23(arg0);
                    if (lbl_805D9BEC < calc_boss4_scale__10TObjPlayerFi(arg0)) {
                        *(s32 *)(arg0 + 0x388) = 1;
                    }
                }
            }
        }
        if ((lbl_805D9C28 <= *(f32 *)(arg0 + 0xC0)) && (*(f32 *)(arg0 + 0xC0) <= lbl_805D9C2C)) {
            e = lookup_entry_by_value__10TObjPlayerFPvf(lbl_805D50DC);
            if (e != 0) {
                push_matrix();
                TObjPlayer__sub_803D8CD4(0);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
                TObjPlayer__sub_803D8960(0, e, &sp8, 2);
                pop_matrix();
                o = *(V398_800ADAAC **)(arg0 + 0x398);
                if (o != NULL) {
                    o->m4(&sp8, &sp14);
                }
            }
        }
        if (*(u32 *)(arg0 + 0xB4) != 4U) {
            *(s32 *)(arg0 + 0x384) += 1;
            *(s16 *)(arg0 + 0x328) = 2;
            switch (*(s32 *)(arg0 + 0x388)) {
            case 1:
                *(s16 *)(arg0 + 0xB8) = 1;
                *(s16 *)(arg0 + 0x33C) = 0;
                break;
            default:
                *(s16 *)(arg0 + 0xB8) = 0;
                *(s16 *)(arg0 + 0x33C) = (s16)((f32 *)lbl_805D50D4[*(s32 *)(arg0 + 0x368)])[1];
                break;
            }
        }
        break;
    case 2:
        ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
        if ((objInBand__FP7GameObjf(arg0, lbl_805D9BD8) != 0) && (*(s32 *)(arg0 + 0x388) == 1)) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD0A), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x200);
        }
        if (*(u32 *)(arg0 + 0xB4) != 0x20U) {
            if ((f32)--*(s16 *)(arg0 + 0x33C) < lbl_805D9BD8) {
                *(s16 *)(arg0 + 0x33C) = 0;
                *(s16 *)(arg0 + 0x328) = 1;
                *(s32 *)(arg0 + 0x388) = 0;
                *(u16 *)(arg0 + 0x338) = 0xFFFF;
                *(s32 *)(arg0 + 0x2A8) = 0;
                if (*(s32 *)(arg0 + 0x384) >= 3) {
                    *(s32 *)(arg0 + 0x384) = -1;
                }
                *(s32 *)(arg0 + 0x30) &= 0xFFDFFFFF;
            }
        }
        break;
    }
    apply_actor_gravity(arg0, 0, lbl_805D9BD8);
    update_collisions__10TObjPlayerFPv(arg0);
}
#undef arg0

void begin_attack__11TObjEneMojaFPv(Moja_800ADE48 *self) {
    switch (self->attack_kind) {
    case 2:
        self->mode = 6;
        self->action = 5;
        break;
    case 1:
        self->mode = 5;
        self->action = 2;
        break;
    case 0:
    default:
        self->mode = 4;
        self->action = 3;
        break;
    }
    self->phase = 0;
    self->flags |= 0x200000;
    self->flags &= 0xF9FBFFFF;
    self->collision->flags |= 1;
    self->f374 = 0;
}

s32 select_attack__11TObjEneMojaFPv(u8 *arg0) {
    s32 angd;
    s32 lim;
    s32 i;
    f32 sq;
    f32 dist;
    f32 radius;
    u8 *t;
    u8 *c;
    Vec_800AE18C d;
    if (M2C_FIELD(arg0, s16 *, 0x326) > 1 && (t = M2C_FIELD(arg0, u8 **, 0x2A8)) != NULL &&
        M2C_FIELD(arg0, u32 *, 0x318) != 0 && !(M2C_FIELD(t, u32 *, 0x30) & 0x02000800)) {
        dist = TObjPlayer__sub_800186E8(arg0, t, &d);
        angd = angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60),
                                    (s32)(lbl_8043B0C8[0] * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z)));
        c = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2A8), u8 **, 0xA4);
        if (c != NULL) {
            radius = M2C_FIELD(c, f32 *, 0xC);
        } else {
            radius = lbl_805D9BE8;
        }
        for (i = 0; i < 3; i++) {
            M2C_FIELD(arg0, u32 *, 0x318) = lbl_805D50CC[i + M2C_FIELD(arg0, s32 *, 0x368) * 3];
            sq = (radius + get_pos_x__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0x318))) *
                 (radius + get_pos_x__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0x318)));
            lim = get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0x318));
            if (dist <= sq && angd <= lim) {
                M2C_FIELD(arg0, s32 *, 0x380) = i;
                switch (M2C_FIELD(arg0, s32 *, 0x380)) {
                case 0:
                    if (M2C_FIELD(arg0, s32 *, 0x384) == -1) {
                        M2C_FIELD(arg0, s32 *, 0x384) = 0;
                    }
                    return 1;
                case 1:
                    if (M2C_FIELD(arg0, s32 *, 0x384) != -1 && !(M2C_FIELD(arg0, f32 *, 0x390) < lbl_805D9C1C)) {
                        if (calc_boss4_scale__10TObjPlayerFi(arg0) < M2C_FIELD(arg0, f32 *, 0x390)) {
                            return 1;
                        }
                        M2C_FIELD(arg0, s32 *, 0x384) = -1;
                        {
                            Vec_800AE18C v = *(Vec_800AE18C *)(arg0 + 0x2FC);
                            select_enemy_destination(arg0, &v, 1);
                        }
                        {
                            Vec_800AE18C v2 = *(Vec_800AE18C *)(arg0 + 0x2FC);
                            copy_position_if_valid__10TObjPlayerFii(arg0, &v2);
                        }
                    }
                    break;
                case 2:
                    if (M2C_FIELD(arg0, s32 *, 0x384) != -1) {
                        if (lbl_805D9C30 < dist && calc_boss4_scale__10TObjPlayerFi(arg0) < M2C_FIELD(arg0, f32 *, 0x394)) {
                            return 1;
                        }
                        M2C_FIELD(arg0, s32 *, 0x384) = -1;
                        {
                            Vec_800AE18C v = *(Vec_800AE18C *)(arg0 + 0x2FC);
                            select_enemy_destination(arg0, &v, 1);
                        }
                        {
                            Vec_800AE18C v2 = *(Vec_800AE18C *)(arg0 + 0x2FC);
                            copy_position_if_valid__10TObjPlayerFii(arg0, &v2);
                        }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}

M2C_UNK update_approach_state__11TObjEneMojaFPv(u8 *arg0) {
    f32 temp_f0_2;
    u8 *temp_r4;
    u8 *temp_r7;
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        apply_actor_gravity((void *) arg0, 0, lbl_805D9BD8);
        if (objInBand__FP7GameObjf((void *) (arg0), lbl_805D9BD8) != 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), 0x3AD0A), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x200);
        }
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            TObjPlayer__sub_800A7798((void *) (arg0), M2C_FIELD(lbl_805D50D4[M2C_FIELD(arg0, s32 *, 0x368)], f32 *, 0xC));
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            {
            Vec_800AE18C v = *(Vec_800AE18C *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            if (select_enemy_destination((void *) (arg0), &v, 1) != 0) {
                Vec_800AE18C v2 = *(Vec_800AE18C *)(arg0 + 0x2FC);
                copy_position_if_valid__10TObjPlayerFii((void *) (arg0), &v2);
            }
            }
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, s32 *, 0x388) = 0;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0x96;
        }
        break;
    case 1:
    default:
        temp_r7 = M2C_FIELD(arg0, u8 **, 0x2A8);
        if (temp_r7 != NULL) {
            Vec_800AE18C v3 = *(Vec_800AE18C *)(temp_r7 + 0x2FC);
            temp_r4 = lbl_805D50D4[M2C_FIELD(arg0, s32 *, 0x368)];
            if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 0) * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 0) < enemy_pursue_point((void *) (arg0), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &v3, temp_r4, M2C_FIELD(temp_r4, f32 *, 8), lbl_805D9BF0)) {
                M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
            }
            if (horizontal_distance_squared((int) (arg0 + 0x29C), (void *) (arg0 + 0x38)) < (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC)) * (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC))
                || --M2C_FIELD(arg0, s16 *, 0x33C) < 0) {
                M2C_FIELD(arg0, s32 *, 0x384) = 0;
            }
        }
        if (objInBand__FP7GameObjf((void *) (arg0), lbl_805D9C34) != 0 || objInBand__FP7GameObjf((void *) (arg0), lbl_805D9C38) != 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), 0x3A801), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x400);
        }
        break;
    }
    ((M2C_UNK (*)(void *)) advance_animation_playback)((void *) (arg0));
    update_collisions__10TObjPlayerFPv((void *) (arg0));
}

void enter_state_3__10TObjPlayerFPv(void *arg0) {
    void *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        switch ((s32) M2C_FIELD(arg0, s32 *, 0x388)) {
        case 1:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            break;
        default:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x384) = -1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
        temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
    }
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
void update_appearance_drop__11TObjEneMojaFv(Moja_800AE450 *self) {
    f32 ticks;
    f32 dist;
    VObj_800AE450 *p;
    s32 i;
    self->flags |= 0x06000000;
    self->collision->flags &= ~1;
    ((M2C_UNK (*)(void *))advance_animation_playback)(self);
    switch (self->phase) {
    case 0:
    default:
        VecCopy__FP3VecPC3Vec(&lbl_8050BEE0, &self->home);
        subtract_vector(&lbl_8050BEE0, &self->pos);
        self->angle = approach_angle_limited(self->angle,
            (s32)(lbl_8043B0C8[0] * get_ad_end_text_start__10TObjPlayerFv(lbl_8050BEE0.x, lbl_8050BEE0.z)),
            self->turn->step);
        if (self->angle >= self->turn->step) {
            return;
        }
        self->fB8 = 5;
        if (objInBand__FP7GameObjf(self, lbl_805D9C00) == 0) {
            return;
        }
        VecCopy__FP3VecPC3Vec(&self->dest, &self->home);
        VecCopy__FP3VecPC3Vec(&self->from, &self->pos);
        self->speed = newton_sqrtf(lbl_8050BEE0.x * lbl_8050BEE0.x + lbl_8050BEE0.z * lbl_8050BEE0.z);
        ticks = lbl_805D9C04 / self->fC8;
        self->speed = self->speed / ticks;
        ((M2C_UNK (*)(void *, Vec_800AE450, Vec_800AE450, f32))calc_velocity_toward_destination)(self, self->from, self->dest, self->speed);
        self->vel.y = lbl_8050BEE0.y / ticks;
        self->phase = 1;
        break;
    case 1:
        self->pos.x += self->vel.x;
        self->pos.y += self->vel.y;
        self->pos.z += self->vel.z;
        if (objInBand__FP7GameObjf(self, lbl_805D9C08) == 0) {
            return;
        }
        self->phase = 2;
        for (i = 0; i < lbl_805D5868; i++) {
            p = (VObj_800AE450 *)get_player_data__10TObjPlayerFi(i);
            if (p == NULL) {
                break;
            }
            if ((u16)obj_getField1c(p) >= 0x1000) {
                break;
            }
            if (((s32 (*)(void *))obj_is_hit_receivable)(p) != 0) {
                dist = horizontal_distance_squared((int)((u8 *)p + 0x2FC), &self->center);
                if (dist <= lbl_805D9C3C) {
                    p->m21(self, Hit_800AE450(lbl_805D9C40), 0, -1, -1);
                    p->m23(self);
                }
                if (dist <= lbl_805D9C0C && !is_split_screen() && lbl_805D53A0 == (u16)obj_getField1c(p)) {
                    set_shake_preset__11TCameraCtrlFi((int)(0));
                }
            }
        }
        spawn_particle_effect(&self->pos, 0xCB);
        spawn_particle_effect(&self->pos, 0xF0);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(self, 0x3AD03), &self->pos, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x300);
        break;
    case 2:
        apply_actor_gravity(self, 0, lbl_805D9BD8);
        if (self->fB4 != 4) {
            self->flags &= 0xF9DFFFFF;
            self->collision->flags |= 1;
            self->f384 = -1;
            self->f33C = 0;
            self->f374 = 0;
        }
        break;
    }
}
#pragma pop

void update_appearance_jump__11TObjEneMojaFv(Moja_800AE7F4 *self) {
    Vec_800AE7F4 off;
    Vec_800AE7F4 tmp;
    Vec_800AE7F4 delta;
    f32 ticks;
    f32 dist;
    VObj_800AE7F4 *p;
    s32 i;
    self->flags |= 0x06000000;
    self->collision->flags &= ~1;
    ((M2C_UNK (*)(void *))advance_animation_playback)(self);
    switch (self->phase) {
    case 0:
    default:
        off.x = lbl_805D9BD8;
        off.y = lbl_805D9C44;
        off.z = lbl_805D9C48;
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, self->angle);
        rotate_vector_by_matrix(0, &off, &off);
        pop_matrices(1);
        VecCopy__FP3VecPC3Vec(&tmp, &self->home);
        subtract_vector(&tmp, &off);
        VecCopy__FP3VecPC3Vec(&self->pos, &tmp);
        if (objInBand__FP7GameObjf(self, lbl_805D9C00) == 0) {
            return;
        }
        VecCopy__FP3VecPC3Vec(&self->dest, &self->home);
        VecCopy__FP3VecPC3Vec(&self->from, &self->pos);
        VecCopy__FP3VecPC3Vec(&delta, &self->dest);
        subtract_vector(&delta, &self->pos);
        self->angle = (s32)(lbl_8043B0C8[0] * get_ad_end_text_start__10TObjPlayerFv(delta.x, delta.z));
        self->speed = newton_sqrtf(delta.x * delta.x + delta.z * delta.z);
        ticks = lbl_805D9C04 / self->fC8;
        self->speed = self->speed / ticks;
        ((M2C_UNK (*)(void *, Vec_800AE7F4, Vec_800AE7F4, f32))calc_velocity_toward_destination)(self, self->from, self->dest, self->speed);
        self->vel.y = delta.y / ticks;
        self->phase = 1;
        break;
    case 1:
        self->pos.x += self->vel.x;
        self->pos.y += self->vel.y;
        self->pos.z += self->vel.z;
        if (objInBand__FP7GameObjf(self, lbl_805D9C08) == 0) {
            return;
        }
        self->phase = 2;
        for (i = 0; i < lbl_805D5868; i++) {
            p = (VObj_800AE7F4 *)get_player_data__10TObjPlayerFi(i);
            if (p == NULL) {
                break;
            }
            if ((u16)obj_getField1c(p) >= 0x1000) {
                break;
            }
            if (((s32 (*)(void *))obj_is_hit_receivable)(p) != 0) {
                dist = horizontal_distance_squared((int)((u8 *)p + 0x2FC), &self->center);
                if (dist <= lbl_805D9C3C) {
                    p->m21(self, Hit_800AE7F4(lbl_805D9C40), 0, -1, -1);
                    p->m23(self);
                }
                if (dist <= lbl_805D9C0C && !is_split_screen() && lbl_805D53A0 == (u16)obj_getField1c(p)) {
                    set_shake_preset__11TCameraCtrlFi((int)(0));
                }
            }
        }
        spawn_particle_effect(&self->pos, 0xCB);
        spawn_particle_effect(&self->pos, 0xF0);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(self, 0x3AD03), &self->pos, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x300);
        break;
    case 2:
        apply_actor_gravity(self, 0, lbl_805D9BD8);
        if (self->fB4 != 4) {
            self->flags &= 0xF9DFFFFF;
            self->collision->flags |= 1;
            self->f384 = -1;
            self->f33C = 0;
            self->f374 = 0;
        }
        break;
    }
}
#pragma pop

void update_idle_state__11TObjEneMojaFv(Moja_800AEBB8 *self) {
    switch (self->phase) {
    case 0:
    default: {
        Vec_800AE18C dest = self->pos;
        if (select_enemy_destination(self, &dest, 7) != 0) {
            Vec_800AE18C cur = self->f2FC;
            copy_position_if_valid__10TObjPlayerFii(self, &cur);
        }
        switch (self->f374) {
        case 0:
            self->phase = 1;
            break;
        }
        break;
    }
    case 1:
        advance_animation_playback();
        ((void (*)(f32, void *, s32, f32, f32)) enemy_wander_home)(self->info->f4, self, self->info->f8, lbl_805D9C4C, lbl_805D9C4C);
        break;
    }
    refresh_collision_body_centers(self);
    obj_clearFlags30(self, 0x200000);
}

void update_meseta_anim_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 0)) {
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0_2) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        return;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
}
s32 update_freeze_timer__11TObjEneMojaFPv(void *arg0) {
    void *temp_r3;
    if (update_movement_status__10TObjPlayerFv() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
        case 1:
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x388) = 1;
            M2C_FIELD(arg0, s32 *, 0x384) = -1;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
            M2C_FIELD(arg0, s32 *, 0x374) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            obj_clearFlags30(arg0, 0x06040000);
            temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
            break;
        }
        return 1;
    }
    return 0;
}
s32 update_action_hold__11TObjEneMojaFPv(void *arg0) {
    void *temp_r3;
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
        case 1:
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x388) = 1;
            M2C_FIELD(arg0, s32 *, 0x384) = -1;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
            M2C_FIELD(arg0, s32 *, 0x374) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            obj_clearFlags30(arg0, 0x06040000);
            temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
            break;
        }
        return 1;
    }
    return 0;
}
void acquire_target__11TObjEneMojaFPv(u8 *arg0) {
    s32 best_id;
    s32 i;
    s32 id;
    u8 *p;
    f32 best;
    f32 d;
    u8 *q;
    u16 tid;
    if (M2C_FIELD(arg0, s32 *, 0x374) != 1 && ((M2C_FIELD(arg0, s16 *, 0x326) != 0 && M2C_FIELD(arg0, u8 **, 0x2A8) == NULL) || ((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0)) {
        if (obj_testFlags30((void *) (arg0), 0x10) != 0) {
            i = 0;
            best_id = 0xFFFF;
            Vec_800AEE54 v = *(Vec_800AEE54 *)lbl_8043B0B4;
            best = M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0) * M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0);
            for (; i < lbl_805D586C + lbl_805D5870; i++) {
                p = get_player_data__10TObjPlayerFi(i);
                if (p == NULL) {
                    break;
                }
                id = obj_getField1c(p);
                if ((u16)id < 0x4000 && (u16)id != M2C_FIELD(arg0, u16 *, 0x1C) && !(M2C_FIELD(p, s32 *, 0x30) & 0x02000800)) {
                    f32 xx;
                    f32 zz;
                    VecCopy__FP3VecPC3Vec(&v, p + 0x2FC);
                    subtract_vector(&v, arg0 + 0x2FC);
                    xx = v.x * v.x;
                    zz = v.z * v.z;
                    d = xx + zz;
                    if (d < best && check_path_obstructed((void *) (arg0), p + 0x2FC) != 1 && csnVector(arg0 + 0x2FC, p + 0x2FC, -1) == 0U) {
                        best_id = id;
                        best = d;
                    }
                }
            }
            M2C_FIELD(arg0, u16 *, 0x338) = best_id;
        } else {
            M2C_FIELD(arg0, u16 *, 0x338) = find_nearest_visible_player((void *) (arg0), 0, M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0));
        }
        tid = M2C_FIELD(arg0, u16 *, 0x338);
        if (tid < 0x1000U) {
            q = get_player_by_client_id(tid);
            if (q != NULL) {
                if (get_field_3e4__10TObjPlayerFPv((int) (q)) == get_current_floor()) {
                    M2C_FIELD(arg0, u8 **, 0x2A8) = q;
                    return;
                }
            }
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
            return;
        }
        if (tid < 0x4000U) {
            M2C_FIELD(arg0, u8 **, 0x2A8) = get_enemy_entity(tid);
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
}

void render__11TObjEneMojaFv(u8 *arg0) {
    Vec_800AF080 pos;
    Fade_800AF080 *fade;
    s32 cam;
    s32 vis;
    s32 draw;
    s32 id;
    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    vis = ((Ene_800AF080 *)arg0)->m9(lbl_805D9C50, lbl_805D9C54, lbl_805D9BF0);
    if (vis == 0) {
        return;
    }
    select_actor_lighting(arg0);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
    id = some_id_805c6f74;
    fade = &((Body_800AF080 *)arg0)->fades[cam];
    lbl_805D5660 = id;
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    some_id_805c6f74 = id | 1;
    update_obstruction_fade(fade, lbl_805D7780, lbl_805D7784, id);
    draw = 1;
    if (updateFromCamera__15RenderFadeStateFPCf(fade, arg0 + 0x38) == 1) {
        fade->m6();
        if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
            draw = 0;
        } else {
            some_id_805c6f74 &= ~1;
        }
    }
    if (draw != 0) {
        set_global_flag__10TObjPlayerFv();
        push_matrix();
        translate_matrix(0, lbl_805D9BD8, M2C_FIELD(arg0, f32 *, 0x38C), lbl_805D9BD8);
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y((int)(0), (int)(M2C_FIELD(arg0, s32 *, 0x60)));
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            toggle_particle_effect__10TObjPlayerFv();
            if (vis == 1) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            } else {
                render_world_model__10TObjPlayerFPv(arg0);
            }
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
        clear_global_state__10TObjPlayerFv();
    }
    some_id_805c6f74 &= ~1;
    if (updateFromCamera__15RenderFadeStateFPCf(fade, arg0 + 0x38) == 1) {
        fade->m7();
    }
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    some_id_805c6f74 = lbl_805D5660;
    restore_scene_lighting(lbl_805D5668, lbl_805D5664);
    switch (M2C_FIELD(arg0, s16 *, 0x326)) {
    case 0:
    case 1:
    case 9:
        break;
    default:
        pos.x = lbl_805D9C58;
        pos.y = lbl_805D9BDC;
        pos.z = lbl_805D9C58;
        render_with_position_override__10TObjPlayerFPvPvi(arg0, &pos.x, 0, lbl_805D9C58);
        break;
    }
}

void run_task__11TObjEneMojaFPv(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    s32 temp_r30;
    u16 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r4;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_800ACA0C((void *) (arg0));
        return;
    }
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x338);
    if (temp_r3 < 0x1000U) {
        temp_r3_2 = (u8 *)(get_player_by_client_id(temp_r3));
        if (temp_r3_2 != NULL) {
            if (get_field_3e4__10TObjPlayerFPv((int) (temp_r3_2)) == get_current_floor()) {
                M2C_FIELD(arg0, u8 **, 0x2A8) = temp_r3_2;
                goto done;
            }
        }
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    done:;
    } else if (temp_r3 < 0x4000U) {
        M2C_FIELD(arg0, u8 **, 0x2A8) = get_enemy_entity(temp_r3);
    } else {
        M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            update_idle_state__11TObjEneMojaFv((Moja_800AEBB8 *)((void *) (arg0)));
            break;
        case 1:
            update_appearance_jump__11TObjEneMojaFv((Moja_800AE7F4 *)((void *) (arg0)));
            break;
        case 2:
            update_appearance_drop__11TObjEneMojaFv((Moja_800AE450 *)((Moja_800AE450 *) (arg0)));
            break;
        case 3:
            update_approach_state__11TObjEneMojaFPv((u8 *)((void *) (arg0)));
            break;
        case 4:
            update_punch_attack__11TObjEneMojaFPv((void *)((void *) (arg0)));
            break;
        case 5:
            update_technique_state__11TObjEneMojaFv((void *)((void *) (arg0)));
            break;
        case 6:
            update_attack_jump__11TObjEneMojaFv((Obj_800ACFE8 *) (arg0));
            break;
        case 7:
            update_invincibility__10TObjPlayerFPv((void *) (arg0));
            break;
        case 8:
            update_ground_effect__10TObjPlayerFPv((void *) (arg0));
            break;
        case 9:
            update_death_state__11TObjEneMojaFv((void *) (arg0));
            break;
        }
    }
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x30) & 0x02000800)) {
        M2C_FIELD(arg0, s32 *, 0x384) = -1;
        M2C_FIELD(arg0, s16 *, 0x33C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4);
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (temp_f1 + lbl_805D9BDC);
    minimap_render_dot((void *) ((u8 *)(arg0) + 0x38), (int) (-0x5DB4), (int) (1), (int) (0), (f32) (temp_f1));
}

}
