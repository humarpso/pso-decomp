#include "types.h"

extern "C" {

int fn_80341AE0(void*);
int fn_80341B10(void*);
void fn_80348048(void* p, void* a1);

void fn_80348048(void* p, void* a1) { fn_80341AE0(a1); fn_80341B10(a1); }

}
