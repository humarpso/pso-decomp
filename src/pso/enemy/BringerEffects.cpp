#include "types.h"

struct Vec_80099F0C { f32 x, y, z; };

struct Col_80099F0C { u8 pad0[0xC]; f32 fC; f32 f10; u8 pad14[4]; u32 flags; };

struct Base_80099F0C { u8 pad[0x18]; };

struct Bringer_80099F0C : Base_80099F0C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(void *, void *, s32);
    u8 pad1C[0x38 - 0x1C];
    Vec_80099F0C pos;
    u8 pad44[0xA4 - 0x44];
    Col_80099F0C *col;
    u8 padA8[0xB0 - 0xA8];
    s32 active;
    s32 timer;
    f32 dirx;
    s32 fBC;
    f32 dirz;
    s32 fC4;
    f32 dist;
    f32 next;
    f32 fD0;
};

struct Arg_80099F0C { s32 a; f32 b; };

extern "C" {
int construct_collision_body(void);
extern s32 lbl_8048FE08[];
    extern s32 bringer_tp_absorb_effect_name;
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3);
void TObjEneDf2Bringer__sub_8009A2A0(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern s32 bringer_projectile_actor_ops_table[];
void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, const void *);
void queue_destruction__7TObjectFv(void *);
void update_projectile_motion__17TObjEneDf2BringerFPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, const void *);
void *csnVector(void *, void *, s32);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void create_timed_particle_emitter(void *, s32, s32, s32);
void TObjEneDf2Bringer__sub_8009A11C(void* p);
void update_enemy_collision_flags__10TObjPlayerFPv(void *);
void subtract_vector(void *, void *);
extern u8 lbl_8043A164[];
extern s32 lbl_8043A16C[];
void update_shot__17TObjEneDf2BringerFPv(Bringer_80099F0C *self);
}

extern "C" {

void TObjEneDf2Bringer__sub_8009A11C(void* p);
void *TObjEneDf2Bringer__sub_8009A1BC(void *arg0, s16 arg1);
void setup_dir_shot__17TObjEneDf2BringerFPvPvif(u8 *arg0, const void *arg1, s32 arg2, f32 farg0);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
s32 VecCopy__FP3VecPC3Vec(void *, const void *);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
s32 fill_value_array(int);

#pragma push
#pragma fp_contract on
void update_shot__17TObjEneDf2BringerFPv(Bringer_80099F0C *self) {
    Vec_80099F0C v;
    Vec_80099F0C d;
    Vec_80099F0C e;
    Arg_80099F0C arg;
    s32 hit;
    f32 step;
    if (self->active == 0) {
        return;
    }
    hit = 0;
    VecCopy__FP3VecPC3Vec(&v, &self->pos);
    v.x = 10.0f * self->dirx + v.x;
    v.z = 10.0f * self->dirz + v.z;
    step = 10.0f;
    void *res = csnVector(&self->pos, &v, 0x16EF);
    if (res != 0) {
        VecCopy__FP3VecPC3Vec(&v, *(void **)((u8 *)res + 4));
        VecCopy__FP3VecPC3Vec(&d, &self->pos);
        subtract_vector(&d, &v);
        step = update_scale__15TObjBoss2TunnelFPv(&d);
        hit = 1;
    }
    f32 inc = 16.0f;
    self->dist += step;
    while (self->dist > self->next) {
        VecCopy__FP3VecPC3Vec(&e, &self->pos);
        e.x = self->next * self->dirx + e.x;
        e.z = self->next * self->dirz + e.z;
        create_timed_particle_emitter(&e, 0xEE, 0, 1);
        self->next += inc;
    }
    self->next -= step;
    self->dist -= step;
    VecCopy__FP3VecPC3Vec(&self->pos, &v);
    self->col->f10 = 2.5f;
    self->col->fC = 0.5f * step;
    update_enemy_collision_flags__10TObjPlayerFPv(self);
    if (self->col->flags & 0x200000) {
        TObjEneDf2Bringer__sub_8009A11C((void*)(self));
        return;
    }
    arg.a = lbl_8043A16C[0];
    arg.b = self->fD0;
    self->m12(lbl_8043A164, &arg, self->fC4);
    self->timer--;
    if (hit != 0 || self->timer < 0) {
        TObjEneDf2Bringer__sub_8009A11C((void*)(self));
    }
}
#pragma pop

void TObjEneDf2Bringer__sub_8009A11C(void* p) { *(s32*)((char*)p + 0xb0) = 0; }
void setup_dir_shot__17TObjEneDf2BringerFPvPvif(u8 *arg0, const void *arg1, s32 arg2, f32 farg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), arg1);
    *(s32 *)((s8 *)arg0 + 0x60) = arg2;
    *(f32 *)((s8 *)arg0 + 0xB8) = sin_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
    *(f32 *)((s8 *)arg0 + 0xBC) = (f32) 0.0f;
    *(f32 *)((s8 *)arg0 + 0xC0) = cos_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
    *(s32 *)((s8 *)arg0 + 0xB0) = 1;
    fill_value_array((int) (*(s32 *)((s8 *)arg0 + 0xC4)));
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) 0.0f;
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) 0.0f;
    *(f32 *)((s8 *)arg0 + 0xD0) = farg0;
    *(s32 *)((s8 *)arg0 + 0xB4) = 0x19;
}

