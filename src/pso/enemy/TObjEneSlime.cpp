#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TObjEneSlime__vt61(void* p);

int TObjEneSlime__sub_800EB910(void*);

int TObjEneSlime__vt61(void* p) { return TObjEneSlime__sub_800EB910(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x800EB9F0
#include "types.h"

extern "C" {

void TObjEneSlime__sub_800EB9F0(void* p, void* q);

void TObjEneSlime__sub_800EB9F0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EBB18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TObjEneSlimeFv(void *arg0);
M2C_UNK TLobby__sub_8002AFD4(void *, s32 *, M2C_UNK);
s32 check_demo_mode__10TObjPlayerFv();
s32 fn_800EB8DC(void *);
M2C_UNK TLobby__sub_800F6510(void *, s32 *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

}

struct Base_800EBB18 { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_800EBB18 : Base_800EBB18 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m77(s32 *);
};

extern "C" {

void run_task__12TObjEneSlimeFv(void *arg0) {
    s32 sp8;

    if ((check_demo_mode__10TObjPlayerFv() == 0) && (fn_800EB8DC(arg0) != 0)) {
        sp8 = 0x800;
        TLobby__sub_800F6510(arg0, &sp8);
        TLobby__sub_8002AFD4(arg0, &sp8, 0);
        ((VObj_800EBB18 *)arg0)->m77(&sp8);
        send_entity_set_flags__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EBBC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TObjEneSlimeFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void TObjEneSlime__sub_800EB910(void *);

extern M2C_UNK __vt__12TObjEneSlime[];

void *__dt__12TObjEneSlimeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjEneSlime;
        TObjEneSlime__sub_800EB910(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EBD00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_instance__12TObjEneSlimeFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D52B0;

void free_instance__12TObjEneSlimeFv(void) {
    if ((u32) lbl_805D52B0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D52B0, 1);
        lbl_805D52B0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EBD38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_pair__12TObjEneSlimeFv(void);
void *TLobby__sub_80020004(void *, s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
void *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK spawn_child__12TObjEneSlimeFsiiff(M2C_UNK, s32, s32, f32, f32);

extern M2C_UNK lbl_80496350[];
extern void *lbl_805D52B0;
extern f32 lbl_805DA66C;
extern f32 lbl_805DA6B4;

void spawn_pair__12TObjEneSlimeFv(void) {
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;

    temp_r4 = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (temp_r4 != NULL) {
        temp_r4 = TLobby__sub_80020004(temp_r4, 1, lbl_80496350, 0, 0, 0);
    }
    lbl_805D52B0 = temp_r4;
    temp_r5 = M2C_FIELD(temp_r4, void **, 0x42C);
    spawn_child__12TObjEneSlimeFsiiff(0x28, M2C_FIELD(temp_r5, s32 *, 0x48), M2C_FIELD(temp_r5, s32 *, 0x4C), lbl_805DA66C, lbl_805DA6B4);
    temp_r5_2 = M2C_FIELD(lbl_805D52B0, void **, 0x42C);
    spawn_child__12TObjEneSlimeFsiiff(0x29, M2C_FIELD(temp_r5_2, s32 *, 0x58), M2C_FIELD(temp_r5_2, s32 *, 0x5C), lbl_805DA66C, lbl_805DA6B4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EBDC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__12TObjEneSlimeFi(s32 arg0);
s32 TObjControl__ct(s32, s32);
s32 TObjEneSlime__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__12TObjEneSlimeFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3D8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneSlime__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D7260
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_child__12TObjEneSlimeFsiiff(s16 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void *TObjNpcEnemy__sub_802D732C();

void spawn_child__12TObjEneSlimeFsiiff(s16 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *temp_r3;

    temp_r3 = TObjNpcEnemy__sub_802D732C();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0) = arg0;
        M2C_FIELD(temp_r3, s16 *, 2) = 0;
        M2C_FIELD(temp_r3, f32 *, 4) = farg1;
        M2C_FIELD(temp_r3, s32 *, 8) = arg1;
        M2C_FIELD(temp_r3, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_r3, f32 *, 0x10) = farg0;
        M2C_FIELD(temp_r3, s32 *, 0x14) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x1C) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x1E) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x20) = 0;
    }
}

}
#endif
#endif
