#include "types.h"

extern "C" {

s32 fn_802428F8(void* p);

int fn_802428C4(void) { return 0; }
s32 fn_802428F8(void* p) { return *(s32*)((char*)p + 0x4); }

}
