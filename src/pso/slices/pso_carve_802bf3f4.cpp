#include "types.h"

extern "C" {

int TBoss6Type2__sub_802BAFEC(void*, void*);
void fn_802BF3F4(void* p);

void fn_802BF3F4(void* p) { if (*(int*)((char*)p + 0x460) == 45) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

}
