#include "types.h"

extern "C" {

void fn_802E2BC8(void* p);

int fn_802E2AD4(void) { return 0; }
int fn_802E2B24(void) { return 0; }
void fn_802E2BC8(void* p) { *(s32*)((char*)p + 0x64) = 30; }

}
