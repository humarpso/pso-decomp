#include "types.h"

extern "C" {

int fn_80073DC4(void*, void*);
int fn_802237D8(void*);
void fn_80215E3C(void* p);

void fn_80215E3C(void* p) { fn_802237D8(p); fn_80073DC4(p, (void*)1); }

}
