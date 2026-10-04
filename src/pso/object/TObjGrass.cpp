#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_800BFB8C { s32 f0; s32 f4; s32 f8; s32 fc; };

struct D_800BFB8C { u8 pad[0x42c]; E_800BFB8C *entries; };

struct O_800BFB8C { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct O_800BFB68 { u8 pad[0x3d4]; s32 arr[12]; };

struct Obj_800BEE2C { u8 pad[0xb8]; s16 fb8; u8 pad2[0x326 - 0xba]; s16 f326; s16 f328; u8 pad3[0x3ac - 0x32a]; s32 f3ac; };

struct Obj_800BF880 { u8 pad0[0x18]; void *vt; u8 pad1c[0x3CC - 0x1C]; void *items[2]; };

typedef s32 M2C_UNK;
typedef struct Vec_800BE75C {
    f32 x, y, z;
} Vec_800BE75C;

typedef struct Range_800BE75C {
    f32 lo;
    f32 hi;
} Range_800BE75C;

typedef struct Grass_800BE75C {
    u8 pad0[0x38];
    Vec_800BE75C pos;
    u8 pad44[0x50 - 0x44];
    u8 mtx50[0x60 - 0x50];
    s32 f60;
    u8 pad64[0x2A8 - 0x64];
    s32 f2A8;
    u8 pad2AC[0x350 - 0x2AC];
    Range_800BE75C *range;
    u8 pad354[0x358 - 0x354];
    f32 f358;
    u8 pad35C[0x39C - 0x35C];
    s16 f39C;
} Grass_800BE75C;

struct Vec_800BEF8C { f32 x, y, z; };

struct VBase_18_800BEF8C { char pad[0x18]; };

struct VObj_18_800BEF8C : VBase_18_800BEF8C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16();
    virtual s32 m17(s32);
};

struct Vec_800BF66C { f32 x, y, z; };

struct Quad_800BF66C { s32 a, b, c, d; };

struct Ent8_800BF66C { s32 f0; s32 f4; };

struct Model_800BF66C { s32 f0; s32 f4; s32 f8; s32 fC; };

struct Data_800BF66C { u8 pad[0x42C]; Model_800BF66C *f42c; Ent8_800BF66C *f430; };

struct VObj_800BDD70 {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK *, M2C_UNK *);
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

struct Vec_800BDD70 { f32 x, y, z; };

struct Vec_800BE4C0 { f32 x, y, z; };

struct Param_800BE4C0 { f32 f0; f32 f4; s32 f8; };

struct Anim_800BE4C0 { u8 pad[8]; f32 f8; u8 padc[4]; };

struct Vec_800BCA30 { f32 x, y, z; };

struct Vec_800BD10C { f32 x, y, z; };

struct VBase_18_800BD10C { char pad[0x18]; };

struct VObj_18_800BD10C : VBase_18_800BD10C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45();
    virtual M2C_UNK m46(M2C_UNK);
};

struct Tgt_800BD10C : VObj_18_800BD10C {
    u8 pad1C[0x38 - 0x1C]; Vec_800BD10C pos; u8 pad44[0x2FC - 0x44]; Vec_800BD10C p2fc;
};

struct Grass_800BD10C {
    u8 pad0[0x30]; u32 flags30; u8 pad34[0x38 - 0x34]; Vec_800BD10C pos;
    u8 pad44[0x60 - 0x44]; s32 rotY; u8 pad64[0xB4 - 0x64]; u32 fb4; s16 fb8;
    u8 padBA[0x2A8 - 0xBA]; Tgt_800BD10C *target; u8 pad2AC[0x2FC - 0x2AC];
    Vec_800BD10C p2fc; u8 pad308[0x328 - 0x308]; s16 state; u8 pad32A[0x338 - 0x32A];
    u16 f338; u8 pad33A[2]; s16 timer; u8 pad33E[0x350 - 0x33E]; s32 *f350;
    u8 pad354[0x380 - 0x354]; Vec_800BD10C p380;
};

