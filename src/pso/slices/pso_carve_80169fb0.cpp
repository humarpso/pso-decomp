#include "types.h"

extern "C" {

void fn_80169FB0(void* p);

void fn_80169FB0(void* p) { *(s32*)((char*)p + 0x0) = 1; }
int fn_80169FBC(void) { return 0; }

}
