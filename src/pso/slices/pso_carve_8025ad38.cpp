#include "types.h"

extern "C" {

int fn_8025AD38(void* p, int a1);
int fn_8025AC50(void*, int, int);

int fn_8025AD38(void* p, int a1) { return fn_8025AC50(p, a1, 0); }

}
