#include "types.h"

extern "C" {

int fn_80134A20(void* p);
int fn_801F5C50(void*);

int fn_80134A20(void* p) { return fn_801F5C50(p); }

}
