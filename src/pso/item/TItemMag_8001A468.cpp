#include "types.h"

extern "C" {

int fn_8001A470(void);
s32 get_type__8TItemMagFPv(void* p);

s32 get_type__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x4); }

int fn_8001A470(void) { return 0; }

}
