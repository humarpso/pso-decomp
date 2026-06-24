#include "types.h"

extern "C" {

s32 fn_802183B4(void* p);

s32 fn_802183B4(void* p) { return *(s32*)((char*)p + 0x68); }
int fn_802183BC(void) { return 0; }
int fn_802183F8(void) { return 0; }
int fn_80218430(void) { return 0; }

}
