#include "types.h"

extern "C" {

int fn_801C1010(void*);
int fn_801E4570(void*);
void fn_801C1108(void* p);

void fn_801C1108(void* p) { fn_801C1010(p); fn_801E4570(p); }

}
