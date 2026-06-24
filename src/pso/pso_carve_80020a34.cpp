#include "types.h"

extern "C" {

int fn_80020A34(void* p);
int fn_800BB858(void*);

int fn_80020A34(void* p) { return fn_800BB858(p); }

}
