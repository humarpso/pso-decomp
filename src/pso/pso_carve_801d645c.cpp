#include "types.h"

extern "C" {

int fn_801D66AC(void*);
int fn_801D67AC(void*);
void fn_801D645C(void* p);

void fn_801D645C(void* p) { if (fn_801D67AC(p) != 0) { fn_801D66AC(p); } }

}
