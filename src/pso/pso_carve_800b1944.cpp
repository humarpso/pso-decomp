#include "types.h"

extern "C" {

int fn_800B1978(void*);
int fn_800BA8E8(void*);
void fn_800B1944(void* p);

void fn_800B1944(void* p) { fn_800BA8E8(p); fn_800B1978(p); }

}
