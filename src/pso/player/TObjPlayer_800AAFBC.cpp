#include "types.h"
#include "pso/enemy/TObjEneShark.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800ABA9C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800ABA9C_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_800ABA9C_lbl_8058D490_size[sizeof(RecoveredGlobal_800ABA9C_lbl_8058D490) == 0x30 ? 1 : -1];

struct VBase_14_800ABCBC { char pad[0x14]; };

struct VObj_14_800ABCBC : VBase_14_800ABCBC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual s32 m5();
};

struct Obj_800ABCBC { u8 pad0[0x38]; u8 sub38[0x326 - 0x38]; s16 f326; s16 state; u8 pad32a[0x390 - 0x32A]; s32 f390; };

typedef s32 M2C_UNK;
struct RecoveredGlobal_800ABA9C_lbl_8058D490;
typedef struct Vec_800AB31C {
    f32 x, y, z;
} Vec_800AB31C;

typedef struct Rot_800AB31C {
    s32 x, y, z;
} Rot_800AB31C;

typedef struct Obj_800AB31C {
    u8 pad0[0x18];
    void *vptr;
    Vec_800AB31C pos;
    Vec_800AB31C pos2;
    u8 mtx34[0x58 - 0x34];
    f32 f58;
    s32 f5C;
    s32 f60;
    s32 f64;
    s32 f68;
} Obj_800AB31C;

typedef struct Vec_800ABB38 {
    f32 x, y, z;
} Vec_800ABB38;

struct VBase_800ABB38 { char pad[0x18]; };

struct VObj_800ABB38 : VBase_800ABB38 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_800ABB38 *, Vec_800ABB38 *);
};

typedef struct Obj_800ABB38 {
    u8 pad0[0x38];
    Vec_800ABB38 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x3C4 - 0xC4];
    VObj_800ABB38 *effs[2];
} Obj_800ABB38;

typedef struct Pair_800AB0EC {
    s32 a;
    f32 b;
} Pair_800AB0EC;

struct VBase_800AB0EC { char pad[0x18]; };

struct VObj_800AB0EC : VBase_800AB0EC {
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
    virtual M2C_UNK m21(s32, Pair_800AB0EC *, s32, s32, s32);
};

typedef struct Obj_800AB0EC {
    u8 pad0[0x1C];
    u8 pos[0x64 - 0x1C];
    s32 f64;
    s32 f68;
} Obj_800AB0EC;

struct Vec_800AB4F4 { f32 x, y, z; };

struct Vec_800AB7A0 { f32 x, y, z; };

struct Arr_800AB7A0 { u8 pad[0x3D4]; Vec_800AB7A0 arr[4]; };

struct VBase_14_800ABDD8
{
  char pad[0x14];
};

struct VObj_14_800ABDD8 : VBase_14_800ABDD8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

struct VBase_18_800ABDD8
{
  char pad[0x18];
};

struct VObj_18_800ABDD8 : VBase_18_800ABDD8 {
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

struct Fade_800ABDD8 : VBase_14_800ABDD8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    u32 x18;
};

struct Owner_800ABDD8
{
  u8 pad[0x3CC];
  Fade_800ABDD8 fades[4];
};

struct Vec_800ABDD8
{
  f32 x;
  f32 y;
  f32 z;
};

