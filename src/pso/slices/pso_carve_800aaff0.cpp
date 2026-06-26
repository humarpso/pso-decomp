#include "types.h"

extern "C" {

void fn_800AAFF0(void* p, f32 v);

void fn_800AAFF0(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
int fn_800AAFF8(void) { return 0; }
int fn_800AB034(void) { return 0; }

}
