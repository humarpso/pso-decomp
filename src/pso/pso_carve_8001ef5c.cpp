#include "types.h"

extern "C" {

int xfree__FPv(void*);
void fn_8001EF5C(void* p, void* a1);

void fn_8001EF5C(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x424) == 0) { xfree__FPv(a1); } }

}
