#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TObjNpcLappy__create(void *arg0);
void TObjNpcLappy__sub_8014B620(void *arg0);
void *__dt__12TObjNpcHRM01Fv(void *arg0, s16 arg1);
void free_shared_objects__12TObjNpcHRM01Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcLappy__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcHRM01__data_805D57C8;
extern u32 TObjNpcHRM01__data_805D57CC;

void free_shared_objects__12TObjNpcHRM01Fv(void) {
    if ((u32) TObjNpcHRM01__data_805D57CC != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHRM01__data_805D57CC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcHRM01__data_805D57CC);
        TObjNpcHRM01__data_805D57CC = 0U;
    }
    if ((u32) TObjNpcHRM01__data_805D57C8 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcHRM01__data_805D57C8);
        TObjNpcHRM01__data_805D57C8 = 0U;
    }
}

extern M2C_UNK __vt__12TObjNpcHRM01[];

void *__dt__12TObjNpcHRM01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcHRM01;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjNpcLappy__sub_8014B620(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
}

extern void *tl_04;

void * TObjNpcLappy__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcLappy__ct(o2, o, arg0);
    }
    return o2;
}

}