extern "C" {
s32 spawn_particle_effect(s32, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void TObjGrass__vt61(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void obj_clearFlags30(void *, u32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
s32 play_sound_effect(void *, void *, int, int);
extern const f32 TObjGrass__data_805D9EB8;
extern u32 TObjGrass__data_805D5154;
void TObjGrass__sub_800BFB8C(O_800BFB8C *self, s32 i);
void TObjGrass__sub_800BFB68(O_800BFB68 *self);
void TObjGrass__vt56(Obj_800BEE2C *self);
s32 queue_destruction__7TObjectFv(void *);
s32 __dt__18TObjEneMe3SinowZoaFPvs(void *, s16);
void __dt__9TObjEnemyFv(void *, int);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
extern u8 __vt__9TObjGrass[];
Obj_800BF880 *__dt__9TObjGrassFv(Obj_800BF880 *arg0, s16 arg1);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
f32 TObjPlayer__sub_80017804(void *, Vec_800BE75C, f32);
M2C_UNK obj_setFlags30(void *, u32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, s32);
s32 push_matrix_from(void *);
M2C_UNK pop_matrices(int);
extern u8 lbl_8058D490[];
extern const f32 TObjGrass__data_805D9EB8;
extern const f32 TObjGrass__data_805D9ED8;
u16 find_nearest_visible_player(void *, int, f32);
s32 check_path_obstructed(void *, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
s32 obj_getField1c(void *);
void obj_clearFlags30(void *, u32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(u16);
M2C_UNK subtract_vector(void *, void *);
extern M2C_UNK lbl_8043B790[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void TObjGrass__vt26(u8 *arg0);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
u8 *load_resource_from_descriptor(void *, int, void *, int, int, int);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 check_v2_mode__9TObjEneDDFv();
u8 *load_enemy_bml_resource_named(void *, void *);
M2C_UNK draw_trail_with_colors(void *, s32, s32, int, int);
u8 *TBoss4Type3__sub_800D9ABC(void *, int, f32, f32, f32);
s32 *alloc_buffer__11TOBoss4RockFPv(int);
M2C_UNK spawn_npc_enemy__6TLobbyFsiiiff(int, s32, s32, Quad_800BF66C *, f32, f32);
extern Quad_800BF66C lbl_8043B780;
extern M2C_UNK lbl_8043B7C0[];
extern M2C_UNK lbl_80492954[];
extern s32 lbl_80492964[];
extern Vec_800BF66C lbl_80500BD0;
extern s32 lbl_805D5140;
extern u32 TObjGrass__data_805D5144;
extern s32 lbl_805D5148;
extern s32 lbl_805D514C;
extern s32 TObjGrass__data_805D5150;
extern u32 TObjGrass__data_805D5154;
extern u32 lbl_805D5158;
extern u32 lbl_805D515C;
extern const f32 TObjGrass__data_805D9EB8;
extern const f32 lbl_805D9EF8;
extern const f32 lbl_805D9F00;
extern const f32 lbl_805D9F1C;
void TObjGrass__sub_800BF66C(void);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
void TObjGrass__sub_800BCA2C(void *);
M2C_UNK TObjGrass__sub_800BCE44(u8 *arg0);
M2C_UNK update__9TObjGrassFPv(u8 *arg0);
M2C_UNK TObjGrass__sub_800BD4D8(void *);
M2C_UNK TObjGrass__sub_800BE75C(Grass_800BE75C *o);
M2C_UNK TObjGrass__sub_800BE8FC(void *);
u8 *get_enemy_entity(u16);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
u8 *get_player_by_client_id(u16);
extern const f32 TObjGrass__data_805D9EE8;
void run_task__9TObjGrassFv(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 update_angle__10TObjPlayerFPviPv(void *, void *, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_field_0c__10TObjPlayerFPv(int);
void obj_clearFlags30(void *, u32);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
s32 play_sound_effect(void *, void *, int, int);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK rotate_matrix_y(int, s32);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern s32 enable_v2_features;
extern u32 lbl_805D5158;
extern u32 lbl_805D515C;
extern const f32 TObjGrass__data_805D9EB8;
extern const f32 lbl_805D9EBC;
extern const f32 TObjGrass__data_805D9EE8;
extern const f32 lbl_805D9EF4;
extern const f32 lbl_805D9EF8;
extern f32 TObjGrass__data_805D9EFC;
void TObjGrass__sub_800BDD70(u8 *arg0);
f32 enemy_move_toward(void *, s32, void *, s32, f32);
void enemy_pursue_point(void *, s32, void *, f32, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_field_0c__10TObjPlayerFPv(int);
void obj_clearFlags30(void *, u32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
f32 horizontal_distance_squared(void *, void *);
s32 angle_difference_abs(s32, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK subtract_vector(void *, void *);
extern const f64 TObjGrass__data_8043B7B8;
extern const f32 TObjGrass__data_805D9ED8;
extern const f32 lbl_805D9F04;
extern const f32 lbl_805D9F08;
void TObjGrass__sub_800BE4C0(void *arg0_);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK obj_setFlags30(void *, u32);
s32 queue_destruction__7TObjectFv(void *);
s32 spawn_particle_effect(s32, s32);
void TObjCGrass__ct(void *, void *, s32, s32);
void spawn_ground_effect__10TObjPlayerFPvi(void *, s32);
void spawn_dead_spot_default__10TObjPlayerFii(void *, s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 play_sound_effect(void *, void *, int, int);
void *__nw__7TObjectFUl(int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, s32);
s32 push_matrix_from(void *);
M2C_UNK pop_matrices(int);
extern u8 lbl_8058D490[];
extern const f32 TObjGrass__data_805D9EB8;
extern const f32 lbl_805D9EBC;
extern const f32 lbl_805D9EC0;
extern const f32 lbl_805D9EC4;
extern const f32 lbl_805D9EC8;
extern const f32 lbl_805D9ECC;
extern const f32 lbl_805D9ED0;
extern const f32 lbl_805D9ED4;
void TObjGrass__sub_800BCA30(void *arg0_);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 update_angle__10TObjPlayerFPviPv(void *, void *, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_field_0c__10TObjPlayerFPv(int);
s32 obj_testFlags30(void *, int);
void obj_clearFlags30(void *, u32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
M2C_UNK spawn_directional_particle(void *, void *, s32);
M2C_UNK TObjGrassWeb__ct(void *, s32, void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 angle_difference_abs(s32, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
u8 *get_player_by_client_id(u16);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK subtract_vector(void *, void *);
extern const f64 TObjGrass__data_8043B7B8;
extern s32 enable_v2_features;
extern u32 TObjGrass__data_805D5144;
extern s32 lbl_805D5550;
extern s32 tl_05;
extern const f32 TObjGrass__data_805D9EB8;
M2C_UNK TObjGrass__sub_800BD10C(void *arg0_);
}

extern "C" {

s32 TObjGrass__vt34(void *arg0);
s32 TObjGrass__vt37(void *arg0);
void TObjGrass__vt57(void *arg0);
void TObjGrass__vt58(void *arg0);
void TObjGrass__vt59(void *arg0);
void TObjGrass__vt60(void *arg0);
void * create__9TObjGrassFPv(void *arg0);
void destroy_all__9TObjGrassFv(void);
M2C_UNK advance_animation_playback(void *);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
void *TObjControl__ct(void *, void *);
void *TObjGrass__ct(void *, void *, void *);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 update_movement_status__10TObjPlayerFv();
s32 update_action_hold_status__10TObjPlayerFv();
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
void free__11TOBoss4RockFUi(void*);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
void obj_clearFlags30(void *, u32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

void TObjGrass__sub_800BCA2C(void * _w0) {  }

#pragma push
#pragma opt_common_subs off
#define arg0 ((u8 *)arg0_)
void TObjGrass__sub_800BCA30(void *arg0_) {
    obj_setFlags30(arg0, 0x04040000);
    advance_animation_playback(arg0);
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    default:
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
    case 0:
        apply_actor_gravity(arg0, 0, TObjGrass__data_805D9EB8);
        if (objInBand__FP7GameObjf(arg0, TObjGrass__data_805D9EB8) != 0) {
            play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A804), arg0 + 0x38, 0, 0);
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
        }
        break;
    case 1:
        move_with_wall_slide(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805D9EBC;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805D9EBC;
        if (objInBand__FP7GameObjf(arg0, lbl_805D9EC0) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            spawn_particle_effect((s32)(arg0 + 0x38), 0xF0);
        }
        break;
    case 2:
        if (objInBand__FP7GameObjf(arg0, lbl_805D9EC4) != 0) {
            Vec_800BCA30 v;
            v.y = TObjGrass__data_805D9EB8;
            v.x = TObjGrass__data_805D9EB8;
            v.z = lbl_805D9EC8;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            rotate_vector_by_matrix(0, &v, &v);
            pop_matrices(1);
            vec3_add_to(&v, arg0 + 0x38);
            switch (get_global_state__14TOKeyMachine01Fv()) {
            case 3:
            case 4:
            case 5: {
                void *o = __nw__7TObjectFUl(0x14C);
                if (o != NULL) {
                    Vec_800BCA30 t = v;
                    TObjCGrass__ct(o, &t, (s32)(lbl_805D9ECC + M2C_FIELD(arg0, f32 *, 0x360)), 0xF0);
                }
                break;
            }
            }
            play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AB0A), arg0 + 0x38, 0, 0);
            spawn_dead_spot_default__10TObjPlayerFii(arg0 + 0x38, 0xA);
            spawn_ground_effect__10TObjPlayerFPvi(arg0 + 0x38, 0x1E);
        }
        M2C_FIELD(arg0, f32 *, 0x6C) -= 0.01f;
        if (M2C_FIELD(arg0, f32 *, 0x6C) < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x6C) = 0.0f;
        }
        M2C_FIELD(arg0, f32 *, 0x35C) -= lbl_805D9ED0;
        if (M2C_FIELD(arg0, f32 *, 0x35C) < lbl_805D9ED4) {
            M2C_FIELD(arg0, s32 *, 0x30) |= 0x02000000;
            M2C_FIELD(arg0, f32 *, 0x35C) = lbl_805D9ED4;
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    }
    if (M2C_FIELD(arg0, f32 *, 0xC0) < lbl_805D9EC4) {
        M2C_FIELD(arg0, s32 *, 0x3A0)++;
        if (M2C_FIELD(arg0, s32 *, 0x3A0) == 4) {
            M2C_FIELD(arg0, s32 *, 0x3A0) = 0;
            spawn_particle_effect((s32)(arg0 + 0x38C), 0xF2);
        }
    }
}
#undef arg0
#pragma pop

void TObjGrass__vt61(u8 *arg0) {
    u8 *temp_r6;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        M2C_FIELD(arg0, s16 *, 0x326) = 8;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xFFFF7FFE);
        spawn_particle_effect((s32) (arg0 + 0x2FC), 0xF2);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

#pragma fp_contract on
M2C_UNK TObjGrass__sub_800BCE44(u8 *arg0) {
  u8 *temp_r3;
  obj_clearFlags30((void *)((void *) arg0), (u32)((int) 0x04040000));
  advance_animation_playback((void *) arg0);
  *((f32 *) (((s8 *) arg0) + 0x310)) = (f32) TObjGrass__data_805D9EB8;
  *((f32 *) (((s8 *) arg0) + 0x308)) = (f32) TObjGrass__data_805D9EB8;
  apply_actor_gravity((void *)((void *) arg0), (M2C_UNK)((int) 0), (f32) TObjGrass__data_805D9EB8);
  update_collisions__10TObjPlayerFPv((void *) arg0);
  if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjGrass__data_805D9EB8) != 0)
  {
    play_sound_effect((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x4003A603))), (void *) (arg0 + 0x38), (int) 0, (int) 0);
    play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x200)));
  }
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0xB4)))) != 8U)
  {
    *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFF9FF);
    temp_r3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0xA4)));
    *((s32 *) (((s8 *) temp_r3) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3) + 0x18))) & 0xFBFFFFFF);
    if (((f32) (*((s16 *) (((s8 *) arg0) + 0x32C)))) < (((f32) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) * (*((f32 *) (((s8 *) arg0) + 0x354)))))
    {
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x2000);
      *((s32 *) (((s8 *) arg0) + 0x2A8)) = 0;
      *((s16 *) (((s8 *) arg0) + 0x338)) = (float) 0xFFFF;
      VecCopy__FP3VecPC3Vec((void *) (0x290 + arg0), (void *) (arg0 + 0x2FC));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x29C), (void *) (arg0 + 0x2FC));
      *((f32 *) (((s8 *) arg0) + 0x398)) = (f32) TObjGrass__data_805D9EB8;
    }
    *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
  }
  play_persistent_sound((M2C_UNK)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x4003A801)))), (void *)((void *) arg0), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)(((int) 0) & 0xFFFFu), (M2C_UNK)((int) 0));
  play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x200)));
  minimap_render_dot((void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (-0x5DB4)), (M2C_UNK)((int) 1), (M2C_UNK)((int) 0));
}

