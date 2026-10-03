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

struct Ent_80265F60 { u8 pad[0x10]; f32 w; f32 h; };

struct Win_80265F60 { u8 pad[0x2C]; u32 flags; u8 pad30[8]; f32 x; f32 y; u8 pad40[0x36]; s16 count; u8 pad78[4]; f32 height; };

struct Ent_80265AA4 { u32 flags; u32 x; };

struct Card_80265AA4 {
    u8 pad0[0x74];
    s16 cur;
    s16 cnt;
    u8 pad1[8];
    Ent_80265AA4 *ents;
};

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK clamp_list_scroll_offset(int, void *, void *);
extern const f32 lbl_805DD150;
extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;
void TWindowSubComCard__sub_80265A38(u8 *arg0);
u32 TWindowSubComCard__sub_80265BF8(Obj_80265BF8 *o);
Ent_80265C30 *get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
void *get_field_20__17TWindowSubComCardFPv(void *e);
void measure_message_text_width(Ent_80265C30 *e, f32 x);
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
extern const f32 lbl_805DD150;
extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;
extern const f32 lbl_805DD15C;
extern const f32 lbl_805DD16C;
extern const f64 lbl_8044F330;
Ent_80265C30 *get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
void *get_field_20__17TWindowSubComCardFPv(void *e);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
void TWindowSubComCard__sub_80265F60(Win_80265F60 *self);
Ent_80265C30 *get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
void *get_field_20__17TWindowSubComCardFPv(void *e);
void advance_past_disabled_menu_rows(Card_80265AA4 *arg0);
void TWindowSubComCard__sub_80266078(u8 *arg0);
Ent_80265C30 *get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
void *get_field_20__17TWindowSubComCardFPv(void *e);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
void measure_message_text_width(Ent_80265C30 *e, f32 x);
extern const f64 lbl_8044F330;
extern const f32 lbl_805DD150;
extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;
extern const f32 lbl_805DD16C;
void TWindowSubComCard__sub_80265CFC(u8 *arg0, f32 farg0);
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
        clamp_list_scroll_offset((int) (M2C_FIELD(arg0, u32 *, 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

void advance_past_disabled_menu_rows(Card_80265AA4 *arg0) {
    u16 *e;
    s16 t;
    if (arg0->cur < arg0->cnt) {
        e = ((u16 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg0->cur)));
        while (((u32)get_field_20__17TWindowSubComCardFPv(e)) != 0 && (*e & 0x10)) {
            t = arg0->cur + 1;
            arg0->cur = t;
            if (t >= arg0->cnt) {
                break;
            }
            e = ((u16 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg0->cur)));
            if (arg0->ents[arg0->cur].flags & 2) {
                arg0->ents[arg0->cur].flags &= ~2;
                *e &= ~8;
            }
        }
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
            measure_message_text_width(e, left);
            if (e->h > lbl_805DD168) {
                e->x = lbl_805DD150;
            } else {
                e->x = right - lbl_805DD160 * e->w;
            }
        }
    }
}
#pragma pop

void TWindowSubComCard__sub_80265CFC(u8 *arg0, f32 farg0) {
    f32 h;
    u32 i;
    Ent_80265C30 *e;
    h = lbl_805DD150;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, i);
        if (get_field_20__17TWindowSubComCardFPv(e) != 0 && !(e->h <= lbl_8044F330)) {
            measure_message_text_width(e, farg0);
            h += lbl_805DD16C + e->h;
        }
    }
    h -= lbl_805DD16C;
    if (*(s32 *)(arg0 + 0x2C) & 0x40) {
        h += lbl_805DD158;
    }
    *(f32 *)(arg0 + 0x38) = farg0;
    *(f32 *)(arg0 + 0x3C) = lbl_805DD154 + h;
    *(f32 *)(arg0 + 0x7C) = h;
    save_position__17TWindowSubComCardFPv(arg0);
}

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

struct Ent_80265C30;
void TWindowSubComCard__sub_80265F60(Win_80265F60 *self) {
    f32 width = lbl_805DD150;
    f32 sum = width;
    u32 i;
    for (i = 0; i < self->count; i++) {
        Ent_80265F60 *e = (Ent_80265F60 *)get_array_entry__20TWindowSubStatusDispFPvi(self, i);
        if (get_field_20__17TWindowSubComCardFPv(e) != 0) {
            if (e->w > width) {
                width = e->w;
            }
            if (!(e->h <= lbl_8044F330)) {
                sum += lbl_805DD16C + e->h;
            }
        }
    }
    sum -= lbl_805DD16C;
    self->height = sum;
    if (self->flags & 0x40) {
        sum += lbl_805DD158;
    }
    self->x = lbl_805DD15C + width;
    self->y = lbl_805DD154 + sum;
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

void TWindowSubComCard__sub_80266078(u8 *arg0) {
    f32 gap;
    f64 zero;
    f32 y;
    u32 i;
    u8 *e;
    f32 h;
    y = lbl_805DD150;
    gap = lbl_805DD16C;
    zero = lbl_8044F330;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, i);
        if (((u32 (*)(void))get_field_20__17TWindowSubComCardFPv)() != 0) {
            *(f32 *)(e + 0xC) = y;
            h = *(f32 *)(e + 0x14);
            if (!(h <= zero)) {
                y += gap + h;
            }
        }
    }
}

}
