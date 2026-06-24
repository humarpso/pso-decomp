#include "types.h"

extern "C" {

void fn_800531BC(void* p);

int fn_80053190(void) { return 0; }
void fn_800531BC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
