#include "types.h"

extern "C" {

int fn_80336030(void* p);
int fn_8033596C(void*);

int fn_80336030(void* p) { return fn_8033596C(*(void**)((char*)p + 0x24)); }

}
