#include "types.h"

extern "C" {

int fn_80269C6C(void* p, int a1, int a2);
int fn_80269A0C(void*, int, int, int);

int fn_80269C6C(void* p, int a1, int a2) { return fn_80269A0C(p, a1, a2, -1); }

}