void TObjGrass__vt60(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

extern const f32 TObjGrass__data_805D9EB8;

M2C_UNK update__9TObjGrassFPv(u8 *arg0) {
    s16 temp_r4;

    obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
    advance_animation_playback(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity(arg0, 0, TObjGrass__data_805D9EB8);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void TObjGrass__vt59(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 6) {
        M2C_FIELD(arg0, s16 *, 0x326) = 6;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9BFFFF);
}

extern const f32 TObjGrass__data_805D9EB8;

M2C_UNK TObjGrass__sub_800BD10C(void *arg0_) {
    Grass_800BD10C *arg0 = (Grass_800BD10C *)arg0_;
    Vec_800BD10C v;
    Vec_800BD10C v2;
    s32 ang[3];
    if (arg0->f338 < 0x1000) {
        u8 *p = get_player_by_client_id(arg0->f338);
        if (p != NULL && get_field_3e4__10TObjPlayerFPv((int)p) == get_current_floor()) {
            arg0->target = (Tgt_800BD10C *)p;
        } else {
            arg0->target = NULL;
        }
    } else {
        arg0->f338 = 0xFFFF;
        arg0->target = NULL;
    }
    obj_clearFlags30(arg0, 0x4040000);
    advance_animation_playback(arg0);
    switch (arg0->state) {
    case 0:
        if (arg0->target == NULL) {
            arg0->flags30 &= ~0x200000;
            arg0->timer = 0;
        } else {
            s32 d;
            VecCopy__FP3VecPC3Vec(&v, &arg0->target->p2fc);
            subtract_vector(&v, &arg0->p2fc);
            d = update_angle__10TObjPlayerFPviPv(arg0, (void *)arg0->f350[2], &v);
            apply_actor_gravity(arg0, 0, TObjGrass__data_805D9EB8);
            if (d < get_field_0c__10TObjPlayerFPv(((u32 *)TObjGrass__data_805D5144)[1])) {
                arg0->state = 1;
                arg0->fb8 = 4;
                arg0->timer = 0;
            }
        }
        break;
    case 1:
        play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x40039E07), arg0, &arg0->pos, 0, 0);
        apply_actor_gravity(arg0, 0, TObjGrass__data_805D9EB8);
        if (arg0->target != NULL) {
            s32 d;
            VecCopy__FP3VecPC3Vec(&v2, &arg0->target->p2fc);
            subtract_vector(&v2, &arg0->p2fc);
            d = angle_difference_abs(arg0->rotY, (s32)(TObjGrass__data_8043B7B8 * get_ad_end_text_start__10TObjPlayerFv(v2.x, v2.z)));
            if (d < get_field_0c__10TObjPlayerFPv(((u32 *)TObjGrass__data_805D5144)[1])) {
                VecCopy__FP3VecPC3Vec(&v2, &arg0->target->pos);
                subtract_vector(&v2, &arg0->p380);
                ang[0] = (s32)(TObjGrass__data_8043B7B8 * get_ad_end_text_start__10TObjPlayerFv(v2.z, newton_sqrtf(v2.x * v2.x + v2.y * v2.y)));
                ang[1] = 0;
                ang[2] = -(s32)(TObjGrass__data_8043B7B8 * get_ad_end_text_start__10TObjPlayerFv(v2.x, v2.y));
                spawn_directional_particle(&arg0->p380, ang, 0xCA);
                if (arg0->fb4 != 4 && obj_testFlags30(arg0->target, 0x4000000) == 0) {
                    if (enable_v2_features == 1 && lbl_805D5550 == 3) {
                        arg0->target->m46(0);
                    } else {
                        void *m = __nw__7TObjectFUl(0xA8);
                        if (m != NULL) {
                            TObjGrassWeb__ct(m, tl_05, arg0->target);
                        }
                    }
                }
            } else {
                arg0->fb4 &= ~4;
            }
        } else {
            arg0->fb4 &= ~4;
        }
        if (arg0->fb4 != 4) {
            arg0->state = 2;
            arg0->fb8 = 1;
            arg0->timer = 0xF;
        }
        break;
    case 2:
        apply_actor_gravity(arg0, 0, TObjGrass__data_805D9EB8);
        arg0->timer--;
        if (arg0->timer < 0) {
            arg0->flags30 &= ~0x200000;
            arg0->timer = 0;
        }
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
    play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0, &arg0->pos, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
    minimap_render_dot(&arg0->pos, -0x5DB4, 1, 0);
}

void TObjGrass__sub_800BDD70(u8 *arg0) {
    Vec_800BDD70 sp20;
    Vec_800BDD70 sp14;
    Vec_800BDD70 sp8;
    s32 ang;
    u32 ent;
    s32 idx;
    obj_clearFlags30(arg0, 0x04040000);
    advance_animation_playback(arg0);
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    default:
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
    case 0:
        if (M2C_FIELD(arg0, u8 **, 0x2A8) == NULL) {
            M2C_FIELD(arg0, s32 *, 0x30) &= ~0x200000;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
        } else {
            VecCopy__FP3VecPC3Vec(&sp8, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            subtract_vector(&sp8, arg0 + 0x2FC);
            ang = update_angle__10TObjPlayerFPviPv(arg0, (void *)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &sp8);
            apply_actor_gravity(arg0, 0, (*(f32 *)&TObjGrass__data_805D9EB8));
            if (ang < get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318))) {
                M2C_FIELD(arg0, s16 *, 0x328) = 1;
                if (lbl_805D9EBC < calc_boss4_scale__10TObjPlayerFi(arg0)) {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 2;
                } else {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                }
            }
        }
        break;
    case 1:
        apply_actor_gravity(arg0, 0, (*(f32 *)&TObjGrass__data_805D9EB8));
        if (objInBand__FP7GameObjf(arg0, lbl_805D9EF4) != 0) {
            if (M2C_FIELD(arg0, VObj_800BDD70 **, 0x2A8) != NULL && M2C_FIELD(arg0, VObj_800BDD70 **, 0x2A8)->m18(arg0, (*(f32 *)&TObjGrass__data_805D9EE8)) != 0) {
                M2C_FIELD(arg0, VObj_800BDD70 **, 0x2A8)->m20(arg0, (*(f32 *)&TObjGrass__data_805D9EE8));
                M2C_FIELD(arg0, VObj_800BDD70 **, 0x2A8)->m23(arg0);
            }
            switch (get_global_state__14TOKeyMachine01Fv()) {
            case 3:
            case 4:
            case 5:
                play_sound_effect((void *)0x4003A60D, arg0 + 0x38, 0, 0);
                break;
            case 16:
            case 17:
                if (enable_v2_features == 1) {
                    play_sound_effect((void *)0x30022, arg0 + 0x38, 0, 0);
                }
                break;
            case 18:
                break;
            case 19:
            case 20:
                play_sound_effect((void *)0x3A316, arg0 + 0x38, 0, 0);
                break;
            }
        }
        if (M2C_FIELD(arg0, f32 *, 0xC0) < lbl_805D9EF8) {
            switch (M2C_FIELD(arg0, s16 *, 0xB8)) {
            case 2:
                ent = lookup_entry_by_value__10TObjPlayerFPvf((void *)(*(s32 *)&lbl_805D5158));
                idx = 0;
                break;
            case 3:
                ent = lookup_entry_by_value__10TObjPlayerFPvf((void *)(*(s32 *)&lbl_805D515C));
                idx = 1;
                break;
            default:
                ent = 0;
                break;
            }
            if (ent != 0) {
                push_matrix();
                TObjPlayer__sub_803D8CD4(0);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                scale_matrix(0, TObjGrass__data_805D9EFC, TObjGrass__data_805D9EFC, TObjGrass__data_805D9EFC);
                TObjPlayer__sub_803D8960(0, ent, &sp14, 2);
                pop_matrix();
                if (((VObj_800BDD70 **)(arg0 + 0x3CC))[idx] != NULL) {
                    ((VObj_800BDD70 **)(arg0 + 0x3CC))[idx]->m4((M2C_UNK *)&sp14, (M2C_UNK *)&sp20);
                }
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 4U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0xF;
        }
        break;
    case 2:
        apply_actor_gravity(arg0, 0, (*(f32 *)&TObjGrass__data_805D9EB8));
        M2C_FIELD(arg0, s16 *, 0x33C)--;
        if (M2C_FIELD(arg0, s16 *, 0x33C) < 0) {
            M2C_FIELD(arg0, s32 *, 0x30) &= ~0x200000;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
        }
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
    play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void TObjGrass__vt58(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x39E);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s16 *, 0x39E) = 0;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) TObjGrass__data_805D9EB8;
        TObjGrass__sub_800BFB68((O_800BFB68 *)(arg0));
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
}

