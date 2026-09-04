#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TObjNpcSecretaryBase__create(void *arg0);
void *__dt__16TObjNpcNurseBaseFv(void *arg0, s16 arg1);
void free_shared_data__16TObjNpcNurseBaseFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjNpcSecretaryBase__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);

extern u32 TObjNpcNurseBase__data_805D5840;

void free_shared_data__16TObjNpcNurseBaseFv(void) {
    if ((u32) TObjNpcNurseBase__data_805D5840 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcNurseBase__data_805D5840, 1);
        TObjNpcNurseBase__data_805D5840 = 0U;
    }
}

extern M2C_UNK __vt__16TObjNpcNurseBase[];

void *__dt__16TObjNpcNurseBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjNpcNurseBase;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void * TObjNpcSecretaryBase__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcSecretaryBase__ct(o2, o, arg0);
    }
    return o2;
}

}