extern s32 lbl_8048FE08[];

void *TObjEneDf2Bringer__sub_8009A1BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8048FE08;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3) { construct_collision_body(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_8048FE08); *(int*)((char*)a0 + 0x0) = bringer_tp_absorb_effect_name; *(int*)((char*)a0 + 0xb0) = 0; *(float*)((char*)a0 + 0xd0) = 0.0f; *(float*)((char*)a0 + 0xc8) = 0.0f; *(float*)((char*)a0 + 0xcc) = 0.0f; *(int*)((char*)a0 + 0xb4) = 0; *(float*)((char*)a0 + 0x38) = 0.0f; *(float*)((char*)a0 + 0x3c) = 0.0f; *(float*)((char*)a0 + 0x40) = 0.0f; *(float*)((char*)a0 + 0xb8) = 0.0f; *(float*)((char*)a0 + 0xbc) = 0.0f; *(float*)((char*)a0 + 0xc0) = 0.0f; *(int*)((char*)a0 + 0xc4) = a3; *(int*)((char*)*(int*)((char*)a0 + 0xa4) + 0x14) = 1; return a0; }
void TObjEneDf2Bringer__sub_8009A2A0(void) {  }

#pragma push
#pragma fp_contract on
void update_projectile_motion__17TObjEneDf2BringerFPv(u8 *arg0) {
    f32 temp_f2;
    *(f32 *)((s8 *)arg0 + 0x50) += 1.0f;
    temp_f2 = 6.0f * *(f32 *)((s8 *)arg0 + 0x50);
    if (temp_f2 >= *(f32 *)((s8 *)arg0 + 0x4C)) {
        VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x1C), (const void *)(arg0 + 0x34));
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) ((*(f32 *)((s8 *)arg0 + 0x40) * temp_f2) + *(f32 *)((s8 *)arg0 + 0x28));
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) ((*(f32 *)((s8 *)arg0 + 0x44) * temp_f2) + *(f32 *)((s8 *)arg0 + 0x2C));
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) ((*(f32 *)((s8 *)arg0 + 0x48) * temp_f2) + *(f32 *)((s8 *)arg0 + 0x30));
}
#pragma pop

void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = bringer_projectile_actor_ops_table;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"

struct RecoveredGlobal_8009A398_lbl_8048FE64 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 bringer_tp_absorb_effect_name;
u8 *fn_8009A398(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
}

