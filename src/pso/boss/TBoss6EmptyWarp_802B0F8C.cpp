#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TBoss6EmptyWarp__sub_802B0F8C(void);
void TBoss6EmptyWarp__sub_802B0FC8(void *arg0);
void TBoss6EmptyWarp__sub_802B1004(void* p);
int TBoss6EmptyWarp__sub_802B1018(void);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void *TBoss6EmptyWarp__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *TBoss6EmptyWarp__sub_802B0F8C(void) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TBoss6EmptyWarp__ct(o, tl_02);
    }
    return o;
}

void TBoss6EmptyWarp__sub_802B0FC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    TBoss3Volopt__sub_8022675C(0x4003351F, 0, 0, 0);
}
void TBoss6EmptyWarp__sub_802B1004(void* p) { *(s32*)((char*)p + 0x20) = 0; *(s32*)((char*)p + 0x1c) = 2; }
int TBoss6EmptyWarp__sub_802B1018(void) { return 0; }

}
