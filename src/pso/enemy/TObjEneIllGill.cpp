#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct IllGillBase_80367984_8036690C { char pad[0x14]; };
struct IllGillVObj_80367984_8036690C : IllGillBase_80367984_8036690C {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

struct Vec_80367270 { f32 x, y, z; };
typedef s32 M2C_UNK;
struct Vec_803660A4 { f32 x, y, z; };

struct Ang_803660A4 { s32 x, y, z; };

extern "C" {
f32 TObjPlayer__sub_800186E8(void *, void *, Vec_80367270 *);
f32 get_pos_x__10TObjPlayerFPv(int);
s32 check_player_flag1__6TLobbyFPv(void *);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
extern const f64 lbl_8047A358[];
extern s32 lbl_804F2F6C[];
extern int enable_v2_features;
M2C_UNK apply_actor_gravity(void *, int, f32);
s32 update_angle__10TObjPlayerFPviPv(void *, void *, void *);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 get_field_0c__10TObjPlayerFPv(int);
s32 obj_testFlags30(void *, int);
int obj_clearFlags30(void*, int);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
void spawn_directional_particle(void *, void *, s32);
s32 spawn_continuous_particle_with_direction(void *, void *, s32);
s32 angle_difference_abs(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
void update_collisions__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(u16);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
void *__nw__7TObjectFUl(int);
void TObjIllGillKage__ct(void *, s32, void *);
void free_resources__14TObjEneIllGillFPv(void *arg0);
void subtract_vector(void *, void *);
extern const f64 TObjEneIllGill__data_8047A348;
extern s32 lbl_804F2F6C[];
extern s32 tl_05;
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02D8;
void TObjEneIllGill__sub_803660A4(void *arg0_);
}

struct RecoveredGlobal_80367DC8_lbl_8050BF00 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80367DC8_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredFields_80367EFC_arg0
{
  u8 unknown_0[0xB8];
  s16 field_B8;
  u8 unknown_BA[0x26C];
  s16 field_326;
  s16 field_328;
  u8 unknown_32A[0x66];
  s32 field_390;
};

struct RecoveredFields_80367F6C_arg0
{
  u8 unknown_0[0xB8];
  s16 field_B8;
  u8 unknown_BA[0x26C];
  s16 field_326;
  s16 field_328;
  u8 unknown_32A[0x66];
  s32 field_390;
};

struct O_80367DA4 { u8 pad[0x3e0]; s32 arr[4]; };

struct Gill_803671A4 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x84];
    s16 xb8;
    u8 padba[0x26C];
    s16 x326;
    s16 x328;
    u8 pad32a[0x6A];
    s32 x394;
    u8 pad398[0x14];
    f32 x3ac;
};

struct Hit_803683BC { u8 pad[0x30]; u32 flags; };

struct Gill_803683BC {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x274];
    Hit_803683BC *x2a8;
    u8 pad2ac[8];
    f32 x2b4;
    u8 pad2b8[0x6E];
    s16 x326;
    u8 pad328[0x74];
    s32 x39c;
};

struct Vec_80367860 { f32 x, y, z; };

typedef s32 M2C_UNK;
struct VBase_18_80367FDC { char pad[0x18]; };

struct VObj_18_80367FDC : VBase_18_80367FDC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual s32 m17(s32);
};

struct Vec_80367FDC { f32 x, y, z; };

struct Gill_80367FDC : VObj_18_80367FDC {
    u16 f1C;
    u8 pad1E[0x2A8 - 0x1E];
    s32 f2A8;
    u8 pad2AC[0x338 - 0x2AC];
    u16 f338;
    u8 pad33A[0x350 - 0x33A];
    f32 *f350;
    u8 pad354[0x390 - 0x354];
    s32 f390;
};

struct VBase_18_f68442 { char pad[0x18]; };

struct VObj_18_f68442 : VBase_18_f68442 {
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
    virtual f32 m20(void *, f32);
    virtual void m21();
    virtual f32 m22(void *, s32);
    virtual void m23(void *, f32);
};

struct Vec3_80366AE4 { f32 x, y, z; };

struct Rec_80366AE4 { f32 f0, f4, f8, fC; };

struct Vec_80367588 { f32 x, y, z; };

struct Vec_80367B00 { f32 x, y, z; };

struct Sub_80367B00 { u8 pad0[4]; f32 f4; s32 f8; };

struct Obj_80367B00 {
    u8 pad0[0x38]; Vec_80367B00 pos; Vec_80367B00 prev; Vec_80367B00 v50;
    u8 pad5c[0x60 - 0x5C]; s32 f60; u8 pad64[0xB8 - 0x64]; s16 fB8;
    u8 padba[0x290 - 0xBA]; Vec_80367B00 v290; Vec_80367B00 v29C;
    u8 pad2a8[0x2FC - 0x2A8]; Vec_80367B00 v2FC;
    u8 pad308[0x350 - 0x308]; Sub_80367B00 *f350;
};

