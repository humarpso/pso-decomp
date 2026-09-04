#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcCloakroomBase__vt88(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TObjNpcCloakroomBase__vt88(s32 arg0) {
    if (get_global_state__14TOKeyMachine01Fv() != 5) {
        TBoss3Volopt__sub_8022675C(0x40003804, arg0 + 0x38, 0, 0);
        return;
    }
    TBoss3Volopt__sub_8022675C(0x40003802, arg0 + 0x38, 0, 0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80149698
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__20TObjNpcCloakroomBaseFPv(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcCloakroomBase__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__20TObjNpcCloakroomBaseFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcCloakroomBase__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80149700
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_static_instance__20TObjNpcCloakroomBaseFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjNpcCloakroomBase__data_805D5740;

void destroy_static_instance__20TObjNpcCloakroomBaseFv(void) {
    if ((u32) TObjNpcCloakroomBase__data_805D5740 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcCloakroomBase__data_805D5740, 1);
        TObjNpcCloakroomBase__data_805D5740 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80149788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__20TObjNpcCloakroomBaseFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);

extern M2C_UNK __vt__20TObjNpcCloakroomBase[];

void *__dt__20TObjNpcCloakroomBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjNpcCloakroomBase;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80149870
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjNpcCloakroomBase__vt21(void);

extern f32 lbl_805DB1E8;

f32 TObjNpcCloakroomBase__vt21(void) {
    return lbl_805DB1E8;
}

}
#endif
#endif
