#include "types.h"

struct RecoveredGlobal_8009A704_lbl_8048FE7C {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void fn_8009A598(void *);
void fn_8009A640(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8009A704_lbl_8048FE7C bringer_tp_absorb_ring_vtable;
extern s32 bringer_tp_absorb_effect_name;
extern const f32 lbl_805D9850;
extern const f32 lbl_805D9864;
u8 *construct_bringer_tp_absorb_ring(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_8009A704_lbl_8048FE7C_size[sizeof(RecoveredGlobal_8009A704_lbl_8048FE7C) == 0x18 ? 1 : -1];
u8 *construct_bringer_tp_absorb_ring(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &bringer_tp_absorb_ring_vtable.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) bringer_tp_absorb_effect_name;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) lbl_805D9850;
    *(f32 *)((s8 *)arg0 + 0x3C) = farg0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) lbl_805D9864;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    fn_8009A640(arg0);
    fn_8009A598(arg0);
    return arg0;
}

}

#include <stddef.h>
struct Stack_8009AA64 {
    s32 sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};
struct RecoveredGlobal_8009AA64_lbl_8048FE94 { s32 value; u8 remaining[0x18]; };
extern "C" {
s32 obj_getField1c(void *);
s32 is_player_entity_id();
s32 is_alive__9TObjEneDDFPv(void *);
s32 obj_isState2_324(void *);
s32 queue_destruction__7TObjectFv(void *);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
f32 subtract_vector(void *, void *);
s32 is_vec_xz_cross_negative(void *, void *);
s32 rotate_xz_pair_by_angle(void *, void *, int);
extern s32 bringer_rush_effect_vtable[];
extern s32 bringer_rush_effect_name;
extern const f32 lbl_805D9880;
extern const f32 lbl_805D9884;
}

#include "types.h"

extern "C" {

typedef struct Vec_8009A7A4 Vec_8009A7A4;
struct Vec_8009A7A4
{
  f32 x;
  f32 y;
  f32 z;
};
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
s32 rand();
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern Vec_8009A7A4 lbl_805008B8[6];
extern u32 lbl_80500900[12];
extern const f32 lbl_805D9860;
extern const f32 lbl_805D9874;
extern const f32 lbl_805D987C;

}

extern "C" {

void bringer_effect_cleanup_noop(void) {  }

void init_bringer_effect_tables(void) {
  s32 ang;
  Vec_8009A7A4 *v;
  f32 new_var;
  s32 i;
  u32 b;
  u32 *p;
  u32 c;
  s32 j;
  f32 sn;
  f32 cs;
  ang = 0;
  v = lbl_805008B8;
  for (i = 0; i < 6; i++)
  {
    sn = sin_table_lookup(ang);
    cs = cos_table_lookup(ang);
    v->x = sn;
    v->y = lbl_805D9860;
    v->z = cs;
    ang += 0x6666;
    v++;
  }

  b = (u8) ((u32) get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805D9874 * (lbl_805D987C * rand())));
  new_var = get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805D9874 * (lbl_805D987C * rand()));
  c = (((u8) ((u32) new_var)) << 8) | b;
  p = lbl_80500900;
  for (j = 0; j < 12; j++)
  {
    c = ((u16) c) << 8;
    c |= (u8) ((u32) get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805D9874 * (lbl_805D987C * rand())));
    *p = c;
    p++;
  }

}

void render_bringer_rush_effect_noop(void) {  }

void update_bringer_rush_effect(u8 *arg0) {
    f32 temp_f1;
    obj_getField1c((void *) (*(u8 **)((s8 *)arg0 + 0x1C)));
    if (is_player_entity_id() != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (is_alive__9TObjEneDDFPv((void *) (*(u8 **)((s8 *)arg0 + 0x1C))) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (obj_isState2_324((void *) (*(u8 **)((s8 *)arg0 + 0x1C))) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x2C);
    if (temp_f1 <= lbl_805D9880) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x308) = (f32) (*(f32 *)((s8 *)arg0 + 0x20) * temp_f1);
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x310) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) * *(f32 *)((s8 *)arg0 + 0x2C));
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) (*(f32 *)((s8 *)arg0 + 0x2C) * lbl_805D9884);
}

void *destroy_bringer_rush_effect(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = bringer_rush_effect_vtable;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *construct_bringer_rush_effect(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8009AA64, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8009AA64, spC) == 0x4) ? 1 : -1];
    Stack_8009AA64 stack;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8009AA64_lbl_8048FE94 *)&bringer_rush_effect_vtable).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) bringer_rush_effect_name;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg3;
    *(f32 *)((s8 *)arg0 + 0x2C) = farg0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg3 + 0x38));
    subtract_vector((void *) (&stack.sp8), (void *) (arg2 + 0x38));
    stack.spC = lbl_805D9860;
    *(f32 *)((s8 *)arg0 + 0x20) = sin_table_lookup((int) (*(s32 *)((s8 *)arg2 + 0x60)));
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805D9860;
    *(f32 *)((s8 *)arg0 + 0x28) = cos_table_lookup((int) (*(s32 *)((s8 *)arg2 + 0x60)));
    if (is_vec_xz_cross_negative((void *) (arg0 + 0x20), (void *) (&stack.sp8)) != 0) {
        rotate_xz_pair_by_angle((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (-0x1800));
    } else {
        rotate_xz_pair_by_angle((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (0x1800));
    }
    return arg0;
}

}
