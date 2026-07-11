#include "types.h"

extern "C" {

void render__18TWindowCtrlClipOutFv(void* p);
int TWindowCtrlMain__sub_8024CE34(void);
int TCameraCtrl__sub_80068EF0(void);
int TCameraCtrl__sub_80069024(void);
int fn_80141F1C(void);
int fn_801E2EFC(void);
int fn_801E2F20(void);
int TWindowCtrlMain__sub_8024CE44(void*);
int render_nodes__7TObjectFv(void);

void render__18TWindowCtrlClipOutFv(void* p) { if (TWindowCtrlMain__sub_8024CE44(p) != 0) { fn_80141F1C(); fn_801E2EFC(); TCameraCtrl__sub_80069024(); TWindowCtrlMain__sub_8024CE34(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); fn_801E2F20(); } }

}
