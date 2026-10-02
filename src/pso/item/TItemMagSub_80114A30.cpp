#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
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

#include "pso/item/TItemMagSub.h"
typedef s32 M2C_UNK;
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

extern "C" {
s32 TItemMag__sub_80113EC8(void *);
s32 calc_feed_level__11TItemMagSubFPv(void *arg0);
M2C_UNK TBoss7Tentacle__sub_803D8A6C(int, int, int, int, int);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void TItemMagSub__sub_80114E4C(u8 *arg0);
s32 is_mag_active__11TItemMagSubFPv(int);
void TItemMagSub__sub_80114E4C(u8 *arg0);
s32 push_matrix_from(void *);
f32 TObjPlayer__sub_803D9884(void *, void *);
s32 pop_matrix();
extern RecoveredGlobal_80114DB8_lbl_8043E5A8 lbl_8043E5A8;
extern RecoveredGlobal_80114DB8_lbl_8058D490 lbl_8058D490;
s32 TItemMagSub__sub_80114DB8(u8 *arg0, u32 arg1);
extern void *TItemMagSub__data_805D54B8;
extern s32 TItemMagSub__data_805D54BC;
void TItemMagSub__sub_80114AB4(void *a, void *b);
void TItemMagSub__sub_80114C40(void *arg);
void TItemMagSub__sub_80114CD8(Vec_80114CD8 *target, Vec_80114CD8 *cur, f32 *t);
void TItemMagSub__sub_80115334(void *);
M2C_UNK clear_flags64__11TItemMagSubFPvUi(void *, M2C_UNK);
M2C_UNK memset(void *, int, int);
extern f32 lbl_805D2C08;
extern const f32 TItemMagSub__data_805DABC8;
extern const f32 TItemMagSub__data_805DABD8;
void TItemMagSub__sub_801152AC(TItemMagSub_801152AC *self);
void disallow_rendering__7TObjectFv(void *);
void reset__11TItemMagSubFPv(u8 *arg0);
void disallow_rendering_shadows__7TObjectFv(void *);
void init_object__21TItemEffArmorParticleFPv(void *, void *);
extern const f64 lbl_8043E5D8;
extern M2C_UNK __vt__11TItemMagSub[];
extern u32 lbl_805D2C10;
extern const f32 TItemMagSub__data_805DABC8;
extern const f32 TItemMagSub__data_805DABD8;
extern const f32 lbl_805DABDC;
extern const f32 lbl_805DABE0;
u8 *TItemMagSub__ct(u8 *self, u8 *player, u8 *item);
s32 TItem__sub_80100A40(f32 *, f32, f32);
void notify_fish_if_valid__10TObjPlayerFUi(u32);
void TObjPlayer__sub_803D9B2C();
s32 pop_matrix();
void TItemMagSub__sub_80114E4C(u8 *arg0);
void TItemMagSub__sub_80114C40(void *arg);
void set_global_state__16TObjEneRe7BeruraFi(void (*)(void *));
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
void TObjEneSlimeOne__sub_803E4AF4(void *, void *, f32);
void run_with_transform_context__10TObjPlayerFiii(void *, void (*)(void *));
u32 test_feed_flags__11TItemMagSubFPvUi(void *, u32);
void end_effect_render__13TParticleCtrlFv();
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK clear_flags64__11TItemMagSubFPvUi(void *, M2C_UNK);
extern void *TItemMagSub__data_805D54B8;
extern s32 TItemMagSub__data_805D54BC;
extern u32 some_id_805c6f74, lbl_805D5660;
extern f32 lbl_8058D4C0[4], lbl_8050BEC0[4];
extern const f32 lbl_805DABD0, lbl_805DABD4;
void render_mag_child(TItemMagSub *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
s32 calc_feed_level__11TItemMagSubFPv(void *arg0);
M2C_UNK rotate_matrix_y(int, void *);
s32 push_matrix_from(void *);
f32 TObjPlayer__sub_803D9884(void *, void *);
s32 pop_matrix();
void TBoss4Zako__sub_803D8910(void *, void *);
extern RecoveredGlobal_80114DB8_lbl_8058D490 lbl_8058D490;
extern Vec_801151E0 lbl_8043E59C[];
void TItemMagSub__sub_801151E0(MagSub_801151E0 *self);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
u32 test_feed_flags__11TItemMagSubFPvUi(void *, u32);
void TItemMagSub__sub_80114E4C(u8 *arg0);
M2C_UNK clear_flags64__11TItemMagSubFPvUi(void *, M2C_UNK);
void TObjPlayer__sub_801415BC();
void reset_transform_state__10TObjPlayerFv();
void end_effect_render__13TParticleCtrlFv();
void notify_fish_if_valid__10TObjPlayerFUi(u32);
void TObjPlayer__sub_803D9B2C();
s32 pop_matrix();
s32 draw_ginja_object(void *);
void fn_803DC86C(s32, s32, s32, s32);
void TObjEneSlimeOne__sub_803E4AF4(void *, void *, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
void set_global_state__16TObjEneRe7BeruraFi(void (*)(void *));
void TItemMagSub__sub_80114C40(void *arg);
extern f32 lbl_8058D4C0[4], lbl_8050BEC0[4];
extern void *TItemMagSub__data_805D54B8;
extern s32 TItemMagSub__data_805D54BC;
extern u32 some_id_805c6f74, lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
void TItemMagSub__vt3(TItemMagSub_80114F0C *self);
}

extern "C" {

void *TItemMagSub__vt0(void *arg0, s16 arg1);
void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2);
s32 calc_feed_level__11TItemMagSubFPv(void *arg0);
void clear_flag2__11TItemMagSubFPv(void *arg0);
void *destroy__11TItemMagSubFPvs(void *arg0, s16 arg1);
void reset__11TItemMagSubFPv(u8 *arg0);
void reset_stats__11TItemMagSubFPv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void __dt__7TObjectFv(void *, int);
M2C_UNK clear_flags64__11TItemMagSubFPvUi(void *, M2C_UNK);
void free_to_heap__11TItemMagSubFPv(void *);
M2C_UNK memset(void *, int, int);

void clear_flag2__11TItemMagSubFPv(void *arg0) {
    if ((u32) arg0 != 0U) {
        clear_flags64__11TItemMagSubFPvUi(arg0, 2);
    }
}

extern const f32 TItemMagSub__data_805DABC8;

void reset_stats__11TItemMagSubFPv(u8 *arg0) {
    memset(arg0 + 0x34, 0, 0xC);
    memset(arg0 + 0x58, 0, 0xC);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
}

void TItemMagSub__sub_80114C40(void *arg) {
    if (TItemMagSub__data_805D54B8 != 0) {
        TItemMagSub__sub_80114AB4(TItemMagSub__data_805D54B8, arg);
        TItemMagSub__data_805D54BC++;
    }
}

void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2) {
    *arg1 = *arg1 + M2C_FIELD(arg2, s32 *, 0xC);
    *arg0 = M2C_FIELD(arg2, f32 *, 0) * TBoss8Dragon__sub_803D64C0(*arg1 + M2C_FIELD(arg2, s32 *, 8));
}

typedef char RecoveredGlobal_80114DB8_lbl_8043E5A8_size[sizeof(RecoveredGlobal_80114DB8_lbl_8043E5A8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80114DB8_lbl_8058D490_size[sizeof(RecoveredGlobal_80114DB8_lbl_8058D490) == 0x30 ? 1 : -1];

#pragma push
#pragma fp_contract on
void TItemMagSub__sub_80114CD8(Vec_80114CD8 *target, Vec_80114CD8 *cur, f32 *t) {
    cur->x += *t * (target->x - cur->x);
    cur->y += *t * (target->y - cur->y);
    cur->z += *t * (target->z - cur->z);
}
#pragma pop

s32 TItemMagSub__sub_80114DB8(u8 *arg0, u32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80114DB8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80114DB8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80114DB8, sp10) == 0x8) ? 1 : -1];
    Stack_80114DB8 stack;
    if ((is_mag_active__11TItemMagSubFPv((int) (M2C_FIELD(arg0, s32 *, 0x1C))) == 0) && (arg1 != 0U)) {
        push_matrix_from((void *) (&lbl_8058D490.value));
        TItemMagSub__sub_80114E4C((u8 *)((void *) (arg0)));
        stack.sp8 = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 8);
        TObjPlayer__sub_803D9884((void *) (&stack.sp8), (void *) (arg1));
        pop_matrix();
        return 1;
    }
    return 0;
}

