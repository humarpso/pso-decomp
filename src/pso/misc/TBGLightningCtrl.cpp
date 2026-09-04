#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__16TBGLightningCtrlFv(void);

void render__16TBGLightningCtrlFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x802A9A08
#include "types.h"

extern "C" {

void TBGLightningCtrl__sub_802A9A08(void);
int set_global_param__8TObjFishFi(void*);

    extern int lbl_805D66D0;
void TBGLightningCtrl__sub_802A9A08(void) { set_global_param__8TObjFishFi((void*)(lbl_805D66D0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A9BCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TBGLightningCtrlFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__16TBGLightningCtrl[];

void *__dt__16TBGLightningCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TBGLightningCtrl;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A9C8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBGLightningCtrl__create(void *arg0);
void *TBGLightningCtrl__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TBGLightningCtrl__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TBGLightningCtrl__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A9CD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__16TBGLightningCtrlFv(void);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D66D0;

void destroy_instance__16TBGLightningCtrlFv(void) {
    if ((u32) lbl_805D66D0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D66D0);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D66D0);
        lbl_805D66D0 = 0U;
    }
}

}
#endif
#endif
