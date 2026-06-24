#include "types.h"

extern "C" {

int fn_800C7D18(void* p);
int fn_80040B3C(void*, int);

int fn_800C7D18(void* p) { return fn_80040B3C(p, 1); }

}
