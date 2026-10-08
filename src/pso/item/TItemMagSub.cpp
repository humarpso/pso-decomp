#include "types.h"
#include <stddef.h>
#include "pso/item/TItemMagSub.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Stack_80114DB8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80114DB8_lbl_8043E5A8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80114DB8_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Vec_80114CD8 { f32 x, y, z; };

typedef struct TItemMagSub_801152AC {
    u8 pad0[0x34];
    f32 vec34[3];
    u8 pad40[0x58 - 0x40];
    f32 vec58[3];
    u8 pad64[0x7C - 0x64];
    f32 timer;
    u8 pad80[0x94 - 0x80];
    f32 f94;
    f32 f98;
    f32 f9C;
} TItemMagSub_801152AC;

typedef struct MagSub_80115800 { u8 pad0[0x70]; s32 slots[3]; } MagSub_80115800;

struct RecoveredGlobal_801151E0_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Vec_801151E0 { f32 x, y, z; };

struct Base_801151E0 { u8 pad0[0x18]; };

struct Player_801151E0 : Base_801151E0 {
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
    virtual void get_joint_pos(s32, void *);
};

struct Joint_801151E0 { s32 id; };

struct MagSub_801151E0 {
    u8 pad0[0x20];
    Player_801151E0 *player;
    u8 pad24[0xC];
    Joint_801151E0 *joint;
    u8 pad34[0x6C];
    Vec_801151E0 posA0;
};

typedef struct TItemMagSub_80114F0C {
    u8 pad0[0x24];
    void *model;
    void *animation;
    u32 textures;
    u8 pad30[0x6C - 0x30];
    s32 selected_node;
    u8 pad70[0x80 - 0x70];
    f32 animation_frame;
} TItemMagSub_80114F0C;

struct Feed_80114AB4 { u8 data[8]; };

struct TItemMagSub_80114AB4 {
    u8 pad0[0x6C];
    s32 idx;
    s32 ids[(0xB8 - 0x70) / 4];
    u8 colorB8[0xCC - 0xB8];
    Feed_80114AB4 feeds[2];
};

typedef char RecoveredGlobal_80114DB8_lbl_8043E5A8_size[sizeof(RecoveredGlobal_80114DB8_lbl_8043E5A8) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80114DB8_lbl_8058D490_size[sizeof(RecoveredGlobal_80114DB8_lbl_8058D490) == 0x30 ? 1 : -1];

struct MagSub_801151E0;

struct TItemMagSub_801152AC;

struct Vec_80114CD8;

struct Vec_80115334 { f32 x, y, z; };

struct Base_80115334 { u8 pad[0x18]; };

struct VObj_80115334 : Base_80115334 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(s32, Vec_80115334 *);
};

struct Stat_80115334 { u8 pad[8]; };

struct Sub_80115334 {
    u8 pad0[0x1C];
    s32 x1C;
    VObj_80115334 *owner;
    u8 pad24[0xC];
    u8 *rec;
    s32 x34;
    s32 x38;
    s32 x3C;
    u8 pad40[0xCC - 0x40];
    Stat_80115334 st[2];
};

