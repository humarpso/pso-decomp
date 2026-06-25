#include "types.h"

extern "C" {

int fn_802C456C(void*, void*, void*);
void fn_802C36D8(void* p);

void fn_802C36D8(void* p) { { int i; for (i = 0; i < 30; i++) { fn_802C456C(p, (void*)i, (void*)0); } } }

}
