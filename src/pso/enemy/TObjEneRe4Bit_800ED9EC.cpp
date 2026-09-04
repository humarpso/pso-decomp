#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Bit__sub_800EDAB0(void);
void * create__13TObjEneRe4BitFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void create_disabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
void create_enabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
void *TObjEneRe4Bit__ct(void *, void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create_enabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    create__13TObjEneRe4BitFPvPvPvPvPv((void *)(arg0), (void *)(arg1), (void *)(1), (void *)(arg2), (void *)(arg3));
}

void create_disabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    create__13TObjEneRe4BitFPvPvPvPvPv((void *)(arg0), (void *)(arg1), (void *)(0), (void *)(arg2), (void *)(arg3));
}

extern void *tl_04;

void * create__13TObjEneRe4BitFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x410);
    if (o != NULL) {
        o = TObjEneRe4Bit__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

void TObjEneRe4Bit__sub_800EDAB0(void) {  }

}
