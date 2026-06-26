#include "types.h"

extern "C" {

int fn_800BA4C4(void* p, int a1, int a2);
int fn_800BA4E8(void*, int, int, int);

int fn_800BA498(void) { return 0; }
int fn_800BA4C4(void* p, int a1, int a2) { return fn_800BA4E8(p, a1, a2, 0); }

}
