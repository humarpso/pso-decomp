#include "types.h"

extern "C" {

s32 fn_802D0784(void* p);

int fn_802D073C(void) { return 0; }
s32 fn_802D0784(void* p) { return *(s32*)((char*)p + 0x45c); }

}
