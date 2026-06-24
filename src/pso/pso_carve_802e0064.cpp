#include "types.h"

extern "C" {

void fn_802E0064(void* p, s32 v);

void fn_802E0064(void* p, s32 v) { *(s32*)((char*)p + 0x4ec) = v; }
int fn_802E006C(void) { return 0; }

}
