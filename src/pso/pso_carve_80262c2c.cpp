#include "types.h"

extern "C" {

void fn_80262C2C(void* p);

void fn_80262C2C(void* p) { *(u8*)((char*)p + 0x61) |= 0x1; }

}
