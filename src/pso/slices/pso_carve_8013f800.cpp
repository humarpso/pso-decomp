#include "types.h"

extern "C" {

s32 fn_8013F800(void* p);

s32 fn_8013F800(void* p) { return *(s32*)((char*)p + 0x48); }

}
