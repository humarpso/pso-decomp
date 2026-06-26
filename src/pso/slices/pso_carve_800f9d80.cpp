#include "types.h"

extern "C" {

int fn_800F9D80(void* p);
int fn_800FD944(void*);

int fn_800F9D80(void* p) { return fn_800FD944(p); }
int fn_800F9DA0(void) { return 0; }

}
