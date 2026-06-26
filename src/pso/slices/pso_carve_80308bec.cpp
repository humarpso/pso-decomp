#include "types.h"

extern "C" {

int fn_80308BEC(void* p);
int fn_80308F8C(void*, int);

int fn_80308BEC(void* p) { return fn_80308F8C(p, 5); }

}
