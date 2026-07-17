#include "types.h"

extern "C" {

s32 get_type__8TItemMagFPv(void* p);

s32 get_type__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x4); }

}
