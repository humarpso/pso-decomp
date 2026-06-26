#include "types.h"

extern "C" {

int fn_8028C998(void*);
int fn_8028CB6C(void*);
void fn_8028D044(void* p);

void fn_8028D044(void* p) { if (fn_8028C998(p) != 0) { fn_8028CB6C(p); *(int*)((char*)p + 0x60) = 2; } }

}
