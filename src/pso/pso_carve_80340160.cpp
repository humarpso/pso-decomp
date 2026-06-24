#include "types.h"

extern "C" {

int fn_80340160(void* p);
int fn_8033FDB0(void*);

int fn_80340160(void* p) { return fn_8033FDB0(p); }
int fn_80340180(void) { return 0; }

}
