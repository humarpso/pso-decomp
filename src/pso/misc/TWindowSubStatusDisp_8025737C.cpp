#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/ui/TAdChrMoveEffectGC.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/object/TObjFish.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_80256BDC_lbl_804CF918 {
    s32 value;
    u8 remaining[0x14];
};

struct Bar_80256C00 {
    u8 pad0[0x14];
    f32 scale;
    u8 pad1[4];
    f32 width;
    f32 max;
    f32 target;
};

struct Gauge_802571B4 {
    u16 flags;
    u8 pad2[0x12];
    f32 scale;
    u8 pad18[4];
    f32 cur;
    f32 max;
    f32 val;
};

struct Gauge_80256E0C { u8 p0[0x14]; f32 max; };

struct Pos_80256E0C { f32 x; f32 y; };

struct Quad_80256E0C { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

extern "C" {
extern s32 lbl_804CF918[];
void TWindowSubStatusDisp__sub_80256BDC(u8 *arg0, s16 arg1);
void calc_bar_width__20TWindowSubStatusDispFPv(struct Bar_80256C00 *bar);
f32 fabs_float(f32);
extern const f32 lbl_805DCE58;
extern const f32 lbl_805DCECC;
void step_gauge_bar_width(Gauge_802571B4 *g);
s32 try_open__19TWindowKeyBoardSoftFii(void *, void *);
void draw_textured_quad_at_depth(void *, f32);
void draw_status_gauge_bar(Gauge_80256E0C *self, void *ctx, Pos_80256E0C *pos, f32 depth, f32 len);
}
extern "C" {
void *destroy__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void *TWindowSubStatusDisp__sub_80257298(void *arg0, s16 arg1);
s32 __dl__FPv(void *);
}

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
s32 TWindowSubStatusDisp__sub_80256C40(void *, void *, void *, f32);
#define draw_status_gauge_bar ((s32 (*)(void *, void *, void *, f32, f32))draw_status_gauge_bar)
s32 begin_screen_draw(s32, f32, f32, f32);
s32 set_draw_texture_and_color(s32, s32);
s32 set_constant_material_color(s32);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DCED8;
extern const f32 lbl_805DCEDC;
extern const f32 lbl_805DCEE0;
extern const f32 lbl_805DCEE4;
extern const f32 lbl_805DCEE8;
extern const f32 lbl_805DCEEC;
void draw_gauge__20TWindowSubStatusDispFPvPv(Gauge_80257784 *self, Parent_80257784 *parent);
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
    s32 value;
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

s32 __dl__FPv(void *);
void mem_free(void *);
void ** mem_alloc(u32);
void update_technique_slot__10TTecRaFoieFl(s32, s32, s32);
s32 play_sound_effect(u32, s32, s32, s32);
#define destroy__20TWindowSubStatusDispFPvs ((s32 (*)(s32, s32 *))destroy__20TWindowSubStatusDispFPvs)
#define TWindowSubStatusDisp__sub_80256BDC ((int (*)(void*, int))TWindowSubStatusDisp__sub_80256BDC)
#define calc_bar_width__20TWindowSubStatusDispFPv ((s32 (*)())calc_bar_width__20TWindowSubStatusDispFPv)
#define step_gauge_bar_width ((void (*)(void *))step_gauge_bar_width)
#define TWindowSubStatusDisp__sub_80257298 ((s32 (*)(void *, s16))TWindowSubStatusDisp__sub_80257298)
void* init_from__20TWindowSubStatusDispFPvi(void* a0, void* a1, int a2);
u32 update_text_color_transition(void);
void start_text_color_transition(Fade_802575C0 *arg0, u32 rgb, f32 time);
void * TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1);
u8 * init_layout_entry_copy__20TWindowSubStatusDispFPvPv(u8 *arg0, u8 *arg1);
void draw_visible_window_entries(void *self, List_80257BC0 *list, void *ctx);
void update_window_entry_list(Win_80257C28 *self, List_80257C28 *list);
void init_window_layout_entries(List_80257D44 *self, Desc_80257D44 *desc, s32 arg2);
void TWindowSubStatusDisp__sub_80258050(void);
void TWindowSubStatusDisp__sub_80258054(void);
void * init_layout_entry_rect__20TWindowSubStatusDispFPvPvs(void *, void *, s32);
void * TWindowSubStatusDisp__sub_80259D3C(void *, void *, s32);
void * TWindowHelpItem__sub_8025A594(void *, void *, s32);
void * TWindowHelpItem__sub_8025A95C(void *, void *, s32);
void * construct_text_entry(void *, void *, s32);
void * init_part_direct__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void * init_part_scaled__20TWindowSubStatusDispFPvPvi(void *, void *, s32);

#define lbl_804CF930 (*(unsigned char (*)[1])&lbl_804CF930)
extern s32 lbl_804CF948[];
extern s32 lbl_804CF998[];
extern const float lbl_805DCE58;
extern const f32 lbl_805DCED8;
extern const f32 lbl_805DCEF0;

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
        ((TAdChrMoveEffectGC *)(&c))->copy4(&arg0->col);
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

void TAdChrMoveEffectGC::copy4(void* q) { *(u8*)((char*)this + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)this + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)this + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)this + 0x3) = *(u8*)((char*)q + 0x3); }

void TWindowSubStatusDisp::update_disp_value() {
    calc_bar_width__20TWindowSubStatusDispFPv();
    *(s16 *)((s8 *)this + 0x28) = (s16) *(f32 *)((s8 *)this + 0x24);
}

#pragma push
#pragma fp_contract on
void draw_gauge__20TWindowSubStatusDispFPvPv(Gauge_80257784 *self, Parent_80257784 *parent) {
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
        TObjFish::set_global_param(lbl_805D63F0);
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
        TWindowSubStatusDisp::get_player();
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
            update_technique_slot__10TTecRaFoieFl(slot, -0x100, 0);
        }
    } else {
        step_gauge_bar_width(bar);
    }
}

void *TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 4) = lbl_804CF948;
        TWindowSubStatusDisp__sub_80257298(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *init_layout_entry_copy__20TWindowSubStatusDispFPvPv(u8 *arg0, u8 *arg1) {
    ((s32 (*)(void))init_from__20TWindowSubStatusDispFPvi)();
    *(s32 **)((s8 *)arg0 + 4) = &(*(RecoveredGlobal_80257B4C_lbl_804CF948 *)&lbl_804CF948).value;
    *(s16 *)((s8 *)arg0 + 0x28) = (s16) *(f32 *)((s8 *)arg0 + 0x24);
    *(s32 *)((s8 *)arg0 + 0x60) = (s32) *(s32 *)((s8 *)arg1 + 0x24);
    *(s32 *)((s8 *)arg0 + 0x64) = (s32) *(s32 *)((s8 *)arg1 + 0x28);
    *(s32 *)((s8 *)arg0 + 0x2C) = (s32) *(s32 *)((s8 *)arg0 + 0x18);
    *(s16 *)((s8 *)arg0 + 0x2A) = 0;
    return arg0;
}

}

#undef draw_status_gauge_bar
#undef destroy__20TWindowSubStatusDispFPvs
#undef TWindowSubStatusDisp__sub_80256BDC
#undef calc_bar_width__20TWindowSubStatusDispFPv
#undef step_gauge_bar_width
#undef TWindowSubStatusDisp__sub_80257298
#undef lbl_804CF930
