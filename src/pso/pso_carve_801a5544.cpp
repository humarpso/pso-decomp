#include "types.h"

extern "C" {

void fn_801A558C(void* p);

int fn_801A5544(void) { return 0; }
void fn_801A558C(void* p) { *(s32*)((char*)p + 0x8b8) = 0; }

}