extern "C" {
void obj_setFlags30(void *, u32);
void set_invuln_flags__10TObjPlayerFPv(u8 *arg0);
void obj_clearFlags30(void *, u32);
void clear_flag_04000000__10TObjPlayerFPv(u8 *arg0);
s32 get_action_priority__10TObjPlayerFPv(void *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK draw_chunk_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);
extern s32 lbl_805D5094;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9B68;
void draw_model_no_fog__10TObjPlayerFPv(u8 *arg0);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_80491478[];
void *destroy_with_particle_cleanup__10TObjPlayerFPvs(void *arg0, s16 arg1);
void TObjPlayer__sub_800AB970(void);
void set_param__12TObjEneLappyFPvi(void *, s32);
void apply_clamped_mode_param__10TObjPlayerFPv(u8 *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
extern s32 lbl_805D50C4;
void update_particle_by_phase__10TObjPlayerFv(void);
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnVector(void *, void *, int);
s32 get_player_by_client_id(int);
M2C_UNK vec3_add_to(void *, void *);
extern const f32 lbl_805D9B5C;
extern const f32 lbl_805D9B60;
void TObjPlayer__sub_800AB1C8(u8 *arg0);
f32 fabs_float(f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D9B10;
s32 TObjPlayer__sub_800AB068(u8 *arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void play_sound_4003A60D__10TObjPlayerFi(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 play_sound_effect(void *, void *, int, int);
void TObjPlayer__sub_800AB974(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 play_sound_effect(void *, void *, int, int);
void TObjPlayer__sub_800AB9C0(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 play_sound_effect(void *, void *, int, int);
void TObjPlayer__sub_800ABA50(s32 arg0);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 TObjPlayer__sub_800D92BC(void *, int);
M2C_UNK vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
s32 push_matrix_from(void *);
M2C_UNK pop_matrix();
extern RecoveredGlobal_800ABA9C_lbl_8058D490 identity_matrix;
extern const f32 lbl_805D9BA0;
extern const f32 lbl_805D9BA4;
extern const f32 lbl_805D9BA8;
void spawn_front_ground_effect__10TObjPlayerFPv(u8 *arg0);
s32 play_area_sound_effect__12TBoss3VoloptFi(void *);
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 advance_animation_playback();
void TObjPlayer__sub_800ABCBC(Obj_800ABCBC *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_particle_effect_with_rotation(void *, void *, int, int);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
s32 push_matrix_from(void *);
M2C_UNK pop_matrix();
extern Vec_800AB31C lbl_8043ACE0[];
extern M2C_UNK lbl_80491460[];
extern RecoveredGlobal_800ABA9C_lbl_8058D490 identity_matrix;
extern void *tl_06;
extern const f32 lbl_805D9B64;
Obj_800AB31C *TObjPlayer__sub_800AB31C(Obj_800AB31C *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK mult_vec_array__10TObjPlayerFUii(int, int, void *, int);
M2C_UNK set_matrix_identity(int);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern s32 TObjEneShark__attack_motion_3_trail;
extern s32 shark_attack4_trail_buffer;
extern const f32 lbl_805D9BAC;
void TObjPlayer__sub_800ABB38(Obj_800ABB38 *o);
void queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
f32 xz_distance_squared(void *, void *);
extern Pair_800AB0EC lbl_8043ACEC[];
extern const f32 lbl_805D9B58;
M2C_UNK try_hit_target__10TObjPlayerFPvi(void *arg0, int arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 fabs_float(f32);
f32 newton_sqrtf();
f32 xz_distance_squared(void *, void *);
s32 project_actor_to_ground(void *, Vec_800AB4F4 *, int);
M2C_UNK subtract_vector(void *, void *);
extern const f32 lbl_805D9B6C;
extern const f32 lbl_805D9B70;
extern const f32 lbl_805D9B74;
extern const f32 lbl_805D9B78;
extern const f32 lbl_805D9B7C;
extern const f32 lbl_805D9B80;
extern const f32 lbl_805D9B84;
extern const f32 lbl_805D9B88;
void TObjPlayer__sub_800AB4F4(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s16 obj_getField1c(void *);
u8 *csnLookAt(void *, Vec_800AB7A0 *);
M2C_UNK clear_counter__10TObjPlayerFPv(void *);
u32 TObjPlayer__sub_800A4204(void *, void *, void *, void *, int);
f32 horizontal_distance__10TObjPlayerFPvPv(void *, int);
s32 collect_and_count__12TBoss3VoloptFUii(void *, int);
M2C_UNK construct_collider_proxy__10TObjPlayerFPv(void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
s32 push_matrix_from(void *);
M2C_UNK pop_matrix();
extern M2C_UNK lbl_8043AD00[];
extern M2C_UNK lbl_80491478[];
extern RecoveredGlobal_800ABA9C_lbl_8058D490 identity_matrix;
extern void *lbl_805D5090;
extern void *tl_06;
extern const f32 lbl_805D9B7C;
extern const f32 lbl_805D9B8C;
extern const f32 lbl_805D9B90;
extern const f32 lbl_805D9B94;
u8 *TObjPlayer__sub_800AB7A0(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 check_v2_mode__9TObjEneDDFv();
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(s32);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void update_particle_by_phase__10TObjPlayerFv(void);
extern s32 lbl_805D50C4;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9BA0;
extern const f32 lbl_805D9BB0;
extern const f32 lbl_805D9BB4;
extern const f32 lbl_805D9BB8;
extern const f32 lbl_805D9BBC;
extern const f32 lbl_805D9BC0;
extern const f32 lbl_805D9BC4;
}

extern "C" {

void TObjPlayer__sub_800AAFF0(void* p, f32 v);
void cancel_action__10TObjPlayerFPv(void *arg0);
void *dt__10TObjPlayerFPvs(void *arg0, s16 arg1);
void init_level_stats__10TObjPlayerFPvi(void *arg0, s32 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_cancel_flag__10TObjPlayerFPv(u32);

extern void *lbl_805D5090;
extern s32 lbl_805D5098;

void init_level_stats__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5090, void **, 0x42C), s32 *, 8);
    if (arg1 == 0) {
        var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5090, void **, 0x42C), s32 *, 0xC);
    } else {
        var_r0 = lbl_805D5098;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
}

void TObjPlayer__sub_800AAFF0(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }

extern M2C_UNK lbl_80491460[];

void clear_flag_04000000__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r6;
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xF5FFFFFF);
    obj_clearFlags30(arg0, 0x04000000U);
}

void set_invuln_flags__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x0A000000);
    obj_setFlags30(arg0, 0x04000000U);
}

s32 TObjPlayer__sub_800AB068(u8 *arg0) {
  u8 *new_var;
  f32 temp_f31;
  ;
  if ((fabs_float((*((f32 *) (((s8 *) arg0) + 0x38))) - (*((f32 *) (((s8 *) arg0) + 0x44)))) + fabs_float((*((f32 *) (((s8 *) arg0) + 0x40))) - (*((f32 *) (((s8 *) arg0) + 0x4C))))) > lbl_805D9B10)
  {
    VecCopy__FP3VecPC3Vec((void *) ((new_var = arg0) + 0x38), (void *) (arg0 + 0x44));
    return 1;
  }
  return 0;
}

M2C_UNK try_hit_target__10TObjPlayerFPvi(void *arg0, int arg1) {
    u8 *e = (u8 *)arg1;
    Obj_800AB0EC *o = (Obj_800AB0EC *)arg0;
    if (e != NULL && !(*(s32 *)(e + 0x30) & 0xA00) && !(xz_distance_squared(o->pos, e + 0x2FC) > lbl_805D9B58)) {
        Pair_800AB0EC tmp = lbl_8043ACEC[0];
        tmp.b = (f32)o->f68;
        Pair_800AB0EC arg = tmp;
        ((VObj_800AB0EC *)e)->m21(o->f64, &arg, 0, -1, -1);
        spawn_particle_effect(e + 0x2FC, 0xFB);
        queue_destruction__7TObjectFv(o);
    }
}

void TObjPlayer__sub_800AB1C8(u8 *arg0) {
  s32 var_r31;
  u8 *temp_r3;
  s32 new_var;
  vec3_add_to((void *) (arg0 + 0x1C), (void *) (arg0 + 0x34));
  *((s32 *) (((s8 *) arg0) + 0x60)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x60))) + 1);
  if (!((*((s32 *) (((s8 *) arg0) + 0x60))) & 3))
  {
    if (csnVector((void *) (arg0 + 0x28), (void *) (arg0 + 0x1C), (int) (-1)) != 0U)
    {
      queue_destruction__7TObjectFv(arg0);
      return;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg0 + 0x1C));
    goto block_4;
  }
  block_4:
  temp_r3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x5C)));
  if (temp_r3 != 0)
  {
    copy_pos__11TNowLoadingFPvPv(temp_r3, arg0 + 0x1C);
  }
  *((f32 *) (((s8 *) arg0) + 0x58)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x58))) + lbl_805D9B5C);
  if ((*((f32 *) (((s8 *) arg0) + 0x58))) >= lbl_805D9B60)
  {
    queue_destruction__7TObjectFv(arg0);
    return;
  }
  var_r31 = 0;
  do
  {
    if (!arg0)
    {
    }
    new_var = get_player_by_client_id((int) var_r31);
    try_hit_target__10TObjPlayerFPvi((void *)((void *) arg0), (int)((int) new_var));
    var_r31 += 1;
  }
  while (var_r31 < 0xC);
}

