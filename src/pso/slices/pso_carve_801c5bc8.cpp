#include "types.h"

extern "C" {

int fn_8001BEE8(void*, void*);
int fn_801C6F40(void*, void*);
int fn_80227234(void*);
void fn_801C5BC8(void* p);

void fn_801C5BC8(void* p) { fn_8001BEE8(p, (void*)1); fn_801C6F40(p, (void*)-1); fn_80227234((void*)0); }

}