M2C_UNK memset(void *, int, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void queue_destruction__7TObjectFv(void *);
void disallow_rendering__7TObjectFv(void *);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TItem__sub_80100A40(f32 *, f32, f32);
void run_with_transform_context__10TObjPlayerFiii(void *, void (*)(void *));
f32 get_mag_scale_f__10TObjPlayerFPv(void *);
u32 has_feed_flag__11TItemMagSubFPv(s32);
s32 is_mag_active__11TItemMagSubFPv(int);
int set_flags64__8TItemMagFPvUi(void*, int);
u32 test_feed_flags__11TItemMagSubFPvUi(void *, u32);
s32 obj_isState7_324(void *);
void update_stat__11TItemMagSubFPv(void *);
s32 is_level_maxed__11TItemMagSubFPv(Feed_80114AB4 *);
void clear_flag2__11TItemMagSubFPv(void *arg0);
void reset_stats__11TItemMagSubFPv(u8 *arg0);
void apply_node_oscillation__11TItemMagSubFPvPv(TItemMagSub_80114AB4 *self, void * _w1);
void update_node_oscillation__11TItemMagSubFPv(void *arg);
void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2);
void lerp_follow_anchor(Vec_80114CD8 *target, Vec_80114CD8 *cur, f32 *t);
void mag_accumulate_drift(f32 *out, s32 *phase, f32 *amplitude, s32 *velocity, s8 *offset);
s32 get_world_position__11TItemMagSubFPvUi(u8 *arg0, u32 arg1);
void apply_placement_matrix__11TItemMagSubFPv(u8 *arg0);
void TItemMagSub__vt3(TItemMagSub_80114F0C *self);
void render_mag_child(TItemMagSub *self);
s32 calc_feed_level__11TItemMagSubFPv(void *arg0);
void update_special_pose__11TItemMagSubFPv(MagSub_801151E0 *self);
void update_transition__11TItemMagSubFPv(TItemMagSub_801152AC *self);
void update_follow__11TItemMagSubFv(Sub_80115334 *self);
void TItemMagSub__vt1(u8 *arg0);
void * TItemMagSub__vt0(void *arg0, s16 arg1);
void * destroy__11TItemMagSubFPvs(void *arg0, s16 arg1);
void reset__11TItemMagSubFPv(u8 *arg0);
u8 * TItemMagSub__ct(u8 *self, u8 *player, u8 *item);
void disallow_rendering_shadows__7TObjectFv(void *arg0);
void clear_flag_64__11TItemMagSubFPv(void* p);
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v);
int set_grow_flag__15TItemMagGrowEffFPv(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
s32 calc_scaled_value__11TItemMagSubFPv(void *arg0);
int TItemMagSub__sub_801159A4(void* p);
int TItemMagSub__sub_801159B0(void* p);
int TItemMagSub__sub_801159BC(void* p);
void set_shadow_material_state();
void reset_transform_state__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void __dt__7TObjectFv(void *, int);
void notify_fish_if_valid__10TObjPlayerFUi(u32);
void free_to_heap__11TItemMagSubFPv(void *);
void init_object__21TItemEffArmorParticleFPv(void *, void *);
f32 sin_table_lookup(s32);
void vec3_add_to(void *, void *);
M2C_UNK rotate_matrix_zyx(int, int, int, int, int);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, void *);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
s32 push_matrix_from(void *);
f32 transform_point_by_current_matrix(void *, void *);
void push_matrix();
s32 pop_matrix();
M2C_UNK post_translate_matrix(void *);
s32 draw_ginja_object(void *);
void set_color_blend_mode(s32, s32, s32, s32);
M2C_UNK set_chunk_material_color(void *);
void draw_model_motion(void *, void *, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
void set_global_state__16TObjEneRe7BeruraFi(void (*)(void *));

extern void *TItemMagSub__data_805D54B8;
extern s32 TItemMagSub__data_805D54BC;
extern const f32 TItemMagSub__data_805DABC8;
extern const f32 TItemMagSub__data_805DABCC;
extern const f32 TItemMagSub__data_805DABD8;
extern M2C_UNK __vt__11TItemMagSub[];
extern Vec_801151E0 lbl_8043E59C[];
extern RecoveredGlobal_80114DB8_lbl_8043E5A8 lbl_8043E5A8;
extern M2C_UNK lbl_8049F5A0[];
extern f32 lbl_8058D4C0[4], lbl_8050BEC0[4];
extern RecoveredGlobal_80114DB8_lbl_8058D490 lbl_8058D490;
extern f32 lbl_805D2C08;
extern f32 lbl_805D2C0C;
extern u32 lbl_805D2C10;
extern u32 some_id_805c6f74, lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern const f32 lbl_805DABD0, lbl_805DABD4;
extern const f32 lbl_805DABDC;
extern const f32 lbl_805DABE0;

void clear_flag2__11TItemMagSubFPv(void *arg0) {
    if ((u32) arg0 != 0U) {
        ((M2C_UNK (*)(void *, M2C_UNK))clear_flags64__11TItemMagSubFPvUi)(arg0, 2);
    }
}

void reset_stats__11TItemMagSubFPv(u8 *arg0) {
    memset(arg0 + 0x34, 0, 0xC);
    memset(arg0 + 0x58, 0, 0xC);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
}

void apply_node_oscillation__11TItemMagSubFPvPv(TItemMagSub_80114AB4 *self, void * _w1) {
    s32 i;
    Feed_80114AB4 *f;
    for (i = 0; i != 2; i++) {
        f = &self->feeds[i];
        if (is_level_maxed__11TItemMagSubFPv(f) == 0 && TItemMagSub__data_805D54BC == ((s32 (*)(Feed_80114AB4 *))TItemMagSub__sub_801159B0)(f)) {
            if (((s32 (*)(Feed_80114AB4 *))TItemMagSub__sub_801159A4)(f) != 0) {
                rotate_matrix_x(0, ((s32 (*)(Feed_80114AB4 *))calc_scaled_value__11TItemMagSubFPv)(f));
            } else if (((s32 (*)(Feed_80114AB4 *))fn_80115954)(f) != 0) {
                rotate_matrix_y(0, (void *)((s32 (*)(Feed_80114AB4 *))calc_scaled_value__11TItemMagSubFPv)(f));
            } else if (((s32 (*)(Feed_80114AB4 *))fn_80115948)(f) != 0) {
                rotate_matrix_z(0, ((s32 (*)(Feed_80114AB4 *))calc_scaled_value__11TItemMagSubFPv)(f));
            }
        }
    }
    if (TItemMagSub__data_805D54BC == self->ids[self->idx]) {
        if (test_feed_flags__11TItemMagSubFPvUi(self, 0x20) == 0) {
            some_id_805c6f74 |= 0x10;
            set_chunk_material_color(self->colorB8);
            begin_effect_render__13TParticleCtrlFv();
            ((M2C_UNK (*)(void *, int))set_flags64__8TItemMagFPvUi)(self, 0x20);
        }
        if (self->idx != 2) {
            self->idx++;
        }
    } else if (test_feed_flags__11TItemMagSubFPvUi(self, 0x20) != 0) {
        end_effect_render__13TParticleCtrlFv();
        copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
        some_id_805c6f74 = lbl_805D5660;
        ((M2C_UNK (*)(void *, M2C_UNK))clear_flags64__11TItemMagSubFPvUi)(self, 0x20);
    }
}

void update_node_oscillation__11TItemMagSubFPv(void *arg) {
    if (TItemMagSub__data_805D54B8 != 0) {
        apply_node_oscillation__11TItemMagSubFPvPv((TItemMagSub_80114AB4 *)(TItemMagSub__data_805D54B8), (void *)(arg));
        TItemMagSub__data_805D54BC++;
    }
}

void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2) {
    *arg1 = *arg1 + M2C_FIELD(arg2, s32 *, 0xC);
    *arg0 = M2C_FIELD(arg2, f32 *, 0) * sin_table_lookup(*arg1 + M2C_FIELD(arg2, s32 *, 8));
}

