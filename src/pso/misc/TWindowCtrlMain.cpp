#include "types.h"

extern "C" {

int run_task__15TWindowCtrlMainFv(void* p);
void render__15TWindowCtrlMainFv(void* p);
int TWindowCtrlMain__sub_8024CE24(void);
int fn_80068EF0(void);
int fn_80069024(void);
int fn_80141F1C(void*);
int fn_801E2EFC(void);
int fn_801E2F20(void);
int fn_8024662C(void*);
int render_nodes__7TObjectFv(void);

void render__15TWindowCtrlMainFv(void* p) { fn_80141F1C(p); fn_801E2EFC(); fn_80069024(); TWindowCtrlMain__sub_8024CE24(); render_nodes__7TObjectFv(); fn_80068EF0(); fn_801E2F20(); }
int run_task__15TWindowCtrlMainFv(void* p) { return fn_8024662C(p); }

}
