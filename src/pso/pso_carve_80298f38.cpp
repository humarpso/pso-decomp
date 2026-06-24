#include "types.h"

extern "C" {

int fn_80298F6C(void* p);
int fn_80299454(void*);

int fn_80298F38(void) { return 0; }
int fn_80298F6C(void* p) { return fn_80299454(p); }

}
