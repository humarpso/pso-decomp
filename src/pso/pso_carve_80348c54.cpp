#include "types.h"

extern "C" {

int fn_80348C54(void* p);
int fn_80348D0C(void*);

int fn_80348C54(void* p) { return fn_80348D0C((char*)p + 0x4); }

}
