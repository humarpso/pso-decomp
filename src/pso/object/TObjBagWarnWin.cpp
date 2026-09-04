#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__14TObjBagWarnWinFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TObjBagWarnWin[];
extern void *lbl_805D2848;

void *__ct__14TObjBagWarnWinFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjBagWarnWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2848;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0xA0) = 0;
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8006EF24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TObjBagWarnWinFPv(void *arg0);
void *__ct__14TObjBagWarnWinFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__14TObjBagWarnWinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = __ct__14TObjBagWarnWinFv(o, arg0);
    }
    return o;
}

}
#endif
#endif
