#include "types.h"

extern "C" {

void fn_8020F028(void* p);

int fn_8020F00C(void) { return 0; }
void fn_8020F028(void* p) { *(s32*)((char*)p + 0x64) = 0; }
int fn_8020F034(void) { return 0; }
int fn_8020F070(void) { return 0; }

}
