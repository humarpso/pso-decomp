#include "pso/TPlayerFootStamp.h"

TPlayerFootStamp::~TPlayerFootStamp() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * create__16TPlayerFootStampFPvPv(void *arg0, void *arg1);
void free_instance__16TPlayerFootStampFv(void);
M2C_UNK TLobby__sub_803DA16C(void*);
void *__ct__16TPlayerFootStampFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void * create__16TPlayerFootStampFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = __ct__16TPlayerFootStampFv(o, arg0, arg1);
    }
    return o;
}

extern u32 lbl_805D6710;

void free_instance__16TPlayerFootStampFv(void) {
    if ((u32) lbl_805D6710 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6710);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6710);
        lbl_805D6710 = 0U;
    }
}

}
