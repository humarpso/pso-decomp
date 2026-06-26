#include "types.h"

extern "C" {

void fn_80140F44(void* p);

int fn_80140DFC(void) { return 0; }
int fn_80140E38(void) { return 0; }
int fn_80140EA8(void) { return 0; }
int fn_80140EE4(void) { return 0; }
int fn_80140F18(void) { return 0; }
void fn_80140F44(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

}
