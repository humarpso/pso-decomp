#include "types.h"

extern "C" {

void fn_80279044(void* p);

void fn_80279044(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }
int fn_80279054(void) { return 0; }
int fn_80279098(void) { return 0; }

}
