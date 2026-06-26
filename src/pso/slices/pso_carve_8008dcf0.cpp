#include "types.h"

extern "C" {

int fn_8008DCF0(void* p);
int fn_80040B3C(void*, int);

int fn_8008DCF0(void* p) { return fn_80040B3C(p, 0); }

}
