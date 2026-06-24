#include "types.h"

extern "C" {

int fn_8004B77C(void*);
int fn_8004BA18(void*);
void fn_8004C5B4(void* p);

void fn_8004C5B4(void* p) { fn_8004BA18(p); fn_8004B77C(p); }

}