#pragma push
#pragma fp_contract on
void lerp_follow_anchor(Vec_80114CD8 *target, Vec_80114CD8 *cur, f32 *t) {
    cur->x += *t * (target->x - cur->x);
    cur->y += *t * (target->y - cur->y);
    cur->z += *t * (target->z - cur->z);
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma fp_contract on
void mag_accumulate_drift(f32 *out, s32 *phase, f32 *amplitude, s32 *velocity, s8 *offset) {
    *phase += *velocity;
    *out += *amplitude * sin_table_lookup(*phase + (s32)(TItemMagSub__data_805DABCC * (f32)*offset));
}
extern int fold_flush_1;
#pragma pop

s32 get_world_position__11TItemMagSubFPvUi(u8 *arg0, u32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80114DB8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80114DB8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80114DB8, sp10) == 0x8) ? 1 : -1];
    Stack_80114DB8 stack;
    if ((is_mag_active__11TItemMagSubFPv((int) (M2C_FIELD(arg0, s32 *, 0x1C))) == 0) && (arg1 != 0U)) {
        push_matrix_from((void *) (&lbl_8058D490.value));
        apply_placement_matrix__11TItemMagSubFPv((u8 *)((void *) (arg0)));
        stack.sp8 = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 8);
        transform_point_by_current_matrix((void *) (&stack.sp8), (void *) (arg1));
        pop_matrix();
        return 1;
    }
    return 0;
}

