#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Gauge_80257784 {
    u16 flags;
    u8 pad2[0x8 - 0x2];
    f32 f8;
    f32 fC;
    f32 f10;
    f32 f14;
    s32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    u8 pad28[0x60 - 0x28];
    s32 f60;
    s32 f64;
};

struct Parent_80257784 {
    u8 pad0[0x10];
    f32 f10;
    f32 f14;
    f32 f18;
    u8 pad1C[0x30 - 0x1C];
    s32 f30;
    u8 pad34[0x38 - 0x34];
    f32 f38;
};

struct Pos_80257784 { f32 x, y; };

extern "C" {
M2C_UNK TWindowSubStatusDisp__sub_80256C40(void *, void *, void *, f32);
M2C_UNK draw_status_gauge_bar(void *, void *, void *, f32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK begin_screen_draw(s32, f32, f32, f32);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK set_draw_texture_and_color(s32, s32);
M2C_UNK set_constant_material_color(s32);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DCED8;
extern const f32 lbl_805DCEDC;
extern const f32 lbl_805DCEE0;
extern const f32 lbl_805DCEE4;
extern const f32 lbl_805DCEE8;
extern const f32 lbl_805DCEEC;
void TWindowSubStatusDisp__sub_80257784(Gauge_80257784 *self, Parent_80257784 *parent);
}

extern "C" {

struct Col_802575C0 { u8 r, g, b, a; };

struct Fade_802575C0 {
    u16 flags;
    u8 pad2[0x16];
    Col_802575C0 col;
    u8 pad1c[0x2C - 0x1C];
    u32 rgb;
    u8 pad30[4];
    f32 tr, tg, tb;
    u8 pad40[4];
    f32 cr, cg, cb;
    u8 pad50[4];
    f32 dr, dg, db;
};

struct RecoveredGlobal_80257B4C_lbl_804CF948 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Base_80257BC0 { u16 flags; u8 pad[2]; };

struct Item_80257BC0 : Base_80257BC0 {
    virtual void m0();
    virtual void m1();
    virtual void draw(void *ctx);
};

struct List_80257BC0 { u32 count; Item_80257BC0 **items; };

struct Base_80257C28 { u32 x0; };

struct Ent_80257C28 : Base_80257C28 { virtual void m0(); virtual void m1(); };

struct List_80257C28 { u32 count; Ent_80257C28 **items; };

struct Win_80257C28 { u8 pad[0x2C]; u32 flags; u8 pad2[0x2C]; s32 counter; };

struct B_80257CB8 { u8 pad[4]; };

struct Elem_80257CB8 : B_80257CB8 {
    virtual void dtor(s32 flag);
};

struct List_80257CB8 {
    u32 count;
    Elem_80257CB8 **items;
};

struct List_80257D44 {
    u32 count;
    void **items;
};

struct Desc_80257D44 {
    u32 cols;
    u32 rows;
    u32 recs[1];
};

typedef char RecoveredGlobal_80257B4C_lbl_804CF948_size[sizeof(RecoveredGlobal_80257B4C_lbl_804CF948) == 0x18 ? 1 : -1];

typedef void *(*Ctor_80257D44)(void *, void *, s32);

struct Bar_8025799C {
    u16 flags;
    u8 pad0[0x14 - 2];
    f32 width_max;
    u32 color18;
    f32 width;
    f32 max;
    f32 target;
    s16 shown;
    s16 timer;
};

M2C_UNK __dl__FPv(void *);
void * alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void free__11TOBoss4RockFUi(void *);
void ** alloc_buffer__11TOBoss4RockFPv(u32);
void update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 play_sound_effect(u32, s32, s32, s32);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(M2C_UNK, M2C_UNK *);
int TWindowSubStatusDisp__sub_80256BDC(void*, int);
s32 TWindowSubStatusDisp__sub_80256C00();
void step_gauge_bar_width(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257298(void *, s16);
void* init_from__20TWindowSubStatusDispFPvPvi(void* a0, void* a1, int a2);
u32 update_text_color_transition(void);
void start_text_color_transition(Fade_802575C0 *arg0, u32 rgb, f32 time);
void copy4__18TAdChrMoveEffectGCFPvPv(void* p, void* q);
void update_disp_value__20TWindowSubStatusDispFPv(void *arg0);
void * TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1);
u8 * TWindowSubStatusDisp__sub_80257B4C(u8 *arg0, u8 *arg1);
void draw_visible_window_entries(void *self, List_80257BC0 *list, void *ctx);
void update_window_entry_list(Win_80257C28 *self, List_80257C28 *list);
void TWindowSubStatusDisp__sub_80257CB8(List_80257CB8 *arg0);
void init_window_layout_entries(List_80257D44 *self, Desc_80257D44 *desc, s32 arg2);
void TWindowSubStatusDisp__sub_80258050(void);
void TWindowSubStatusDisp__sub_80258054(void);
void * deleting_destructor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void * TWindowSubStatusDisp__sub_80258100(void *, void *, s32);
void * reset_entry__20TWindowSubStatusDispFPvii(void *, void *, s32);
void * TWindowSubStatusDisp__sub_80259D3C(void *, void *, s32);
void * TWindowSubStatusDisp__sub_8025A0A4(void *, void *, s32);
void * TWindowHelpItem__sub_8025A594(void *, void *, s32);
void * TWindowHelpItem__sub_8025A95C(void *, void *, s32);
void * construct_text_entry(void *, void *, s32);
void * init_part_direct__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void * init_part_scaled__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void * init_fields__17TWindowSubComCardFPvii(void *, void *, s32);
void * init_state__20TWindowSubStatusDispFPvii(void *, void *, s32);

extern unsigned char lbl_804CF930[];
extern M2C_UNK lbl_804CF948[];
extern M2C_UNK lbl_804CF998[];
extern const float lbl_805DCE58;
extern const f32 lbl_805DCED8;
extern const f32 lbl_805DCEF0;

void* init_from__20TWindowSubStatusDispFPvPvi(void* a0, void* a1, int a2) { TWindowSubStatusDisp__sub_80256BDC(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF930; *(float*)((char*)a0 + 0x1c) = lbl_805DCE58; *(float*)((char*)a0 + 0xc) = *(float*)((char*)a1 + 0x4); *(float*)((char*)a0 + 0x10) = *(float*)((char*)a1 + 0x8); *(float*)((char*)a0 + 0x8) = *(float*)((char*)a1 + 0xc); *(float*)((char*)a0 + 0x14) = *(float*)((char*)a1 + 0x18); *(int*)((char*)a0 + 0x18) = *(int*)((char*)a1 + 0x10); *(short*)((char*)a0 + 0x0) = *(int*)((char*)a1 + 0x14); *(float*)((char*)a0 + 0x20) = *(float*)((char*)a1 + 0x1c); *(float*)((char*)a0 + 0x24) = *(float*)((char*)a1 + 0x20); return a0; }

void start_text_color_transition(Fade_802575C0 *arg0, u32 rgb, f32 time) {
    Col_802575C0 c;
    if (arg0->rgb != rgb) {
        arg0->rgb = rgb;
        c.r = rgb >> 16;
        c.g = rgb >> 8;
        c.b = rgb;
        arg0->tr = c.r;
        arg0->tg = c.g;
        arg0->tb = c.b;
        copy4__18TAdChrMoveEffectGCFPvPv(&c, &arg0->col);
        time = lbl_805DCED8 / time;
        arg0->cr = c.r;
        arg0->cg = c.g;
        arg0->cb = c.b;
        arg0->dr = time * (arg0->tr - arg0->cr);
        arg0->dg = time * (arg0->tg - arg0->cg);
        arg0->db = time * (arg0->tb - arg0->cb);
        arg0->flags |= 0x40;
    }
}

void copy4__18TAdChrMoveEffectGCFPvPv(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)p + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)p + 0x3) = *(u8*)((char*)q + 0x3); }

