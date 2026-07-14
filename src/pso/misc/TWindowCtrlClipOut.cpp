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
