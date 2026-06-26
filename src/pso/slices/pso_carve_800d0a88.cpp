#include "types.h"

extern "C" {

int fn_800D0A88(void* p);

int fn_800D0A88(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

}
