#include "types.h"

extern "C" {

int fn_800EAB04(void* p);
int fn_800EAE0C(void*, int, int);

int fn_800EAB04(void* p) { return fn_800EAE0C(p, 15, 15); }
int fn_800EAB2C(void) { return 0; }

}
