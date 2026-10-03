#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredFields_802698C4_arg0 {
    u8 unknown_0[0x6C];
    f32 field_6C;
    u8 unknown_70[0x14];
    f32 field_84;
};

struct Ent_802695A8 { u32 flags; u32 x; };

struct Msg_802695A8 {
    u8 pad0[0x70];
    s32 sel;
    s32 cur;
    u8 pad2[4];
    Ent_802695A8 *ents;
    u8 pad3[0xC];
    s32 cnt;
};

struct Meta_802697B4 {
    u32 flags;
    s32 timer;
};

struct Q_802697B4 {
    u8 pad0[0x6C];
    f32 scroll;
    s32 oldest;
    s32 reveal;
    s32 duration;
    Meta_802697B4 *meta;
    u8 pad80[0xC];
    s32 capacity;
};

struct Meta_80269664 { u32 flags; s32 timer; };

struct Q_80269664 {
    u8 pad0[0x70];
    s32 oldest;
    u8 pad74[0x7C - 0x74];
    Meta_80269664 *meta;
    u8 pad80[4];
    f32 height;
    u8 pad88[4];
    s32 capacity;
};

struct Ent_80269664 { u8 pad0[0xC]; f32 y; u8 pad10[4]; f32 h; };

extern "C" {
extern const f32 lbl_805DD224;
extern const f32 lbl_805DD228;
void update_scroll__14TWindowMessageFPv(struct RecoveredFields_802698C4_arg0 *arg0);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void set_default_status__17TWindowDuelResultFPvi(void *, s32);
extern const f32 lbl_805DD218;
extern const f32 lbl_805DD21C;
void scroll_up_line__14TWindowMessageFPvPv(u8 *arg0, u8 *arg1);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
u32 get_field_20__17TWindowSubComCardFPv(void *);
void fn_802695A8(Msg_802695A8 *arg0);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
u32 get_field_20__17TWindowSubComCardFPv(void *);
void scroll_up_line__14TWindowMessageFPvPv(u8 *arg0, u8 *arg1);
void fn_802697B4(Q_802697B4 *w);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
u32 get_field_20__17TWindowSubComCardFPv(void *);
extern const f32 lbl_805DD220;
void fn_80269664(Q_80269664 *arg0);
}

extern "C" {

void scroll_up_line__14TWindowMessageFPvPv(u8 *arg0, u8 *arg1) {
    f32 d;
    s32 i;
    u8 *e;
    i = 0;
    d = lbl_805DD218 + *(f32 *)(arg1 + 0x14);
    *(f32 *)(arg0 + 0x84) -= d;
    *(f32 *)(arg0 + 0x6C) -= d;
    *(f32 *)(arg0 + 0x80) -= d;
    for (; i < *(s32 *)(arg0 + 0x8C); i++) {
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, i);
        *(f32 *)(e + 0xC) -= d;
    }
    *(f32 *)(arg1 + 0xC) = lbl_805DD21C;
    *(f32 *)(arg1 + 0x14) = lbl_805DD21C;
    set_default_status__17TWindowDuelResultFPvi(arg1, 0);
}

void fn_802695A8(Msg_802695A8 *arg0) {
    u16 *e;
    s32 t;
    e = ((u16 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, arg0->cur));
    while (get_field_20__17TWindowSubComCardFPv(e) != 0 && (*e & 0x10)) {
        t = arg0->cur + 1;
        arg0->cur = t;
        if (t >= arg0->cnt) {
            arg0->cur = 0;
        }
        if (arg0->cur == arg0->sel) {
            break;
        }
        e = ((u16 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, arg0->cur));
        if (arg0->ents[arg0->cur].flags & 8) {
            arg0->ents[arg0->cur].flags &= ~8;
            *e &= ~8;
        }
    }
}

void fn_80269664(Q_80269664 *arg0) {
    Ent_80269664 *e;
    u32 i;
    Meta_80269664 *m;
    s32 idx;
    f32 h;
    for (i = 0; i < (u32)arg0->capacity; i++) {
        if (get_field_20__17TWindowSubComCardFPv(get_array_entry__20TWindowSubStatusDispFPvi(arg0, i)) != 0) {
            if ((arg0->meta[i].flags & 4) && arg0->meta[i].timer > 0) {
                arg0->meta[i].timer--;
            }
        }
    }
    idx = arg0->oldest;
    e = (Ent_80269664 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, idx);
    m = &arg0->meta[idx];
    while (get_field_20__17TWindowSubComCardFPv(e) != 0 && m->timer <= 0 && (m->flags & 4)) {
        m->flags &= ~4;
        h = lbl_805DD220 + (e->y + e->h);
        if (arg0->height < h) {
            arg0->height = h;
        }
        idx++;
        if (idx >= arg0->capacity) {
            idx = 0;
        }
        if (idx == arg0->oldest) {
            break;
        }
        e = (Ent_80269664 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, idx);
        m = &arg0->meta[idx];
    }
}

void fn_802697B4(Q_802697B4 *w) {
    u8 *e;
    Meta_802697B4 *m;
    e = get_array_entry__20TWindowSubStatusDispFPvi(w, w->oldest);
    m = &w->meta[w->oldest];
    while (get_field_20__17TWindowSubComCardFPv(e) != 0 && *(f32 *)(e + 0xC) + *(f32 *)(e + 0x14) < w->scroll) {
        scroll_up_line__14TWindowMessageFPvPv((u8 *)w, e);
        m->flags = 0;
        m->timer = 0;
        if (w->reveal == w->oldest) {
            if (++w->reveal >= w->capacity) {
                w->reveal = 0;
            }
        }
        if (++w->oldest >= w->capacity) {
            w->oldest = 0;
        }
        e = get_array_entry__20TWindowSubStatusDispFPvi(w, w->oldest);
        m = &w->meta[w->oldest];
        if (m->flags & 8) {
            m->flags &= ~8;
            *(u16 *)e &= ~8;
        }
    }
}

#pragma push
#pragma opt_common_subs off
void update_scroll__14TWindowMessageFPv(struct RecoveredFields_802698C4_arg0 *arg0) {
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f1;
    temp_f3 = arg0->field_84;
    temp_f2 = temp_f3 - arg0->field_6C;
    var_f1 = lbl_805DD224 * temp_f2;
    if (var_f1 < lbl_805DD228) {
        var_f1 = lbl_805DD228;
    }
    if (temp_f2 < var_f1) {
        arg0->field_6C = temp_f3;
        return;
    }
    arg0->field_6C += var_f1;
}
#pragma pop

}
