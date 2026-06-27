#include "types.h"

extern "C" {

int fn_80068EF0(void);
int fn_80069024(void);
int fn_80141F1C(void*);
int fn_801E2EFC(void);
int fn_801E2F20(void);
int TWindowCtrlMain__sub_8024CE24(void);
int render_nodes__7TObjectFv(void);
int TWindowCtrlMain__vt1(void* p);
int fn_8024662C(void*);

void TWindowCtrlMain__vt2(void* p) { fn_80141F1C(p); fn_801E2EFC(); fn_80069024(); TWindowCtrlMain__sub_8024CE24(); render_nodes__7TObjectFv(); fn_80068EF0(); fn_801E2F20(); }
int TWindowCtrlMain__vt1(void* p) { return fn_8024662C(p); }

}
