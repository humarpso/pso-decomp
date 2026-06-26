#include "types.h"

extern "C" {

s32 fn_80369644(void* p);

int fn_80369598(void) { return 0; }
s32 fn_80369644(void* p) { return *(s32*)((char*)p + 0x42c); }

}
