#include "types.h"

extern "C" {

int fn_801C6A14(void* p);
int fn_8001BEE8(void*, int);

int fn_801C6A14(void* p) { return fn_8001BEE8((char*)p + 0x4, 1); }
int fn_801C6A3C(void) { return 0; }

}
