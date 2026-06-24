#include "types.h"

extern "C" {

void fn_800B78E8(void* p);

void fn_800B78E8(void* p) { *(u32*)((char*)p + 0x408) |= 0x1; }

}
