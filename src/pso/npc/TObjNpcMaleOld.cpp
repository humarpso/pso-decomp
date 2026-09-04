#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TObjNpcMaleOldFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern M2C_UNK __vt__14TObjNpcMaleOld[];

void *__dt__14TObjNpcMaleOldFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjNpcMaleOld;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8014C23C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcMaleOld__create(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcMaleOld__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcMaleOld__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcMaleOld__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014C2A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_static_instance__14TObjNpcMaleOldFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjNpcMaleOld__data_805D5800;

void destroy_static_instance__14TObjNpcMaleOldFv(void) {
    if ((u32) TObjNpcMaleOld__data_805D5800 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcMaleOld__data_805D5800, 1);
        TObjNpcMaleOld__data_805D5800 = 0U;
    }
}

}
#endif
#endif
