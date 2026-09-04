#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TORockJungleS01__vt16(s32 arg0);

M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TORockJungleS01__vt16(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4BC19, arg0 + 0x38, 0, 0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8029C8FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TORockJungleS01FPv(void *arg0);
void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1);
void *TORockJungleS01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

void *create__15TORockJungleS01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TORockJungleS01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__15TORockJungleS01[];

void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TORockJungleS01;
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029CB38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_globals__15TORockJungleS01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D65D0;
extern u32 lbl_805D65D4;

void free_globals__15TORockJungleS01Fv(void) {
    if ((u32) lbl_805D65D4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65D4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D65D4);
        lbl_805D65D4 = 0U;
    }
    if ((u32) lbl_805D65D0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D65D0, 1);
        lbl_805D65D0 = 0U;
    }
}

}
#endif
#endif
