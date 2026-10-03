#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800D5060 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800D5060_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_800D5060_lbl_8058D490_size[sizeof(RecoveredGlobal_800D5060_lbl_8058D490) == 0x30 ? 1 : -1];

struct VBase_18_477421
{
  char pad[0x18];
};

struct VObj_18_477421 : VBase_18_477421 {
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
    virtual M2C_UNK m81();
    virtual M2C_UNK m82();
    virtual M2C_UNK m83();
    virtual M2C_UNK m84();
    virtual M2C_UNK m85();
    virtual M2C_UNK m86();
    virtual M2C_UNK m87();
    virtual M2C_UNK m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual M2C_UNK m99();
};

struct Stack_800D6810
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct VBase_18_ca64a0
{
  char pad[0x18];
};

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

struct VBase_14_fddec9
{
  char pad[0x14];
};

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

struct RecoveredFields_800D6810_arg0
{
  u8 unknown_0[0x24];
  s32 field_24;
  u8 unknown_28[0xC];
  s32 field_34;
  u8 unknown_38[0x28];
  s32 field_60;
  u8 unknown_64[0x2C2];
  s16 field_326;
  u8 unknown_328[0x58];
  f32 field_380;
};

struct E_800D7274 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct D_800D7274 { u8 pad[0x42c]; E_800D7274 *entries; };

struct O_800D7274 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct Sub_800D5100 { u8 pad[0x18]; s32 f18; };

struct Obj_800D5100 { u8 pad[0x2b0]; Sub_800D5100 *f2b0; };

struct Obj_800D5150 { u8 pad[0x334]; s32 f334; u8 pad2[0x368 - 0x338]; s32 f368; };

struct VBase_14_800D5570 { char pad[0x14]; };

struct VObj_14_800D5570 : VBase_14_800D5570 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual s32 m5();
};

struct Obj_800D5570 { u8 pad0[0x38]; u8 sub38[0xB8 - 0x38]; s16 fb8; u8 padba[0x326 - 0xBA]; s16 f326; s16 state; };

typedef struct Ene_800D51C8 {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 f328;
    u8 pad32A[0x34C - 0x32A];
    void *f34C;
} Ene_800D51C8;

struct Base_800D64F0 {
    char pad[0x18];
};

struct Ene_800D64F0 : Base_800D64F0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79(); virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94();
    virtual void m95();
    u8 pad1C[0xB4 - 0x1C];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 sub;
    u8 pad32A[0x338 - 0x32A];
    s16 target;
    u8 pad33A[0x350 - 0x33A];
    f32 *param;
    u8 pad354[0x390 - 0x354];
    s32 f390;
};

typedef struct Ene_800D52DC {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 f328;
    u8 pad32A[0x34C - 0x32A];
    void *f34C;
} Ene_800D52DC;

struct Vec_800D57C8 { s32 x, y, z; };

struct Vec_800D6618 { f32 x, y, z; };

