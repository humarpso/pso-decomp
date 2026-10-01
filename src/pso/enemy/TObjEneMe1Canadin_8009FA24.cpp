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
void TObjEneMe1Canadin__sub_8009FADC(Obj_8009FADC *self, f32 f, const Vec_8009FADC *pos, s32 val);
extern const f32 lbl_805D993C;
extern const f32 lbl_805D9940;
s32 TObjEneMe1Canadin__sub_8009FB54(Obj_8009FB54 *self, s32 dec, f32 scale);
void *alloc_buffer__11TOBoss4RockFPv(s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_80490410[];
extern s32 lbl_805D29C4;
extern const f32 lbl_805D993C;
extern const f32 lbl_805D9944;
Obj_8009FC44 *TObjEneMe1Canadin__sub_8009FC44(Obj_8009FC44 *self, void *parent, s32 count);
s32 TObjEneMe1Canadin__sub_8009FB54(Obj_8009FB54 *self, s32 dec, f32 scale);
void TObjEneMe1Canadin__sub_8009FA24(Obj_8009FA24 *arg0);
}

extern "C" {

void *destroy__17TObjEneMe1CanadinFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free__11TOBoss4RockFUi(void *);

extern M2C_UNK lbl_80490410[];

struct Obj_8009FB54;
typedef s32 (*Fn_8009FA24)(Rec_8009FA24 *, f32, s32);
void TObjEneMe1Canadin__sub_8009FA24(Obj_8009FA24 *arg0) {
    s32 i;
    arg0->sel = arg0->n20 - 1;
    for (i = arg0->n20 - 1; i >= 0; i--) {
        if (((Fn_8009FA24)TObjEneMe1Canadin__sub_8009FB54)(&arg0->recs[i], arg0->f34, arg0->a30) == 0) {
            arg0->sel = i;
        }
    }
    for (i = arg0->n1c - 1; i >= arg0->n20; i--) {
        if (((Fn_8009FA24)TObjEneMe1Canadin__sub_8009FB54)(&arg0->recs[i], arg0->f34, arg0->a30) == 0) {
            arg0->sel = i;
        }
    }
}

void TObjEneMe1Canadin__sub_8009FADC(Obj_8009FADC *self, f32 f, const Vec_8009FADC *pos, s32 val) {
    s32 i = self->idx;
    self->entries[i].f = f;
    self->entries[i].val = val;
    VecCopy__FP3VecPC3Vec(&self->entries[i].pos, pos);
    self->idx++;
    if (self->idx >= self->count) {
        self->idx = 0;
    }
}

s32 TObjEneMe1Canadin__sub_8009FB54(Obj_8009FB54 *self, s32 dec, f32 scale) {
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
