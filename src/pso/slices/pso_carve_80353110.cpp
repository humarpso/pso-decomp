#include "types.h"

extern "C" {

int fn_80353110(void* p);
int fn_80353134(void* p);
int fn_80353018(void*, int);

int fn_80353110(void* p) { return fn_80353018(p, 16); }
int fn_80353134(void* p) { return fn_80353018(p, 15); }
int fn_80353158(void) { return 0; }
int fn_80353194(void) { return 0; }

}
