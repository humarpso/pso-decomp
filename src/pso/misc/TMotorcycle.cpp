#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TMotorcycle__vt12(void);

void TMotorcycle__vt12(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80194E40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TMotorcycle__vt8(s32 arg0, f32 farg0, f32 farg1);
f32 fn_8013157C(s32, s32);
s32 fn_801A2340(s32, f32, f32);

extern s32 lbl_805D4DF0;

s32 TMotorcycle__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (fn_8013157C(lbl_805D4DF0 + 0x178, arg0 + 0x38) < (farg1 * farg1)) {
        return 1;
    }
    return fn_801A2340(arg0, farg0, farg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80195014
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__11TMotorcycleFPv(void *arg0);
void *TMotorcycle__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__11TMotorcycleFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TMotorcycle__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80195060
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_statics__11TMotorcycleFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 lbl_805D5C40;
extern u32 lbl_805D5C44;

void free_statics__11TMotorcycleFv(void) {
    if ((u32) lbl_805D5C44 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C44);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C44);
        lbl_805D5C44 = 0U;
    }
    if ((u32) lbl_805D5C40 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C40, 1);
        lbl_805D5C40 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80195160
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__11TMotorcycleFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__11TObjMesBaseFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__11TMotorcycle[];

void *__dt__11TMotorcycleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMotorcycle;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__11TObjMesBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
