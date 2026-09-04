#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__18TWindowCtrlClipOutFv(void* p);
int TWindowCtrlMain__sub_8024CE34(void);
int TCameraCtrl__sub_80068EF0(void);
int TCameraCtrl__sub_80069024(void);
int reset_transform_state__10TObjPlayerFv(void);
int begin_effect_render__13TParticleCtrlFv(void);
int end_effect_render__13TParticleCtrlFv(void);
int TWindowCtrlMain__sub_8024CE44(void*);
int render_nodes__7TObjectFv(void);

void render__18TWindowCtrlClipOutFv(void* p) { if (TWindowCtrlMain__sub_8024CE44(p) != 0) { reset_transform_state__10TObjPlayerFv(); begin_effect_render__13TParticleCtrlFv(); TCameraCtrl__sub_80069024(); TWindowCtrlMain__sub_8024CE34(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); end_effect_render__13TParticleCtrlFv(); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x8024C948
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowCtrlClipOut__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__18TWindowCtrlClipOut[];
extern void *lbl_805D38DC;

void *TWindowCtrlClipOut__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowCtrlClipOut;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D38DC;
    return arg0;
}

}
#endif
#endif