extern "C" {
int obj_clearFlags30(void*, int);
void free_resources__14TObjEneIllGillFPv(void *arg0);
void TObjEneIllGill__vt57(u8 *arg0);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void free_resources__14TObjEneIllGillFPv(void *arg0);
M2C_UNK spawn_particle_effect(void *, int);
void TObjEneIllGill__vt61(u8 *arg0);
int obj_clearFlags30(void*, int);
void update_collisions__10TObjPlayerFPv(void *);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern const f32 TObjEneIllGill__data_805E02BC;
void TObjEneIllGill__sub_803669B0(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
s32 move_with_wall_slide(void *);
M2C_UNK obj_setFlags30(void *, int);
s32 queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
s32 request_two_effects__10TObjPlayerFPv(void *);
s32 apply_effect_variant_b__10TObjPlayerFii(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
s32 play_sound_effect(int, void *, int, int);
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02C0;
extern const f32 TObjEneIllGill__data_805E02D8;
extern const f32 TObjEneIllGill__data_805E02DC;
extern const f32 lbl_805E02E0;
extern const f32 lbl_805E02E4;
void TObjEneIllGill__sub_803665B4(u8 *arg0);
s32 project_actor_to_ground(void *, void *, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
s32 push_matrix_from(void *);
s32 pop_matrices(int);
extern RecoveredGlobal_80367DC8_lbl_8050BF00 lbl_8050BF00;
extern RecoveredGlobal_80367DC8_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneIllGill__data_805E02BC;
void TObjEneIllGill__sub_80367DC8(u8 *arg0, s32 arg1);
s32 update_movement_status__10TObjPlayerFv(void *);
int obj_clearFlags30(void*, int);
s32 TObjEneIllGill__vt37(u8 *arg0);
s32 update_action_hold_status__10TObjPlayerFv(void *);
int obj_clearFlags30(void*, int);
s32 TObjEneIllGill__vt34(u8 *arg0);
void TObjEneIllGill__sub_80367DA4(s32 arg0);
void TObjEneIllGill__sub_80367DA4(s32 arg0);
extern const f32 TObjEneIllGill__data_805E02BC;
void TObjEneIllGill__vt58(Gill_803671A4 *o);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void update_prev_position__10TObjPlayerFPv(void *);
void submit_cursor_candidate(void *, int);
void TObjEneIllGill__sub_80365688(void *);
void TObjEneIllGill__sub_803665B4(u8 *arg0);
void TObjEneIllGill__sub_803669B0(u8 *arg0);
void run_attack_phase__14TObjEneIllGillFPv(u8 *arg0);
extern const f32 TObjEneIllGill__data_805E02CC;
void run_task__14TObjEneIllGillFv(Gill_803683BC *o);
M2C_UNK apply_actor_gravity(void *, int, f32);
f32 TObjPlayer__sub_80017804(void *, Vec_80367860, f32);
M2C_UNK obj_setFlags30(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
s32 push_matrix_from(void *);
s32 pop_matrices(int);
extern RecoveredGlobal_80367DC8_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805E02B8;
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02CC;
extern const f32 TObjEneIllGill__data_805E02DC;
void TObjEneIllGill__sub_80367860(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
void VecCopy__FP3VecPC3Vec(void *, const void *);
int obj_clearFlags30(void*, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
void update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 play_sound_effect(int, void *, int, int);
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02C0;
extern const f32 lbl_805E02E8;
void TObjEneIllGill__sub_803667B8(u8 *arg0);
u16 find_nearest_visible_player(void *, int, f32 *, f32);
s32 check_path_obstructed(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 obj_is_hit_receivable(void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
int obj_clearFlags30(void*, int);
M2C_UNK obj_setFlags30(void *, int);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(s32);
s32 get_enemy_entity(u16);
s32 get_player_by_client_id(u16);
void subtract_vector(void *, void *);
extern Vec_80367FDC lbl_8047A328;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void TObjEneIllGill__vt26(Gill_80367FDC *self);
void subtract_vector(void *, void *);
M2C_UNK apply_actor_gravity(void *, int, f32);
s32 update_angle__10TObjPlayerFPviPv(void *, void *, void *);
int obj_clearFlags30(void*, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(int, void *);
M2C_UNK set_model_param__10TObjPlayerFPvs(void *, int);
M2C_UNK set_model_id__10TObjPlayerFPvs(void *, int);
M2C_UNK advance_animation_playback(void *);
void update_collisions__10TObjPlayerFPv(void *);
void free_resources__14TObjEneIllGillFPv(void *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 get_field_0c__10TObjPlayerFPv(int);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(s32);
u32 create_particle_emitter(void *, int);
s32 get_enemy_entity(u16);
s32 objInBand__FP7GameObjf(void *, f32);
s32 get_player_by_client_id(u16);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 play_sound_effect(int, void *, int, int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(int);
extern u8 *TObjEneIllGill__data_805D6FDC;
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02CC;
extern const f32 TObjEneIllGill__data_805E02DC;
extern const f32 lbl_805E02E0;
extern const f32 lbl_805E02EC;
void TObjEneIllGill__sub_80366AE4(u8 *arg0);
f32 enemy_move_toward(void *, s32, Vec_80367588 *, s32, f32, f32);
M2C_UNK enemy_pursue_point(void *, s32, Vec_80367588 *, f32, f32, f32);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 get_field_0c__10TObjPlayerFPv(int);
int obj_clearFlags30(void*, int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 horizontal_distance_squared(void *, void *);
s32 angle_difference_abs(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
void update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 play_sound_effect(int, void *, int, int);
void subtract_vector(void *, void *);
extern const f64 TObjEneIllGill__data_8047A348;
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02DC;
extern const f32 lbl_805E02F0;
extern const f32 lbl_805E02F4;
extern const f32 lbl_805E02F8;
void TObjEneIllGill__sub_80367588(void *arg0_);
s32 move_with_wall_slide(void *);
void enemy_set_heading_velocity(void *, s32, f32);
void enemy_turn_toward_dest(void *, s32);
void VecCopy__FP3VecPC3Vec(void *, const void *);
f32 get_random_float__8TObjFishFv(f32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 approach_angle_limited(s32, s32, s32);
void TObjEneIllGill__sub_80367DC8(u8 *arg0, s32 arg1);
void subtract_vector(void *, void *);
extern const f64 TObjEneIllGill__data_8047A348;
extern Vec_80367B00 lbl_8050BEE0;
extern RecoveredGlobal_80367DC8_lbl_8050BF00 lbl_8050BF00;
extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 TObjEneIllGill__data_805E02DC;
void TObjEneIllGill__sub_80367B00(Obj_80367B00 *o);
}

extern "C" {

int TObjEneIllGill__vt59(void* p);
void TObjEneIllGill__vt60(void *arg0);
void *__dt__14TObjEneIllGillFv(void *arg0, s16 arg1);
void * create__14TObjEneIllGillFPv(void *arg0);
void free_effect__14TObjEneIllGillFv(void);
void free_resources__14TObjEneIllGillFPv(void *arg0);
void run_attack_phase__14TObjEneIllGillFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
int TLobby__sub_8001FE7C(void*, void*);
void *TObjControl__ct(void *, void *);
void free_collision_body_parts(void *);
void *TObjEneIllGill__ct(void *, void *, void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK enemy_wander_home(void *, int, f32, f32, f32);
f32 horizontal_distance_squared(void *, void *);
M2C_UNK refresh_collision_body_centers(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK minimap_render_dot(void *, int, int, int);
int obj_clearFlags30(void*, int);
M2C_UNK obj_setFlags30(void *, int);
s32 request_destroy__11TBoss4Type2FUi(void *);

void TObjEneIllGill__sub_803660A4(void *arg0_) {
    u8 *pl;
    s32 a;
    u8 *arg0 = (u8 *)arg0_;
    if (M2C_FIELD(arg0, u16 *, 0x338) < 0x1000U) {
        pl = (u8 *)get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x338));
        if (pl != NULL && get_field_3e4__10TObjPlayerFPv((s32)pl) == get_current_floor()) {
            M2C_FIELD(arg0, u8 **, 0x2A8) = pl;
        } else {
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    obj_clearFlags30(arg0, 0x04040000);
    advance_animation_playback(arg0);
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        if (M2C_FIELD(arg0, u8 **, 0x2A8) == NULL) {
            M2C_FIELD(arg0, s32 *, 0x30) &= ~0x00200000;
            M2C_FIELD(arg0, s32 *, 0x39C) = 0;
        } else {
            Vec_803660A4 v;
            VecCopy__FP3VecPC3Vec(&v, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            subtract_vector(&v, arg0 + 0x2FC);
            a = update_angle__10TObjPlayerFPviPv(arg0, (void *)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &v);
            apply_actor_gravity(arg0, 0, TObjEneIllGill__data_805E02BC);
            if (a < get_field_0c__10TObjPlayerFPv(lbl_804F2F6C[2])) {
                M2C_FIELD(arg0, s16 *, 0x328) = 1;
                M2C_FIELD(arg0, s16 *, 0xB8) = 4;
                M2C_FIELD(arg0, s32 *, 0x39C) = 0;
            }
        }
        break;
    case 1:
        if (objInBand__FP7GameObjf(arg0, TObjEneIllGill__data_805E02D8) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            M2C_FIELD(arg0, s32 *, 0x39C) = 0;
            {
                Vec_803660A4 d = *(Vec_803660A4 *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
                Ang_803660A4 ang;
                subtract_vector(&d, arg0 + 0x3BC);
                ang.x = (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(d.z, newton_sqrtf(d.x * d.x + d.y * d.y)));
                ang.y = 0;
                ang.z = -(s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.y));
                if (M2C_FIELD(arg0, u32 *, 0x414) == 0U) {
                    M2C_FIELD(arg0, u32 *, 0x414) = spawn_continuous_particle_with_direction(arg0 + 0x3BC, &ang, 0x224);
                }
                spawn_directional_particle(arg0 + 0x3BC, &ang, 0x223);
            }
        }
        break;
    case 2:
        play_persistent_sound(0x4003A356, arg0, arg0 + 0x38, 0, 0);
        apply_actor_gravity(arg0, 0, TObjEneIllGill__data_805E02BC);
        if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
            Vec_803660A4 w;
            VecCopy__FP3VecPC3Vec(&w, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            subtract_vector(&w, arg0 + 0x2FC);
            a = angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(w.x, w.z)));
            if (a < get_field_0c__10TObjPlayerFPv(lbl_804F2F6C[2])) {
                VecCopy__FP3VecPC3Vec(&w, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x38);
                subtract_vector(&w, arg0 + 0x3BC);
                get_ad_end_text_start__10TObjPlayerFv(w.z, newton_sqrtf(w.x * w.x + w.y * w.y));
                get_ad_end_text_start__10TObjPlayerFv(w.x, w.y);
                if (M2C_FIELD(arg0, u32 *, 0xB4) != 4 && obj_testFlags30(M2C_FIELD(arg0, u8 **, 0x2A8), 0x04000000) == 0) {
                    void *m = __nw__7TObjectFUl(0x9C);
                    if (m != NULL) {
                        TObjIllGillKage__ct(m, tl_05, M2C_FIELD(arg0, u8 **, 0x2A8));
                    }
                }
            } else {
                M2C_FIELD(arg0, u32 *, 0xB4) &= ~4;
            }
        } else {
            M2C_FIELD(arg0, u32 *, 0xB4) &= ~4;
        }
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 4) {
            M2C_FIELD(arg0, s16 *, 0x328) = 4;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s32 *, 0x39C) = 10;
        }
        break;
    case 4:
        apply_actor_gravity(arg0, 0, TObjEneIllGill__data_805E02BC);
        M2C_FIELD(arg0, s32 *, 0x39C) = M2C_FIELD(arg0, s32 *, 0x39C) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x39C) < 0) {
            M2C_FIELD(arg0, s32 *, 0x30) &= ~0x00200000;
            M2C_FIELD(arg0, s32 *, 0x39C) = 0;
            free_resources__14TObjEneIllGillFPv(arg0);
        }
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void TObjEneIllGill__sub_803665B4(u8 *arg0) {
  s16 temp_r0;
  s32 temp_r0_2;
  obj_setFlags30((void *) arg0, (int) 0x04040000);
  advance_animation_playback((void *) arg0);
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x328));
  switch (temp_r0)
  {
    default:
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
    case 0:
      ((s32)apply_actor_gravity((void *) arg0, (int) 0, (f32) TObjEneIllGill__data_805E02BC));
      if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjEneIllGill__data_805E02D8) != 0)
    {
      play_sound_effect((int) 0x4003A351, (void *) (arg0 + 0x38), (int) 0, (int) 0);
      *((s16 *) (((s8 *) arg0) + 0x328)) = 2;
    }
      return;
    return;
    case 2:
      *((f32 *) (((s8 *) arg0) + 0x300)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x300))) + TObjEneIllGill__data_805E02DC);
      move_with_wall_slide((void *) arg0);
      *((f32 *) (((s8 *) arg0) + 0x308)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x308))) * lbl_805E02E0);
      *((f32 *) (((s8 *) arg0) + 0x310)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x310))) * lbl_805E02E0);
      if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjEneIllGill__data_805E02C0) != 0)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 3;
      spawn_particle_effect((void *) (arg0 + 0x38), (int) 0xF0);
      return;
    }
      break;
    case 3:
      if (objInBand__FP7GameObjf((void *) arg0, (f32) lbl_805E02E4) != 0)
    {
      play_sound_effect((int) 0x4003A358, (void *) (arg0 + 0x38), (int) 0, (int) 0);
      apply_effect_variant_b__10TObjPlayerFii((void *) (arg0 + 0x38), (int) 0xA);
      request_two_effects__10TObjPlayerFPv((void *) (arg0 + 0x38));
      *((s16 *) (((s8 *) arg0) + 0x328)) = 4;
      *((s32 *) (((s8 *) arg0) + 0x3A0)) = 0xA;
      return;
    }
      break;
    case 4:
      temp_r0_2 = (*((s32 *) (((s8 *) arg0) + 0x3A0))) - 1;
      *((s32 *) (((s8 *) arg0) + 0x3A0)) = temp_r0_2;
      if (temp_r0_2 < 0)
    {
      queue_destruction__7TObjectFv((void *) arg0);
    }
      break;
  }
}

