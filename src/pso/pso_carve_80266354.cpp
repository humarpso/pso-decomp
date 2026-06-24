#include "types.h"

extern "C" {

int fn_80266354(void* p, int a1, int a2, int a3);
int fn_80266200(void*, int, int, int, int);

int fn_80266354(void* p, int a1, int a2, int a3) { return fn_80266200(p, a1, a2, a3, -1); }

}
