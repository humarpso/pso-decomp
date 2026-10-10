#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct Src_80320534 { s32 a; u8 *p; };

struct Obj_80320534 { u8 pad[0x24]; s32 n; };

struct Ent_803204B8 { u8 pad[4]; f32 v[3]; };

struct Blk_803204B8 { s32 flag; Ent_803204B8 *ents; };

struct Ef_803204B8 { u8 pad[0x20]; Blk_803204B8 *blk; s32 count; };

struct Src_80320950 { s32 a; u8 *p; };

struct Obj_80320950 { u8 pad[0x18]; void *vt; Src_80320950 *arr; Src_80320950 *last; u8 pad2[4]; s32 n; };

struct Obj_803208CC { u8 pad[0x1C]; Src_80320534 *arr; Src_80320534 *last; u8 pad2[4]; s32 n; };

struct Src_803209F0 { s32 a; u8 *p; };

struct Obj_803209F0 { s32 f0; u8 pad[0x14]; void *vt; Src_803209F0 *arr; Src_803209F0 *last; s32 n; s32 m; };

extern "C" {
void TBoss6Zanzo__sub_803205A0(s32 *arg0, s32 *arg1);
void TBoss6Zanzo__sub_803205A0(s32 *arg0, s32 *arg1);
void copy_trail_buffer__11TBoss6ZanzoFPvPvPv(Obj_80320534 *arg0, Src_80320534 *arg1, Src_80320534 *arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
void set_effect_points__11TBoss6Type1FPvPvPv(Ef_803204B8 *o, f32 *a, u32 *b);
void __dt__7TObjectFv(void *, int);
void __dl__FPv(void *);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
extern u8 __vt__11TBoss6Zanzo[];
Obj_80320950 *__dt__11TBoss6ZanzoFv(Obj_80320950 *arg0, s16 arg1);
s32 check_demo_mode__10TObjPlayerFv();
void copy_trail_buffer__11TBoss6ZanzoFPvPvPv(Obj_80320534 *arg0, Src_80320534 *arg1, Src_80320534 *arg2);
void run_task__11TBoss6ZanzoFv(Obj_803208CC *arg0);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u8 *alloc_buffer__11TOBoss4RockFPv(s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__11TBoss6Zanzo[];
extern s32 TBoss6Zanzo__name;
Obj_803209F0 *TBoss6Zanzo__ct(Obj_803209F0 *arg0, void *arg1, s32 arg2, s32 arg3);
}

extern "C" {

s32 fn_803204B0(void* p);
void render__11TBoss6ZanzoFv(void* p);
int TBoss6Zanzo__sub_803205C4(void*);
int restore_saved_depth_alpha_state(void);
int set_depth_buffer_settings_1__Fv(void*);

s32 fn_803204B0(void* p) { return *(s32*)((char*)p + 0x4); }

void set_effect_points__11TBoss6Type1FPvPvPv(Ef_803204B8 *o, f32 *a, u32 *b) {
    Ent_803204B8 *p;
    Ent_803204B8 *end;
    f32 *a2 = a;
    u32 *b2 = b;
    o->blk->flag = 1;
    p = o->blk->ents;
    end = p + o->count;
    for (; p < end; p++, a2 += 3, b2++) {
        VecCopy__FP3VecPC3Vec(&p->v, a2);
        copy4__18TAdChrMoveEffectGCFPvPv(p, b2);
    }
}

void copy_trail_buffer__11TBoss6ZanzoFPvPvPv(Obj_80320534 *arg0, Src_80320534 *arg1, Src_80320534 *arg2) {
    u8 *src;
    u8 *dst;
    u8 *end;
    arg1->a = arg2->a;
    if (arg1->a != 0) {
        dst = arg1->p;
        src = arg2->p;
        end = dst + (arg0->n << 4);
        for (; dst < end; dst += 0x10, src += 0x10) {
            TBoss6Zanzo__sub_803205A0((s32 *)dst, (s32 *)src);
        }
    }
}

void TBoss6Zanzo__sub_803205A0(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}

void render__11TBoss6ZanzoFv(void* p) { set_depth_buffer_settings_1__Fv(p); TBoss6Zanzo__sub_803205C4(p); restore_saved_depth_alpha_state(); }

void run_task__11TBoss6ZanzoFv(Obj_803208CC *arg0) {
    Src_80320534 *base;
    Src_80320534 *p;
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        base = arg0->arr;
        for (p = base + arg0->n - 1; p > base; p--) {
            copy_trail_buffer__11TBoss6ZanzoFPvPvPv((Obj_80320534 *)arg0, p, p - 1);
        }
        copy_trail_buffer__11TBoss6ZanzoFPvPvPv((Obj_80320534 *)arg0, p, arg0->last);
        arg0->last->a = 0;
    }
}

Obj_80320950 *__dt__11TBoss6ZanzoFv(Obj_80320950 *arg0, s16 arg1) {
    Src_80320950 *p;
    Src_80320950 *end;
    if (arg0 != 0) {
        arg0->vt = __vt__11TBoss6Zanzo;
        free__11TOBoss4RockFUi(arg0->last->p);
        __dl__FPv(arg0->last);
        for (p = arg0->arr, end = p + arg0->n; p < end; p++) {
            free__11TOBoss4RockFUi(p->p);
        }
        free__11TOBoss4RockFUi(arg0->arr);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_803209F0 *TBoss6Zanzo__ct(Obj_803209F0 *arg0, void *arg1, s32 arg2, s32 arg3) {
    Src_803209F0 *p;
    Src_803209F0 *end;
    __ct__7TObjectFP7TObject(arg0, arg1);
    arg0->vt = __vt__11TBoss6Zanzo;
    arg0->f0 = TBoss6Zanzo__name;
    arg0->n = arg2;
    if (arg0->n < 2) {
        arg0->n = 2;
    }
    arg0->m = arg3;
    if (arg0->m < 2) {
        arg0->m = 2;
    }
    arg0->arr = (Src_803209F0 *)alloc_buffer__11TOBoss4RockFPv(arg0->m * 8);
    for (p = arg0->arr, end = p + arg0->m; p < end; p++) {
        p->a = 0;
        p->p = alloc_buffer__11TOBoss4RockFPv(arg0->n * 0x10);
    }
    arg0->last = (Src_803209F0 *)alloc__23TAdSinglePlyChrSelectGCFPv(8);
    arg0->last->a = 0;
    arg0->last->p = alloc_buffer__11TOBoss4RockFPv(arg0->n * 0x10);
    return arg0;
}

}