void TObjEneIllGill__vt61(u8 *arg0) {
    u8 *temp_r5;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        M2C_FIELD(arg0, s16 *, 0x326) = 8;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFF7FFE);
        free_resources__14TObjEneIllGillFPv(arg0);
        spawn_particle_effect((void *) (arg0 + 0x2FC), (int) (0xF2));
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

void TObjEneIllGill__sub_803667B8(u8 *arg0) {
    obj_clearFlags30((void*)(arg0), (int)(0x04040000));
    advance_animation_playback(arg0);
    M2C_FIELD(arg0, f32 *, 0x310) = TObjEneIllGill__data_805E02BC;
    M2C_FIELD(arg0, f32 *, 0x308) = TObjEneIllGill__data_805E02BC;
    apply_actor_gravity(arg0, 0, TObjEneIllGill__data_805E02BC);
    update_collisions__10TObjPlayerFPv(arg0);
    if (objInBand__FP7GameObjf(arg0, TObjEneIllGill__data_805E02C0) != 0) {
        play_sound_effect(0x4003A350, arg0 + 0x38, 0, 0);
    }
    if (M2C_FIELD(arg0, u32 *, 0xB4) != 8) {
        M2C_FIELD(arg0, u32 *, 0x30) &= ~0x600;
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), u32 *, 0x18) &= ~0x04000000;
        if ((f32)M2C_FIELD(arg0, s16 *, 0x32C) < lbl_805E02E8 * (f32)M2C_FIELD(arg0, s16 *, 0x2B8)) {
            M2C_FIELD(arg0, u32 *, 0x30) |= 0x2000;
            M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
            M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFF;
            VecCopy__FP3VecPC3Vec(arg0 + 0x290, arg0 + 0x2FC);
            VecCopy__FP3VecPC3Vec(arg0 + 0x29C, arg0 + 0x2FC);
            M2C_FIELD(arg0, f32 *, 0x3AC) = TObjEneIllGill__data_805E02BC;
        }
        M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void TObjEneIllGill__vt60(void *arg0) {
    s16 temp_r0;
    void *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xB8);
    if ((temp_r0 == 2) || (temp_r0 == 3)) {
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFBFFFFFF);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        free_resources__14TObjEneIllGillFPv((void *)((M2C_UNK) arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

void TObjEneIllGill__sub_803669B0(u8 *arg0) {
    s32 temp_r3;
    obj_clearFlags30((void*)(arg0), (int)(0x04040000U));
    advance_animation_playback((void *)((void *) (arg0)));
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) ((*(f32 *)&TObjEneIllGill__data_805E02BC)));
    }
    update_collisions__10TObjPlayerFPv(arg0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x39C);
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) (temp_r3 - 1);
    if (temp_r3 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s32 *, 0x39C) = (s32) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

