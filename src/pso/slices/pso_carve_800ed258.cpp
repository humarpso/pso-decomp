#include "types.h"

extern "C" {

void fn_800ED258(void* p);

void fn_800ED258(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2000; }

}
