#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TODragonflyCave01__create(void *arg0);
void *TODragonflyCave01__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *TODragonflyCave01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TODragonflyCave01__ct(o, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8016445C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__17TODragonflyCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TODragonflyCave01__data_805D5990;

void release_static_instance__17TODragonflyCave01Fv(void) {
    if ((u32) TODragonflyCave01__data_805D5990 != 0U) {
        TLobby__sub_8001FE7C((void*)TODragonflyCave01__data_805D5990, 1);
        TODragonflyCave01__data_805D5990 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80164540
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TODragonflyCave01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);

extern M2C_UNK __vt__17TODragonflyCave01[];

void *__dt__17TODragonflyCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TODragonflyCave01;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
