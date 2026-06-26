#include "types.h"

extern "C" {

int fn_801D9AD0(void*, void*, void*, void*);
void fn_801D9C88(void* p);

void fn_801D9C88(void* p) { *(short*)((char*)p + 0x6) = 0; { int i; for (i = 0; i < 10; i++) { fn_801D9AD0(p, (void*)i, (void*)65535, (void*)0); } } }

}
