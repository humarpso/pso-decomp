#include "types.h"

extern "C" {

int fn_80287860(void*);
int fn_802878B8(void*, void*);
void fn_80287974(void* p, void* a1);

void fn_80287974(void* p, void* a1) { fn_80287860(p); fn_802878B8(p, a1); }

}
