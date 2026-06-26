#include "types.h"

extern "C" {

void fn_8032DDE8(void* p);

int fn_8032DDD8(void) { return 0; }
void fn_8032DDE8(void* p) { *(u32*)((char*)p + 0x70) |= 0x1; }

}
