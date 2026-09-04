#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void release_object__10TBoss6RockFPv(void* p);

int queue_destruction__7TObjectFv(void*);

void release_object__10TBoss6RockFPv(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0xb0)); *(int*)((char*)p + 0xb0) = 0; } }

}
#else
#if PSO_CLASS_PACKAGE == 0x803537D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target__10TBoss6RockFPviiiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void set_target__10TBoss6RockFPviiiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (arg2));
        copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x30), (void *) (arg3));
        M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x3C) = arg4;
        M2C_FIELD(arg0, s32 *, 0x40) = arg5;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80353848
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_if_active__10TBoss6RockFPv(u8 *arg0);
s32 TBoss6PlotFalz__sub_802AB6CC(void *, f32);
M2C_UNK TBoss6PlotFalz__sub_802ABF44(f32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern const f32 TBoss6Rock__data_805DFF48;
extern const f32 TBoss6Rock__data_805DFF4C;

void render_if_active__10TBoss6RockFPv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (TBoss6PlotFalz__sub_802AB6CC((void *) (arg0 + 0x20), (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - TBoss6Rock__data_805DFF48)) != 0)) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x20));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x30)));
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x38)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x3C)));
        TBoss6PlotFalz__sub_802ABF44((f32) (TBoss6Rock__data_805DFF4C));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x40)));
        reset_fish_globals__8TObjFishFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803538E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void check_and_destroy__10TBoss6RockFPv(void* p);
void *destroy__10TBoss6RockFPvs(void *arg0, s16 arg1);
void *init_object__10TBoss6RockFPvPv(void *arg0, void *);
void *create__10TBoss6RockFv(void);
int TBoss6Rock__sub_80353A04(void);
int TBoss6Rock__sub_80353A0C(void);
int is_active__10TBoss6RockFv(void*);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
int queue_destruction__7TObjectFv(void*);

void check_and_destroy__10TBoss6RockFPv(void* p) { if (is_active__10TBoss6RockFv(p) == 0) { *(int*)((char*)p + 0x1c) = 0; queue_destruction__7TObjectFv(p); } }

extern M2C_UNK lbl_804F1280[];

void *destroy__10TBoss6RockFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1280;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F1280[];

void *init_object__10TBoss6RockFPvPv(void *arg0, void *) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1280;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

extern void *tl_06;

void *create__10TBoss6RockFv(void) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = init_object__10TBoss6RockFPvPv((void *)(o), (void *)(tl_06));
    }
    return o;
}

    extern int TBoss6Rock__data_805D6EF4;
int TBoss6Rock__sub_80353A04(void) {  return TBoss6Rock__data_805D6EF4; }

    extern int TBoss6Rock__data_805D6EF0;
int TBoss6Rock__sub_80353A0C(void) {  return TBoss6Rock__data_805D6EF0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80353D54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_point__10TBoss6RockFiPvPv(s32 arg0, void *arg1, f32 *arg2);
s32 TBoss6Rock__sub_80353E10();
void *TBoss6Rock__sub_80354148(s32);
void VecCopy__FP3VecPC3Vec(void *, const void *);

extern u8 TBoss6Rock__data_805437F8[];

s32 get_point__10TBoss6RockFiPvPv(s32 arg0, void *arg1, f32 *arg2) {
    if (TBoss6Rock__sub_80353E10() == 0) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(arg1, &TBoss6Rock__data_805437F8[arg0 * 0xC]);
    *arg2 = M2C_FIELD(TBoss6Rock__sub_80354148(arg0), f32 *, 4);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035477C
#include "types.h"

extern "C" {

void render__10TBoss6RockFv(void* p);

int TBoss6Rock__sub_803546B0(void*);
int is_active__10TBoss6RockFv(void*);

void render__10TBoss6RockFv(void* p) { if (is_active__10TBoss6RockFv(p) != 0) { TBoss6Rock__sub_803546B0(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803549E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__10TBoss6RockFPv(void *arg0);
void *TBoss6Rock__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__10TBoss6RockFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TBoss6Rock__ct(o, tl_02, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80354A30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_active__10TBoss6RockFv(void);

extern s32 TBoss6Rock__data_805D6EF8;

u8 is_active__10TBoss6RockFv(void) {
    return (u8) (TBoss6Rock__data_805D6EF8 != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80354A44
#include "types.h"

extern "C" {

void TBoss6Rock__sub_80354A44(void);

    extern int TBoss6Rock__data_805D6EF8;
void TBoss6Rock__sub_80354A44(void) { TBoss6Rock__data_805D6EF8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80354AC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_data__10TBoss6RockFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 TBoss6Rock__data_805D6EF0;
extern u32 TBoss6Rock__data_805D6EF4;

void free_data__10TBoss6RockFv(void) {
    if ((u32) TBoss6Rock__data_805D6EF0 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss6Rock__data_805D6EF0, 1);
        TBoss6Rock__data_805D6EF0 = 0U;
    }
    if ((u32) TBoss6Rock__data_805D6EF4 != 0U) {
        TLobby__sub_803DA16C((void*)TBoss6Rock__data_805D6EF4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TBoss6Rock__data_805D6EF4);
        TBoss6Rock__data_805D6EF4 = 0U;
    }
}

}
#endif
#endif
