#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_802C28B4(void *arg0);
void TObjPlayer__sub_802C2900(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *TObjPlayer__sub_802C2F04(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjPlayer__sub_802C28B4(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjPlayer__sub_802C2F04(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D6798;
extern u32 lbl_805D679C;

void TObjPlayer__sub_802C2900(void) {
    if ((u32) lbl_805D679C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D679C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D679C);
        lbl_805D679C = 0U;
    }
    if ((u32) lbl_805D6798 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6798, 1);
        lbl_805D6798 = 0U;
    }
}

}
