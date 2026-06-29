#include "types.h"

extern "C" {

void TWindowCtrlClipOut__vt2(void* p);
int TWindowCtrlMain__sub_8024CE34(void);
int fn_80068EF0(void);
int fn_80069024(void);
int fn_80141F1C(void);
int fn_801E2EFC(void);
int fn_801E2F20(void);
int TWindowCtrlMain__sub_8024CE44(void*);
int render_nodes__7TObjectFv(void);

void TWindowCtrlClipOut__vt2(void* p) { if (TWindowCtrlMain__sub_8024CE44(p) != 0) { fn_80141F1C(); fn_801E2EFC(); fn_80069024(); TWindowCtrlMain__sub_8024CE34(); render_nodes__7TObjectFv(); fn_80068EF0(); fn_801E2F20(); } }

}
