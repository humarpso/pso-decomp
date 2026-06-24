#include "types.h"

extern "C" {

int fn_8029C030(void* p);
int fn_800D7BB0(void*);

int fn_8029C030(void* p) { return fn_800D7BB0((char*)p + 0xb4); }

}
