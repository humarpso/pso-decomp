#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80256BDC_lbl_804CF918 {
    M2C_UNK value;
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
extern M2C_UNK lbl_804CF918[];
void TWindowSubStatusDisp__sub_80256BDC(u8 *arg0, s16 arg1);
void calc_bar_width__20TWindowSubStatusDispFPv(struct Bar_80256C00 *bar);
f32 get_random_float__8TObjFishFv(f32);
extern const f32 lbl_805DCE58;
extern const f32 lbl_805DCECC;
void step_gauge_bar_width(Gauge_802571B4 *g);
s32 try_open__19TWindowKeyBoardSoftFii(void *, void *);
void draw_textured_quad_at_depth(void *, f32);
void draw_status_gauge_bar(Gauge_80256E0C *self, void *ctx, Pos_80256E0C *pos, f32 depth, f32 len);
}

extern "C" {

void TWindowSubStatusDisp__sub_80256BF8(void);
void TWindowSubStatusDisp__sub_80256BFC(void);
void *destroy__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804CF918[];

void *destroy__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF918;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80256BDC_lbl_804CF918_size[sizeof(RecoveredGlobal_80256BDC_lbl_804CF918) == 0x18 ? 1 : -1];
void TWindowSubStatusDisp__sub_80256BDC(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_80256BDC_lbl_804CF918 *)&lbl_804CF918).value;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = arg1;
}

void TWindowSubStatusDisp__sub_80256BF8(void) {  }
void TWindowSubStatusDisp__sub_80256BFC(void) {  }
void calc_bar_width__20TWindowSubStatusDispFPv(struct Bar_80256C00 *bar) {
    f32 target;
    f32 max = bar->max;
    f32 v;
    if (max <= 0.0f || (target = bar->target) <= 0.0f) {
        v = 0.0f;
    } else {
        v = (target * bar->scale) / max;
    }
    bar->width = v;
}

void draw_status_gauge_bar(Gauge_80256E0C *self, void *ctx, Pos_80256E0C *pos, f32 depth, f32 len) {
    Quad_80256E0C q;
    f32 w;
    f32 end;
    if (len <= 0.0f) {
        return;
    }
    if (len < 4.0f) {
        w = len;
    } else {
        w = 4.0f;
    }
    q.x0 = pos->x;
    q.y0 = pos->y;
    q.x1 = pos->x + w;
    q.y1 = 7.0f + pos->y;
    q.u0 = 0.8984375f;
    q.v0 = 0.1171875f;
    q.u1 = (230.0f + w) / 256.0f;
    q.v1 = 0.14453125f;
    if (try_open__19TWindowKeyBoardSoftFii(ctx, &q) != 0) {
        draw_textured_quad_at_depth(&q, depth);
    }
    if (len <= 4.0f) {
        return;
    }
    w = (len < self->max - 4.0f) ? len - 4.0f : self->max - 8.0f;
    q.x0 = 4.0f + pos->x;
    q.y0 = pos->y;
    q.x1 = q.x0 + w;
    q.y1 = 7.0f + pos->y;
    q.u0 = 0.92578125f;
    q.v0 = 0.1171875f;
    q.u1 = 0.97265625f;
    q.v1 = 0.14453125f;
    if (try_open__19TWindowKeyBoardSoftFii(ctx, &q) != 0) {
        draw_textured_quad_at_depth(&q, depth);
    }
    end = self->max - 4.0f;
    if (len <= end) {
        return;
    }
    w = len - end;
    q.x0 = pos->x + end;
    q.y0 = pos->y;
    q.x1 = w + q.x0;
    q.y1 = 7.0f + pos->y;
    q.u0 = 0.984375f;
    q.v0 = 0.1171875f;
    q.u1 = (252.0f + w) / 256.0f;
    q.v1 = 0.14453125f;
    if (try_open__19TWindowKeyBoardSoftFii(ctx, &q) != 0) {
        draw_textured_quad_at_depth(&q, depth);
    }
}

void step_gauge_bar_width(Gauge_802571B4 *g) {
    f32 target;
    f32 diff;
    g->flags &= ~4;
    if (g->max <= lbl_805DCE58 || g->val <= lbl_805DCE58) {
        target = 0.0f;
    } else {
        target = (g->val * g->scale) / g->max;
    }
    diff = target - g->cur;
    if (get_random_float__8TObjFishFv(diff) < lbl_805DCECC) {
        g->cur = target;
        g->flags |= 4;
    } else if (diff > lbl_805DCE58) {
        g->cur += lbl_805DCECC;
    } else {
        g->cur -= lbl_805DCECC;
    }
}

}

