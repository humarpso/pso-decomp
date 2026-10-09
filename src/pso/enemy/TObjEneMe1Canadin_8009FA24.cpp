#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Vec_8009FADC { f32 x, y, z; };

struct Entry_8009FADC { f32 f; s32 val; Vec_8009FADC pos; };

struct Obj_8009FADC { u8 pad[0x1c]; s32 count; s32 idx; u8 pad2[8]; Entry_8009FADC *entries; };

struct Obj_8009FB54 { f32 alpha; u32 color; };

struct Rec_8009FC44 { f32 a; s32 b; f32 c; f32 d; f32 e; };

struct Obj_8009FC44 {
    s32 descriptor;
    u8 pad4[0x18 - 4];
    void *vtbl;
    s32 count;
    s32 field20;
    s32 field24;
    void *buf28;
    Rec_8009FC44 *recs;
    s32 field30;
    f32 field34;
};

struct Rec_8009FA24 { u8 pad[0x14]; };

struct Obj_8009FA24 { u8 pad0[0x1C]; s32 n1c; s32 n20; s32 sel; u8 pad28[4]; Rec_8009FA24 *recs; s32 a30; f32 f34; };

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_8009FADC *dst, const Vec_8009FADC *src);
void push_history_entry__17TObjEneMe1CanadinFPvfPvi(Obj_8009FADC *self, f32 f, const Vec_8009FADC *pos, s32 val);
extern const f32 lbl_805D993C;
extern const f32 lbl_805D9940;
s32 fade_alpha_step__17TObjEneMe1CanadinFPvif(Obj_8009FB54 *self, s32 dec, f32 scale);
void *alloc_buffer__11TOBoss4RockFPv(s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_80490410[];
extern s32 lbl_805D29C4;
extern const f32 lbl_805D993C;
extern const f32 lbl_805D9944;
Obj_8009FC44 *TObjEneMe1Canadin__sub_8009FC44(Obj_8009FC44 *self, void *parent, s32 count);
s32 fade_alpha_step__17TObjEneMe1CanadinFPvif(Obj_8009FB54 *self, s32 dec, f32 scale);
void select_first_valid_record__17TObjEneMe1CanadinFPv(Obj_8009FA24 *arg0);
}

extern "C" {

void *destroy__17TObjEneMe1CanadinFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free__11TOBoss4RockFUi(void *);

extern M2C_UNK lbl_80490410[];

struct Obj_8009FB54;
typedef s32 (*Fn_8009FA24)(Rec_8009FA24 *, f32, s32);
void select_first_valid_record__17TObjEneMe1CanadinFPv(Obj_8009FA24 *arg0) {
    s32 i;
    arg0->sel = arg0->n20 - 1;
    for (i = arg0->n20 - 1; i >= 0; i--) {
        if (((Fn_8009FA24)fade_alpha_step__17TObjEneMe1CanadinFPvif)(&arg0->recs[i], arg0->f34, arg0->a30) == 0) {
            arg0->sel = i;
        }
    }
    for (i = arg0->n1c - 1; i >= arg0->n20; i--) {
        if (((Fn_8009FA24)fade_alpha_step__17TObjEneMe1CanadinFPvif)(&arg0->recs[i], arg0->f34, arg0->a30) == 0) {
            arg0->sel = i;
        }
    }
}

void push_history_entry__17TObjEneMe1CanadinFPvfPvi(Obj_8009FADC *self, f32 f, const Vec_8009FADC *pos, s32 val) {
    s32 i = self->idx;
    self->entries[i].f = f;
    self->entries[i].val = val;
    VecCopy__FP3VecPC3Vec(&self->entries[i].pos, pos);
    self->idx++;
    if (self->idx >= self->count) {
        self->idx = 0;
    }
}

s32 fade_alpha_step__17TObjEneMe1CanadinFPvif(Obj_8009FB54 *self, s32 dec, f32 scale) {
    s32 a;
    if (lbl_805D993C == self->alpha) {
        return 1;
    }
    self->alpha = self->alpha * scale;
    if (self->alpha < lbl_805D9940) {
        self->alpha = lbl_805D993C;
        return 1;
    }
    a = (self->color >> 24) - dec;
    self->color &= 0xFFFFFF;
    if (a <= 0) {
        return 1;
    }
    self->color |= a << 24;
    return 0;
}

void *destroy__17TObjEneMe1CanadinFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490410;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x28));
        M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_8009FC44 *TObjEneMe1Canadin__sub_8009FC44(Obj_8009FC44 *self, void *parent, s32 count) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vtbl = ((s32 *)&lbl_80490410);
    self->descriptor = lbl_805D29C4;
    self->count = count;
    self->field20 = 0;
    self->field24 = 0;
    self->buf28 = alloc_buffer__11TOBoss4RockFPv(self->count << 5);
    self->recs = (Rec_8009FC44 *)alloc_buffer__11TOBoss4RockFPv(self->count * 0x14);
    for (i = 0; i < self->count; i++) {
        self->recs[i].a = lbl_805D993C;
        self->recs[i].b = 0;
        self->recs[i].c = lbl_805D993C;
        self->recs[i].d = lbl_805D993C;
        self->recs[i].e = lbl_805D993C;
    }
    self->field30 = 0x30;
    self->field34 = lbl_805D9944;
    return self;
}

}

