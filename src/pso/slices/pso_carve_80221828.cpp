#include "types.h"

extern "C" {

void fn_80221828(void* p);

void fn_80221828(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }
int fn_80221838(void) { return 0; }

}