void apply_placement_matrix__11TItemMagSubFPv(u8 *arg0) {
  f32 temp_f1;
  s32 temp_r7;
  u8 *temp_r6;
  void *feed;
  s32 a2;
  s32 a3;
  s32 a4;
  post_translate_matrix((void *) (arg0 + 0xA0));
  if (obj_isState7_324((void *) (*((void **) (((s8 *) arg0) + 0x20)))) != 0)
  {
    feed = (void *) calc_feed_level__11TItemMagSubFPv((void *) arg0);
    rotate_matrix_y((int) 0, feed);
  }
  else
  {
    rotate_matrix_y((int) 0, (void *) (*((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x20)))) + 0x60))));
  }
  post_translate_matrix((void *) (arg0 + 0xAC));
  temp_r6 = (unsigned char *) (*((void **) (((s8 *) arg0) + 0x30)));
  if (temp_r6 != 0)
  {
    a2 = *((s32 *) (((s8 *) temp_r6) + 0x1C));
    a2 = a2 + (*((s32 *) (((s8 *) arg0) + 0x34)));
    a3 = (*((s32 *) (((s8 *) temp_r6) + 0x20))) + (*((s32 *) (((s8 *) arg0) + 0x38)));
    a4 = (*((s32 *) (((s8 *) temp_r6) + 0x24))) + (*((s32 *) (((s8 *) arg0) + 0x3C)));
    rotate_matrix_zyx((int) 0, (int) a2, (int) a3, (int) a4, (int) (*((s32 *) (((s8 *) temp_r6) + 0x20))));
  }
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0xC8));
  scale_matrix((int) 0, (f32) temp_f1, (f32) temp_f1, (f32) temp_f1);
}

void TItemMagSub__vt3(TItemMagSub_80114F0C *self) {
    reset_transform_state__10TObjPlayerFv();
    lbl_805D5660 = some_id_805c6f74;
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    copy_vec4__13TRaderMapCoreFPvPv(lbl_8050BEC0, lbl_8058D4C0);
    if (self->model) {
        TItemMagSub__data_805D54B8 = self;
        notify_fish_if_valid__10TObjPlayerFUi(self->textures);
        push_matrix();
        apply_placement_matrix__11TItemMagSubFPv((u8 *)self);
        TItemMagSub__data_805D54BC = 0;
        self->selected_node = 0;
        if (self->animation) {
            set_global_state__16TObjEneRe7BeruraFi(update_node_oscillation__11TItemMagSubFPv);
            set_global_flag__10TObjPlayerFv();
            draw_model_motion(self->model, self->animation, self->animation_frame);
            clear_global_state__10TObjPlayerFv();
            set_global_state__16TObjEneRe7BeruraFi(0);
        } else {
            some_id_805c6f74 |= 0x8011;
            set_color_blend_mode(1, 4, 5, 0);
            set_shadow_material_state();
            draw_ginja_object(self->model);
            some_id_805c6f74 &= ~0x8011;
        }
        TItemMagSub__data_805D54BC = 0;
        pop_matrix();
        TItemMagSub__data_805D54B8 = 0;
        if (test_feed_flags__11TItemMagSubFPvUi(self, 0x20)) {
            end_effect_render__13TParticleCtrlFv();
            copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
            some_id_805c6f74 = lbl_805D5660;
            ((M2C_UNK (*)(void *, M2C_UNK))clear_flags64__11TItemMagSubFPvUi)((void *)(self), (M2C_UNK)(0x20));
        }
    }
    reset_transform_state__10TObjPlayerFv();
    copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    some_id_805c6f74 = lbl_805D5660;
}

