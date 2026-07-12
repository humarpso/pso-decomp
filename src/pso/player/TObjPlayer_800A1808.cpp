#include "types.h"

extern "C" {

int TObjPlayer__sub_800A1808(void* p);

int TObjPlayer__sub_800A1808(void* p) { return (*(u32*)((char*)p + 0x30) >> 23) & 0x1; }

}