extern "C" {

void *TWindowSubStatusDisp__sub_80257298(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
#define destroy__20TWindowSubStatusDispFPvs ((M2C_UNK (*)(void *, s16))destroy__20TWindowSubStatusDispFPvs)

extern M2C_UNK lbl_804CF930[];

void *TWindowSubStatusDisp__sub_80257298(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF930;
        destroy__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}

#undef destroy__20TWindowSubStatusDispFPvs

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
#define draw_status_gauge_bar ((M2C_UNK (*)(void *, void *, void *, f32, f32))draw_status_gauge_bar)
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
#define destroy__20TWindowSubStatusDispFPvs ((M2C_UNK (*)(M2C_UNK, M2C_UNK *))destroy__20TWindowSubStatusDispFPvs)
#define TWindowSubStatusDisp__sub_80256BDC ((int (*)(void*, int))TWindowSubStatusDisp__sub_80256BDC)
#define calc_bar_width__20TWindowSubStatusDispFPv ((s32 (*)())calc_bar_width__20TWindowSubStatusDispFPv)
#define step_gauge_bar_width ((void (*)(void *))step_gauge_bar_width)
#define TWindowSubStatusDisp__sub_80257298 ((M2C_UNK (*)(void *, s16))TWindowSubStatusDisp__sub_80257298)
void* init_from__20TWindowSubStatusDispFPvPvi(void* a0, void* a1, int a2);
u32 update_text_color_transition(void);
void start_text_color_transition(Fade_802575C0 *arg0, u32 rgb, f32 time);
void copy4__18TAdChrMoveEffectGCFPvPv(void* p, void* q);
void update_disp_value__20TWindowSubStatusDispFPv(void *arg0);
void * TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1);
u8 * init_layout_entry_copy__20TWindowSubStatusDispFPvPv(u8 *arg0, u8 *arg1);
void draw_visible_window_entries(void *self, List_80257BC0 *list, void *ctx);
void update_window_entry_list(Win_80257C28 *self, List_80257C28 *list);
void destroy_all_items__20TWindowSubStatusDispFPv(List_80257CB8 *arg0);
void init_window_layout_entries(List_80257D44 *self, Desc_80257D44 *desc, s32 arg2);
void TWindowSubStatusDisp__sub_80258050(void);
void TWindowSubStatusDisp__sub_80258054(void);
void * deleting_destructor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void * init_layout_entry_rect__20TWindowSubStatusDispFPvPvs(void *, void *, s32);
void * reset_entry__20TWindowSubStatusDispFPvii(void *, void *, s32);
void * TWindowSubStatusDisp__sub_80259D3C(void *, void *, s32);
void * init_layout_entry_scaled__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void * TWindowHelpItem__sub_8025A594(void *, void *, s32);
void * TWindowHelpItem__sub_8025A95C(void *, void *, s32);
void * construct_text_entry(void *, void *, s32);
void * init_part_direct__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void * init_part_scaled__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void * init_fields__17TWindowSubComCardFPvii(void *, void *, s32);
void * init_state__20TWindowSubStatusDispFPvii(void *, void *, s32);

#define lbl_804CF930 (*(unsigned char (*)[1])&lbl_804CF930)
extern M2C_UNK lbl_804CF948[];
extern M2C_UNK lbl_804CF998[];
extern const float lbl_805DCE58;
extern const f32 lbl_805DCED8;
extern const f32 lbl_805DCEF0;

void* init_from__20TWindowSubStatusDispFPvPvi(void* a0, void* a1, int a2) { TWindowSubStatusDisp__sub_80256BDC(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF930; *(float*)((char*)a0 + 0x1c) = lbl_805DCE58; *(float*)((char*)a0 + 0xc) = *(float*)((char*)a1 + 0x4); *(float*)((char*)a0 + 0x10) = *(float*)((char*)a1 + 0x8); *(float*)((char*)a0 + 0x8) = *(float*)((char*)a1 + 0xc); *(float*)((char*)a0 + 0x14) = *(float*)((char*)a1 + 0x18); *(int*)((char*)a0 + 0x18) = *(int*)((char*)a1 + 0x10); *(short*)((char*)a0 + 0x0) = *(int*)((char*)a1 + 0x14); *(float*)((char*)a0 + 0x20) = *(float*)((char*)a1 + 0x1c); *(float*)((char*)a0 + 0x24) = *(float*)((char*)a1 + 0x20); return a0; }

}

#undef draw_status_gauge_bar
#undef destroy__20TWindowSubStatusDispFPvs
#undef TWindowSubStatusDisp__sub_80256BDC
#undef calc_bar_width__20TWindowSubStatusDispFPv
#undef step_gauge_bar_width
#undef TWindowSubStatusDisp__sub_80257298
#undef lbl_804CF930
