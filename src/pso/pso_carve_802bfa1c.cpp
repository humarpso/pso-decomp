#include "types.h"

extern "C" {

void fn_802BFBE4(void* p);

int fn_802BFA1C(void) { return 0; }
int fn_802BFA94(void) { return 0; }
int fn_802BFAC0(void) { return 0; }
int fn_802BFAF4(void) { return 0; }
void fn_802BFBE4(void* p) { *(s32*)((char*)p + 0x45c) = 90; *(s32*)((char*)p + 0x460) = 90; }

}
