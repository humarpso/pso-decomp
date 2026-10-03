#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_fe09eb { char pad[0x18]; };

struct VObj_18_fe09eb : VBase_18_fe09eb {
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
    virtual M2C_UNK m63(M2C_UNK, void *);
};

struct RecoveredGlobal_802CB03C_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

typedef struct S_802CB10C { u8 pad0[0x3C0]; s32 f3C0; } S_802CB10C;

struct RecoveredGlobal_802CB03C_lbl_8058D490;
struct Vec_802CAD98 { f32 x, y, z; };

struct Vec_802CB170
{
  f32 x;
  f32 y;
  f32 z;
};

struct Tgt_802CB170
{
  u8 pad[0x30];
  u32 flags;
  u8 pad34[4];
  Vec_802CB170 pos;
};

struct Gi_802CB170
{
  u8 pad[0x38];
  Vec_802CB170 pos;
  u8 pad44[0x60 - 0x44];
  s32 angle;
  u8 pad64[0x3C0 - 0x64];
  s32 count;
  s16 list[12];
  u8 pad3dc[0x434 - 0x3DC];
  s32 fov;
  f32 range;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK project_actor_to_ground(void *, void *, M2C_UNK);
void TObjEneMe1GiGue__sub_802CACD8(u8 *arg0);
s32 TObjEneMe1GiGue__sub_802CDAC4(M2C_UNK, s32);
f32 TObjEneMe1GiGue__sub_802CDAD8(M2C_UNK, s32);
extern f32 lbl_805D6840;
extern f32 lbl_805D6844;
extern f32 lbl_805D6848;
extern f32 lbl_805D684C;
extern s32 lbl_805D6850;
extern s32 lbl_805D6854;
extern const f32 lbl_805DE668;
void TObjEneMe1GiGue__sub_802CAF24(s32 arg0);
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 push_matrix_from(u32);
s32 pop_matrix(void);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern RecoveredGlobal_802CB03C_lbl_8058D490 lbl_8058D490;
void TObjEneMe1GiGue__sub_802CB03C(u8 *arg0);
s32 get_player_data__10TObjPlayerFi(int);
extern s32 lbl_805D586C;
s32 TObjEneMe1GiGue__sub_802CB10C(S_802CB10C *arg0);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u8 *csnVector(void *, void *, s32);
f32 TObjPlayer__sub_8013153C(void *, s32);
void vec3_add_to(void *, void *);
void matrix_mult_vec(int, Vec_802CAD98 *, void *);
M2C_UNK rotate_matrix_y(int, int);
s32 push_matrix_from(u32);
s32 pop_matrix(void);
extern Vec_802CAD98 lbl_80472280;
extern Vec_802CAD98 lbl_8047228C;
extern const f64 TObjEneMe1GiGue__data_80472298;
extern RecoveredGlobal_802CB03C_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 TObjEneMe1GiGue__data_805DE664;
void TObjEneMe1GiGue__sub_802CAD98(u8 *arg0, Vec_802CAD98 *arg1);
s16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
void subtract_vector(Vec_802CB170 *, Vec_802CB170 *);
extern const f64 TObjEneMe1GiGue__data_80472298;
void TObjEneMe1GiGue__sub_802CB170(Gi_802CB170 *self, Tgt_802CB170 *t);
}

extern "C" {

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0);
s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1);
int get_barrier_count__15TObjEneMe1GiGueFv(void);
void update_direction__15TObjEneMe1GiGueFPv(void *arg0);
s32 update_action_hold_status__10TObjPlayerFv();
s32 *csnVectorUnder(s32, s32, M2C_UNK, s32);
s32 get_field_0c__10TObjPlayerFPv(s32);
f32 get_pos_x__10TObjPlayerFPv(s32);

    extern int TObjEneMe1GiGue__data_805D6838;
int get_barrier_count__15TObjEneMe1GiGueFv(void) {  return TObjEneMe1GiGue__data_805D6838; }

s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = csnVectorUnder(arg1, arg0 + 0x120, 5, arg0);
    if (temp_r3 == NULL) {
        return 0;
    }
    return (u32)__cntlzw(*temp_r3 & 4) >> 5;
}

#pragma push
#pragma fp_contract on
void TObjEneMe1GiGue__sub_802CACD8(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (temp_r4 & 0x40000) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFFFBFFFF);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        project_actor_to_ground(arg0, arg0 + 0x38, 0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 7) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
    }
}
#pragma pop

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0) {
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        TObjEneMe1GiGue__sub_802CACD8((u8 *)(arg0));
        return 1;
    }
    return 0;
}

