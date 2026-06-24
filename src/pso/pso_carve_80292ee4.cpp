#include "types.h"

extern "C" {

int fn_80292F5C(void* p);
int fn_8006B330(void*);

int fn_80292EE4(void) { return 0; }
int fn_80292F34(void) { return 0; }
int fn_80292F5C(void* p) { return fn_8006B330(p); }

}
