#include "types.h"

extern "C" {

int fn_8024B048(void* p);

int fn_8024B048(void* p) { return (*(u16*)((char*)p + 0x1c) >> 2) & 0x1; }

}
