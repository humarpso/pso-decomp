#include "types.h"

extern "C" {

int fn_802BAFEC(void*, void*);
void fn_802BF234(void* p);

void fn_802BF234(void* p) { if (*(int*)((char*)p + 0x460) == 34) { fn_802BAFEC(p, (void*)0); } }

}