extern "C" {
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
void TObjEneMerillLia__sub_800D5480(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void init_attack_state__16TObjEneMerillLiaFPv(void *arg0);
void reset_action_state__16TObjEneMerillLiaFPv(void *arg0);
void TObjEneMerillLia__sub_800D6A44(u8 *arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4EC8(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4F0C(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4F50(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4F94(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4FD8(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneMerillLia__sub_800D501C(s32 arg0);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 TObjPlayer__sub_800D92BC(void *, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_800D5060_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA304;
extern const f32 TObjEneMerillLia__data_805DA308;
void TObjEneMerillLia__sub_800D5060(u8 *arg0);
extern const f32 lbl_805DA2EC;
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA334;
extern const f32 lbl_805DA338;
void TObjEneMerillLia__sub_800D69B4(u8 *arg0);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjEneMerillLia__sub_800D5614(void *);
M2C_UNK TObjEneMerillLia__sub_800D56B4(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
extern const f32 TObjEneMerillLia__data_805DA2F4;
void TObjEneMerillLia__sub_800D6AAC(u8 *arg0);
s32 render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 check_demo_mode__10TObjPlayerFv();
s32 toggle_particle_effect__10TObjPlayerFv();
s32 restore_scene_lighting();
s32 TObjLight__sub_80134194(void *);
s32 render_world_model__10TObjPlayerFPv(void *);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 draw_chunk_object(int);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TObjEneMerillLia__data_805DA2F4;
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA314;
extern const f32 lbl_805DA324;
extern const f32 lbl_805DA328;
extern const f32 lbl_805DA32C;
extern const f32 lbl_805DA330;
void TObjEneMerillLia__sub_800D6810(u8 *arg0);
extern u32 TObjEneMerillLia__data_805D5220;
void TObjEneMerillLia__sub_800D7274(O_800D7274 *self, s32 i);
extern s32 lbl_805D5550;
s32 TObjEneMerillLia__sub_800D5100(Obj_800D5100 *self);
void set_param__12TObjEneLappyFPvi(void *p, s32 v);
void TObjEneMerillLia__sub_800D5150(Obj_800D5150 *self);
s32 TObjEneMerillLia__sub_800D4D74(void *);
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 TBoss3Volopt__sub_800D8E80(void *);
s32 advance_animation_playback(void *);
void TObjEneMerillLia__sub_800D5570(Obj_800D5570 *arg0);
s32 obj_testFlags30(void *, int);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
void TObjEneMerillLia__sub_800D51C8(Ene_800D51C8 *arg0);
s16 find_nearest_visible_player(void *, s32, f32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
s32 TObjEneMerillLia__sub_800D4D74(void *);
void TObjEneMerillLia__sub_800D501C(s32 arg0);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DA304;
void TObjEneMerillLia__sub_800D64F0(Ene_800D64F0 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
extern const f32 TObjEneMerillLia__data_805DA308;
void TObjEneMerillLia__sub_800D52DC(Ene_800D52DC *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
void TObjEneMerillLia__sub_800D4EC8(s32 arg0);
s32 TObjEneMerillLia__sub_800D5100(Obj_800D5100 *self);
void init_attack_state__16TObjEneMerillLiaFPv(void *arg0);
M2C_UNK render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK create__9TTecKafunFiiiiiff(void *, void *, int, int, int, f32, f32);
M2C_UNK matrix_mult_vec(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 post_translate_matrix(void *);
extern Vec_800D57C8 lbl_8043C6D0;
extern RecoveredGlobal_800D5060_lbl_8058D490 lbl_8058D490;
extern u32 TObjEneMerillLia__data_805D521C;
extern s32 lbl_805D5678;
extern const f32 lbl_805DA30C;
extern const f32 lbl_805DA310;
M2C_UNK TObjEneMerillLia__sub_800D57C8(void *p);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK enemy_move_toward(void *, s32, void *, int, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800C4E08(void *);
M2C_UNK update_target_near_flag(void *);
s32 TObjEneMerillLia__sub_800D4D74(void *);
f32 horizontal_distance_squared(void *, void *);
s32 advance_animation_playback(void *);
s32 test_elt_flag__10TObjPlayerFPvii(void *, int, int);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA31C;
extern const f32 lbl_805DA320;
void TObjEneMerillLia__sub_800D6618(u8 *arg0);
}

extern "C" {

void * TObjEneMerillLia__create(void *arg0);
void TObjEneMerillLia__sub_800D4D70(void);
void TObjEneMerillLia__sub_800D50FC(void);
void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1);
void destroy_rocks__16TObjEneMerillLiaFv(void);
void init_attack_state__16TObjEneMerillLiaFPv(void *arg0);
void reset_action_state__16TObjEneMerillLiaFPv(void *arg0);
void update_motion_state__16TObjEneMerillLiaFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void free_collision_body_parts(void *);
void *TObjEneMerillLia__ct(void *, void *, void *);
void TObjPlayer__sub_800C68FC(void *, int);
void unlink_enemy_group_relations(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
void free__11TOBoss4RockFUi(void*);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TObjEneMerillLia__sub_800D4D70(void) {  }

void TObjEneMerillLia__sub_800D4EC8(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3AD04))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D4F0C(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3B205))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D4F50(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3AD00))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D4F94(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3B201))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D4FD8(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3AB02))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D501C(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3B206))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D5060(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800D5060, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800D5060, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800D5060, sp10) == 0x8) ? 1 : -1];
    Stack_800D5060 stack;
    stack.sp8 = TObjEneMerillLia__data_805DA300;
    stack.spC = lbl_805DA304;
    stack.sp10 = TObjEneMerillLia__data_805DA308 * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrix();
    vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x23));
    TObjPlayer__sub_800D92BC((void *) (&stack.sp8), (int) (0xF));
}

void TObjEneMerillLia__sub_800D50FC(void) {  }

s32 TObjEneMerillLia__sub_800D5100(Obj_800D5100 *self) {
    Sub_800D5100 *p = self->f2b0;
    s32 v = 0;
    if (p != 0) {
        v = p->f18;
        if (v < 0) {
            v = 0;
        } else if (lbl_805D5550 == 3) {
            if (v > 0x1d) {
                v = 0x1d;
            }
        } else if (v > 0xe) {
            v = 0xe;
        }
    }
    return v;
}

void TObjEneMerillLia__sub_800D5150(Obj_800D5150 *self) {
    if (self->f334 < 0) {
        self->f334 = 0;
    } else if (self->f334 > 1) {
        self->f334 = 1;
    }
    switch (self->f334) {
    case 1:
        self->f368 = 1;
        set_param__12TObjEneLappyFPvi(self, 0x35);
        break;
    default:
        self->f368 = 0;
        set_param__12TObjEneLappyFPvi(self, 0x34);
        break;
    }
}

void TObjEneMerillLia__sub_800D51C8(Ene_800D51C8 *arg0) {
    if (obj_testFlags30(arg0, 0x1000) != 0) {
        arg0->state = 4;
    }
    switch (arg0->state) {
    case 0:
    case 2:
    case 3:
    case 10:
    case 11:
    case 12:
    case 13:
        break;
    case 1:
        arg0->f328 = 0;
        if (arg0->f34C == NULL) {
            arg0->state = 3;
            arg0->fB8 = 7;
        } else {
            arg0->state = 2;
            arg0->fB8 = 10;
        }
        obj_clearFlags30((void *)(arg0), (M2C_UNK)(0x4040000));
        clear_player_status_flag__10TObjPlayerFPviUi((void *)(arg0), (M2C_UNK)(0), (M2C_UNK)(0xA000000));
        break;
    case 4:
        arg0->fB8 = 5;
        break;
    default:
        arg0->state = 3;
        arg0->f328 = 1;
        arg0->fB8 = 2;
        obj_clearFlags30((void *)(arg0), (M2C_UNK)(0x4040000));
        clear_player_status_flag__10TObjPlayerFPviUi((void *)(arg0), (M2C_UNK)(0), (M2C_UNK)(0xA000000));
        break;
    }
}

void TObjEneMerillLia__sub_800D52DC(Ene_800D52DC *arg0) {
    switch (arg0->state) {
    case 0:
    case 2:
    case 4:
    case 10:
    case 11:
    case 12:
    case 13:
        break;
    case 1:
        arg0->f328 = 0;
        if (arg0->f34C == NULL) {
            arg0->state = 3;
            arg0->fB8 = 7;
        } else {
            arg0->state = 2;
            arg0->fB8 = 10;
        }
        obj_clearFlags30((void *)(arg0), (M2C_UNK)(0x4040000));
        clear_player_status_flag__10TObjPlayerFPviUi((void *)(arg0), (M2C_UNK)(0), (M2C_UNK)(0xA000000));
        break;
    default:
        arg0->state = 5;
        arg0->f328 = 1;
        if (TObjEneMerillLia__data_805DA308 < calc_boss4_scale__10TObjPlayerFi(arg0)) {
            arg0->fB8 = 3;
        } else {
            arg0->fB8 = 4;
        }
        obj_setFlags30((void *)(arg0), (M2C_UNK)(0x200000));
        obj_clearFlags30((void *)(arg0), (M2C_UNK)(0x4040000));
        clear_player_status_flag__10TObjPlayerFPviUi((void *)(arg0), (M2C_UNK)(0), (M2C_UNK)(0xA000000));
        break;
    }
}

void update_motion_state__16TObjEneMerillLiaFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 4) {
        if (temp_r0 < 4) {
            if (temp_r0 < 3) {
                if (temp_r0 >= 0) {
                    goto block_end;
                }
                goto block_7;
            } else {
                goto block_7;
            }
        } else if ((temp_r0 >= 0xE) || (temp_r0 < 0xB)) {
block_7:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
                M2C_FIELD(arg0, s16 *, 0x326) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x326) = 1;
            }
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            obj_setFlags30(arg0, 0x04040000);
            set_indexed_flags(arg0, 0, 0x0A000000);
        }
    }
block_end:
    ;
}

