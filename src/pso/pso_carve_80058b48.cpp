#include "types.h"

extern "C" {

int fn_80059F64(void*, void*);
void fn_80058B48(void* p);

void fn_80058B48(void* p) { if (*(int*)((char*)p + 0x398) == 0) { fn_80059F64(p, (void*)10); } }

}
