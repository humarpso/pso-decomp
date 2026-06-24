#include "types.h"

extern "C" {

int fn_800BA5D0(void* p, int a1, int a2);
int fn_800BA5F4(void*, int, int, int);

int fn_800BA5A4(void) { return 0; }
int fn_800BA5D0(void* p, int a1, int a2) { return fn_800BA5F4(p, a1, a2, 0); }

}
