#include "types.h"

extern "C" {

int fn_8001053C(void*);
int fn_800E2DE4(void*, void*);
void fn_801CF534(void* p);

void fn_801CF534(void* p) { fn_800E2DE4(p, (void*)256); fn_8001053C(p); }

}
