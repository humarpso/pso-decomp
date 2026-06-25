#include "types.h"

extern "C" {

int fn_80159E24(void*, void*);
void fn_80159F34(void* p);

void fn_80159F34(void* p) { { int i; for (i = 0; i < 8; i++) { fn_80159E24(p, (void*)i); } } }

}
