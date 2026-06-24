#include "types.h"

extern "C" {

int fn_8004E068(void*);
int fn_8004E2C8(void*);
void fn_8004E3F4(void* p);

void fn_8004E3F4(void* p) { fn_8004E2C8(p); fn_8004E068(p); }

}
