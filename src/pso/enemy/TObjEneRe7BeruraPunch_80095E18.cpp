#include "types.h"

extern "C" {

int is_patrol_active__21TObjEneRe7BeruraPunchFPv(void* p);

int is_patrol_active__21TObjEneRe7BeruraPunchFPv(void* p) { return (*(u32*)((char*)p + 0xb0) >> 2) & 0x1; }

}
