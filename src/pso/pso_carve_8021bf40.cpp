#include "types.h"

extern "C" {

int fn_8021C01C(void* p);
int fn_80073DC4(void*, int);

int fn_8021BF40(void) { return 0; }
int fn_8021C01C(void* p) { return fn_80073DC4(p, 8); }

}
