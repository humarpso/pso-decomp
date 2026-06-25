#include "types.h"

extern "C" {

int fn_800BB858(void*);
int fn_80305F58(void*);
void fn_80303538(void* p);

void fn_80303538(void* p) { if (fn_800BB858(p) != 0) { fn_80305F58(p); } }

}
