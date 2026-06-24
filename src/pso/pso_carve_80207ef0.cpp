#include "types.h"

extern "C" {

int fn_80207EF0(void* p);
int fn_80207F10(void* p);
int fn_80207DA8(void*);

int fn_80207EF0(void* p) { return fn_80207DA8(p); }
int fn_80207F10(void* p) { return fn_80207DA8(p); }
int fn_80207F30(void) { return 0; }

}
