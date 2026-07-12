#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_802FD9D0(void);
void free_static__12TBoss8DragonFv(void);
void *create__12TBoss8DragonFPv(void *arg0);
void *TBoss8Dragon__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
void TLobby__sub_8001FE7C(void*, int);
void TAdSinglePlyChrSelectGC__sub_8007EBB4(void*);

    extern int TBoss8Dragon__data_805D69B8;
void TBoss8Dragon__sub_802FD9D0(void) { TBoss8Dragon__data_805D69B8 = 0; }

extern u32 TBoss8Dragon__data_805D6988;
extern u32 TBoss8Dragon__data_805D69A8;

void free_static__12TBoss8DragonFv(void) {
    if ((u32) TBoss8Dragon__data_805D69A8 != 0U) {
        TAdSinglePlyChrSelectGC__sub_8007EBB4((void*)TBoss8Dragon__data_805D69A8);
        TBoss8Dragon__data_805D69A8 = 0U;
    }
    if ((u32) TBoss8Dragon__data_805D6988 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss8Dragon__data_805D6988, 1);
        TBoss8Dragon__data_805D6988 = 0U;
    }
}

extern void *tl_04;

void *create__12TBoss8DragonFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x8A4);
    if (o != NULL) {
        o = TBoss8Dragon__ct(o, tl_04, arg0);
    }
    return o;
}

}