struct Vec_800BE1CC { f32 x, y, z; };
f32 TObjPlayer__sub_800186E8(void *, void *, Vec_800BE1CC *);
f32 get_pos_x__10TObjPlayerFPv(int);
s32 check_player_flag1__6TLobbyFPv(void *);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
#define TBL ((u32 *)TObjGrass__data_805D5144)
#define T318 M2C_FIELD(arg0, u32 *, 0x318)
#define IN_RANGE() (dist <= (r + get_pos_x__10TObjPlayerFPv(T318)) * (r + get_pos_x__10TObjPlayerFPv(T318)) && ang <= get_field_0c__10TObjPlayerFPv(T318))
#define BIND(n) M2C_FIELD(arg0, s16 *, 0x39E) = (n); bind_enemy_combat_stats(arg0, 0, TBL[M2C_FIELD(arg0, s16 *, 0x39E)], 0); return 1;

s32 TObjGrass__vt28(u8 *arg0) {
    f32 dist;
    u8 *t;
    s32 ang;
    f32 r;
    u8 *tgt;
    s32 i;
    u16 kind;
    Vec_800BE1CC v;

    tgt = M2C_FIELD(arg0, u8 **, 0x2A8);
    if (tgt != NULL && T318 != 0 && !(M2C_FIELD(tgt, s32 *, 0x30) & 0x02000800)) {
    if (obj_testFlags30(arg0, 0x2000) != 0) {
        BIND(2)
    }
    dist = TObjPlayer__sub_800186E8(arg0, M2C_FIELD(arg0, u8 **, 0x2A8), &v);
    ang = angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32)(TObjGrass__data_8043B7B8 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
    t = M2C_FIELD(arg0, u8 **, 0x2A8);
    if (M2C_FIELD(t, u8 **, 0xA4) != NULL) {
        r = M2C_FIELD(M2C_FIELD(t, u8 **, 0xA4), f32 *, 0xC);
    } else {
        r = lbl_805D9F00;
    }
    kind = obj_getField1c(t);
    if (kind < 0x1000) {
        t = M2C_FIELD(arg0, u8 **, 0x2A8);
        if (check_player_flag1__6TLobbyFPv(t) == 1 || (enable_v2_features == 1 && obj_testFlags30(t, 0x20) != 0)) {
            T318 = TBL[0];
            if (IN_RANGE()) {
                BIND(0)
            }
            return 0;
        }
        for (i = 0; i < 2; i++) {
            T318 = TBL[i];
            if (IN_RANGE()) {
                BIND(i)
            }
        }
    } else if (kind < 0x4000) {
        T318 = TBL[0];
        if (IN_RANGE()) {
            BIND(0)
        }
    }
    }
    return 0;
}

