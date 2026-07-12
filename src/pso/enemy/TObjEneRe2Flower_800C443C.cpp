#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__16TObjEneRe2FlowerFv(void);
void *create__16TObjEneRe2FlowerFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjEneRe2Flower__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_800C4D44();
void *__nw__7TObjectFUl(int);

extern u32 lbl_805D5174;

void destroy_instance__16TObjEneRe2FlowerFv(void) {
    TObjPlayer__sub_800C4D44();
    if ((u32) lbl_805D5174 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5174, 1);
        lbl_805D5174 = 0U;
    }
}

extern void *tl_04;

void *create__16TObjEneRe2FlowerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = TObjEneRe2Flower__ct(o, tl_04, arg0);
    }
    return o;
}

}