void update_disp_value__20TWindowSubStatusDispFPv(void *arg0) {
    TWindowSubStatusDisp__sub_80256C00();
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, f32 *, 0x24);
}

#pragma push
#pragma fp_contract on
void TWindowSubStatusDisp__sub_80257784(Gauge_80257784 *self, Parent_80257784 *parent) {
    Pos_80257784 pos;
    f32 scale;
    f32 lo;
    f32 hi;
    f32 used;
    f32 avail;
    f32 cur;
    f32 ratio;
    f32 sz;
    s32 col;
    used = self->f10 / lbl_805DCEDC + self->fC / parent->f18;
    used *= lbl_805DCEE0;
    avail = lbl_805DCEE4 * ((f32)parent->f30 - used);
    if (avail <= 0.0f) {
        return;
    }
    if (self->f20 <= 0.0f || self->f24 <= 0.0f) {
        ratio = 0.0f;
    } else {
        ratio = self->f24 * self->f14 / self->f20;
    }
    cur = self->f1C;
    if (cur <= ratio) {
        lo = cur;
        col = self->f60;
        hi = ratio;
    } else {
        hi = cur;
        col = self->f64;
        lo = ratio - lbl_805DCED8;
    }
    if (lo > avail) {
        lo = avail;
    }
    if (hi > avail) {
        hi = avail;
    }
    if (!(hi <= 0.0f) || (self->flags & 8)) {
        pos.x = parent->f10 + self->fC;
        pos.y = parent->f14 + self->f10;
        sz = self->f8;
        scale = lbl_805DCEE8 / (lbl_805DCEEC * sz + parent->f38);
        begin_screen_draw(1, sz, lbl_805DCEEC, lbl_805DCEE8);
        set_global_param__8TObjFishFi(lbl_805D63F0);
        set_draw_texture_and_color(0xB, -1);
        if (self->flags & 8) {
            TWindowSubStatusDisp__sub_80256C40(self, parent, &pos, scale);
        }
        if (hi > 0.0f) {
            set_constant_material_color(col);
            draw_status_gauge_bar(self, parent, &pos, scale, hi);
            set_constant_material_color(self->f18);
            draw_status_gauge_bar(self, parent, &pos, scale, lo);
        }
        get_player__20TWindowSubStatusDispFv();
    }
}
#pragma pop

