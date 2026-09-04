#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TObjNpcNFM00__create(void *arg0);
void * create__11TObjNpcMojaFPv(void *arg0);
void *dt__11TObjNpcMojaFPvs(void *arg0, s16 arg1);
void free_resources__12TObjNpcNFM00Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcMoja__ct(void *, void *, void *);
void *TObjNpcNFM00__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern void *tl_04;

void * create__11TObjNpcMojaFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcMoja__ct(o2, o, arg0);
    }
    return o2;
}

extern M2C_UNK lbl_804AAC04[];

void *dt__11TObjNpcMojaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AAC04;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void * TObjNpcNFM00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcNFM00__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcNFM00__data_805D5810;
extern u32 TObjNpcNFM00__data_805D5814;

void free_resources__12TObjNpcNFM00Fv(void) {
    if ((u32) TObjNpcNFM00__data_805D5814 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcNFM00__data_805D5814);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcNFM00__data_805D5814);
        TObjNpcNFM00__data_805D5814 = 0U;
    }
    if ((u32) TObjNpcNFM00__data_805D5810 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcNFM00__data_805D5810);
        TObjNpcNFM00__data_805D5810 = 0U;
    }
}

}
