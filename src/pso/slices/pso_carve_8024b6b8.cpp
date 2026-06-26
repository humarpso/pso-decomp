#include "types.h"

extern "C" {

int fn_8024B650(void*, void*, void*);
void fn_8024B6B8(void* p, void* a1);

void fn_8024B6B8(void* p, void* a1) { { int i; for (i = 0; i < 12; i++) { fn_8024B650((void*)i, p, a1); } } }

}
