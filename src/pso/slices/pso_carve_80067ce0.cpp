#include "types.h"

extern "C" {

void fn_80067CE0(void* p, s32 v);

void fn_80067CE0(void* p, s32 v) { *(s32*)((char*)p + 0x10c) = v; }
int TCameraCtrl__vt7(void) { return 0; }

}
