#include "types.h"

extern "C" {

int fn_8007B65C(void* p);
int fn_8007B67C(void* p);
int fn_8007B60C(void*);

int fn_8007B65C(void* p) { return fn_8007B60C(p); }
int fn_8007B67C(void* p) { return fn_8007B60C(p); }

}
