#include "types.h"

extern "C" {

int fn_800A1808(void* p);

int fn_800A17B4(void) { return 0; }
int fn_800A1808(void* p) { return (*(u32*)((char*)p + 0x30) >> 23) & 0x1; }

}
