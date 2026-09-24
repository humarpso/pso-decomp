#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80265A38 {
    f32 sp8;
    f32 spC;
};

struct E_80265BF8 { u32 a; u32 b; };

struct Obj_80265BF8 { u8 pad[0x78]; s16 f78; u8 pad2[6]; E_80265BF8 *entries; };

struct Win_80265C30 { u8 pad[0x38]; f32 x; u8 pad3c[0x3a]; s16 count; };

struct Ent_80265C30 { u8 pad[0x8]; f32 x; u8 padc[4]; f32 w; f32 h; };

struct Win_80265E60 { u8 pad[0x2c]; u32 flags; u8 pad30[8]; f32 x; f32 y; u8 pad40[0x36]; s16 count; u8 pad78[4]; f32 height; };

struct Ent_80265E60 { u8 pad[0x14]; f32 h; };

extern "C" {
M2C_UNK TWindowSubComCard__sub_8026D740(int, void *, void *);
extern const f32 lbl_805DD150;
extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;
void TWindowSubComCard__sub_80265A38(u8 *arg0);
u32 TWindowSubComCard__sub_80265BF8(Obj_80265BF8 *o);
Ent_80265C30 *get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
void *get_field_20__17TWindowSubComCardFPv(void *e);
void TWindowSubStatusDisp__sub_8025A9C0(Ent_80265C30 *e, f32 x);
extern const f32 lbl_805DD15C;
extern const f32 lbl_805DD160;
extern const f32 lbl_805DD148;
extern const f32 lbl_805DD168;
extern const f32 lbl_805DD150;
void TWindowSubComCard__sub_80265C30(Win_80265C30 *self);
Ent_80265C30 *get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
void *get_field_20__17TWindowSubComCardFPv(void *e);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
extern const f32 lbl_805DD150;
extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;
extern const f32 lbl_805DD16C;
extern const f64 lbl_8044F330;
void TWindowSubComCard__sub_80265E60(Win_80265E60 *self, f32 x);
}

extern "C" {

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0);
void set_scroll_target__17TWindowSubComCardFPvff(void *arg0, f32 farg0, f32 farg1);
void set_selected_index__17TWindowSubComCardFPvs(void *arg0, s16 arg1);
M2C_UNK TWindowSubComCard__sub_80265484(void *);
M2C_UNK TWindowSubComCard__sub_8026556C(void *);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);

void TWindowSubComCard__sub_80265A38(u8 *arg0) {
    Stack_80265A38 stack;
    f32 temp_f1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        stack.sp8 = lbl_805DD150;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - lbl_805DD154;
        stack.spC = temp_f1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
            stack.spC = temp_f1 - lbl_805DD158;
        }
        TWindowSubComCard__sub_8026D740((int) (M2C_FIELD(arg0, u32 *, 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

u32 TWindowSubComCard__sub_80265BF8(Obj_80265BF8 *o) {
    return o->entries[o->f78].b;
}

void set_selected_index__17TWindowSubComCardFPvs(void *arg0, s16 arg1) {
    if ((arg1 >= 0) && (arg1 < (s16) M2C_FIELD(arg0, s16 *, 0x76))) {
        M2C_FIELD(arg0, s16 *, 0x78) = arg1;
    }
}

extern const f32 lbl_805DD154;

#pragma push
#pragma fp_contract on
void TWindowSubComCard__sub_80265C30(Win_80265C30 *self) {
    f32 left = self->x - lbl_805DD15C;
    f32 right = lbl_805DD160 * self->x - lbl_805DD148;
    u32 i;
    for (i = 0; i < self->count; i++) {
        Ent_80265C30 *e = get_array_entry__20TWindowSubStatusDispFPvi(self, i);
        if (get_field_20__17TWindowSubComCardFPv(e) != 0) {
            TWindowSubStatusDisp__sub_8025A9C0(e, left);
            if (e->h > lbl_805DD168) {
                e->x = lbl_805DD150;
            } else {
                e->x = right - lbl_805DD160 * e->w;
            }
        }
    }
}
#pragma pop

void set_scroll_target__17TWindowSubComCardFPvff(void *arg0, f32 farg0, f32 farg1) {
    TWindowSubComCard__sub_80265E60((Win_80265E60 *)(arg0), farg0);
    if (M2C_FIELD(arg0, f32 *, 0x3C) > farg1) {
        TWindowSubComCard__sub_8026556C(arg0);
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (farg1 - lbl_805DD154);
    save_position__17TWindowSubComCardFPv(arg0);
    TWindowSubComCard__sub_80265484(arg0);
}

extern const f32 lbl_805DD154;

void TWindowSubComCard__sub_80265E60(Win_80265E60 *self, f32 x) {
    f32 sum = lbl_805DD150;
    u32 i;
    for (i = 0; i < self->count; i++) {
        Ent_80265E60 *e = ((Ent_80265E60 *)get_array_entry__20TWindowSubStatusDispFPvi(self, i));
        if (get_field_20__17TWindowSubComCardFPv(e) != 0) {
            if (!(e->h <= lbl_8044F330)) {
                sum += lbl_805DD16C + e->h;
            }
        }
    }
    sum -= lbl_805DD16C;
    if (self->flags & 0x40) {
        sum += lbl_805DD158;
    }
    self->x = x;
    self->y = lbl_805DD154 + sum;
    self->height = sum;
    save_position__17TWindowSubComCardFPv(self);
}

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (temp_r4 & 0x20) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 & 0xFFFFFFDF);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD154 + M2C_FIELD(arg0, f32 *, 0x7C));
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
