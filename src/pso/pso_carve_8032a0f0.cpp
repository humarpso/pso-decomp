#include "types.h"

extern "C" {

void fn_8032A140(void* p);

int fn_8032A0F0(void) { return 0; }
int fn_8032A118(void) { return 0; }
void fn_8032A140(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

}