void render_mag_child(TItemMagSub *self) {
    if (TItem__sub_80100A40(self->owner->center, lbl_805DABD0, lbl_805DABD4) && self->model) {
        TItemMagSub__data_805D54B8 = self;
        notify_fish_if_valid__10TObjPlayerFUi(self->textures);
        push_matrix();
        apply_placement_matrix__11TItemMagSubFPv((u8 *)(self));
        (*(u32 *)&TItemMagSub__data_805D54BC) = 0;
        self->selected_node = 0;
        if (self->animation) {
            set_global_state__16TObjEneRe7BeruraFi(update_node_oscillation__11TItemMagSubFPv);
            set_global_flag__10TObjPlayerFv();
            draw_model_motion(self->model, self->animation, self->animation_frame);
            clear_global_state__10TObjPlayerFv();
            set_global_state__16TObjEneRe7BeruraFi(0);
        } else {
            run_with_transform_context__10TObjPlayerFiii(self->model, update_node_oscillation__11TItemMagSubFPv);
        }
        (*(u32 *)&TItemMagSub__data_805D54BC) = 0;
        pop_matrix();
        TItemMagSub__data_805D54B8 = 0;
        if (test_feed_flags__11TItemMagSubFPvUi(self, 0x20)) {
            end_effect_render__13TParticleCtrlFv();
            copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
            some_id_805c6f74 = lbl_805D5660;
            ((M2C_UNK (*)(void *, M2C_UNK))clear_flags64__11TItemMagSubFPvUi)((void *)(self), (M2C_UNK)(0x20));
        }
    }
}

s32 calc_feed_level__11TItemMagSubFPv(void *arg0) {
    s32 temp_r3;
    void **temp_r4_2;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_3;

    temp_r3_2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r4_2 = M2C_FIELD(temp_r3_2, void ***, 0xF8);
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x60);
    if (temp_r4_2 != NULL) {
        temp_r4_3 = *temp_r4_2;
        if (temp_r4_3 != NULL) {
            temp_r4 = M2C_FIELD(temp_r4_3, void **, 4);
            if (temp_r4 != NULL) {
                return temp_r3 + M2C_FIELD(temp_r4, s16 *, 4);
            }
        }
    }
    return temp_r3;
}

void update_special_pose__11TItemMagSubFPv(MagSub_801151E0 *self) {
    if (self->joint != NULL) {
        if (self->joint->id == -1) {
            VecCopy__FP3VecPC3Vec(&self->posA0, (s32)self->player + 0x2FC);
        } else {
            self->player->get_joint_pos(self->joint->id, &self->posA0);
        }
    }
    push_matrix_from((void *) (&(*(RecoveredGlobal_801151E0_lbl_8058D490 *)&lbl_8058D490).value));
    rotate_matrix_y(0, (void *)(calc_feed_level__11TItemMagSubFPv(self) + 0x8000));
    Vec_801151E0 in = lbl_8043E59C[0];
    Vec_801151E0 out;
    transform_point_by_current_matrix(&in, &out);
    vec3_add_to(&self->posA0, &out);
    pop_matrix();
}

void update_transition__11TItemMagSubFPv(TItemMagSub_801152AC *self) {
    self->timer += TItemMagSub__data_805DABD8;
    if (lbl_805D2C08 == self->timer) {
        ((M2C_UNK (*)(void *, M2C_UNK))clear_flags64__11TItemMagSubFPvUi)((void *)(self), (M2C_UNK)(0x18));
        memset(self->vec34, 0, 0xC);
        memset(self->vec58, 0, 0xC);
        self->f9C = TItemMagSub__data_805DABC8;
        self->f98 = TItemMagSub__data_805DABC8;
        self->f94 = TItemMagSub__data_805DABC8;
    }
    ((void (*)(void *))update_follow__11TItemMagSubFv)(self);
}

