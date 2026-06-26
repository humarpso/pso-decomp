#include "types.h"

extern "C" {

void fn_80082CBC(void* p);
void fn_80082CCC(void* p);

void fn_80082CBC(void* p) { *(u8*)((char*)p + 0x1c) |= 0x4; }
void fn_80082CCC(void* p) { *(u8*)((char*)p + 0x1c) &= 0xfffffffb; }

}