int TObjEneIllGill__vt59(void* p) { return obj_clearFlags30((void*)(p), (int)(256)); }
void free_resources__14TObjEneIllGillFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x414) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x414));
        M2C_FIELD(arg0, u32 *, 0x414) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x418) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x418));
        M2C_FIELD(arg0, u32 *, 0x418) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x41C));
        M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
    }
}

extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 lbl_805E02C4;
extern const f32 lbl_805E02C8;
extern const f32 TObjEneIllGill__data_805E02DC;
extern const f32 lbl_805E02E8;
extern const f32 lbl_805E02FC;

void TObjEneIllGill__sub_80366AE4(u8 *arg0) {
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f31;
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r30;
    s32 temp_r30_2;
    u16 temp_r3;
    u32 temp_r3_10;
    u32 temp_r3_11;
    u32 temp_r3_12;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    u8 *temp_r3_5;
    u8 *temp_r3_6;
    u8 *temp_r3_7;
    u8 *temp_r3_8;
    u8 *temp_r3_9;
    u8 *temp_r4;
    u8 *temp_r6;
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x338);
    if (temp_r3 < 0x1000U) {
        temp_r3_2 = (u8 *)get_player_by_client_id(temp_r3);
        if ((temp_r3_2 != NULL) && (get_field_3e4__10TObjPlayerFPv((s32)temp_r3_2) == get_current_floor())) {
            M2C_FIELD(arg0, u8 **, 0x2A8) = temp_r3_2;
        } else {
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
        }
    } else if (temp_r3 < 0x4000U) {
        M2C_FIELD(arg0, u8 **, 0x2A8) = (u8 *)get_enemy_entity(temp_r3);
    } else {
        M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    obj_clearFlags30((void*)((void *) (arg0)), (int)((int) (0x04040000)));
    M2C_FIELD(arg0, f32 *, 0xC8) = M2C_FIELD(TObjEneIllGill__data_805D6FDC, f32 *, 4) * M2C_FIELD(arg0, Rec_80366AE4 **, 0xD8)[M2C_FIELD(arg0, s16 *, 0xB8)].f8;
    advance_animation_playback((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
    case 0:
        temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
        if (temp_r6 == NULL) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
            M2C_FIELD(arg0, s32 *, 0x39C) = 0;
        } else {
            Vec3_80366AE4 v = M2C_FIELD(temp_r6, Vec3_80366AE4 *, 0x2FC);
            subtract_vector(&v, arg0 + 0x2FC);
            temp_r30_2 = update_angle__10TObjPlayerFPviPv((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)), (void *) (&v));
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneIllGill__data_805E02BC));
            if (temp_r30_2 < get_field_0c__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0x318)))) {
                M2C_FIELD(arg0, s16 *, 0x328) = 2;
                temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x358);
                if (TObjEneIllGill__data_805E02BC == temp_f1_2) {
                    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) > lbl_805E02EC) {
                        if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) > lbl_805E02E0) {
                            M2C_FIELD(arg0, s32 *, 0x398) = 1;
                        } else {
                            M2C_FIELD(arg0, s32 *, 0x398) = 2;
                        }
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x398) = 3;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 0x398) = (s32) temp_f1_2;
                }
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x398);
                switch (temp_r0_2) {
                case 1:
                    M2C_FIELD(arg0, s16 *, 0xB8) = 2;
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x414) == 0U) {
                        M2C_FIELD(arg0, u32 *, 0x414) = create_particle_emitter((void *) (arg0 + 0x3B0), (int) (0x1E));
                    }
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x418) == 0U) {
                        M2C_FIELD(arg0, u32 *, 0x418) = create_particle_emitter((void *) (arg0 + 0x3B0), (int) (0x1F));
                    }
                    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x1E;
                    M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
                    play_sound_effect((int) (0x4003A352), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                    break;
                case 2:
                    M2C_FIELD(arg0, s16 *, 0xB8) = 2;
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x414) == 0U) {
                        M2C_FIELD(arg0, u32 *, 0x414) = create_particle_emitter((void *) (arg0 + 0x3B0), (int) (0xA1));
                    }
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x418) == 0U) {
                        M2C_FIELD(arg0, u32 *, 0x418) = create_particle_emitter((void *) (arg0 + 0x3B0), (int) (0x188));
                    }
                    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x1E;
                    M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
                    play_sound_effect((int) (0x4003A352), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                    break;
                case 3:
                default:
                    M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x414) == 0U) {
                        M2C_FIELD(arg0, u32 *, 0x414) = create_particle_emitter((void *) (arg0 + 0x3B0), (int) (0x1C4));
                    }
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x418) == 0U) {
                        M2C_FIELD(arg0, u32 *, 0x418) = create_particle_emitter((void *) (arg0 + 0x3B0), (int) (0x1C5));
                    }
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) == 0U) {
                        M2C_FIELD(arg0, u32 *, 0x41C) = create_particle_emitter((void *) (arg0 + 0x3B0), (int) (0x1C8));
                    }
                    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x23;
                    play_sound_effect((int) (0x4003A352), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                    break;
                }
            }
        }
        break;
    case 2:
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneIllGill__data_805E02BC));
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneIllGill__data_805E02DC)) != 0) {
            play_sound_effect((int) (0x4003A353), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) M2C_FIELD(arg0, s32 *, 0x3A4)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3A4) = 0;
            temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
            if ((temp_r3_3 != NULL) && (((VObj_18_f68442 *)(temp_r3_3))->m18(arg0, TObjEneIllGill__data_805E02CC) != 0)) {
                temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x398);
                switch (temp_r0_3) {
                case 1:
                    set_model_id__10TObjPlayerFPvs((void *) (arg0), (int) (7));
                    set_model_param__10TObjPlayerFPvs((void *) (arg0), (int) ((s16) M2C_FIELD(TObjEneIllGill__data_805D6FDC, s32 *, 0x18)));
                    temp_r3_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
                    ((VObj_18_f68442 *)(temp_r3_4))->m22(arg0, 0);
                    play_sound_effect((int) (0x40039E54), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                    break;
                case 2:
                    set_model_id__10TObjPlayerFPvs((void *) (arg0), (int) (0xA));
                    set_model_param__10TObjPlayerFPvs((void *) (arg0), (int) ((s16) M2C_FIELD(TObjEneIllGill__data_805D6FDC, s32 *, 0x18)));
                    temp_r3_5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
                    ((VObj_18_f68442 *)(temp_r3_5))->m22(arg0, 0);
                    play_sound_effect((int) (0x40039E54), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                    break;
                case 3:
                    set_model_id__10TObjPlayerFPvs((void *) (arg0), (int) (0xB));
                    set_model_param__10TObjPlayerFPvs((void *) (arg0), (int) ((s16) M2C_FIELD(TObjEneIllGill__data_805D6FDC, s32 *, 0x1C)));
                    temp_r3_6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
                    if (((VObj_18_f68442 *)(temp_r3_6))->m22(arg0, 0) <= TObjEneIllGill__data_805E02BC) {
                        temp_r3_7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
                        ((VObj_18_f68442 *)(temp_r3_7))->m20(arg0, TObjEneIllGill__data_805E02CC);
                    }
                    play_sound_effect((int) (0x40039E55), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                    break;
                default:
                    temp_r3_8 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
                    temp_f31 = ((VObj_18_f68442 *)(temp_r3_8))->m20(arg0, TObjEneIllGill__data_805E02CC);
                    play_sound_effect((int) (0x40039E54), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                    temp_r3_9 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
                    ((VObj_18_f68442 *)(temp_r3_9))->m23(arg0, temp_f31);
                    break;
                }
            }
        }
        temp_r3_10 = M2C_FIELD(arg0, u32 *, 0x414);
        if ((temp_r3_10 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((int) (temp_r3_10)) != 0)) {
            copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x414)), (void *) (arg0 + 0x3B0));
        }
        temp_r3_11 = M2C_FIELD(arg0, u32 *, 0x418);
        if ((temp_r3_11 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((int) (temp_r3_11)) != 0)) {
            copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x418)), (void *) (arg0 + 0x3B0));
        }
        temp_r3_12 = M2C_FIELD(arg0, u32 *, 0x41C);
        if ((temp_r3_12 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((int) (temp_r3_12)) != 0)) {
            copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x41C)), (void *) (arg0 + 0x3B0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 4U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s32 *, 0x39C) = 0x1E;
            free_resources__14TObjEneIllGillFPv((void *) (arg0));
        }
        break;
    case 3:
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneIllGill__data_805E02BC));
        M2C_FIELD(arg0, s32 *, 0x39C) = (s32) (M2C_FIELD(arg0, s32 *, 0x39C) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x39C) < 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
            M2C_FIELD(arg0, s32 *, 0x39C) = 0;
        }
        break;
    }
    update_collisions__10TObjPlayerFPv((void *) (arg0));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