#undef BIND
#undef IN_RANGE
#undef T318
#undef TBL

#define arg0 ((u8 *)arg0_)
void TObjGrass__sub_800BE4C0(void *arg0_) {
    f32 speed;
    f32 dist;
    s32 turn;
    Param_800BE4C0 *prm;
    obj_clearFlags30(arg0, 0x04040000);
    prm = M2C_FIELD(arg0, Param_800BE4C0 **, 0x350);
    speed = prm->f4;
    turn = prm->f8;
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x2000) {
        speed *= TObjGrass__data_805D9ED8;
        M2C_FIELD(arg0, f32 *, 0xC8) = TObjGrass__data_805D9ED8 * M2C_FIELD(arg0, Anim_800BE4C0 **, 0xD8)[M2C_FIELD(arg0, s16 *, 0xB8)].f8;
        turn = (s32)((f32)turn * TObjGrass__data_805D9ED8);
        play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A300), arg0, arg0 + 0x38, 0, 0);
    } else {
        play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0, arg0 + 0x38, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x200);
    }
    advance_animation_playback(arg0);
    if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
        switch (M2C_FIELD(arg0, s16 *, 0x328)) {
        default:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
        case 0: {
            Vec_800BE4C0 v;
            Vec_800BE4C0 t = *(Vec_800BE4C0 *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            dist = enemy_move_toward(arg0, turn, &t, 0, lbl_805D9F04 * speed);
            VecCopy__FP3VecPC3Vec(&v, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            subtract_vector(&v, arg0 + 0x2FC);
            turn = angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32)(TObjGrass__data_8043B7B8 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
            if (turn < get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318))) {
                M2C_FIELD(arg0, s16 *, 0x328) = 1;
            }
            break;
        }
        case 1: {
            Vec_800BE4C0 t = *(Vec_800BE4C0 *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            f32 r;
            enemy_pursue_point(arg0, turn, &t, speed, lbl_805D9F08);
            dist = horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x2FC);
            r = speed + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC);
            if (dist < r * r) {
                if (M2C_FIELD(arg0, u16 *, 0x338) == 0xFFFF) {
                    M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
                } else {
                    M2C_FIELD(arg0, s16 *, 0x328) = 0;
                }
            }
            break;
        }
        }
        if (M2C_FIELD(arg0, Param_800BE4C0 **, 0x350)->f0 * M2C_FIELD(arg0, Param_800BE4C0 **, 0x350)->f0 < dist) {
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
        }
    }
    update_collisions__10TObjPlayerFPv(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}