#include "types.h"

extern "C" {

void TObjEneMe1Canadin__sub_8009FD2C(void);

void TObjEneMe1Canadin__sub_8009FD2C(void) {  }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma fp_contract on
extern "C" {

#define VC_B ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK fn_8009E1D4(s32, void *);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK construct__12TTecZondeEffFPvPvPvPvf(void *, s32, void *, void *, f32);
void subtract_vector(void *, void *);
extern s32 tl_05;
extern const f32 lbl_805D9948;

void update_zonde_projectile(u8 *arg0) {
    M2C_UNK sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    s32 var_r31;

    var_r31 = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + lbl_805D9948);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x28);
    if (temp_f1 > M2C_FIELD(arg0, f32 *, 0x34)) {
        VC_B(arg0 + 0x50, arg0 + 0x44);
        var_r31 = 1;
    } else {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x30);
        if (temp_f1 < temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
        } else {
            temp_f2 = temp_f1 - temp_f0;
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) (temp_f2 * (M2C_FIELD(arg0, f32 *, 0x20) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x24));
        }
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + M2C_FIELD(arg0, f32 *, 0x5C));
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) + M2C_FIELD(arg0, f32 *, 0x64));
    }
    VC_B(&sp8, arg0 + 0x50);
    subtract_vector(&sp8, arg0 + 0x38);
    temp_f31 = update_scale__15TObjBoss2TunnelFPv(&sp8);
    M2C_UNK nw_ret = __nw__7TObjectFUl(0x260);
    if (nw_ret != 0U) {
        construct__12TTecZondeEffFPvPvPvPvf((void *)nw_ret, tl_05, arg0 + 0x38, &sp8, temp_f31);
    }
    VC_B(arg0 + 0x38, arg0 + 0x50);
    if (var_r31 != 0) {
        fn_8009E1D4(M2C_FIELD(arg0, s32 *, 0x1C), arg0 + 0x44);
        queue_destruction__7TObjectFv(arg0);
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8009FFD8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct Vec_8009FEB8 { f32 x, y, z; };

struct Obj_8009FEB8 {
    s32 descriptor;
    u8 pad4[0x18 - 4];
    void *vtbl;
    void *parent;
    f32 accel;
    f32 y0;
    f32 time;
    f32 duration;
    f32 remain;
    f32 dist;
    Vec_8009FEB8 start;
    Vec_8009FEB8 end;
    Vec_8009FEB8 pos;
    Vec_8009FEB8 dir;
};

extern "C" {
void init_xyz_limits__10TObjPlayerFv(void);
M2C_UNK draw_line_list(void *, int, int);
void draw_debug_line__17TObjEneMe1CanadinFi(s32 arg0);
#define VC_C ((void (*)(void *, const void *))VecCopy__FP3VecPC3Vec)
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
void subtract_vector(void *, void *);
extern M2C_UNK lbl_80490428[];
extern s32 lbl_805D29C0;
extern const f32 lbl_805D993C;
extern const f32 lbl_805D9948;
Obj_8009FEB8 *TObjEneMe1Canadin__sub_8009FEB8(Obj_8009FEB8 *self, void *parent, Vec_8009FEB8 *from, Vec_8009FEB8 *to);
}

extern "C" {

void *TObjEneMe1Canadin__sub_8009FE60(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80490428[];

void *TObjEneMe1Canadin__sub_8009FE60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490428;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_8009FEB8 *TObjEneMe1Canadin__sub_8009FEB8(Obj_8009FEB8 *self, void *parent, Vec_8009FEB8 *from, Vec_8009FEB8 *to) {
    __ct__7TObjectFP7TObject(self, parent);
    self->vtbl = ((s32 *)&lbl_80490428);
    self->descriptor = lbl_805D29C0;
    self->parent = parent;
    VC_C(&self->start, from);
    VC_C(&self->end, to);
    VC_C(&self->dir, &self->end);
    subtract_vector(&self->dir, &self->start);
    self->dir.y = lbl_805D993C;
    self->dist = clamp_velocity__15TObjBoss2TunnelFPv(&self->dir);
    if (self->dist > lbl_805D9948) {
        self->duration = lbl_805D9948;
        self->remain = self->dist - self->duration;
    } else {
        self->duration = self->dist;
        self->remain = lbl_805D993C;
    }
    self->y0 = self->start.y;
    self->accel = (self->end.y - self->start.y) / (self->duration * self->duration);
    self->time = lbl_805D993C;
    self->dir.x *= lbl_805D9948;
    self->dir.z *= lbl_805D9948;
    VC_C(&self->pos, &self->start);
    return self;
}

void draw_debug_line__17TObjEneMe1CanadinFi(s32 arg0) {
    Stack_8009FFD8 stack;
    stack.sp8 = arg0 + 0x28;
    stack.spC = arg0 + 0x40;
    stack.sp10 = 0;
    stack.sp14 = 2;
    init_xyz_limits__10TObjPlayerFv();
    draw_line_list((void *) (&stack.sp8), (int) (1), (int) (5));
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_periodic_effect__17TObjEneMe1CanadinFPv(u8 *arg0);
void *TObjEneMe1Canadin__sub_800A00A8(void *arg0, s16 arg1);
#define VC_D ((M2C_UNK (*)(void *, s32))VecCopy__FP3VecPC3Vec)
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_800A02AC(void *, s32, void *, void *);

void spawn_periodic_effect__17TObjEneMe1CanadinFPv(u8 *arg0) {
    VC_D(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x20));
    VC_D(arg0 + 0x34, M2C_FIELD(arg0, s32 *, 0x24));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 5) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        u32 newp = __nw__7TObjectFUl(0x3C);
        if (newp != 0U) {
            fn_800A02AC((void*)newp, M2C_FIELD(arg0, s32 *, 0x10), arg0 + 0x28, arg0 + 0x34);
        }
    }
}

extern M2C_UNK lbl_80490440[];

void *TObjEneMe1Canadin__sub_800A00A8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490440;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init__17TObjEneMe1CanadinFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 rand(M2C_UNK);

extern const f64 lbl_8043A460;
extern M2C_UNK lbl_80490440[];
extern s32 lbl_805D29BC;
extern const f32 lbl_805D994C;
extern const f32 lbl_805D9950;

#pragma opt_propagation off
u8 *init__17TObjEneMe1CanadinFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ((M2C_UNK (*)(u8 *, s32))__ct__7TObjectFP7TObject)(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490440;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29BC;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    VC_D(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x20));
    VC_D(arg0 + 0x34, M2C_FIELD(arg0, s32 *, 0x24));
    {
        s32 k = (s32) 0xFFFF0000;
        M2C_FIELD(arg0, s32 *, 0x40) = k + 0x33;
        M2C_FIELD(arg0, s32 *, 0x44) = k + 0x33;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (lbl_805D994C * (lbl_805D9950 * (f32) rand(k)));
    }
    return arg0;
}

}
