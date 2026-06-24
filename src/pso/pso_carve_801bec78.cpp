#include "types.h"

extern "C" {

s32 fn_801BEC90(void* p);

int fn_801BEC78(void) { return 0; }
s32 fn_801BEC90(void* p) { return *(s32*)((char*)p + 0x3c8); }

}
