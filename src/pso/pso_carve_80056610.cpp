#include "types.h"

extern "C" {

int fn_80056998(void*);
void fn_80056610(void* p);

void fn_80056610(void* p) { if (*(int*)((char*)p + 0x398) == 0) { fn_80056998(p); } }

}