void TObjEneMerillLia__sub_800D5480(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    clear_player_status_flag__10TObjPlayerFPviUi((void *)(arg0), (M2C_UNK)(0), (M2C_UNK)(0x0A000000U));
}

void init_attack_state__16TObjEneMerillLiaFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 4;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) M2C_FIELD(arg0, s16 *, 0x3D8);
    obj_clearFlags30(arg0, 0x04240000);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
}

void reset_action_state__16TObjEneMerillLiaFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    obj_setFlags30(arg0, 0x200000);
    obj_clearFlags30(arg0, 0x04040000);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
}

extern void *tl_04;

typedef struct RecoveredFields_800D6810_arg0 RecoveredFields_800D6810_arg0;
typedef struct Stack_800D6810 Stack_800D6810;
typedef struct VBase_14_fddec9 VBase_14_fddec9;
typedef struct VBase_18_ca64a0 VBase_18_ca64a0;
typedef struct VObj_14_fddec9 VObj_14_fddec9;
typedef struct VObj_18_ca64a0 VObj_18_ca64a0;
#define PSO_VCALL_VObj_18_ca64a0_m9(_self, _arg0, _arg1, _arg2) (((VObj_18_ca64a0 *)(_self))->m9((_arg0), (_arg1), (_arg2)))
#define PSO_VCALL_VObj_14_fddec9_m8(_self) (((VObj_14_fddec9 *)(_self))->m8())
#define PSO_VCALL_VObj_14_fddec9_m6(_self) (((VObj_14_fddec9 *)(_self))->m6())
#define PSO_VCALL_VObj_14_fddec9_m7(_self) (((VObj_14_fddec9 *)(_self))->m7())

