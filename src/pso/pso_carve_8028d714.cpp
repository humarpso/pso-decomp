#include "types.h"

extern "C" {

int fn_8028D714(void* p);
int fn_8028D628(void*, int);

int fn_8028D714(void* p) { return fn_8028D628(p, 0); }

}