#undef arg0

M2C_UNK TObjGrass__sub_800BE75C(Grass_800BE75C *o) {
    Vec_800BE75C v;
    f32 d;
    f32 lo2;
    f32 hi2;
    obj_setFlags30(o, 0x04040000);
    advance_animation_playback(o);
    v.y = TObjGrass__data_805D9EB8;
    v.x = TObjGrass__data_805D9EB8;
    v.z = o->f358;
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, o->f60);
    rotate_vector_by_matrix(0, &v, &v);
    pop_matrices(1);
    vec3_add_to(&v, o->mtx50);
    d = TObjPlayer__sub_80017804(o, v, TObjGrass__data_805D9ED8 * o->range->hi);
    lo2 = o->range->lo * o->range->lo;
    hi2 = o->range->hi * o->range->hi;
    if (lo2 < d || d < hi2) {
        o->f2A8 = 0;
        o->f39C = 0;
    }
    apply_actor_gravity(o, 0, TObjGrass__data_805D9EB8);
    play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(o, 0x4003A801), o, &o->pos, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
    minimap_render_dot(&o->pos, -0x5DB4, 1, 0);
}

void TObjGrass__vt57(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 1)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        if ((s16) M2C_FIELD(arg0, s16 *, 0x39C) == 2) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
    }
}

