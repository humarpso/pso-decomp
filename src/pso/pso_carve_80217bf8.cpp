#include "types.h"

extern "C" {

int fn_80217BF8(void* p);
int fn_80073DC4(void*, int);

int fn_80217BF8(void* p) { return fn_80073DC4(p, 5); }

}
