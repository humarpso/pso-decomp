#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void shift_collision_bounds__14TItemAttackColFPv(void *arg0);

void shift_collision_bounds__14TItemAttackColFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x104) = (s32) (M2C_FIELD(arg0, s32 *, 0x104) + 0xCCC);
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) (M2C_FIELD(arg0, s32 *, 0x11C) - 0xCCC);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802E3BFC
#include "types.h"

extern "C" {

void add_to_active_list__14TItemAttackColFPv(void* a0);
int fn_802E3BA8(void*, void*);

    extern int lbl_805D68E8;
    extern int lbl_805D68EC;
void add_to_active_list__14TItemAttackColFPv(void* a0) { fn_802E3BA8((void*)(lbl_805D68E8), a0); lbl_805D68EC = (lbl_805D68EC + 0x1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E3D40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemAttackCol__vt5(s32 arg0);

M2C_UNK VecCopy__FP3VecPC3Vec(M2C_UNK *, s32);
M2C_UNK TItemAttackCol__sub_802E3D8C(s32, M2C_UNK *);
M2C_UNK TBoss4Zako__sub_803D8910(M2C_UNK *, s32);

void TItemAttackCol__vt5(s32 arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0xD0);
    TBoss4Zako__sub_803D8910(&sp8, arg0 + 0x24);
    TItemAttackCol__sub_802E3D8C(arg0, &sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E3FF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TItemAttackColFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__14TItemAttackCol[];

void *__dt__14TItemAttackColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TItemAttackCol;
        if (M2C_FIELD(arg0, void **, 0x12C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x12C)); M2C_FIELD(arg0, M2C_UNK *, 0x12C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x130) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x130)); M2C_FIELD(arg0, M2C_UNK *, 0x130) = 0; }
        if (M2C_FIELD(arg0, void **, 0x134) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x134)); M2C_FIELD(arg0, M2C_UNK *, 0x134) = 0; }
        if (M2C_FIELD(arg0, void **, 0x140) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x140)); M2C_FIELD(arg0, M2C_UNK *, 0x140) = 0; }
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E4454
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__14TItemAttackColFPvPv(void *arg0, void *arg1);
void *TItemAttackCol__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__14TItemAttackColFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x144);
    if (o != NULL) {
        TItemAttackCol__ct(o, arg0, arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E4904
#include "types.h"

extern "C" {

void copy_pos__14TItemAttackColFPvPv(void* p, void* q);

void copy_pos__14TItemAttackColFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E49F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_attack_collision__14TItemAttackColFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804E355C[];

void *destroy_attack_collision__14TItemAttackColFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E355C;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
