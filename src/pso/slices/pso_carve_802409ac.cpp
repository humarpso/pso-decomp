#include "types.h"

extern "C" {

void fn_802409AC(void* p, s32 v);

void fn_802409AC(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
