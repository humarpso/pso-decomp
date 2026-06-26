#include "types.h"

extern "C" {

int fn_8020F998(void* p);
int fn_80073DC4(void*, int);

int fn_8020F998(void* p) { return fn_80073DC4(p, 19); }

}