#pragma push
#pragma opt_common_subs off
void update_follow__11TItemMagSubFv(Sub_80115334 *self) {
    Vec_80115334 v;
    s32 i;

    if (self->rec != NULL) {
        if (*(s32 *)self->rec == -1) {
            VecCopy__FP3VecPC3Vec(&v, (s32)((u8 *)self->owner + 0x2FC));
        } else {
            self->owner->m63(*(s32 *)self->rec, &v);
        }
        if (((u32 (*)(void *, s32))test_feed_flags__11TItemMagSubFPvUi)(self, 2) != 0U) {
            VecCopy__FP3VecPC3Vec((u8 *)self + 0xA0, (s32)&v);
        } else if (((u32 (*)(void *, s32))test_feed_flags__11TItemMagSubFPvUi)(self, 0x10) != 0U) {
            lerp_follow_anchor((Vec_80114CD8 *)&v, (Vec_80114CD8 *)((u8 *)self + 0xA0), &lbl_805D2C0C);
        } else {
            lerp_follow_anchor((Vec_80114CD8 *)&v, (Vec_80114CD8 *)((u8 *)self + 0xA0), (f32 *)(self->rec + 8));
        }
        ((void (*)(void *, void *, void *))accumulate_stat__11TItemMagSubFPvPvPv)((u8 *)self + 0xAC, (u8 *)self + 0x4C, self->rec + 0x34);
        ((void (*)(void *, void *, void *))accumulate_stat__11TItemMagSubFPvPvPv)((u8 *)self + 0xB0, (u8 *)self + 0x50, self->rec + 0x44);
        ((void (*)(void *, void *, void *))accumulate_stat__11TItemMagSubFPvPvPv)((u8 *)self + 0xB4, (u8 *)self + 0x54, self->rec + 0x54);
        ((void (*)(void *, void *, void *, void *, void *))mag_accumulate_drift)((u8 *)self + 0x94, (u8 *)self + 0x58, self->rec + 0x10, self->rec + 0x28, self->rec + 0xD);
        ((void (*)(void *, void *, void *, void *, void *))mag_accumulate_drift)((u8 *)self + 0x98, (u8 *)self + 0x5C, self->rec + 0x14, self->rec + 0x2C, self->rec + 0xE);
        ((void (*)(void *, void *, void *, void *, void *))mag_accumulate_drift)((u8 *)self + 0x9C, (u8 *)self + 0x60, self->rec + 0x18, self->rec + 0x30, self->rec + 0xF);
        vec3_add_to((u8 *)self + 0xAC, (u8 *)self + 0x94);
        if (has_feed_flag__11TItemMagSubFPv(self->x1C) != 0U) {
            self->x34 = TItemMagSub__data_805DABCC * (f32)self->rec[0xC];
        } else {
            self->x34 = 0;
        }
        self->x34 += (s32)(TItemMagSub__data_805DABCC * (f32)(s8)self->rec[5]);
        self->x38 += (s32)(TItemMagSub__data_805DABCC * (f32)(s8)self->rec[6]);
        self->x3C += (s32)(TItemMagSub__data_805DABCC * (f32)(s8)self->rec[7]);
    }
    for (i = 0; i != 2; i++) {
        update_stat__11TItemMagSubFPv(&self->st[i]);
    }
}
extern int fold_flush_2;
#pragma pop