extern "C" {

typedef char RecoveredGlobal_8009A398_lbl_8048FE64_size[sizeof(RecoveredGlobal_8009A398_lbl_8048FE64) == 0x18 ? 1 : -1];
u8 *fn_8009A398(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    ((s32 (*)())__ct__7TObjectFP7TObject)();
    *(s32 **)((s8 *)arg0 + 0x18) = bringer_projectile_actor_ops_table;
    *(s32 *)((s8 *)arg0 + 0) = (s32) bringer_tp_absorb_effect_name;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x34), (void *) (arg3));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x40), (void *) (arg0 + 0x34));
    subtract_vector((void *) (arg0 + 0x40), (void *) (arg0 + 0x28));
    *(f32 *)((s8 *)arg0 + 0x4C) = update_scale__15TObjBoss2TunnelFPv((void *) (arg0 + 0x40));
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) 0.0f;
    return arg0;
}

}

#include "types.h"

extern "C" {
void rotate_matrix_y(u32, s32);
s32 push_matrix(void);
s32 pop_matrix(void);
f32 post_translate_matrix(void);
void draw_trail_strip__10TObjPlayerFPvPvi(s32, s32, s32);
void draw_trail_pair__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void draw_trail_pair__10TObjPlayerFPv(u8 *arg0) {
    push_matrix();
    ((f32 (*)(void *))post_translate_matrix)(arg0 + 0x20);
    rotate_matrix_y(0U, *(s32 *)((s8 *)arg0 + 0x34));
    draw_trail_strip__10TObjPlayerFPvPvi((s32) (arg0 + 0x40), 6, *(f32 *)((s8 *)arg0 + 0x2C) < 1.0f);
    draw_trail_strip__10TObjPlayerFPvPvi((s32) (arg0 + 0xA0), 6, *(f32 *)((s8 *)arg0 + 0x2C) < 1.0f);
    pop_matrix();
}

}

#include "types.h"
struct Vec_8009A640 { f32 x, y, z; };

struct Pair_8009A640 { f32 ax, ay, az, aw; f32 bx, by, bz, bw; };

struct Obj_8009A640 { u8 pad[0x38]; f32 radius; u8 pad2[4]; Pair_8009A640 pts[6]; };

struct Ent_8009A598 { u8 pad[0xC]; u32 col; };

struct Obj_8009A598 { u8 pad0[0x2C]; f32 f2c; s32 n; u8 pad34[0xC]; Ent_8009A598 ents[1]; };

struct Obj_8009A4B8 {
    u8 pad0[0x1C];
    s32 state;
    u8 pad20[0x2C - 0x20];
    f32 alpha;
    s32 frame;
    s32 angle;
    f32 scale;
    f32 scale_max;
};

extern "C" {
extern Vec_8009A640 bringer_effect_vec_table[6];
void fn_8009A640(Obj_8009A640 *self);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
u32 __cvt_fp2unsigned();
extern u32 bringer_effect_color_table[];
void fn_8009A598(Obj_8009A598 *arg0);
void fn_8009A598(Obj_8009A598 *arg0);
void fn_8009A640(Obj_8009A640 *self);
void update_expanding_fade_effect(Obj_8009A4B8 *self);
}

extern "C" {

void update_expanding_fade_effect(Obj_8009A4B8 *self) {
    switch (self->state) {
    case 0:
        self->scale += 7.0f;
        if (self->scale >= self->scale_max) {
            self->scale = self->scale_max;
            self->state = 1;
        }
        fn_8009A640((Obj_8009A640 *)(self));
        break;
    case 1:
        self->alpha = self->alpha - 0.05f;
        if (self->alpha < 0.0f) {
            self->alpha = 0.0f;
            queue_destruction__7TObjectFv(self);
            return;
        }
        break;
    }
    self->angle += 0x800;
    self->frame++;
    if (self->frame >= 12) {
        self->frame = 0;
    }
    fn_8009A598((Obj_8009A598 *)(self));
}

void fn_8009A598(Obj_8009A598 *arg0) {
    s32 i;
    s32 n;
    Ent_8009A598 *p;
    u32 c;
    get_random_float__21TObjEneMe3ShinowaRealFv(255.0f * arg0->f2c);
    c = __cvt_fp2unsigned() << 24;
    n = arg0->n;
    p = arg0->ents;
    for (i = n; i < 12; i++) {
        u32 v = bringer_effect_color_table[n];
        p->col = v | c;
        p++;
    }
    for (i = 0; i < arg0->n; i++) {
        p->col = bringer_effect_color_table[0] | c;
        p++;
    }
}

void fn_8009A640(Obj_8009A640 *self) {
    s32 i;
    f32 outer = 3.0f + self->radius;
    f32 inner = self->radius - 3.0f;
    Vec_8009A640 *src = bringer_effect_vec_table;
    Pair_8009A640 *dst = self->pts;
    for (i = 0; i < 6; i++) {
        f32 x = src->x;
        f32 z = src->z;
        src++;
        dst->ax = x * outer;
        dst->ay = 0.0f;
        dst->az = z * outer;
        dst->bx = x * inner;
        dst->by = 0.0f;
        dst->bz = z * inner;
        dst++;
    }
}

}

