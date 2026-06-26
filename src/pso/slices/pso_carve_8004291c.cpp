#include "types.h"

extern "C" {

void fn_8004291C(void* p);

void fn_8004291C(void* p) { *(u32*)((char*)p + 0x30) |= 0x4040000; }
int fn_8004292C(void) { return 0; }

}