void TItemMagSub__vt1(u8 *arg0) {
    if (test_feed_flags__11TItemMagSubFPvUi(arg0, 0x80U) != 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (is_mag_active__11TItemMagSubFPv(M2C_FIELD(arg0, s32 *, 0x1C)) != 0 ||
        ((u32 (*)(void *))TItemMagSub__sub_801159BC)(M2C_FIELD(arg0, u8 **, 0x1C)) != 0U) {
        return;
    }
    if (obj_isState7_324(M2C_FIELD(arg0, u8 **, 0x20)) != 0) {
        update_special_pose__11TItemMagSubFPv((MagSub_801151E0 *)arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xB8) = get_mag_scale_f__10TObjPlayerFPv(M2C_FIELD(arg0, u8 **, 0x20) + 0x608);
    if (test_feed_flags__11TItemMagSubFPvUi(arg0, 8U) != 0U) {
        update_transition__11TItemMagSubFPv((TItemMagSub_801152AC *)arg0);
    } else {
        ((void (*)(void *))update_follow__11TItemMagSubFv)(arg0);
    }
    if (M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        M2C_FIELD(arg0, f32 *, 0x80) = M2C_FIELD(arg0, f32 *, 0x80) + TItemMagSub__data_805DABD8;
        if (M2C_FIELD(arg0, f32 *, 0x84) <= M2C_FIELD(arg0, f32 *, 0x80)) {
            M2C_FIELD(arg0, f32 *, 0x80) = TItemMagSub__data_805DABC8;
        }
    }
}

void *TItemMagSub__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TItemMagSub;
        destroy__11TItemMagSubFPvs((void *)((void *)(arg0)), (s16)((s16)(0)));
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

void *destroy__11TItemMagSubFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F5A0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

void reset__11TItemMagSubFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0xAC, M2C_FIELD(arg0, s32 *, 0x20) + 0x2FC);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

#pragma push
#pragma fp_contract on
u8 *TItemMagSub__ct(u8 *self, u8 *player, u8 *item) {
    s32 i;
    init_object__21TItemEffArmorParticleFPv(self, item);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__11TItemMagSub;
    M2C_FIELD(self, u32 *, 0) = lbl_805D2C10;
    M2C_FIELD(self, u8 **, 0x20) = player;
    M2C_FIELD(self, s32 *, 0x24) = 0;
    M2C_FIELD(self, s32 *, 0x2C) = 0;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    reset__11TItemMagSubFPv((u8 *)(self));
    M2C_FIELD(self, s32 *, 0x64) = 0;
    M2C_FIELD(self, u8 **, 0x1C) = item;
    M2C_FIELD(self, f32 *, 0x80) = TItemMagSub__data_805DABC8;
    M2C_FIELD(self, f32 *, 0x7C) = TItemMagSub__data_805DABC8;
    for (i = 0; i < 3; i++) {
        ((MagSub_80115800 *) self)->slots[i] = -1;
    }
    if (0.5 < M2C_FIELD(player, f32 *, 0x8A8)) {
        M2C_FIELD(self, f32 *, 0xC8) = -((lbl_805DABE0 * M2C_FIELD(player, f32 *, 0x8A8)) - lbl_805DABDC);
    } else {
        M2C_FIELD(self, f32 *, 0xC8) = TItemMagSub__data_805DABD8;
    }
    disallow_rendering__7TObjectFv(self);
    disallow_rendering_shadows__7TObjectFv(self);
    return self;
}
extern int fold_flush_3;
#pragma pop

void disallow_rendering_shadows__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) | 0x100);
}

void clear_flag_64__11TItemMagSubFPv(void* p) { clear_flags64__11TItemMagSubFPvUi(p, 64); }

void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x64) &= ~v; }

int set_grow_flag__15TItemMagGrowEffFPv(void* p) { return set_flags64__8TItemMagFPvUi(p, 64); }

int fn_80115948(void* p) { return (*(u8*)((char*)p + 0x0) >> 7) & 0x1; }

int fn_80115954(void* p) { return (*(u8*)((char*)p + 0x0) >> 6) & 0x1; }

s32 calc_scaled_value__11TItemMagSubFPv(void *arg0) {
    return (s32) (TItemMagSub__data_805DABCC * (f32) M2C_FIELD(arg0, s16 *, 2));
}

int TItemMagSub__sub_801159A4(void* p) { return (*(u8*)((char*)p + 0x0) >> 5) & 0x1; }

int TItemMagSub__sub_801159B0(void* p) { return *(u8*)((char*)p + 0x0) & 0x7; }

int TItemMagSub__sub_801159BC(void* p) { return *(u32*)((char*)p + 0x18c) & 0x20; }

}
