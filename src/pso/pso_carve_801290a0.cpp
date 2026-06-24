#include "types.h"

extern "C" {

void fn_80129124(void* p);

int fn_801290A0(void) { return 0; }
int fn_801290D0(void) { return 0; }
int fn_80129118(void) { return 0; }
void fn_80129124(void* p) { *(s32*)((char*)p + 0x1fc) = 0; }
int fn_80129130(void) { return 0; }

}