void TObjEneIllGill__vt58(Gill_803671A4 *o) {
    switch (o->x394) {
    default:
        o->x394 = 0;
    case 0:
    case 1:
        o->x326 = 3;
        o->x328 = 0;
        o->xb8 = 1;
        break;
    case 2:
        o->x326 = 5;
        o->x328 = 0;
        o->xb8 = 1;
        break;
    case 3:
        o->x326 = 4;
        o->x328 = 0;
        o->xb8 = 7;
        o->x3ac = TObjEneIllGill__data_805E02BC;
        TObjEneIllGill__sub_80367DA4((s32)o);
        break;
    }
    o->flags |= 0x200000;
    o->flags &= ~0x40000;
}

#define F(t, o) M2C_FIELD(arg0, t *, o)

s32 TObjEneIllGill__vt28(u8 *arg0) {
    Vec_80367270 v;
    f32 dist;
    s32 ang;
    f32 rad;
    u16 id;
    u8 *pl;

    if (F(u8 *, 0x2A8) != NULL && F(u32, 0x318) != 0 && !(M2C_FIELD(F(u8 *, 0x2A8), s32 *, 0x30) & 0x02000800)) {
        if (obj_testFlags30(arg0, 0x2000) != 0) {
            F(s32, 0x394) = 3;
            bind_enemy_combat_stats(arg0, 0, lbl_804F2F6C[F(s32, 0x394)], 0);
            return 1;
        }
        dist = TObjPlayer__sub_800186E8(arg0, F(u8 *, 0x2A8), &v);
        ang = angle_difference_abs(F(s32, 0x60), (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
        pl = F(u8 *, 0x2A8);
        if (M2C_FIELD(pl, u8 **, 0xA4) != NULL) {
            rad = M2C_FIELD(M2C_FIELD(pl, u8 **, 0xA4), f32 *, 0xC) - lbl_8047A358[0];
        } else {
            rad = TObjEneIllGill__data_805E02D8;
        }
        id = obj_getField1c(pl);
        if (id < 0x1000) {
            s32 i;
            pl = F(u8 *, 0x2A8);
            if (check_player_flag1__6TLobbyFPv(pl) == 1 || (enable_v2_features == 1 && obj_testFlags30(pl, 0x20) != 0)) {
                F(s32, 0x318) = lbl_804F2F6C[0];
                if (dist <= (rad + get_pos_x__10TObjPlayerFPv(F(s32, 0x318))) * (rad + get_pos_x__10TObjPlayerFPv(F(s32, 0x318))) &&
                    ang <= get_field_0c__10TObjPlayerFPv(F(s32, 0x318))) {
                    F(s32, 0x394) = 0;
                    bind_enemy_combat_stats(arg0, 0, lbl_804F2F6C[F(s32, 0x394)], 0);
                    return 1;
                }
                return 0;
            }
            for (i = 0; i < 4; i++) {
                f32 r2;
                s32 m;
                F(s32, 0x318) = lbl_804F2F6C[i];
                r2 = (rad + get_pos_x__10TObjPlayerFPv(F(s32, 0x318))) * (rad + get_pos_x__10TObjPlayerFPv(F(s32, 0x318)));
                m = get_field_0c__10TObjPlayerFPv(F(s32, 0x318));
                if (dist <= r2 && ang <= m) {
                    F(s32, 0x394) = i;
                    bind_enemy_combat_stats(arg0, 0, lbl_804F2F6C[F(s32, 0x394)], 0);
                    return 1;
                }
            }
        } else if (id < 0x4000) {
            F(s32, 0x318) = lbl_804F2F6C[0];
            if (dist <= (rad + get_pos_x__10TObjPlayerFPv(F(s32, 0x318))) * (rad + get_pos_x__10TObjPlayerFPv(F(s32, 0x318))) &&
                ang <= get_field_0c__10TObjPlayerFPv(F(s32, 0x318))) {
                F(s32, 0x394) = 0;
                bind_enemy_combat_stats(arg0, 0, lbl_804F2F6C[F(s32, 0x394)], 0);
                return 1;
            }
        }
    }
    return 0;
}
#undef F

#define arg0 ((u8 *)arg0_)
void TObjEneIllGill__sub_80367588(void *arg0_) {
    f32 r;
    s32 id;
    f32 d;
    s32 a;
    f32 t;
    obj_clearFlags30((void*)(arg0), (int)(0x04040000));
    r = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4);
    id = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8);
    advance_animation_playback(arg0);
    if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
        switch (M2C_FIELD(arg0, s16 *, 0x328)) {
        default:
        case 1:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
        case 0: {
            Vec_80367588 dir;
            t = M2C_FIELD(arg0, f32 *, 0x300) + TObjEneIllGill__data_805E02DC;
            M2C_FIELD(arg0, f32 *, 0x300) = t;
            {
                Vec_80367588 tgt = *(Vec_80367588 *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
                d = enemy_move_toward(arg0, id, &tgt, 0, lbl_805E02F0 * r, t);
            }
            VecCopy__FP3VecPC3Vec(&dir, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            subtract_vector(&dir, arg0 + 0x2FC);
            a = angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60),
                                     (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(dir.x, dir.z)));
            if (a < get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318))) {
                M2C_FIELD(arg0, s16 *, 0x328) = 2;
            }
            break;
        }
        case 2: {
            t = M2C_FIELD(arg0, f32 *, 0x300);
            M2C_FIELD(arg0, f32 *, 0x300) = t + TObjEneIllGill__data_805E02DC;
            {
                Vec_80367588 tgt = *(Vec_80367588 *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
                enemy_pursue_point(arg0, id, &tgt, r, lbl_805E02F4, t);
            }
            d = horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x2FC);
            t = r + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC);
            if (d < t * t) {
                if (M2C_FIELD(arg0, u16 *, 0x338) == 0xFFFF) {
                    M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
                } else {
                    M2C_FIELD(arg0, s16 *, 0x328) = 0;
                }
            }
            break;
        }
        }
        t = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 0);
        if (t * t < d) {
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
        }
        if (objInBand__FP7GameObjf(arg0, TObjEneIllGill__data_805E02BC) != 0) {
            play_sound_effect(0x4003A34D, arg0 + 0x38, 0, 0);
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805E02F8) != 0) {
            play_sound_effect(0x4003A34D, arg0 + 0x38, 0, 0);
        }
    }
    update_collisions__10TObjPlayerFPv(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}
