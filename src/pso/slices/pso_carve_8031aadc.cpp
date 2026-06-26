#include "types.h"

extern "C" {

int fn_800BA0D8(void*);
int fn_800F5864(void*, void*);
void fn_8031AADC(void* p);

void fn_8031AADC(void* p) { fn_800BA0D8(p); fn_800F5864(p, (void*)38); }

}