void update_status_gauge_hold(Bar_8025799C *bar) {
    if (bar->flags & 0x40) {
        bar->color18 = update_text_color_transition();
    }
    if ((f32)bar->shown != bar->target) {
        f32 max = bar->max;
        f32 cur = (f32)bar->shown;
        f32 width;
        if (max <= 0.0f || cur <= 0.0f) {
            width = 0.0f;
        } else {
            width = (cur * bar->width_max) / max;
        }
        bar->width = width;
        if ((bar->flags & 0x20) && bar->width > bar->width_max) {
            bar->width = bar->width_max;
        }
        bar->shown = (s16)bar->target;
        bar->timer = 36;
    }
    bar->flags &= ~4;
    if (bar->timer) {
        --bar->timer;
        if (!bar->timer && (bar->flags & 0x10)) {
            s32 slot = play_sound_effect(0x22825, 0, 0, 0);
            update_technique_slot__10TTecRaFoieFi(slot, -0x100, 0);
        }
    } else {
        step_gauge_bar_width(bar);
    }
}

void *TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF948;
        TWindowSubStatusDisp__sub_80257298(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *TWindowSubStatusDisp__sub_80257B4C(u8 *arg0, u8 *arg1) {
    ((M2C_UNK (*)(void))init_from__20TWindowSubStatusDispFPvPvi)();
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_80257B4C_lbl_804CF948 *)&lbl_804CF948).value;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    return arg0;
}

void draw_visible_window_entries(void *self, List_80257BC0 *list, void *ctx) {
    Item_80257BC0 **p;
    u32 n;
    for (n = list->count, p = list->items; n != 0; n--, p++) {
        if (!((*p)->flags & 2)) {
            (*p)->draw(ctx);
        }
    }
}

void update_window_entry_list(Win_80257C28 *self, List_80257C28 *list) {
    Ent_80257C28 **p;
    u32 n;
    if (!(self->flags & 0x2000) && (f32)self->counter < lbl_805DCEF0) return;
    n = list->count;
    p = list->items;
    while (n-- != 0) {
        (*p)->m1();
        p++;
    }
}

