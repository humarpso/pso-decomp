#include "types.h"

extern "C" {

void fn_80033F24(void* p);

void fn_80033F24(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3d4) = 0; }
int fn_80033F34(void) { return 0; }
int fn_80033F80(void) { return 0; }

}
