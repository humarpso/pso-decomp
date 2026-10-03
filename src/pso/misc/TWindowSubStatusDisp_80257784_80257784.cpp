#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

typedef s32 M2C_UNK;
struct List_80257D44 {
    u32 count;
    void **items;
};

struct Desc_80257D44 {
    u32 cols;
    u32 rows;
    u32 recs[1];
};

extern "C" {
M2C_UNK init_from__20TWindowSubStatusDispFPvPvi();
extern M2C_UNK lbl_804CF948[];
u8 *TWindowSubStatusDisp__sub_80257B4C(u8 *arg0, u8 *arg1);
void TWindowSubStatusDisp__sub_80257BC0(void *self, List_80257BC0 *list, void *ctx);
extern const f32 lbl_805DCEF0;
void update_window_entry_list(Win_80257C28 *self, List_80257C28 *list);
void free__11TOBoss4RockFUi(void *);
void TWindowSubStatusDisp__sub_80257CB8(List_80257CB8 *arg0);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void **alloc_buffer__11TOBoss4RockFPv(u32);
M2C_UNK init_from__20TWindowSubStatusDispFPvPvi();
u8 *TWindowSubStatusDisp__sub_80257B4C(u8 *arg0, u8 *arg1);
void *TWindowSubStatusDisp__sub_80258100(void *, void *, s32);
void *reset_entry__20TWindowSubStatusDispFPvii(void *, void *, s32);
void *TWindowSubStatusDisp__sub_80259D3C(void *, void *, s32);
void *TWindowSubStatusDisp__sub_8025A0A4(void *, void *, s32);
void *TWindowHelpItem__sub_8025A594(void *, void *, s32);
void *TWindowHelpItem__sub_8025A95C(void *, void *, s32);
void *construct_text_entry(void *, void *, s32);
void *init_part_direct__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void *init_part_scaled__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void *init_fields__17TWindowSubComCardFPvii(void *, void *, s32);
void *init_state__20TWindowSubStatusDispFPvii(void *, void *, s32);
void TWindowSubStatusDisp__sub_80257D44(List_80257D44 *self, Desc_80257D44 *desc, s32 arg2);
}

extern "C" {

void *TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1);
void TWindowSubStatusDisp__sub_80258050(void);
void TWindowSubStatusDisp__sub_80258054(void);
void *deleting_destructor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80257298(void *, s16);
M2C_UNK __dl__FPv(void *);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(M2C_UNK, M2C_UNK *);

extern M2C_UNK lbl_804CF948[];

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

typedef char RecoveredGlobal_80257B4C_lbl_804CF948_size[sizeof(RecoveredGlobal_80257B4C_lbl_804CF948) == 0x18 ? 1 : -1];
u8 *TWindowSubStatusDisp__sub_80257B4C(u8 *arg0, u8 *arg1) {
    init_from__20TWindowSubStatusDispFPvPvi();
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_80257B4C_lbl_804CF948 *)&lbl_804CF948).value;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    return arg0;
}

void TWindowSubStatusDisp__sub_80257BC0(void *self, List_80257BC0 *list, void *ctx) {
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

typedef void *(*Ctor_80257D44)(void *, void *, s32);
void TWindowSubStatusDisp__sub_80257D44(List_80257D44 *self, Desc_80257D44 *desc, s32 arg2) {
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

extern M2C_UNK lbl_804CF998[];

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
