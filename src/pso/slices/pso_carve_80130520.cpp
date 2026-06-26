#include "types.h"

extern "C" {

int fn_80121200(void*);
int fn_803D96A8(void*, void*);
void fn_80130520(void* p);

void fn_80130520(void* p) { if (fn_80121200(p) == 3) { fn_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