void TObjEneMerillLia__sub_800D5570(Obj_800D5570 *arg0) {
    switch (arg0->state) {
    case 0:
    default:
        arg0->state = 1;
        arg0->fb8 = 1;
        TObjEneMe3SinowZoa__sub_800D758C((u8 *)arg0 + 0x3A8);
        TBoss3Volopt__sub_800D8E80(arg0->sub38);
        break;
    case 1:
        TObjEneMerillLia__sub_800D4D74(arg0);
        if (((VObj_14_800D5570 *)((u8 *)arg0 + 0x3A8))->m5() != 0) {
            arg0->state = 2;
        }
        break;
    case 2:
        arg0->f326 = 12;
        break;
    }
    advance_animation_playback(arg0);
}

struct Obj_800D5100;
struct RecoveredGlobal_800D5060_lbl_8058D490;
#define arg0 ((u8 *)p)
M2C_UNK TObjEneMerillLia__sub_800D57C8(void *p) {
    Vec_800D57C8 sp14;
    s16 temp_r0;
    advance_animation_playback((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    default:
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xC;
        obj_setFlags30((void *) (arg0), 0x200000);
        obj_clearFlags30((void *) (arg0), 0x04040000);
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), 0, 0x0A000000);
        break;
    case 1:
        if (objInBand__FP7GameObjf((void *) (arg0), lbl_805DA30C) != 0) {
            advance_animation_playback((void *) (arg0));
            push_matrix_from((void *) (&lbl_8058D490));
            post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            render_anim_model__10TObjPlayerFPvf((void *) (arg0), lbl_805DA30C);
            pop_matrix();
            push_matrix_from((void *) (lbl_805D5678 + 0x450));
            {
                Vec_800D57C8 sp8 = lbl_8043C6D0;
                matrix_mult_vec(0, &sp8, &sp14);
            }
            pop_matrix();
            create__9TTecKafunFiiiiiff((void *) (arg0), &sp14, 0xF, 0xD3, TObjEneMerillLia__sub_800D5100((Obj_800D5100 *) (arg0)), M2C_FIELD(((void **) TObjEneMerillLia__data_805D521C)[M2C_FIELD(arg0, s32 *, 0x334)], f32 *, 0x10), lbl_805DA310);
            TObjEneMerillLia__sub_800D4EC8((s32) (arg0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 4U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0xF;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x33C)--;
        if (M2C_FIELD(arg0, s16 *, 0x33C) < 0) {
            obj_clearFlags30((void *) (arg0), 0x200000);
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
            if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= M2C_FIELD(arg0, f32 *, 0x3C4)) {
                init_attack_state__16TObjEneMerillLiaFPv((void *) (arg0));
            } else {
                M2C_FIELD(arg0, s16 *, 0x326) = 1;
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
                obj_setFlags30((void *) (arg0), 0x04040000);
                set_indexed_flags((void *) (arg0), 0, 0x0A000000);
            }
        }
        break;
    }
    update_collisions__10TObjPlayerFPv((void *) (arg0));
    update_enemy_collision_flags__10TObjPlayerFPv((void *) (arg0));
    minimap_render_dot((void *) ((u8 *)(arg0) + 0x38), -0x5DB4, 1, 0);
}
#undef arg0

