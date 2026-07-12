#include "types.h"

extern "C" {

int run_task__15TWindowCtrlMainFv(void* p);
void render__15TWindowCtrlMainFv(void* p);
int TWindowCtrlMain__sub_8024CE24(void);
int TCameraCtrl__sub_80068EF0(void);
int TCameraCtrl__sub_80069024(void);
int TObjPlayer__sub_80141F1C(void*);
int TParticleCtrl__sub_801E2EFC(void);
int TParticleCtrl__sub_801E2F20(void);
int update_com_card__9TWindowDDFPv(void*);
int render_nodes__7TObjectFv(void);

void render__15TWindowCtrlMainFv(void* p) { TObjPlayer__sub_80141F1C(p); TParticleCtrl__sub_801E2EFC(); TCameraCtrl__sub_80069024(); TWindowCtrlMain__sub_8024CE24(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); TParticleCtrl__sub_801E2F20(); }
int run_task__15TWindowCtrlMainFv(void* p) { return update_com_card__9TWindowDDFPv(p); }

}
