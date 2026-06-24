#include "types.h"

extern "C" {

int fn_80142944(void* p);

int fn_80142920(void) { return 0; }
int fn_80142944(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
