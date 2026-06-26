#include "types.h"

extern "C" {

void fn_80219EC4(void* p);

void fn_80219EC4(void* p) { *(u16*)((char*)p + 0x70) |= 0x8; }

}
