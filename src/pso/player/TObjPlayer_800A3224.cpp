#include "types.h"

extern "C" {

int TObjPlayer__sub_800A3224(void* p);

int TObjPlayer__sub_800A3224(void* p) { return (*(u32*)((char*)p + 0x388) >> 26) & 0x1; }

}
