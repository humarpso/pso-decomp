#include "types.h"

extern "C" {

int fn_8004B20C(void*, void*);
int fn_80080750(void*);
void fn_8004D29C(void* p);

void fn_8004D29C(void* p) { if (fn_80080750(p) == 0) { fn_8004B20C(p, (void*)1); } }

}