void TObjEneMerillLia__sub_800D64F0(Ene_800D64F0 *arg0) {
    switch (arg0->sub) {
    case 0:
    default:
        if (arg0->f390 != 1) {
            arg0->sub = 2;
        } else {
            arg0->sub = 1;
            arg0->fB8 = 0xB;
            set_indexed_flags((void *)(arg0), (M2C_UNK)(0), (M2C_UNK)(0xA000000));
            obj_setFlags30((void *)(arg0), (M2C_UNK)(0x4000000));
            arg0->m95();
        }
        break;
    case 1:
        TObjEneMerillLia__sub_800D4D74(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805DA304) != 0) {
            TObjEneMerillLia__sub_800D501C((s32)arg0);
        }
        if (arg0->fB4 != 0x20) {
            arg0->sub = 2;
            arg0->f390 = 0;
            arg0->fB8 = 0;
            clear_player_status_flag__10TObjPlayerFPviUi((void *)(arg0), (M2C_UNK)(0), (M2C_UNK)(0xA000000));
            obj_clearFlags30((void *)(arg0), (M2C_UNK)(0x4000000));
        }
        break;
    case 2:
        arg0->target = find_nearest_visible_player(arg0, 0, *arg0->param);
        arg0->state = 1;
        break;
    }
    advance_animation_playback(arg0);
}

void TObjEneMerillLia__sub_800D6618(u8 *arg0) {
    Vec_800D6618 sp14;
    f32 r;
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        apply_actor_gravity(arg0, 0, TObjEneMerillLia__data_805DA300);
        advance_animation_playback(arg0);
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        }
        break;
    default:
        TObjEneMerillLia__sub_800D4D74(arg0);
        if (M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
            if (test_elt_flag__10TObjPlayerFPvii(arg0, 0, 0x300000) != 0) {
                if ((f32) M2C_FIELD(arg0, u32 *, 0x38C)++ < lbl_805DA31C) {
                    VecCopy__FP3VecPC3Vec(&sp14, arg0 + 0x50);
                } else {
                    VecCopy__FP3VecPC3Vec(&sp14, (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x2FC));
                }
            } else {
                M2C_FIELD(arg0, u32 *, 0x38C) = 0U;
                VecCopy__FP3VecPC3Vec(&sp14, (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x2FC));
            }
            update_target_near_flag(arg0);
            TObjPlayer__sub_800C4E08(arg0);
            advance_animation_playback(arg0);
            {
                Vec_800D6618 sp8 = sp14;
                enemy_move_toward(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &sp8, 0, M2C_FIELD(arg0, f32 *, 0x394));
            }
            if (M2C_FIELD(arg0, u16 *, 0x338) == 0xFFFF) {
                if (horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x38) < (r = M2C_FIELD(arg0, f32 *, 0x394) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC)) * r ||
                    lbl_805DA320 < (f32) M2C_FIELD(arg0, s32 *, 0x2AC)++) {
                    M2C_FIELD(arg0, u32 *, 0x2A8) = 0U;
                    M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
                }
            }
        }
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    obj_clearFlags30(arg0, 0x200000);
}

