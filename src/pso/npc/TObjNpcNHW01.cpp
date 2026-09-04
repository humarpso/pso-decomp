#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TObjNpcNurseBase__create(void *arg0);
void *__dt__12TObjNpcNHW01Fv(void *arg0, s16 arg1);
void free_resources__12TObjNpcNHW01Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcNurseBase__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcNHW01__data_805D5838;
extern u32 TObjNpcNHW01__data_805D583C;

void free_resources__12TObjNpcNHW01Fv(void) {
    if ((u32) TObjNpcNHW01__data_805D583C != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcNHW01__data_805D583C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcNHW01__data_805D583C);
        TObjNpcNHW01__data_805D583C = 0U;
    }
    if ((u32) TObjNpcNHW01__data_805D5838 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcNHW01__data_805D5838);
        TObjNpcNHW01__data_805D5838 = 0U;
    }
}

extern M2C_UNK __vt__12TObjNpcNHW01[];

void *__dt__12TObjNpcNHW01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcNHW01;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void * TObjNpcNurseBase__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcNurseBase__ct(o2, o, arg0);
    }
    return o2;
}

}