void TWindowSubStatusDisp__sub_80257CB8(List_80257CB8 *arg0) {
    Elem_80257CB8 **p;
    u32 n;
    n = arg0->count;
    if (n != 0) {
        p = arg0->items;
        p += n - 1;
        while (n-- != 0) {
            if (*p != 0) {
                (*p)->dtor(1);
            }
            p--;
        }
        free__11TOBoss4RockFUi(arg0->items);
        arg0->count = 0;
        arg0->items = 0;
    }
}

void init_window_layout_entries(List_80257D44 *self, Desc_80257D44 *desc, s32 arg2) {
    u32 cols;
    u32 rows;
    u32 *rec;
    void **out;
    void *o;
    if (desc == NULL) {
        self->count = 0;
        self->items = NULL;
        return;
    }
    rows = desc->rows;
    self->count = desc->cols * rows;
    if (self->count == 0) {
        self->count = 0;
        self->items = NULL;
        return;
    }
    self->items = alloc_buffer__11TOBoss4RockFPv(self->count * 4);
    out = self->items;
    while (rows-- != 0) {
        cols = desc->cols;
        rec = desc->recs;
        while (cols-- != 0) {
            switch (*rec) {
            case 0:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
                if (o != NULL) {
                    o = TWindowSubStatusDisp__sub_80258100(o, rec, arg2);
                }
                *out = o;
                rec += 0x14 / 4;
                break;
            case 1:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
                if (o != NULL) {
                    o = ((Ctor_80257D44)init_from__20TWindowSubStatusDispFPvPvi)(o, rec, arg2);
                }
                *out = o;
                rec += 0x24 / 4;
                break;
            case 2:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x68);
                if (o != NULL) {
                    o = ((Ctor_80257D44)TWindowSubStatusDisp__sub_80257B4C)(o, rec, arg2);
                }
                *out = o;
                rec += 0x2C / 4;
                break;
            case 3:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x2C);
                if (o != NULL) {
                    o = construct_text_entry(o, rec, arg2);
                }
                *out = o;
                rec += 0x1C / 4;
                break;
            case 4:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
                if (o != NULL) {
                    o = TWindowSubStatusDisp__sub_80259D3C(o, rec, arg2);
                }
                *out = o;
                rec += 0x1C / 4;
                break;
            case 5:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x30);
                if (o != NULL) {
                    o = TWindowSubStatusDisp__sub_8025A0A4(o, rec, arg2);
                }
                *out = o;
                rec += 0x1C / 4;
                break;
            case 6:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x38);
                if (o != NULL) {
                    o = init_part_scaled__20TWindowSubStatusDispFPvPvi(o, rec, arg2);
                }
                *out = o;
                rec += 0x30 / 4;
                break;
            case 7:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x38);
                if (o != NULL) {
                    o = init_part_direct__20TWindowSubStatusDispFPvPvi(o, rec, arg2);
                }
                *out = o;
                rec += 0x38 / 4;
                break;
            case 8:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x38);
                if (o != NULL) {
                    o = reset_entry__20TWindowSubStatusDispFPvii(o, rec, arg2);
                }
                *out = o;
                rec += 1;
                break;
            case 9:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
                if (o != NULL) {
                    o = init_fields__17TWindowSubComCardFPvii(o, rec, arg2);
                }
                *out = o;
                rec += 1;
                break;
            case 10:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x14);
                if (o != NULL) {
                    o = TWindowHelpItem__sub_8025A95C(o, rec, arg2);
                }
                *out = o;
                rec += 0xC / 4;
                break;
            case 11:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
                if (o != NULL) {
                    o = TWindowHelpItem__sub_8025A594(o, rec, arg2);
                }
                *out = o;
                rec += 0xC / 4;
                break;
            case 12:
                o = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
                if (o != NULL) {
                    o = init_state__20TWindowSubStatusDispFPvii(o, rec, arg2);
                }
                *out = o;
                rec += 1;
                break;
            }
            out++;
        }
    }
}

void TWindowSubStatusDisp__sub_80258050(void) {  }

void TWindowSubStatusDisp__sub_80258054(void) {  }

void *deleting_destructor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF998;
        destroy__20TWindowSubStatusDispFPvs((M2C_UNK)arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