void TObjEneMerillLia__sub_800D6810(u8 *arg0) {
  Stack_800D6810 stack;
  s32 var_r30;
  s16 temp_r0;
  s32 temp_r3;
  s32 var_r29;
  temp_r3 = PSO_VCALL_VObj_18_ca64a0_m9(arg0, lbl_805DA324, lbl_805DA328, lbl_805DA314);
  if (temp_r3 != 0)
  {
    lbl_805D5660 = some_id_805c6f74;
    TObjLight__sub_80134194((void *) arg0);
    set_global_param__8TObjFishFi((int) ((RecoveredFields_800D6810_arg0 *) arg0)->field_24);
    push_matrix();
    translate_matrix((int) 0, (f32) TObjEneMerillLia__data_805DA300, (f32) ((RecoveredFields_800D6810_arg0 *) arg0)->field_380, (f32) TObjEneMerillLia__data_805DA300);
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) 0, (int) ((RecoveredFields_800D6810_arg0 *) arg0)->field_60);
    if (check_demo_mode__10TObjPlayerFv() == 1)
    {
      draw_chunk_object((int) ((RecoveredFields_800D6810_arg0 *) arg0)->field_34);
    }
    else
    {
      toggle_particle_effect__10TObjPlayerFv();
      var_r30 = 1;
      var_r29 = 0;
      if (((s16) ((RecoveredFields_800D6810_arg0 *) arg0)->field_326) == 0xD)
      {
        var_r29 = 1;
        var_r30 = PSO_VCALL_VObj_14_fddec9_m8(((u8 *) arg0) + 936);
      }
      if (var_r29 != 0)
      {
        PSO_VCALL_VObj_14_fddec9_m6(((u8 *) arg0) + 936);
        if (toggle_flag_9__10TObjPlayerFPv((void *) arg0) != 0)
        {
          var_r30 = 0;
        }
      }
      if (var_r30 != 0)
      {
        if (temp_r3 == 1)
        {
          set_global_flag__10TObjPlayerFv();
          draw__16TObjEneRe7BeruraFPv((void *) arg0);
          clear_global_state__10TObjPlayerFv();
        }
        else
        {
          set_global_flag__10TObjPlayerFv();
          render_world_model__10TObjPlayerFPv((void *) arg0);
          clear_global_state__10TObjPlayerFv();
        }
      }
      end_effect_render__13TParticleCtrlFv();
      if (var_r29 != 0)
      {
        PSO_VCALL_VObj_14_fddec9_m7(((u8 *) arg0) + 936);
      }
    }
    pop_matrix();
    restore_scene_lighting();
    temp_r0 = ((RecoveredFields_800D6810_arg0 *) arg0)->field_326;
    if ((temp_r0 >= 0xA) || (temp_r0 < 8))
    {
      stack.sp8 = lbl_805DA32C;
      stack.spC = TObjEneMerillLia__data_805DA2F4;
      stack.sp10 = lbl_805DA330;
      render_with_position_override__10TObjPlayerFPvPvi((void *) arg0, (void *) (&stack.sp8), (int) 0);
    }
  }
}

#pragma push
#pragma opt_common_subs off
void TObjEneMerillLia__sub_800D69B4(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x3D8) = (s16) ((s32) M2C_FIELD(arg0, f32 *, 0x360) + 0x12C);
    M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) - lbl_805DA334);
    if (M2C_FIELD(arg0, f32 *, 0x3C4) < TObjEneMerillLia__data_805DA300) {
        M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) TObjEneMerillLia__data_805DA300;
    }
    M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x35C) - lbl_805DA334);
    if (M2C_FIELD(arg0, f32 *, 0x3C8) < TObjEneMerillLia__data_805DA300) {
        M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) TObjEneMerillLia__data_805DA300;
    }
    M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) (lbl_805DA338 + M2C_FIELD(arg0, f32 *, 0x364));
    if (M2C_FIELD(arg0, f32 *, 0x3D0) < lbl_805DA2EC) {
        M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) lbl_805DA2EC;
    }
}
#pragma pop