void TObjGrass__vt56(Obj_800BEE2C *self) {
    switch (self->f326) {
    case 0:
        switch (self->f328) {
        case 0:
        case 1:
            break;
        default:
            self->f328 = 2;
        case 2:
            if (self->f3ac != 0) {
                self->f328 = 0;
            }
            break;
        }
        break;
    default:
        self->f326 = 0;
        if (self->f3ac != 0) {
            self->f328 = 0;
        } else {
            self->f328 = 2;
        }
        self->fb8 = 1;
        break;
    }
}

s32 TObjGrass__vt37(void *arg0) {
    if (update_movement_status__10TObjPlayerFv() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
        }
        return 1;
    }
    return 0;
}

s32 TObjGrass__vt34(void *arg0) {
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
        }
        return 1;
    }
    return 0;
}

extern void *tl_04;

void TObjGrass__vt26(u8 *arg0) {
    s32 best_id;
    s32 i;
    s32 id;
    u8 *p;
    f32 best;
    f32 d;
    u8 *q;
    u16 tid;
    if (((VObj_18_800BEF8C *)(arg0))->m17(0x1E) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x3AC) == 1) {
            M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
            return;
        }
        if (obj_testFlags30((void *) (arg0), 0x10) != 0) {
            i = 0;
            best_id = 0xFFFF;
            Vec_800BEF8C v = *(Vec_800BEF8C *)lbl_8043B790;
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
                    if (d < best && check_path_obstructed((void *) (arg0), p + 0x2FC) != 1) {
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
                    obj_clearFlags30((void *) (arg0), 0x04040000);
                    return;
                }
            }
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
            return;
        }
        if (tid < 0x4000U) {
            M2C_FIELD(arg0, u8 **, 0x2A8) = get_enemy_entity(tid);
            obj_clearFlags30((void *) (arg0), 0x04040000);
        }
    }
}

void run_task__9TObjGrassFv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r30;
    u16 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r4;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjGrass__sub_800BCA2C((void *)((void *) (arg0)));
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
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            TObjGrass__sub_800BE8FC((void *) (arg0));
            break;
        case 1:
            TObjGrass__sub_800BE75C((Grass_800BE75C *)((void *) (arg0)));
            break;
        case 2:
            TObjGrass__sub_800BE4C0((void *)((void *) (arg0)));
            break;
        case 3:
            TObjGrass__sub_800BDD70((u8 *)((void *) (arg0)));
            break;
        case 4:
            TObjGrass__sub_800BD4D8((void *) (arg0));
            break;
        case 5:
            TObjGrass__sub_800BD10C((void *)((void *) (arg0)));
            break;
        case 6:
            update__9TObjGrassFPv((u8 *)((void *) (arg0)));
            break;
        case 7:
            TObjGrass__sub_800BCE44((u8 *)((void *) (arg0)));
            break;
        case 8:
            TObjGrass__sub_800BCA30((void *)((void *) (arg0)));
            break;
        case 9:
            break;
        }
    }
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x30) & 0x02000800)) {
        M2C_FIELD(arg0, s16 *, 0x33C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x2B4) + TObjGrass__data_805D9EE8);
}

