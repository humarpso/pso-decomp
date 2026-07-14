#include "types.h"

extern "C" {

int run_task__15TWindowCtrlMainFv(void* p);
void render__15TWindowCtrlMainFv(void* p);
int TWindowCtrlMain__sub_8024CE24(void);
int TCameraCtrl__sub_80068EF0(void);
int TCameraCtrl__sub_80069024(void);
int reset_transform_state__10TObjPlayerFv(void*);
int begin_effect_render__13TParticleCtrlFv(void);
int end_effect_render__13TParticleCtrlFv(void);
int update_com_card__9TWindowDDFPv(void*);
int render_nodes__7TObjectFv(void);

void render__15TWindowCtrlMainFv(void* p) { reset_transform_state__10TObjPlayerFv(p); begin_effect_render__13TParticleCtrlFv(); TCameraCtrl__sub_80069024(); TWindowCtrlMain__sub_8024CE24(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); end_effect_render__13TParticleCtrlFv(); }
int run_task__15TWindowCtrlMainFv(void* p) { return update_com_card__9TWindowDDFPv(p); }

}
