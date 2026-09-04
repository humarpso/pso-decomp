#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjNpcAHM01__vt88(void);
void * TObjNpcARM00__create(void *arg0);
int TObjNpcFemaleBase__sub_80147CD4(void);
void *__dt__12TObjNpcAHM01Fv(void *arg0, s16 arg1);
void free_resources__12TObjNpcAHM01Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcARM00__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcAHM01__data_805D5720;
extern u32 TObjNpcAHM01__data_805D5724;

void free_resources__12TObjNpcAHM01Fv(void) {
    if ((u32) TObjNpcAHM01__data_805D5724 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcAHM01__data_805D5724);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcAHM01__data_805D5724);
        TObjNpcAHM01__data_805D5724 = 0U;
    }
    if ((u32) TObjNpcAHM01__data_805D5720 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcAHM01__data_805D5720);
        TObjNpcAHM01__data_805D5720 = 0U;
    }
}

extern M2C_UNK __vt__12TObjNpcAHM01[];

void *__dt__12TObjNpcAHM01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcAHM01;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TObjNpcAHM01__vt88(void) { return 0; }

int TObjNpcFemaleBase__sub_80147CD4(void) { return 0; }

extern void *tl_04;

void * TObjNpcARM00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcARM00__ct(o2, o, arg0);
    }
    return o2;
}

}
