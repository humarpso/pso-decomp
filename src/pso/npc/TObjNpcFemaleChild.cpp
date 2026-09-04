#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjNpcFemaleChildFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);

extern M2C_UNK __vt__18TObjNpcFemaleChild[];

void *__dt__18TObjNpcFemaleChildFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjNpcFemaleChild;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80149F18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcFemaleChild__create(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcFemaleChild__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcFemaleChild__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcFemaleChild__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80149F80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__18TObjNpcFemaleChildFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjNpcFemaleChild__data_805D5768;

void release_static_instance__18TObjNpcFemaleChildFv(void) {
    if ((u32) TObjNpcFemaleChild__data_805D5768 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcFemaleChild__data_805D5768, 1);
        TObjNpcFemaleChild__data_805D5768 = 0U;
    }
}

}
#endif
#endif
