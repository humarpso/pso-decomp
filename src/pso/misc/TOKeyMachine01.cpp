#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_global_state__14TOKeyMachine01Fv(void);

extern s32 lbl_805D5FC4;

s32 get_global_state__14TOKeyMachine01Fv(void) {
    return lbl_805D5FC4;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8016D0B4
#include "types.h"

extern "C" {

void TOKeyMachine01__vt23(void);

void TOKeyMachine01__vt23(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016D658
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TOKeyMachine01FPv(void *arg0);
void *TOKeyMachine01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__14TOKeyMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyMachine01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016D6A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_statics__14TOKeyMachine01Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5A30;
extern s32 *TOKeyMachine01__data_805D5A34;

void free_statics__14TOKeyMachine01Fv(void) {
    if ((s32 *) TOKeyMachine01__data_805D5A34 != NULL) {
        free_if_valid__10TObjPlayerFi(*TOKeyMachine01__data_805D5A34);
        *TOKeyMachine01__data_805D5A34 = 0;
        if ((s32 *) TOKeyMachine01__data_805D5A34 != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyMachine01__data_805D5A34);
            TOKeyMachine01__data_805D5A34 = NULL;
        }
    }
    if ((u32) lbl_805D5A30 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A30, 1);
        lbl_805D5A30 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016D798
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TOKeyMachine01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);

extern M2C_UNK __vt__14TOKeyMachine01[];

void *__dt__14TOKeyMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyMachine01;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029E764
#include "types.h"

extern "C" {

s32 is_state_active__14TOKeyMachine01Fv(void);
s32 get_global_state__14TOKeyMachine01Fv();

s32 is_state_active__14TOKeyMachine01Fv(void) {
    if ((get_global_state__14TOKeyMachine01Fv() == 0x1C) || (get_global_state__14TOKeyMachine01Fv() == 0x1D) || (get_global_state__14TOKeyMachine01Fv() == 0x20) || (get_global_state__14TOKeyMachine01Fv() == 0x1F)) {
        return 1;
    }
    return 0;
}

}
#endif
#endif
