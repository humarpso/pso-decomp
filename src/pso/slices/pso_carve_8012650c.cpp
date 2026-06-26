#include "types.h"

extern "C" {

int fn_80121200(void*);
int fn_803D9214(void*, void*);
void fn_8012650C(void* p);

void fn_8012650C(void* p) { if (fn_80121200(p) == 1) { fn_803D9214((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
