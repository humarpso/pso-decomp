#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

s32 dt__10TTecSlicerFis(s32 arg0, s16 arg1);
s32 get_field_110__10TTecSlicerFPv(void* p);
s16 get_remain_count__10TTecSlicerFPv(void* p);
void destroy_if_set__10TTecSlicerFUi(u32 arg0);
int __dl__FPv();
int queue_destruction__7TObjectFv();

s32 get_field_110__10TTecSlicerFPv(void* p) { return *(s32*)((char*)p + 0x110); }
s16 get_remain_count__10TTecSlicerFPv(void* p) { return *(s16*)((char*)p + 0x11e); }
void destroy_if_set__10TTecSlicerFUi(u32 arg0) {
    if (arg0 != 0U) {
        queue_destruction__7TObjectFv();
    }
}
s32 dt__10TTecSlicerFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8023B5C8
#include "types.h"

extern "C" {

void reset_fields_1e__10TTecSlicerFPv(void* p);

void reset_fields_1e__10TTecSlicerFPv(void* p) { *(u8*)((char*)p + 0x1e) = 0; *(u8*)((char*)p + 0x1f) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023B670
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_on_collision__10TTecSlicerFi(s32 arg0);
u32 TObjButterflyLobby__sub_8007A5D8(s32, s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(s32);

void destroy_on_collision__10TTecSlicerFi(s32 arg0) {
    if (TObjButterflyLobby__sub_8007A5D8(arg0 + 0x44, arg0 + 0x38, 0x8100) != 0U) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023B7E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__10TTecSlicerFi(s32 arg0);
M2C_UNK TTecSlicer__sub_8023B5D8(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, M2C_UNK);
f32 TObjPlayer__sub_80141CF8(s32, s32);
s32 fn_8023B454(s32, s32, s32, s32, s32);
M2C_UNK TBoss6Type1__sub_803D9370(s32, s32);
M2C_UNK TNpcPlayer__sub_803D97B4(s32);

extern f32 lbl_805DC958;

void update__10TTecSlicerFi(s32 arg0) {
    if (TObjPlayer__sub_80141CF8(arg0 + 0x38, arg0 + 0xA8) < lbl_805DC958) {
        TTecSlicer__sub_8023B5D8(arg0);
        if (fn_8023B454(arg0 + 0xC8, arg0 + 0xA8, arg0 + 0xC4, arg0 + 0xC6, arg0 + 0xBC) == 0) {
            set_flags__10TObjPlayerFPvUi(arg0 + 0xC0, 1);
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x90, arg0 + 0xA8);
            TBoss6Type1__sub_803D9370(arg0 + 0x90, arg0 + 0x38);
        }
        TNpcPlayer__sub_803D97B4(arg0 + 0x90);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023BA0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__10TTecSlicerFv(u8 *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK destroy_on_collision__10TTecSlicerFi(void *, s32);
M2C_UNK TTecSlicer__sub_8023B6BC(void *);
M2C_UNK update__10TTecSlicerFi(void *);
M2C_UNK __ct__14TSlicerHistoryFv(void *, void *, s32, void *, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK allow_rendering__7TObjectFv(void *);
s32 TObjPlayer__sub_8001BEF8(void *, M2C_UNK);
M2C_UNK copy_position__15TEffStarLight2DFPv(void *, void *);
u32 query_game_join_id__10TObjPlayerFv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__10TTecSlicerFv(u8 *arg0) {
    s32 temp_r4;
    u8 *var_r31;
    void *new_obj;

    M2C_FIELD(arg0, u32 *, 0x10C) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x114));
    M2C_FIELD(arg0, u32 *, 0x108) = query_game_join_id__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x118));
    if (((u32) M2C_FIELD(arg0, u32 *, 0x108) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x10C) == 0U)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    allow_rendering__7TObjectFv(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) != 0) {
        var_r31 = arg0 + 0x128;
    } else {
        var_r31 = NULL;
    }
    new_obj = (void *)__nw__7TObjectFUl(0x60);
    if (new_obj != 0U) {
        __ct__14TSlicerHistoryFv(new_obj, arg0, M2C_FIELD(arg0, s32 *, 0x24), var_r31, M2C_FIELD(arg0, s32 *, 0x118));
    }
    if (TObjPlayer__sub_8001BEF8(arg0 + 0xC0, 1) == 0) {
        update__10TTecSlicerFi(arg0);
    }
    TTecSlicer__sub_8023B6BC(arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x124) != 0U) {
        copy_position__15TEffStarLight2DFPv(M2C_FIELD(arg0, void **, 0x124), arg0 + 0x38);
    }
    if (TObjPlayer__sub_8001BEF8(arg0 + 0xC0, 2) != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_r4 + M2C_FIELD(arg0, s32 *, 0x138));
    destroy_on_collision__10TTecSlicerFi(arg0, temp_r4);
    M2C_FIELD(arg0, u32 *, 0x108) = 0U;
    M2C_FIELD(arg0, u32 *, 0x10C) = 0U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023BB30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TTecSlicerFv(void *arg0, s16 arg1);
void dt__10TTecSlicerFis(void *, int);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__10TTecSlicer[];

void *__dt__10TTecSlicerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecSlicer;
        if (M2C_FIELD(arg0, void **, 0x124) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x124)); }
        dt__10TTecSlicerFis((s8 *)arg0 + 0xE8, -1);
        dt__10TTecSlicerFis((s8 *)arg0 + 0xC8, -1);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023BF44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__10TTecSlicerFPvs(void *arg0, s16 arg1);
void TLobby__sub_80226294(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CCD0C[];

void *dt__10TTecSlicerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCD0C;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023BFA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init_from_owner__10TTecSlicerFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);

extern M2C_UNK lbl_804CCD0C[];

u8 *init_from_owner__10TTecSlicerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCD0C;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002B51E), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
#endif
#endif
