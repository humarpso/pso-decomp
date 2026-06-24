#include "types.h"

extern "C" {

int fn_8022F4EC(void* p);
int fn_80236EE8(void*);

int fn_8022F42C(void) { return 0; }
int fn_8022F4EC(void* p) { return fn_80236EE8(p); }

}
