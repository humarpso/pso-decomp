#include "types.h"

extern "C" {

void fn_801F9104(void* p);

int fn_801F90C4(void) { return 0; }
void fn_801F9104(void* p) { *(s32*)((char*)p + 0x184) = 0; }

}
