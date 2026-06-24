#include "types.h"

extern "C" {

void fn_80300098(void* p, s32 v);

void fn_80300098(void* p, s32 v) { *(s32*)((char*)p + 0xa4) = v; }
int fn_803000A0(void) { return 0; }

}