#undef arg0

void TObjEneIllGill__vt57(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 1)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s16 *, 0x326) = 2;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        obj_clearFlags30((void*)(arg0), (int)(0x04040000U));
        free_resources__14TObjEneIllGillFPv(arg0);
    }
}

void TObjEneIllGill__sub_80367860(u8 *arg0) {
    Vec_80367860 v;
    f32 d;
    f32 a;
    f32 b;
    f32 *r;
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    advance_animation_playback(arg0);
    obj_setFlags30(arg0, 0x04040000);
    v.y = TObjEneIllGill__data_805E02BC;
    v.x = TObjEneIllGill__data_805E02BC;
    v.z = TObjEneIllGill__data_805E02CC;
    push_matrix_from(&lbl_8058D490);
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    rotate_vector_by_matrix(0, &v, &v);
    pop_matrices(1);
    vec3_add_to(&v, arg0 + 0x50);
    M2C_FIELD(arg0, f32 *, 0x300) += TObjEneIllGill__data_805E02DC;
    d = TObjPlayer__sub_80017804(arg0, v, lbl_805E02B8 * M2C_FIELD(arg0, f32 **, 0x350)[1]);
    r = M2C_FIELD(arg0, f32 **, 0x350);
    a = r[0] * r[0];
    b = r[1] * r[1];
    if (a < d || d < b) {
        M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    }
    apply_actor_gravity(arg0, 0, TObjEneIllGill__data_805E02BC);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void run_attack_phase__14TObjEneIllGillFPv(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;

    advance_animation_playback((void *)(arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        obj_setFlags30((void *) (arg0), (int) (0x04040000));
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x374));
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        break;
    case 1:
        obj_setFlags30((void *) (arg0), (int) (0x04040000));
        if (((IllGillVObj_80367984_8036690C *) (arg0 + 0x374))->m5() == 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x390) = 0;
        }
        break;
    case 2:
        obj_clearFlags30((void*)((void *) (arg0)), (int)((int) (0x04040000)));
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        if (horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805E02C8) {
            TObjEneIllGill__sub_80367B00((Obj_80367B00 *)((void *) (arg0)));
        } else {
            M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneIllGill__data_805E02DC);
            temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x350));
            enemy_wander_home((void *) (arg0), (int) (M2C_FIELD(temp_r4, s32 *, 8)), (f32) (lbl_805E02E8 * M2C_FIELD(temp_r4, f32 *, 4)), (f32) (lbl_805E02C4), (f32) (lbl_805E02FC));
        }
        refresh_collision_body_centers((void *) (arg0));
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneIllGill__data_805E02BC));
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    obj_clearFlags30((void*)((void *) (arg0)), (int)((int) (0x200000)));
}

