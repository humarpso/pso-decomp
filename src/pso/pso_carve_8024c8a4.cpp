#include "types.h"

extern "C" {

int fn_80068EF0(void);
int fn_80069024(void);
int fn_80141F1C(void);
int fn_801E2EFC(void);
int fn_801E2F20(void);
int fn_8024CE34(void);
int fn_8024CE44(void*);
int render_nodes__7TObjectFv(void);
void fn_8024C8A4(void* p);

void fn_8024C8A4(void* p) { if (fn_8024CE44(p) != 0) { fn_80141F1C(); fn_801E2EFC(); fn_80069024(); fn_8024CE34(); render_nodes__7TObjectFv(); fn_80068EF0(); fn_801E2F20(); } }

}
