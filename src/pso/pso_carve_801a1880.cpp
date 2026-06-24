#include "types.h"

extern "C" {

void fn_801A1880(void* p, s32 v);

void fn_801A1880(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
int fn_801A1888(void) { return 0; }

}
