#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TObjNpcHFW01__create(void *arg0);
void *__dt__12TObjNpcHFW00Fv(void *arg0, s16 arg1);
void free_static_resources__12TObjNpcHFW01Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcHFW01__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy__17TObjNpcFemaleTallFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern M2C_UNK __vt__12TObjNpcHFW00[];

void *__dt__12TObjNpcHFW00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcHFW00;
        destroy__17TObjNpcFemaleTallFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void * TObjNpcHFW01__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHFW01__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcHFW01__data_805D57B0;
extern u32 TObjNpcHFW01__data_805D57B4;

void free_static_resources__12TObjNpcHFW01Fv(void) {
    if ((u32) TObjNpcHFW01__data_805D57B4 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHFW01__data_805D57B4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcHFW01__data_805D57B4);
        TObjNpcHFW01__data_805D57B4 = 0U;
    }
    if ((u32) TObjNpcHFW01__data_805D57B0 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcHFW01__data_805D57B0);
        TObjNpcHFW01__data_805D57B0 = 0U;
    }
}

}
