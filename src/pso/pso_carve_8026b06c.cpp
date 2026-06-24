#include "types.h"

extern "C" {

void fn_8026B06C(void* p, s32 v);

void fn_8026B06C(void* p, s32 v) { *(s32*)((char*)p + 0x90) = v; }
int fn_8026B074(void) { return 0; }
int fn_8026B0C4(void) { return 0; }

}