void *dt__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80491460;
        if (M2C_FIELD(arg0, void **, 0x5C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C)); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_800AB31C *TObjPlayer__sub_800AB31C(Obj_800AB31C *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, tl_06);
    arg0->vptr = lbl_80491460;
    VecCopy__FP3VecPC3Vec(&arg0->pos, arg1);
    VecCopy__FP3VecPC3Vec(&arg0->pos2, arg1);
    arg0->f58 = lbl_805D9B64;
    push_matrix_from(&identity_matrix);
    Vec_800AB31C v = lbl_8043ACE0[0];
    rotate_matrix_y(0, arg2);
    rotate_vector_by_matrix(0, &v, arg0->mtx34);
    pop_matrix();
    arg0->f64 = arg3;
    Rot_800AB31C r;
    r.x = 0;
    r.y = arg2 + 0x4000;
    r.z = 0x4000;
    arg0->f5C = spawn_particle_effect_with_rotation(arg1, &r, 0x6D, 2);
    arg0->f60 = 0;
    arg0->f68 = arg4;
    return arg0;
}

void cancel_action__10TObjPlayerFPv(void *arg0) {
    if (get_action_priority__10TObjPlayerFPv((void *)(arg0)) != 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
            set_cancel_flag__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xD0));
        }
        M2C_FIELD(arg0, s16 *, 0xAE) = 2;
    }
}
s32 get_action_priority__10TObjPlayerFPv(void *arg0) {
    return (s32)((u32)__cntlzw(3 - M2C_FIELD(arg0, s16 *, 0xAE)) >> 5);
}
void draw_model_no_fog__10TObjPlayerFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(lbl_805D5094);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xD8));
    push_matrix();
    post_translate_matrix(arg0 + 0xF0);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xC0));
    scale_matrix(0, lbl_805D9B68, lbl_805D9B68, lbl_805D9B68);
    some_id_805c6f74 &= 0xFFFFFBFF;
    draw_chunk_object(M2C_FIELD(arg0, s32 *, 0xC8));
    pop_matrix();
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800AB4F4(u8 *arg0) {
    f32 t;
    f32 var_f1;
    switch (M2C_FIELD(arg0, s16 *, 0xAE)) {
    case 0: {
        Vec_800AB4F4 v = *(Vec_800AB4F4 *)(arg0 + 0xF0);
        v.x += M2C_FIELD(arg0, f32 *, 0xB0);
        v.z += M2C_FIELD(arg0, f32 *, 0xB8);
        v.y += lbl_805D9B6C;
        if (project_actor_to_ground((void *) arg0, &v, 0) == 1) {
            M2C_FIELD(arg0, f32 *, 0xF0) = v.x;
            M2C_FIELD(arg0, f32 *, 0xF8) = v.z;
            if (M2C_FIELD(arg0, f32 *, 0xF4) < v.y) {
                M2C_FIELD(arg0, f32 *, 0xF4) = v.y;
                M2C_FIELD(arg0, f32 *, 0xB4) = lbl_805D9B70 * fabs_float(M2C_FIELD(arg0, f32 *, 0xB4));
            }
            if ((v.y - M2C_FIELD(arg0, f32 *, 0xE8)) > lbl_805D9B74) {
                M2C_FIELD(arg0, s16 *, 0xAE) = 1;
            } else {
                M2C_FIELD(arg0, f32 *, 0xE8) = v.y;
            }
        }
        if (xz_distance_squared((void *) (arg0 + 0xF0), (void *) (arg0 + 0xDC)) >= M2C_FIELD(arg0, f32 *, 0xEC) * M2C_FIELD(arg0, f32 *, 0xEC)) {
            M2C_FIELD(arg0, s16 *, 0xAE) = 1;
        }
    }
    case 1:
        M2C_FIELD(arg0, f32 *, 0xF4) += M2C_FIELD(arg0, f32 *, 0xB4);
        M2C_FIELD(arg0, f32 *, 0xB4) += lbl_805D9B78;
        if (M2C_FIELD(arg0, f32 *, 0xF4) < M2C_FIELD(arg0, f32 *, 0xE8)) {
            M2C_FIELD(arg0, f32 *, 0xF4) = M2C_FIELD(arg0, f32 *, 0xE8);
            M2C_FIELD(arg0, f32 *, 0xB4) = lbl_805D9B7C;
        }
        break;
    case 2:
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB0), M2C_FIELD(arg0, void **, 0xCC));
        subtract_vector((void *) (arg0 + 0xB0), (void *) (arg0 + 0xF0));
        if (M2C_FIELD(arg0, f32 *, 0xB0) * M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8) * M2C_FIELD(arg0, f32 *, 0xB8) > lbl_805D9B80) {
            t = lbl_805D9B84 / newton_sqrtf();
            M2C_FIELD(arg0, f32 *, 0xF0) = M2C_FIELD(arg0, f32 *, 0xB0) * t + M2C_FIELD(arg0, f32 *, 0xF0);
            M2C_FIELD(arg0, f32 *, 0xF8) = M2C_FIELD(arg0, f32 *, 0xB8) * t + M2C_FIELD(arg0, f32 *, 0xF8);
        } else if (fabs_float(M2C_FIELD(arg0, f32 *, 0xB4)) > lbl_805D9B6C) {
            if (M2C_FIELD(arg0, f32 *, 0xB4) > lbl_805D9B7C) {
                var_f1 = lbl_805D9B84;
            } else {
                var_f1 = lbl_805D9B88;
            }
            M2C_FIELD(arg0, f32 *, 0xF4) += var_f1;
        } else {
            M2C_FIELD(arg0, s16 *, 0xAE) = 3;
        }
        break;
    case 3:
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xF0), M2C_FIELD(arg0, void **, 0xCC));
        break;
    }
}
#pragma pop

