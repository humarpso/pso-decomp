#include "types.h"

extern "C" {

s32 fn_80342218(void* p);

s32 fn_80342218(void* p) { return *(s32*)((char*)p + 0x68); }
int fn_80342220(void) { return 0; }
int fn_80342254(void) { return 0; }
int fn_80342268(void) { return 0; }

}
