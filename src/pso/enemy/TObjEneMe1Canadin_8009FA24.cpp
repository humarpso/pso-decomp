#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Vec_8009FADC { f32 x, y, z; };

struct Entry_8009FADC { f32 f; s32 val; Vec_8009FADC pos; };

struct Obj_8009FADC { u8 pad[0x1c]; s32 count; s32 idx; u8 pad2[8]; Entry_8009FADC *entries; };

struct Obj_8009FB54 { f32 alpha; u32 color; };

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_8009FADC *dst, const Vec_8009FADC *src);
void TObjEneMe1Canadin__sub_8009FADC(Obj_8009FADC *self, f32 f, const Vec_8009FADC *pos, s32 val);
extern const f32 lbl_805D993C;
extern const f32 lbl_805D9940;
s32 TObjEneMe1Canadin__sub_8009FB54(Obj_8009FB54 *self, s32 dec, f32 scale);
}

extern "C" {

void *destroy__17TObjEneMe1CanadinFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free__11TOBoss4RockFUi(void *);

extern M2C_UNK lbl_80490410[];

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

}
