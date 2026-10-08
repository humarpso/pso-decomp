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
void VecCopy__FP3VecPC3Vec(void *, const void *);
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
    VecCopy__FP3VecPC3Vec(&self->start, from);
    VecCopy__FP3VecPC3Vec(&self->end, to);
    VecCopy__FP3VecPC3Vec(&self->dir, &self->end);
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
    VecCopy__FP3VecPC3Vec(&self->pos, &self->start);
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
