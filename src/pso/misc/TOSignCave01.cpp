#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TOSignCave01FPv(void *arg0);
void *TOSignCave01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__12TOSignCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOSignCave01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80176720
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unload_static_data__12TOSignCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOSignCave01__data_805D5AA8;

void unload_static_data__12TOSignCave01Fv(void) {
    if ((u32) TOSignCave01__data_805D5AA8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOSignCave01__data_805D5AA8, 1);
        TOSignCave01__data_805D5AA8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801767A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TOSignCave01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__12TOSignCave01[];

void *__dt__12TOSignCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOSignCave01;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
