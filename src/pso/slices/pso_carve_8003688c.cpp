#include "types.h"

extern "C" {

int fn_8003691C(void* p);
int fn_80036A90(void*, int);

int fn_8003688C(void) { return 0; }
int fn_8003691C(void* p) { return fn_80036A90(p, 1); }

}