void * create__9TObjGrassFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x404);
    if (o2 != NULL) {
        o2 = TObjGrass__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjGrass__data_805D5144;
extern u32 TObjGrass__data_805D5154;
extern u32 lbl_805D5158;
extern u32 lbl_805D515C;

void destroy_all__9TObjGrassFv(void) {
    if ((u32) TObjGrass__data_805D5144 != 0U) {
        free__11TOBoss4RockFUi((void*)TObjGrass__data_805D5144);
        TObjGrass__data_805D5144 = 0U;
    }
    if ((u32) lbl_805D515C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D515C, 1);
        lbl_805D515C = 0U;
    }
    if ((u32) lbl_805D5158 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5158, 1);
        lbl_805D5158 = 0U;
    }
    if ((u32) TObjGrass__data_805D5154 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjGrass__data_805D5154, 1);
        TObjGrass__data_805D5154 = 0U;
    }
}

void TObjGrass__sub_800BF66C(void) {
    u8 *p;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        TObjGrass__data_805D5154 = (u32) load_enemy_bml_resource_named(lbl_80492954, lbl_8043B7C0);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_80492954, 0, 0, 0);
        }
        TObjGrass__data_805D5154 = (u32) p;
    }
    TObjGrass__data_805D5150 = 0;
    lbl_80500BD0.x = lbl_80500BD0.y = lbl_80500BD0.z = TObjGrass__data_805D9EB8;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = TBoss4Type3__sub_800D9ABC(p, 2, TObjGrass__data_805D9EB8, lbl_805D9EF8, lbl_805D9F1C);
    }
    lbl_805D5158 = (u32) p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = TBoss4Type3__sub_800D9ABC(p, 2, TObjGrass__data_805D9EB8, lbl_805D9EF8, lbl_805D9F1C);
    }
    lbl_805D515C = (u32) p;
    draw_trail_with_colors((void *) lbl_805D5158, ((Data_800BF66C *)TObjGrass__data_805D5154)->f42c->f8, ((Data_800BF66C *)TObjGrass__data_805D5154)->f430[lbl_80492964[9]].f4, 0x46, 0x48);
    draw_trail_with_colors((void *) lbl_805D515C, ((Data_800BF66C *)TObjGrass__data_805D5154)->f42c->f8, ((Data_800BF66C *)TObjGrass__data_805D5154)->f430[lbl_80492964[13]].f4, 0x3C, 0x3E);
    TObjGrass__data_805D5144 = (u32) alloc_buffer__11TOBoss4RockFPv(0xC);
    lbl_805D5140 = register_boss__6TLobbyFPv(0x4E);
    ((s32 *) TObjGrass__data_805D5144)[0] = dispatch_shared_handler_b__6TLobbyFPv(0x51);
    ((s32 *) TObjGrass__data_805D5144)[2] = dispatch_shared_handler_b__6TLobbyFPv(0x52);
    ((s32 *) TObjGrass__data_805D5144)[1] = dispatch_shared_handler_b__6TLobbyFPv(0x53);
    lbl_805D5148 = register_object__6TLobbyFPv(0x4D);
    lbl_805D514C = dispatch_shared_handler_a__6TLobbyFPv(0x4D);
    {
    Quad_800BF66C q = lbl_8043B780;
    q.a = (s32) ((Data_800BF66C *)TObjGrass__data_805D5154)->f430;
    spawn_npc_enemy__6TLobbyFsiiiff(0x35, ((Data_800BF66C *)TObjGrass__data_805D5154)->f42c->f8, ((Data_800BF66C *)TObjGrass__data_805D5154)->f42c->fC, &q, lbl_805D9F00, TObjGrass__data_805D9EB8);
    }
}

Obj_800BF880 *__dt__9TObjGrassFv(Obj_800BF880 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        i = 0;
        arg0->vt = __vt__9TObjGrass;
        do {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
                arg0->items[i] = NULL;
            }
            i++;
        } while (i < 2);
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3B0, -1);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjGrass__sub_800BFB68(O_800BFB68 *self) {
    s32 i;
    for (i = 0; i < 12; i++) {
        self->arr[i] = 0;
    }
}

void TObjGrass__sub_800BFB8C(O_800BFB8C *self, s32 i) {
    self->f34 = (*(D_800BFB8C * *)&TObjGrass__data_805D5154)->entries[i].f8;
    self->f24 = (*(D_800BFB8C * *)&TObjGrass__data_805D5154)->entries[i].fc;
}

}