void TObjEneMerillLia__sub_800D6A44(u8 *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= M2C_FIELD(arg0, f32 *, 0x3C4)) {
        init_attack_state__16TObjEneMerillLiaFPv((void *) (arg0));
        return;
    }
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= M2C_FIELD(arg0, f32 *, 0x3C8)) {
        reset_action_state__16TObjEneMerillLiaFPv((void *) (arg0));
    }
}

typedef struct VBase_18_477421 VBase_18_477421;
typedef struct VObj_18_477421 VObj_18_477421;
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())
void TObjEneMerillLia__sub_800D6AAC(u8 *arg0) {
  s16 temp_r0;
  if (check_demo_mode__10TObjPlayerFv() == 1)
  {
    PSO_VCALL_VObj_18_477421_m99(arg0);
    return;
  }
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        PSO_VCALL_VObj_18_477421_m81(arg0);
        break;
      case 1:
        PSO_VCALL_VObj_18_477421_m82(arg0);
        break;
      case 2:
        PSO_VCALL_VObj_18_477421_m83(arg0);
        break;
      case 3:
        PSO_VCALL_VObj_18_477421_m84(arg0);
        break;
      case 4:
        PSO_VCALL_VObj_18_477421_m85(arg0);
        break;
      case 5:
        PSO_VCALL_VObj_18_477421_m86(arg0);
        break;
      case 6:
        PSO_VCALL_VObj_18_477421_m87(arg0);
        break;
      case 7:
        PSO_VCALL_VObj_18_477421_m88(arg0);
        break;
      case 8:
        PSO_VCALL_VObj_18_477421_m89(arg0);
        break;
      case 9:
        PSO_VCALL_VObj_18_477421_m90(arg0);
        break;
      case 10:
        TObjEneMerillLia__sub_800D57C8((void *)((void *) arg0));
        break;
      case 11:
        TObjEneMerillLia__sub_800D56B4((void *) arg0);
        break;
      case 12:
        TObjEneMerillLia__sub_800D5614((void *) arg0);
        break;
      case 13:
        TObjEneMerillLia__sub_800D5570((Obj_800D5570 *)((void *) arg0));
        break;
    }
  }
  update_prev_position__10TObjPlayerFPv((void *) arg0);
  copy_position__20TBoss3VoloptHiraisinFi((void *) arg0);
  submit_cursor_candidate((void *) arg0, (int) (-1));
  *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x2B4))) + TObjEneMerillLia__data_805DA2F4);
}

void * TObjEneMerillLia__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3DC);
    if (o2 != NULL) {
        o2 = TObjEneMerillLia__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D5210;
extern u32 lbl_805D5214;
extern u32 lbl_805D5218;
extern u32 TObjEneMerillLia__data_805D521C;
extern u32 TObjEneMerillLia__data_805D5220;

void destroy_rocks__16TObjEneMerillLiaFv(void) {
    if ((u32) lbl_805D5210 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5210);
        lbl_805D5210 = 0U;
    }
    if ((u32) lbl_805D5214 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5214);
        lbl_805D5214 = 0U;
    }
    if ((u32) lbl_805D5218 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5218);
        lbl_805D5218 = 0U;
    }
    if ((u32) TObjEneMerillLia__data_805D521C != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneMerillLia__data_805D521C);
        TObjEneMerillLia__data_805D521C = 0U;
    }
    if ((u32) TObjEneMerillLia__data_805D5220 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneMerillLia__data_805D5220, 1);
        TObjEneMerillLia__data_805D5220 = 0U;
    }
}

extern M2C_UNK lbl_80494728[];

void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494728;
        unlink_enemy_group_relations(arg0);
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TObjEneMerillLia__sub_800D7274(O_800D7274 *self, s32 i) {
    self->f34 = (*(D_800D7274 * *)&TObjEneMerillLia__data_805D5220)->entries[i].f8;
    self->f24 = (*(D_800D7274 * *)&TObjEneMerillLia__data_805D5220)->entries[i].fc;
}

}
