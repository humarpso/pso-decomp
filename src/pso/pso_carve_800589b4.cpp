#include "types.h"

extern "C" {

int fn_80059F64(void*, void*);
void fn_800589B4(void* p);

void fn_800589B4(void* p) { if (*(int*)((char*)p + 0x398) == 0) { fn_80059F64(p, (void*)12); } }

}
