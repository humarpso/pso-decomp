#include "types.h"

extern "C" {

s32 fn_8001A468(void* p);

s32 fn_8001A468(void* p) { return *(s32*)((char*)p + 0x4); }
int fn_8001A470(void) { return 0; }

}
