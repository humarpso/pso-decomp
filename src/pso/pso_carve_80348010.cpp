#include "types.h"

extern "C" {

int fn_80341AE0(void*);
int fn_80341B1C(void*);
void fn_80348010(void* p, void* a1);

void fn_80348010(void* p, void* a1) { fn_80341AE0(a1); fn_80341B1C(a1); }

}
