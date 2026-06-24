#include "types.h"

extern "C" {

void fn_800D74E4(void* p, f32 v);

void fn_800D74E4(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }

}
