#include "types.h"

extern "C" {

void fn_8001A438(void* p);

void fn_8001A438(void* p) { *(u16*)((char*)p + 0x4) |= 0x4; }

}