extern void *tl_04;

typedef char RecoveredGlobal_80367DC8_lbl_8050BF00_size[sizeof(RecoveredGlobal_80367DC8_lbl_8050BF00) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80367DC8_lbl_8058D490_size[sizeof(RecoveredGlobal_80367DC8_lbl_8058D490) == 0x30 ? 1 : -1];

#define TRY_80367B00(o, a) ((s32 (*)(u8 *, s32))TObjEneIllGill__sub_80367DC8)(o, a)
void TObjEneIllGill__sub_80367B00(Obj_80367B00 *o) {
    s32 ang;
    VecCopy__FP3VecPC3Vec(&o->v29C, &o->v50);
    VecCopy__FP3VecPC3Vec(&o->v290, &o->v2FC);
    VecCopy__FP3VecPC3Vec(&o->prev, &o->pos);
    VecCopy__FP3VecPC3Vec(&lbl_8050BEE0, &o->v50);
    subtract_vector(&lbl_8050BEE0, &o->pos);
    ang = (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(lbl_8050BEE0.x, lbl_8050BEE0.z));
    if (TRY_80367B00((u8 *)o, ang) == 1) {
        o->fB8 = 1;
        VecCopy__FP3VecPC3Vec(&o->pos, &lbl_8050BF00);
        o->f60 = approach_angle_limited(o->f60, ang, o->f350->f8);
    } else {
        if (get_random_float__8TObjFishFv(lbl_8050BEE0.x) < get_random_float__8TObjFishFv(lbl_8050BEE0.z)) {
            ang = (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(lbl_8050BEE0.x, TObjEneIllGill__data_805E02BC));
        } else {
            ang = (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(TObjEneIllGill__data_805E02BC, lbl_8050BEE0.z));
        }
        if (TRY_80367B00((u8 *)o, ang) == 1) {
            o->fB8 = 1;
            VecCopy__FP3VecPC3Vec(&o->pos, &lbl_8050BF00);
            o->f60 = approach_angle_limited(o->f60, ang, o->f350->f8);
        } else {
            if (get_random_float__8TObjFishFv(lbl_8050BEE0.x) < get_random_float__8TObjFishFv(lbl_8050BEE0.z)) {
                ang = (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(TObjEneIllGill__data_805E02BC, lbl_8050BEE0.z));
            } else {
                ang = (s32)(TObjEneIllGill__data_8047A348 * get_ad_end_text_start__10TObjPlayerFv(lbl_8050BEE0.x, TObjEneIllGill__data_805E02BC));
            }
            if (TRY_80367B00((u8 *)o, ang) == 1) {
                o->fB8 = 1;
                VecCopy__FP3VecPC3Vec(&o->pos, &lbl_8050BF00);
                o->f60 = approach_angle_limited(o->f60, ang, o->f350->f8);
            } else {
                o->fB8 = 0;
            }
        }
    }
    enemy_turn_toward_dest(o, o->f350->f8);
    enemy_set_heading_velocity(o, o->f60, o->f350->f4);
    o->v2FC.y += TObjEneIllGill__data_805E02DC;
    move_with_wall_slide(o);
}

void TObjEneIllGill__sub_80367DA4(s32 arg0) {
    O_80367DA4 *self = (O_80367DA4 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

void TObjEneIllGill__sub_80367DC8(u8 *arg0, s32 arg1) {
    M2C_FIELD(&lbl_8050BF00.value, f32 *, 4) = (f32) TObjEneIllGill__data_805E02BC;
    M2C_FIELD(&lbl_8050BF00.value, f32 *, 0) = (f32) TObjEneIllGill__data_805E02BC;
    M2C_FIELD(&lbl_8050BF00.value, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4);
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (void *) (arg1));
    rotate_vector_by_matrix((int) (0), (void *) (&lbl_8050BF00.value), (void *) (&lbl_8050BF00.value));
    pop_matrices((int) (1));
    vec3_add_to((void *) (&lbl_8050BF00.value), (void *) (arg0 + 0x38));
    project_actor_to_ground((void *) (arg0), (void *) (&lbl_8050BF00.value), (int) (0));
}

typedef struct RecoveredFields_80367EFC_arg0 RecoveredFields_80367EFC_arg0;
s32 TObjEneIllGill__vt37(u8 *arg0) {
  if (update_movement_status__10TObjPlayerFv((void *) arg0) != 0)
  {
    if (((RecoveredFields_80367EFC_arg0 *) arg0)->field_326 != 0)
    {
      if ((arg0 && arg0) && arg0)
      {
      }
    }
    else
    {
      ((RecoveredFields_80367EFC_arg0 *) arg0)->field_390 = 0;
      ((RecoveredFields_80367EFC_arg0 *) arg0)->field_328 = 0;
      ((RecoveredFields_80367EFC_arg0 *) arg0)->field_B8 = 1;
      obj_clearFlags30((void*)((void *) arg0), (int)((int) 0x04040000));
    }
    return 1;
  }
  return 0;
}

typedef struct RecoveredFields_80367F6C_arg0 RecoveredFields_80367F6C_arg0;
s32 TObjEneIllGill__vt34(u8 *arg0) {
  if (0 != update_action_hold_status__10TObjPlayerFv((void *) arg0))
  {
    if (((RecoveredFields_80367F6C_arg0 *) arg0)->field_326 != 0)
    {
      if (((!arg0) && (!arg0)) && (!arg0))
      {
      }
    }
    else
    {
      ((RecoveredFields_80367F6C_arg0 *) arg0)->field_390 = 0;
      ((RecoveredFields_80367F6C_arg0 *) arg0)->field_328 = 0;
      ((RecoveredFields_80367F6C_arg0 *) arg0)->field_B8 = 1;
      obj_clearFlags30((void*)((void *) arg0), (int)((int) 0x04040000));
    }
    return 1;
  }
  return 0;
}

#pragma push
#pragma opt_loop_invariants off
void TObjEneIllGill__vt26(Gill_80367FDC *self) {
    u16 best;
    s32 i;
    u8 *pl;
    u16 id;
    f32 bestDist;
    f32 d;
    u16 t;
    s32 ent;
    s32 x;
    if (self->m17(0x1E) != 0) {
        if (self->f390 != 0) {
            self->f338 = 0xFFFF;
            self->f2A8 = 0;
            return;
        }
        if (obj_testFlags30(self, 0x10) != 0) {
            i = 0;
            best = 0xFFFF;
            Vec_80367FDC v = lbl_8047A328;
            bestDist = *self->f350 * *self->f350;
            for (; i < lbl_805D586C + lbl_805D5870; i++) {
                pl = get_player_data__10TObjPlayerFi(i);
                if (pl == NULL) break;
                if (obj_is_hit_receivable(pl) == 0) continue;
                id = obj_getField1c(pl);
                if (id >= 0x4000) continue;
                if (id == self->f1C) continue;
                if (M2C_FIELD(pl, s32 *, 0x30) & 0x02000800) continue;
                VecCopy__FP3VecPC3Vec(&v, pl + 0x2FC);
                subtract_vector(&v, (u8 *)self + 0x2FC);
                d = v.x * v.x + v.z * v.z;
                if (d < bestDist && check_path_obstructed(self, pl + 0x2FC) == 0) {
                    best = id;
                    bestDist = d;
                }
            }
            self->f338 = best;
        } else {
            self->f338 = find_nearest_visible_player(self, 0, self->f350, *self->f350);
        }
        t = self->f338;
        if (t < 0x1000) {
            ent = get_player_by_client_id(t);
            if (ent != 0) {
                if (get_field_3e4__10TObjPlayerFPv(ent) == get_current_floor()) {
                    self->f2A8 = ent;
                    obj_clearFlags30((void*)(self), (int)(0x04040000));
                    return;
                }
            }
            self->f2A8 = 0;
            obj_setFlags30(self, 0x04040000);
            return;
        }
        if (t < 0x4000) {
            self->f2A8 = get_enemy_entity(t);
            obj_clearFlags30((void*)(self), (int)(0x04040000));
        }
    }
}
#pragma pop

void run_task__14TObjEneIllGillFv(Gill_803683BC *o) {
    switch (o->x326) {
    case 0:
        run_attack_phase__14TObjEneIllGillFPv((u8 *)o);
        break;
    case 1:
        TObjEneIllGill__sub_80367860((u8 *)(o));
        break;
    case 2:
        TObjEneIllGill__sub_80367588((void *)(o));
        break;
    case 3:
        TObjEneIllGill__sub_80366AE4((u8 *)(o));
        break;
    case 4:
        TObjEneIllGill__sub_80365688(o);
        break;
    case 5:
        TObjEneIllGill__sub_803660A4((void *)(o));
        break;
    case 6:
        TObjEneIllGill__sub_803669B0((u8 *)o);
        break;
    case 7:
        TObjEneIllGill__sub_803667B8((u8 *)(o));
        break;
    case 8:
        TObjEneIllGill__sub_803665B4((u8 *)o);
        break;
    case 9:
        break;
    }
    if (o->x2a8 != NULL && (o->x2a8->flags & 0x02000800)) {
        o->x39c = 0;
        o->flags &= ~0x200000;
        o->x2a8 = NULL;
    }
    update_prev_position__10TObjPlayerFPv(o);
    copy_position__20TBoss3VoloptHiraisinFi(o);
    submit_cursor_candidate(o, -1);
    o->x2b4 += TObjEneIllGill__data_805E02CC;
}

void * create__14TObjEneIllGillFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x420);
    if (o2 != NULL) {
        o2 = TObjEneIllGill__ct(o2, o, arg0);
    }
    return o2;
}

extern M2C_UNK __vt__14TObjEneIllGill[];

void *__dt__14TObjEneIllGillFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneIllGill;
        free_resources__14TObjEneIllGillFPv((void *)(arg0));
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x374, -1);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D6FD0;
void free_effect__14TObjEneIllGillFv(void) { TLobby__sub_8001FE7C((void*)(lbl_805D6FD0), (void*)1); lbl_805D6FD0 = 0; }

}
