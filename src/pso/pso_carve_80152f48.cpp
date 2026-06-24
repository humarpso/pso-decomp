#include "types.h"

extern "C" {

u16 fn_80152F48(void* p);

u16 fn_80152F48(void* p) { return *(u16*)((char*)p + 0x678); }
int fn_80152F50(void) { return 0; }

}
