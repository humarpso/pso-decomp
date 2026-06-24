#include "types.h"

extern "C" {

void fn_8029AED0(void* p);

int fn_8029AE88(void) { return 0; }
void fn_8029AED0(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
