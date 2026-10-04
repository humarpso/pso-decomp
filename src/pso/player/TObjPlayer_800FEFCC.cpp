#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

typedef struct E1_800FF070 { s8 type; u8 pad1[0x13]; u8 *data; } E1_800FF070;

typedef struct E2_800FF070 { s8 type; u8 pad1[0x13]; } E2_800FF070;

typedef struct D1_800FF070 { s8 type; u8 pad1[0x17]; } D1_800FF070;

typedef struct D2_800FF070 { f32 v[4]; } D2_800FF070;

typedef struct Obj_800FF070 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[0x14];
    void *f30;
    E1_800FF070 *list;
    E2_800FF070 *list2;
    D1_800FF070 *a;
    D2_800FF070 *b;
    D2_800FF070 *c;
} Obj_800FF070;

extern "C" {
void TObjPlayer__sub_800FF220(s32 *arg0, s32 *arg1);
void TObjPlayer__sub_800FF1FC(f32 *arg0, f32 *arg1);
void TObjPlayer__sub_800FF244(u8 *arg0, u8 *arg1);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
void TObjPlayer__sub_800FF220(s32 *arg0, s32 *arg1);
void TObjPlayer__sub_800FF1FC(f32 *arg0, f32 *arg1);
void TObjPlayer__sub_800FF244(u8 *arg0, u8 *arg1);
void fn_800FF8CC(void *, void *, void *, void *);
void *TObjEZRopeBase__ct(void *);
extern u8 lbl_8049DCF0[];
extern s32 lbl_805D2B54;
void *TObjPlayer__sub_800FF070(void *arg0, void *arg1, void *arg2, void *arg3);
}

extern "C" {

void * create_hairmove__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);
void *dt_ad_single_ply_chr_select__10TObjPlayerFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__14TObjEZRopeBaseFv(void *, int);
void *__nw__7TObjectFUl(int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern M2C_UNK lbl_8049DD2C[];

void *dt_ad_single_ply_chr_select__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049DD2C;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        if (M2C_FIELD(arg0, void **, 0x44) != NULL) { safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x44)); M2C_FIELD(arg0, M2C_UNK *, 0x44) = 0; }
        __dt__14TObjEZRopeBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define SELF ((Obj_800FF070 *)arg0)
void *TObjPlayer__sub_800FF070(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 base = (s32)lbl_8049DCF0;
    s32 n1;
    s32 n2;
    E2_800FF070 *q;
    E1_800FF070 *p;
    D1_800FF070 *d;
    D2_800FF070 *e;
    TObjEZRopeBase__ct(arg0);
    n1 = 0;
    SELF->vt = (void *)(base + 0x3C);
    n2 = 0;
    SELF->f0 = lbl_805D2B54;
    SELF->f30 = arg1;
    SELF->list = (E1_800FF070 *)arg2;
    SELF->list2 = (E2_800FF070 *)arg3;
    for (p = SELF->list; p->type >= 0; p++, n1++) {
    }
    if (SELF->list2 != NULL) {
        for (q = SELF->list2; q->type >= 0; q++, n2++) {
        }
    }
    SELF->a = (D1_800FF070 *)alloc__22TQuestVmDownLoadServerFPv((n1 + 1) * 0x18);
    SELF->b = (D2_800FF070 *)alloc__22TQuestVmDownLoadServerFPv(n1 * 0x10);
    if (n2 == 0) {
        SELF->c = NULL;
    } else {
        SELF->c = (D2_800FF070 *)alloc__22TQuestVmDownLoadServerFPv((n2 + 1) * 0x10);
    }
    {
        E1_800FF070 *p3;
        D1_800FF070 *d3;
        D2_800FF070 *e3;
        d3 = SELF->a;
        p3 = SELF->list;
        e3 = SELF->b;
        for (; p3->type >= 0; p3++, d3++, e3++) {
            TObjPlayer__sub_800FF244((u8 *)d3, p3->data);
            TObjPlayer__sub_800FF220((s32 *)e3, (s32 *)(base + 0x10));
        }
        d3->type = -1;
    }
    if (SELF->c != NULL) {
        E2_800FF070 *q4 = SELF->list2;
        D2_800FF070 *e4 = SELF->c;
        for (; q4->type >= 0; q4++, e4++) {
            TObjPlayer__sub_800FF1FC((f32 *)e4, (f32 *)(base + 0x20));
        }
        TObjPlayer__sub_800FF1FC((f32 *)e4, (f32 *)(base + 0x20));
    }
    fn_800FF8CC(arg0, SELF->a, SELF->b, SELF->c);
    return arg0;
}

void TObjPlayer__sub_800FF1FC(f32 *arg0, f32 *arg1) {
    *arg0 = *arg1;
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}

void TObjPlayer__sub_800FF220(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}

void TObjPlayer__sub_800FF244(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
}

void * create_hairmove__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x48);
    if (o != NULL) {
        o = TObjPlayer__sub_800FF070((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
    return o;
}

}
