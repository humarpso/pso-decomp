#include "types.h"

extern "C" {

int fn_80073DC4(void*, void*);
int fn_802237D8(void*);
void fn_802168CC(void* p);

void fn_802168CC(void* p) { fn_802237D8(p); fn_80073DC4(p, (void*)1); }

}
