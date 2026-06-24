#include "types.h"

extern "C" {

void fn_8007EAE4(void* p);
s32 fn_8007EAF8(void* p);

int fn_8007EA74(void) { return 0; }
int fn_8007EAA8(void) { return 0; }
void fn_8007EAE4(void* p) { *(u8*)((char*)p + 0x0) = 178; *(u8*)((char*)p + 0x1) = 3; }
s32 fn_8007EAF8(void* p) { return *(s32*)((char*)p + 0x2b0); }

}
