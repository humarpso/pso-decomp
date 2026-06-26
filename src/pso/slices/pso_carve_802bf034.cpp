#include "types.h"

extern "C" {

int fn_802BAFEC(void*, void*);
void fn_802BF034(void* p);

void fn_802BF034(void* p) { if (*(int*)((char*)p + 0x460) == 4) { fn_802BAFEC(p, (void*)0); } }

}
