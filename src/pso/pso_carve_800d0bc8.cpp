#include "types.h"

extern "C" {

void fn_800D0BC8(void* p);

void fn_800D0BC8(void* p) { *(u32*)((char*)p + 0x4ac) |= 0x1; }

}