void *destroy_with_particle_cleanup__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80491478;
        if (M2C_FIELD(arg0, void **, 0xD0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0)); M2C_FIELD(arg0, M2C_UNK *, 0xD0) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_800AB7A0(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4) {
    Vec_800AB7A0 v;
    Vec_800AB7A0 out;
    void *obj;
    u8 *temp_r3;
    s32 t;
    construct_collider_proxy__10TObjPlayerFPv(arg0, tl_06);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80491478;
    M2C_FIELD(arg0, s16 *, 0xAC) = arg1;
    M2C_FIELD(arg0, s16 *, 0xD4) = obj_getField1c((void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0xAE) = 0;
    t = lbl_8043AD00[arg1];
    M2C_FIELD(arg0, s32 *, 0xD8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC8) = collect_and_count__12TBoss3VoloptFUii((void *) (M2C_FIELD(M2C_FIELD(lbl_805D5090, u8 **, 0x42C), s32 *, 0x18)), t);
    M2C_FIELD(arg0, Vec_800AB7A0 **, 0xCC) = &((Arr_800AB7A0 *)arg2)->arr[arg1];
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xF0), (void *) VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (arg4)));
    M2C_FIELD(arg0, f32 *, 0xE8) = lbl_805D9B8C + M2C_FIELD(arg2, f32 *, 0x3C);
    ((s32 (*)(void *, f32)) push_matrix_from)((void *) &identity_matrix, lbl_805D9B8C);
    v.x = v.y = lbl_805D9B7C;
    v.z = lbl_805D9B90;
    rotate_matrix_y(0, M2C_FIELD(arg2, s32 *, 0x60) + ((arg1 - 1) << 0xD));
    rotate_vector_by_matrix(0, &v, arg0 + 0xB0);
    v.z = M2C_FIELD(arg0, f32 *, 0xEC) = lbl_805D9B94;
    rotate_vector_by_matrix(0, &v, &out);
    vec3_add_to(&out, arg0 + 0xF0);
    temp_r3 = csnLookAt(arg0 + 0xF0, &out);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (10.0f > horizontal_distance__10TObjPlayerFPvPv(arg0 + 0xF0, M2C_FIELD(temp_r3, s32 *, 4)) - 5.0f) ? 10.0f : horizontal_distance__10TObjPlayerFPvPv(arg0 + 0xF0, M2C_FIELD(temp_r3, s32 *, 4)) - 5.0f;
    }
    pop_matrix();
    M2C_FIELD(arg0, f32 *, 0xB4) = lbl_805D9B7C;
    obj = __nw__7TObjectFUl(0x348);
    if (obj != NULL) {
        obj = (void *) TObjPlayer__sub_800A4204(obj, arg0, M2C_FIELD(arg0, void **, 0xCC), arg0 + 0xF0, 0x10);
    }
    M2C_FIELD(arg0, void **, 0xD0) = obj;
    if (M2C_FIELD(arg0, void **, 0xD0) != NULL) {
        clear_counter__10TObjPlayerFPv(M2C_FIELD(arg0, void **, 0xD0));
    }
    return arg0;
}