void TItemMagSub__sub_80114E4C(u8 *arg0) {
  f32 temp_f1;
  s32 temp_r7;
  u8 *temp_r6;
  void *feed;
  s32 a2;
  s32 a3;
  s32 a4;
  TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0xA0));
  if (TItemMag__sub_80113EC8((void *) (*((void **) (((s8 *) arg0) + 0x20)))) != 0)
  {
    feed = (void *) calc_feed_level__11TItemMagSubFPv((void *) arg0);
    rotate_matrix_y((int) 0, feed);
  }
  else
  {
    rotate_matrix_y((int) 0, (void *) (*((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x20)))) + 0x60))));
  }
  TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0xAC));
  temp_r6 = (unsigned char *) (*((void **) (((s8 *) arg0) + 0x30)));
  if (temp_r6 != 0)
  {
    a2 = *((s32 *) (((s8 *) temp_r6) + 0x1C));
    a2 = a2 + (*((s32 *) (((s8 *) arg0) + 0x34)));
    a3 = (*((s32 *) (((s8 *) temp_r6) + 0x20))) + (*((s32 *) (((s8 *) arg0) + 0x38)));
    a4 = (*((s32 *) (((s8 *) temp_r6) + 0x24))) + (*((s32 *) (((s8 *) arg0) + 0x3C)));
    TBoss7Tentacle__sub_803D8A6C((int) 0, (int) a2, (int) a3, (int) a4, (int) (*((s32 *) (((s8 *) temp_r6) + 0x20))));
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
        TObjPlayer__sub_803D9B2C();
        TItemMagSub__sub_80114E4C((u8 *)self);
        TItemMagSub__data_805D54BC = 0;
        self->selected_node = 0;
        if (self->animation) {
            set_global_state__16TObjEneRe7BeruraFi(TItemMagSub__sub_80114C40);
            set_global_flag__10TObjPlayerFv();
            TObjEneSlimeOne__sub_803E4AF4(self->model, self->animation, self->animation_frame);
            clear_global_state__10TObjPlayerFv();
            set_global_state__16TObjEneRe7BeruraFi(0);
        } else {
            some_id_805c6f74 |= 0x8011;
            fn_803DC86C(1, 4, 5, 0);
            TObjPlayer__sub_801415BC();
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
            clear_flags64__11TItemMagSubFPvUi((void *)(self), (M2C_UNK)(0x20));
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
        TObjPlayer__sub_803D9B2C();
        TItemMagSub__sub_80114E4C((u8 *)(self));
        (*(u32 *)&TItemMagSub__data_805D54BC) = 0;
        self->selected_node = 0;
        if (self->animation) {
            set_global_state__16TObjEneRe7BeruraFi(TItemMagSub__sub_80114C40);
            set_global_flag__10TObjPlayerFv();
            TObjEneSlimeOne__sub_803E4AF4(self->model, self->animation, self->animation_frame);
            clear_global_state__10TObjPlayerFv();
            set_global_state__16TObjEneRe7BeruraFi(0);
        } else {
            run_with_transform_context__10TObjPlayerFiii(self->model, TItemMagSub__sub_80114C40);
        }
        (*(u32 *)&TItemMagSub__data_805D54BC) = 0;
        pop_matrix();
        TItemMagSub__data_805D54B8 = 0;
        if (test_feed_flags__11TItemMagSubFPvUi(self, 0x20)) {
            end_effect_render__13TParticleCtrlFv();
            copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
            some_id_805c6f74 = lbl_805D5660;
            clear_flags64__11TItemMagSubFPvUi((void *)(self), (M2C_UNK)(0x20));
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

extern M2C_UNK __vt__11TItemMagSub[];

void TItemMagSub__sub_801151E0(MagSub_801151E0 *self) {
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
    TObjPlayer__sub_803D9884(&in, &out);
    TBoss4Zako__sub_803D8910(&self->posA0, &out);
    pop_matrix();
}

void TItemMagSub__sub_801152AC(TItemMagSub_801152AC *self) {
    self->timer += TItemMagSub__data_805DABD8;
    if (lbl_805D2C08 == self->timer) {
        clear_flags64__11TItemMagSubFPvUi((void *)(self), (M2C_UNK)(0x18));
        memset(self->vec34, 0, 0xC);
        memset(self->vec58, 0, 0xC);
        self->f9C = TItemMagSub__data_805DABC8;
        self->f98 = TItemMagSub__data_805DABC8;
        self->f94 = TItemMagSub__data_805DABC8;
    }
    TItemMagSub__sub_80115334(self);
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

extern M2C_UNK lbl_8049F5A0[];

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

extern const f32 TItemMagSub__data_805DABC8;

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
    if (lbl_8043E5D8 < M2C_FIELD(player, f32 *, 0x8A8)) {
        M2C_FIELD(self, f32 *, 0xC8) = -((lbl_805DABE0 * M2C_FIELD(player, f32 *, 0x8A8)) - lbl_805DABDC);
    } else {
        M2C_FIELD(self, f32 *, 0xC8) = TItemMagSub__data_805DABD8;
    }
    disallow_rendering__7TObjectFv(self);
    disallow_rendering_shadows__7TObjectFv(self);
    return self;
}
#pragma pop

}
