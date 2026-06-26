#include "types.h"

extern "C" {

int fn_80067D20(void*);
int fn_80067EE0(void*);
void fn_80067F8C(void* p);

void fn_80067F8C(void* p) { fn_80067EE0(p); fn_80067D20(p); }

}
