#include "types.h"

extern "C" {

void* fn_8027FAF0(void* p);
u8 fn_8027FAF8(void* p);

int fn_8027FAD0(void) { return 0; }
void* fn_8027FAF0(void* p) { return (char*)p + 0x20; }
u8 fn_8027FAF8(void* p) { return *(u8*)((char*)p + 0xcc); }

}
