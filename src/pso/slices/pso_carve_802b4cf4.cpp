#include "types.h"

extern "C" {

int fn_802B4B64(void*, void*);
void fn_802B4CF4(void* p);

void fn_802B4CF4(void* p) { { int i; for (i = 0; i < 4; i++) { fn_802B4B64(p, (void*)i); } } }

}
