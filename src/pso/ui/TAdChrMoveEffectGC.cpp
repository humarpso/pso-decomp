#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_803490AC { u32 flags; u8 pad[0x34]; };

struct O_803490AC { u8 pad[0x20]; s32 n; u8 pad2[0x30]; E_803490AC e[16]; };

struct E_80349194 { u8 b[0x38]; };

struct W_80349194 { u8 pad0[0x20]; s32 f20; E_80349194 e[16]; };

struct E_80349038 { u8 pad0[0x1C]; s32 f1C; u8 pad20[4]; u8 v24[8]; u8 pad2C[8]; u8 v34[4]; u8 pad38[0xC]; u8 v44[8]; u8 v4C[4]; s32 f50; s32 f54; s32 f58; };

struct V2_803490D8 { u8 b[8]; };

struct C4_803490D8 { u8 b[4]; };

struct P_803490D8 { V2_803490D8 a; V2_803490D8 b; C4_803490D8 c; C4_803490D8 d; V2_803490D8 e; };

extern "C" {
void clear_entries__18TAdChrMoveEffectGCFPv(O_803490AC *self);
void TAdChrMoveEffectGC__sub_803491F8(void *, void *);
void TAdChrMoveEffectGC__sub_80349194(W_80349194 *arg0, void *arg1);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
void TAdChrMoveEffectGC__sub_80349038(void *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
void TAdChrMoveEffectGC__sub_80349194(W_80349194 *arg0, void *arg1);
extern V2_803490D8 lbl_804786B0[];
extern C4_803490D8 lbl_804786E8[];
extern u8 lbl_804786F0[];
void TAdChrMoveEffectGC__sub_803490D8(void *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TAdChrMoveEffectGC__ct(void *arg0);
void *__dt__18TAdChrMoveEffectGCFv(void *arg0, s16 arg1);
void render__18TAdChrMoveEffectGCFv(void* p);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
int abs__4cXyzCFv(void*, void*);
int fn_80348E34(void*);
int get_state_flag__9TMainTaskFv(void*);

void render__18TAdChrMoveEffectGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); fn_80348E34(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

extern M2C_UNK __vt__18TAdChrMoveEffectGC[];
extern u32 lbl_805D6E78;

void TAdChrMoveEffectGC__sub_80349038(void *arg0) {
    E_80349038 *e;
    s32 i;
    ((E_80349038 *)arg0)->f1C = 0;
    for (i = 0; i < 16; i++) {
        e = (E_80349038 *)((u8 *)arg0 + i * 0x38);
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(e->v44, e->v24);
        copy4__18TAdChrMoveEffectGCFPvPv(e->v4C, e->v34);
        *(u8 *)&e->f50 = e->v34[3];
        e->f54 = 0;
        e->f58 = 0;
    }
}

void clear_entries__18TAdChrMoveEffectGCFPv(O_803490AC *self) {
    s32 i;
    self->n = 0;
    for (i = 0; i < 16; i++) {
        self->e[i].flags &= ~1;
    }
}

struct W_80349194;
void TAdChrMoveEffectGC__sub_803490D8(void *arg0, s32 arg1, s32 arg2) {
    P_803490D8 p;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&p.a, &lbl_804786B0[arg1]);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&p.b, &lbl_804786B0[arg2]);
    copy4__18TAdChrMoveEffectGCFPvPv(&p.c, arg1 < 3 ? &lbl_804786E8[0] : &lbl_804786E8[1]);
    copy4__18TAdChrMoveEffectGCFPvPv(&p.d, arg2 < 3 ? &lbl_804786E8[0] : &lbl_804786E8[1]);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&p.e, lbl_804786F0);
    TAdChrMoveEffectGC__sub_80349194((W_80349194 *)arg0, &p);
}

void TAdChrMoveEffectGC__sub_80349194(W_80349194 *arg0, void *arg1) {
    s32 i;
    for (i = 0; i < 16; i++) {
        TAdChrMoveEffectGC__sub_803491F8(&arg0->e[i], arg1);
    }
    TAdChrMoveEffectGC__sub_80349038((void *)(arg0));
    arg0->f20 = 1;
}

void *__dt__18TAdChrMoveEffectGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdChrMoveEffectGC;
        if ((u32) lbl_805D6E78 != 0U) {
            lbl_805D6E78 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TAdChrMoveEffectGC[];
extern void *lbl_805D42F0;

void *TAdChrMoveEffectGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdChrMoveEffectGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D42F0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    return arg0;
}

}
