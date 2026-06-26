#include "types.h"

extern "C" {

void fn_80326794(void* p);

int fn_80326710(void) { return 0; }
void fn_80326794(void* p) { *(s16*)((char*)p + 0x1fc) = -1; *(s32*)((char*)p + 0x1f8) = 0; }

}
