#include "types.h"

extern "C" {

void TObjPlayer__sub_80090448(void* p);
int TObjPlayer__sub_80090458(void* p);

void TObjPlayer__sub_80090448(void* p) { *(u32*)((char*)p + 0x388) |= 0x10000; }
int TObjPlayer__sub_80090458(void* p) { return (*(u32*)((char*)p + 0x388) >> 24) & 0x1; }

}
