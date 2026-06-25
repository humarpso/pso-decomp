#include "types.h"

extern "C" {

int fn_80157D28(void*);
int fn_80158298(void*);
void TOBarrierEnergy01__vt16(void* p);

void TOBarrierEnergy01__vt16(void* p) { fn_80158298(p); *(int*)((char*)p + 0xac) = 0; fn_80157D28(p); }

}