#pragma push
#pragma opt_common_subs off
void TObjEneMe1GiGue__sub_802CAD98(u8 *arg0, Vec_802CAD98 *arg1) {
    f32 best;
    s32 ang;
    s32 bestAng;
    s32 i;
    u8 *hit;
    f32 d;
    ang = (s32) (TObjEneMe1GiGue__data_80472298 * get_ad_end_text_start__10TObjPlayerFv(arg1->x, arg1->z));
    best = TObjEneMe1GiGue__data_805DE660;
    bestAng = ang;
    push_matrix_from((u32) &lbl_8058D490);
    Vec_802CAD98 v = lbl_80472280;
    rotate_matrix_y(0, ang);
    for (i = 0; i < 3; i++) {
        matrix_mult_vec(0, &v, arg0 + 0x390);
        vec3_add_to(arg0 + 0x390, arg0 + 0x2FC);
        hit = csnVector(arg0 + 0x2FC, arg0 + 0x390, -1);
        if (hit == NULL) {
            pop_matrix();
            return;
        }
        d = TObjPlayer__sub_8013153C(arg0 + 0x38, M2C_FIELD(hit, s32 *, 4)) - TObjEneMe1GiGue__data_805DE664;
        if (best < d) {
            best = d;
            bestAng = ang;
        }
        rotate_matrix_y(0, 0x5555);
        ang += 0x5555;
    }
    pop_matrix();
    push_matrix_from((u32) &lbl_8058D490);
    Vec_802CAD98 w = lbl_8047228C;
    w.x = best;
    rotate_matrix_y(0, bestAng);
    matrix_mult_vec(0, &w, arg0 + 0x390);
    vec3_add_to(arg0 + 0x390, arg0 + 0x2FC);
    pop_matrix();
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEneMe1GiGue__sub_802CAF24(s32 arg0) {
    lbl_805D6840 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 1);
    lbl_805D6844 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 2);
    lbl_805D6848 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 3);
    lbl_805D684C = TObjEneMe1GiGue__sub_802CDAD8(arg0, 4);
    lbl_805D6850 = TObjEneMe1GiGue__sub_802CDAC4(arg0, 0);
    lbl_805D6854 = TObjEneMe1GiGue__sub_802CDAC4(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x44C) = (s32) (lbl_805DE668 * (f32) TObjEneMe1GiGue__sub_802CDAC4(arg0, 3));
    M2C_FIELD(arg0, s32 *, 0x450) = TObjEneMe1GiGue__sub_802CDAC4(arg0, 4);
}
#pragma pop

void update_direction__15TObjEneMe1GiGueFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x438) = get_pos_x__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
    M2C_FIELD(arg0, s32 *, 0x434) = get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
}
typedef char RecoveredGlobal_802CB03C_lbl_8058D490_size[sizeof(RecoveredGlobal_802CB03C_lbl_8058D490) == 0x30 ? 1 : -1];
void TObjEneMe1GiGue__sub_802CB03C(u8 *arg0) {
    push_matrix_from((u32) &lbl_8058D490.value);
    translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x3EC) + (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E8))), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_global_flag__10TObjPlayerFv();
    render_anim_model__10TObjPlayerFPvf(arg0, M2C_FIELD(arg0, f32 *, 0xC0));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    ((VObj_18_fe09eb *)(arg0))->m63(0, (u8 *)(arg0) + 0x3B4);
    ((VObj_18_fe09eb *)(arg0))->m63(0x2A, (u8 *)(arg0) + 0x39C);
    ((VObj_18_fe09eb *)(arg0))->m63(0x16, (u8 *)(arg0) + 0x3A8);
}
s32 TObjEneMe1GiGue__sub_802CB10C(S_802CB10C *arg0) {
    s32 i;
    arg0->f3C0 = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        s32 t = get_player_data__10TObjPlayerFi(i);
        TObjEneMe1GiGue__sub_802CB170((Gi_802CB170 *)(arg0), (Tgt_802CB170 *)(t));
    }
    return arg0->f3C0;
}
typedef struct Gi_802CB170 Gi_802CB170;
typedef struct Tgt_802CB170 Tgt_802CB170;
typedef struct Vec_802CB170 Vec_802CB170;
void TObjEneMe1GiGue__sub_802CB170(Gi_802CB170 *self, Tgt_802CB170 *t) {
  int new_var;
  if ((((self->count < 12) && (t != 0)) && (((void *) t) != ((void *) self))) && (!(t->flags & 0x06000800)))
  {
    Vec_802CB170 v = t->pos;
    subtract_vector(&v, &self->pos);
    if (!(((v.x * v.x) + (v.z * v.z)) > (self->range * self->range)))
    {
      new_var = (-((s32) (((const f64 *)&TObjEneMe1GiGue__data_80472298)[0] * get_ad_end_text_start__10TObjPlayerFv(v.z, v.x)))) + 0x4000;
      if (angle_difference_abs(new_var, self->angle) <= (self->fov / 2))
      {
        self->list[self->count++] = obj_getField1c(t);
      }
    }
  }
}

}
