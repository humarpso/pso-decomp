#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorLabo__vt19(void);
s32 TODoorLabo__vt20(void);

extern s32 lbl_805D661C;

s32 TODoorLabo__vt20(void) {
    return lbl_805D661C;
}

extern s32 lbl_805D6620;

s32 TODoorLabo__vt19(void) {
    return lbl_805D6620;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A27A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TODoorLabo__create(void *arg0);
void *TODoorLabo__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TODoorLabo__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorLabo__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029F904
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__10TODoorLaboFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D6624;
extern u32 lbl_805D6628;
extern u32 lbl_805D662C;

void free_resources__10TODoorLaboFv(void) {
    if ((u32) lbl_805D662C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D662C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D662C);
        lbl_805D662C = 0U;
    }
    if ((u32) lbl_805D6628 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6628);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6628);
        lbl_805D6628 = 0U;
    }
    if ((u32) lbl_805D6624 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6624, 1);
        lbl_805D6624 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029FA7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TODoorLaboFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__10TODoorLabo[];

void *__dt__10TODoorLaboFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TODoorLabo;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
