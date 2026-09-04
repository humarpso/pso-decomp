#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__10TBoss6TubeFv(void *arg0);

s32 query_teammate_state__9TObjEneDDFPv();
s32 TBoss6EmptyWarp__sub_802B1018();
M2C_UNK TBoss6Tube__sub_802B1218(void *);
M2C_UNK TBoss6Tube__sub_802B138C(void *);
M2C_UNK spawn_trap__10TBoss6TubeFi(void *);
M2C_UNK update_timer__10TBoss6TubeFPv(void *);

void run_task__10TBoss6TubeFv(void *arg0) {
    s32 temp_r0;

    if ((TBoss6EmptyWarp__sub_802B1018() == 0) && (query_teammate_state__9TObjEneDDFPv() == 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
        switch (temp_r0) {
        case 0:
            update_timer__10TBoss6TubeFPv(arg0);
            return;
        case 1:
            spawn_trap__10TBoss6TubeFi(arg0);
            TBoss6Tube__sub_802B1218(arg0);
            return;
        case 2:
            TBoss6Tube__sub_802B138C(arg0);
            break;
        }
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802B11CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 scale_by_const__10TBoss6TubeFf(f32 farg0);

extern f32 lbl_805DE254;

f32 scale_by_const__10TBoss6TubeFf(f32 farg0) {
    return lbl_805DE254 * farg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B1288
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state__10TBoss6TubeFv(void);

extern s32 TBoss6Tube__data_805D6720;
extern f32 TBoss6Tube__data_805D6724;
extern f32 TBoss6Tube__data_805DE250;

void reset_state__10TBoss6TubeFv(void) {
    TBoss6Tube__data_805D6720 = 0;
    TBoss6Tube__data_805D6724 = TBoss6Tube__data_805DE250;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B14B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_trap__10TBoss6TubeFi(s32 arg0);
void update_timer__10TBoss6TubeFPv(void *arg0);
M2C_UNK TBoss6Tube__sub_802B129C();
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void spawn_trap__10TBoss6TubeFi(s32 arg0) {
    TBoss6Tube__sub_802B129C();
    TOTrapAncient01__sub_80226578(0x40033520, arg0, 0, 0, 0);
}

void update_timer__10TBoss6TubeFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) >= 0x10E) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        TBoss3Volopt__sub_8022675C(0x4003351F, 0, 0, 0);
        set_shake_preset__11TCameraCtrlFi(2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B15F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TBoss6TubeFv(void *arg0, s16 arg1);
void reset_state__10TBoss6TubeFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__10TBoss6Tube[];

void *__dt__10TBoss6TubeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TBoss6Tube;
        reset_state__10TBoss6TubeFv();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B16BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__10TBoss6TubeFPv(void *arg0);
void free_resources__10TBoss6TubeFv(void);
void *TBoss6Tube__ct(void *, void *);
M2C_UNK reset_state__10TBoss6TubeFv();
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *__nw__7TObjectFUl(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void *create__10TBoss6TubeFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TBoss6Tube__ct(o, arg0);
    }
    return o;
}

extern u32 lbl_805D6718;
extern u32 lbl_805D671C;

void free_resources__10TBoss6TubeFv(void) {
    if ((u32) lbl_805D6718 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6718, 1);
        lbl_805D6718 = 0U;
    }
    if ((u32) lbl_805D671C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D671C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D671C);
        lbl_805D671C = 0U;
    }
    reset_state__10TBoss6TubeFv();
}

}
#endif
#endif
