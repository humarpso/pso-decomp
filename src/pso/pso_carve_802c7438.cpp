#include "types.h"

extern "C" {

int fn_802C7498(void*, void*);
int fn_802C754C(void*, void*);
void fn_802C7438(void* p);

void fn_802C7438(void* p) { fn_802C754C(p, (void*)0); fn_802C754C(p, (void*)1); fn_802C7498(p, (void*)0); fn_802C7498(p, (void*)1); fn_802C7498(p, (void*)2); }

}
