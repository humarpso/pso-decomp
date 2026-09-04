#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjNpcConnoisseurFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern M2C_UNK __vt__18TObjNpcConnoisseur[];

void *__dt__18TObjNpcConnoisseurFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjNpcConnoisseur;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80149878
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcConnoisseur__create(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcConnoisseur__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcConnoisseur__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcConnoisseur__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801498E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__18TObjNpcConnoisseurFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjNpcConnoisseur__data_805D574C;

void destroy_instance__18TObjNpcConnoisseurFv(void) {
    if ((u32) TObjNpcConnoisseur__data_805D574C != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcConnoisseur__data_805D574C, 1);
        TObjNpcConnoisseur__data_805D574C = 0U;
    }
}

}
#endif
#endif
