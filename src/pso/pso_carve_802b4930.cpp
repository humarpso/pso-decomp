#include "types.h"

extern "C" {

int fn_802B4898(void*);
int fn_802B626C(void*);
void fn_802B4930(void* p);

void fn_802B4930(void* p) { fn_802B4898(p); fn_802B626C(p); }

}
