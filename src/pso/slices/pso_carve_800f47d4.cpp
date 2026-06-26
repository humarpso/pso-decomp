#include "types.h"

extern "C" {

int fn_800F47F4(void* p);
int fn_800B97B4(void*);

int fn_800F47D4(void) { return 0; }
int fn_800F47F4(void* p) { return fn_800B97B4(p); }

}
