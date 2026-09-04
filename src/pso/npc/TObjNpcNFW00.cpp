#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TObjNpcNFW00Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);

extern M2C_UNK __vt__12TObjNpcNFW00[];

void *__dt__12TObjNpcNFW00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcNFW00;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8014CC2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcNFW00__create(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcNFW00__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcNFW00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcNFW00__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014CC94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__12TObjNpcNFW00Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcNFW00__data_805D5820;
extern u32 TObjNpcNFW00__data_805D5824;

void free_resources__12TObjNpcNFW00Fv(void) {
    if ((u32) TObjNpcNFW00__data_805D5824 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcNFW00__data_805D5824);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcNFW00__data_805D5824);
        TObjNpcNFW00__data_805D5824 = 0U;
    }
    if ((u32) TObjNpcNFW00__data_805D5820 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcNFW00__data_805D5820);
        TObjNpcNFW00__data_805D5820 = 0U;
    }
}

}
#endif
#endif
