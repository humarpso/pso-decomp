#include "types.h"

extern "C" {

int fn_801EE008(void* p);
int fn_801EE028(void* p);
int fn_801A3C00(void*);
int fn_801F36E4(void*);

int fn_801EE008(void* p) { return fn_801F36E4(p); }
int fn_801EE028(void* p) { return fn_801A3C00(p); }

}
