#include "types.h"

extern "C" {

void TObjPlayer__sub_80082CBC(void* p);
void TObjPlayer__sub_80082CCC(void* p);

void TObjPlayer__sub_80082CBC(void* p) { *(u8*)((char*)p + 0x1c) |= 0x4; }
void TObjPlayer__sub_80082CCC(void* p) { *(u8*)((char*)p + 0x1c) &= 0xfffffffb; }

}
