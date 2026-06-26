#include "types.h"

extern "C" {

void fn_80080788(void* p);

void fn_80080788(void* p) { *(u16*)((char*)p + 0x4) &= 0xfffffffb; }
int fn_80080798(void) { return 0; }

}
