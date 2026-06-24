#include "types.h"

extern "C" {

s32 fn_80099EF8(void* p);

s32 fn_80099EF8(void* p) { return *(s32*)((char*)p + 0xd8); }
int fn_80099F00(void) { return 0; }

}
