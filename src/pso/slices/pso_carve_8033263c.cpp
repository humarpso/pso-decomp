#include "types.h"

extern "C" {

void* fn_803326B4(void* p);
s32 fn_803326BC(void* p);

int fn_8033263C(void) { return 0; }
void* fn_803326B4(void* p) { return (char*)p + 0x4a4; }
s32 fn_803326BC(void* p) { return *(s32*)((char*)p + 0x60); }

}
