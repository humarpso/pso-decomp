#include "types.h"

extern "C" {

int fn_80108854(void* p, u32 m);

int fn_80108854(void* p, u32 m) { return *(u32*)((char*)p + 0x1b8) & m; }

}
