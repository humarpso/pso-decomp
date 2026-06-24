#include "types.h"

extern "C" {

void fn_802EC994(void* p);

void fn_802EC994(void* p) { *(s32*)((char*)p + 0x6b0) = 0; *(s32*)((char*)p + 0x6b4) = 0; }
int fn_802EC9A4(void) { return 0; }
int fn_802EC9F0(void) { return 0; }

}
