#include "types.h"

extern "C" {

void fn_8004AFB8(void* p);

int fn_8004AF5C(void) { return 0; }
void fn_8004AFB8(void* p) { *(s32*)((char*)p + 0x384) = 1; }

}