#include "types.h"

extern "C" {

extern s32 bringer_tp_absorb_ring_vtable[];

void *destroy_object_804FE7C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = bringer_tp_absorb_ring_vtable;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"

struct RecoveredGlobal_8009A704_lbl_8048FE7C {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
extern s32 bringer_tp_absorb_effect_name;
u8 *construct_bringer_tp_absorb_ring(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_8009A704_lbl_8048FE7C_size[sizeof(RecoveredGlobal_8009A704_lbl_8048FE7C) == 0x18 ? 1 : -1];
u8 *construct_bringer_tp_absorb_ring(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = bringer_tp_absorb_ring_vtable;
    *(s32 *)((s8 *)arg0 + 0) = (s32) bringer_tp_absorb_effect_name;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) 10.0f;
    *(f32 *)((s8 *)arg0 + 0x3C) = farg0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) 1.0f;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    fn_8009A640((Obj_8009A640 *)arg0);
    fn_8009A598((Obj_8009A598 *)arg0);
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
s32 is_vec_xz_cross_negative(void *, void *);
s32 rotate_xz_pair_by_angle(void *, void *, int);
extern s32 bringer_rush_effect_vtable[];
extern s32 bringer_rush_effect_name;
}

#include "types.h"

extern "C" {

typedef Vec_8009A640 Vec_8009A7A4;
s32 rand();
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
  v = bringer_effect_vec_table;
  for (i = 0; i < 6; i++)
  {
    sn = sin_table_lookup(ang);
    cs = cos_table_lookup(ang);
    v->x = sn;
    v->y = 0.0f;
    v->z = cs;
    ang += 0x6666;
    v++;
  }

  b = (u8) ((u32) get_random_float__21TObjEneMe3ShinowaRealFv(255.0f * (3.0517578125e-05f * rand())));
  new_var = get_random_float__21TObjEneMe3ShinowaRealFv(255.0f * (3.0517578125e-05f * rand()));
  c = (((u8) ((u32) new_var)) << 8) | b;
  p = bringer_effect_color_table;
  for (j = 0; j < 12; j++)
  {
    c = ((u16) c) << 8;
    c |= (u8) ((u32) get_random_float__21TObjEneMe3ShinowaRealFv(255.0f * (3.0517578125e-05f * rand())));
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
    if (temp_f1 <= 0.02f) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x308) = (f32) (*(f32 *)((s8 *)arg0 + 0x20) * temp_f1);
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x310) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) * *(f32 *)((s8 *)arg0 + 0x2C));
    *(f32 *)((s8 *)arg0 + 0x2C) *= 0.8f;
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
    stack.spC = 0.0f;
    *(f32 *)((s8 *)arg0 + 0x20) = sin_table_lookup((int) (*(s32 *)((s8 *)arg2 + 0x60)));
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) 0.0f;
    *(f32 *)((s8 *)arg0 + 0x28) = cos_table_lookup((int) (*(s32 *)((s8 *)arg2 + 0x60)));
    if (is_vec_xz_cross_negative((void *) (arg0 + 0x20), (void *) (&stack.sp8)) != 0) {
        rotate_xz_pair_by_angle((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (-0x1800));
    } else {
        rotate_xz_pair_by_angle((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (0x1800));
    }
    return arg0;
}

}
