#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss4CheckEmpty.h"

TBoss4CheckEmpty::~TBoss4CheckEmpty() {}
#else
#if PSO_CLASS_PACKAGE == 0x8034A7CC
#include "types.h"

extern "C" {

void render__16TBoss4CheckEmptyFv(void);

void render__16TBoss4CheckEmptyFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034A8B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__16TBoss4CheckEmptyFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__16TBoss4CheckEmpty[];
extern void *lbl_805D4318;

void *__ct__16TBoss4CheckEmptyFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TBoss4CheckEmpty;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4318;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034A8FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TBoss4CheckEmptyFv(void);
void *__ct__16TBoss4CheckEmptyFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__16TBoss4CheckEmptyFv(void) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = __ct__16TBoss4CheckEmptyFv(o, tl_02);
    }
    return o;
}

}
#endif
#endif
