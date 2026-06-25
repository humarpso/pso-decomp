#include "types.h"

extern "C" {

int fn_802B9BBC(void*, void*);
void fn_802B9D28(void* p);

void fn_802B9D28(void* p) { { int i; for (i = 0; i < 14; i++) { fn_802B9BBC(p, (void*)i); } } }

}
