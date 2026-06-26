#include "types.h"

extern "C" {

int fn_800A3224(void* p);

int fn_800A3224(void* p) { return (*(u32*)((char*)p + 0x388) >> 26) & 0x1; }

}
