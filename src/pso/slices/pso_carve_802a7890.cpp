#include "types.h"

extern "C" {

void fn_802A7890(void* p, s32 v);

void fn_802A7890(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
int fn_802A7898(void) { return 0; }

}
