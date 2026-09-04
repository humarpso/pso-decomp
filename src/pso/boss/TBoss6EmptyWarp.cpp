#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void init_warp__15TBoss6EmptyWarpFv(void);

int TBoss6PlotFalz__sub_802AC3E8(void);
int fn_802AC538(void);

void init_warp__15TBoss6EmptyWarpFv(void) { fn_802AC538(); TBoss6PlotFalz__sub_802AC3E8(); }

}
#else
#if PSO_CLASS_PACKAGE == 0x802B0E2C
#include "types.h"

extern "C" {

int render__15TBoss6EmptyWarpFv(void* p);

int fn_802B0DCC(void*);

int render__15TBoss6EmptyWarpFv(void* p) { return fn_802B0DCC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B0EDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TBoss6EmptyWarpFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void TBoss6PlotFalz__sub_802AC678(void);

extern M2C_UNK __vt__15TBoss6EmptyWarp[];

void *__dt__15TBoss6EmptyWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss6EmptyWarp;
        TBoss6PlotFalz__sub_802AC678();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B0F3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss6EmptyWarp__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void TBoss6PlotFalz__sub_802AC6D0(void);

extern M2C_UNK __vt__15TBoss6EmptyWarp[];
extern void *lbl_805D3E90;

void *TBoss6EmptyWarp__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss6EmptyWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3E90;
    TBoss6PlotFalz__sub_802AC6D0();
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B0F8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__15TBoss6EmptyWarpFv(void);
void activate_warp__15TBoss6EmptyWarpFPv(void *arg0);
void TBoss6EmptyWarp__sub_802B1004(void* p);
int TBoss6EmptyWarp__sub_802B1018(void);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void *TBoss6EmptyWarp__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__15TBoss6EmptyWarpFv(void) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TBoss6EmptyWarp__ct(o, tl_02);
    }
    return o;
}

void activate_warp__15TBoss6EmptyWarpFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    TBoss3Volopt__sub_8022675C(0x4003351F, 0, 0, 0);
}
void TBoss6EmptyWarp__sub_802B1004(void* p) { *(s32*)((char*)p + 0x20) = 0; *(s32*)((char*)p + 0x1c) = 2; }
int TBoss6EmptyWarp__sub_802B1018(void) { return 0; }

}
#endif
#endif
