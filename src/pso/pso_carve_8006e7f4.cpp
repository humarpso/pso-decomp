#include "types.h"

extern "C" {

void fn_8006E7F4(void* p, s32 v);
s32 fn_8006E7FC(void* p);

void fn_8006E7F4(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }
s32 fn_8006E7FC(void* p) { return *(s32*)((char*)p + 0x10c); }

}
