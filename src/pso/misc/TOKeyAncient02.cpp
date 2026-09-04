#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TOKeyAncient02__vt23(void);

void TOKeyAncient02__vt23(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8016B4EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TOKeyAncient02FPv(void *arg0);
void *TOKeyAncient02__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__14TOKeyAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOKeyAncient02__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016B538
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static__14TOKeyAncient02Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5A00;
extern s32 lbl_805D5A04;
extern void *lbl_805D5A08;

void free_static__14TOKeyAncient02Fv(void) {
    if ((void *) lbl_805D5A08 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A08, s32 *, 4));
        if ((void *) lbl_805D5A08 != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5A08);
            lbl_805D5A08 = NULL;
        }
    }
    if ((u32) lbl_805D5A00 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A00, 1);
        lbl_805D5A00 = 0U;
    }
    lbl_805D5A04 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016B63C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TOKeyAncient02Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__14TOKeyAncient02[];

void *__dt__14TOKeyAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient02;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
