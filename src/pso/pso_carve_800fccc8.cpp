#include "types.h"

extern "C" {

s32 fn_800FCCF4(void* p);

int fn_800FCCC8(void) { return 0; }
s32 fn_800FCCF4(void* p) { return *(s32*)((char*)p + 0x874); }

}
