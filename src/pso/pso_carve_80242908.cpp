#include "types.h"

extern "C" {

void* fn_80242908(void* p);
s32 fn_80242910(void* p);

void* fn_80242908(void* p) { return (char*)p + 0x9c; }
s32 fn_80242910(void* p) { return *(s32*)((char*)p + 0x0); }

}