void TObjPlayer__sub_800AB970(void);

void TObjPlayer__sub_800AB974(s32 arg0);

void TObjPlayer__sub_800AB9C0(s32 arg0);

void play_sound_4003A60D__10TObjPlayerFi(s32 arg0);

void TObjPlayer__sub_800ABA50(s32 arg0);

void spawn_front_ground_effect__10TObjPlayerFPv(u8 *arg0);

void TObjPlayer__sub_800ABB38(Obj_800ABB38 *o);

void apply_clamped_mode_param__10TObjPlayerFPv(u8 *arg0);

void TObjPlayer__sub_800ABCBC(Obj_800ABCBC *arg0);

void update_particle_by_phase__10TObjPlayerFv(void);
typedef struct Fade_800ABDD8 Fade_800ABDD8;
typedef struct Owner_800ABDD8 Owner_800ABDD8;
typedef struct VBase_14_800ABDD8 VBase_14_800ABDD8;
typedef struct VBase_18_800ABDD8 VBase_18_800ABDD8;
typedef struct VObj_14_800ABDD8 VObj_14_800ABDD8;
typedef struct VObj_18_800ABDD8 VObj_18_800ABDD8;
typedef struct Vec_800ABDD8 Vec_800ABDD8;
#define PSO_VCALL_VObj_18_800ABDD8_m9(_self, _arg0, _arg1, _arg2) (((VObj_18_800ABDD8 *)(_self))->m9((_arg0), (_arg1), (_arg2)))
}

extern "C" {

}
