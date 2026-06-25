#include "types.h"

extern "C" {

int fn_80341F9C(void*);
int fn_80341FFC(void*);
void fn_80341EB8(void* p);

void fn_80341EB8(void* p) { fn_80341F9C(p); fn_80341FFC(p); *(int*)((char*)p + 0x8c) = 1; }

}
