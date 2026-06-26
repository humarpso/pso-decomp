#include "types.h"

extern "C" {

void fn_8025B0C4(void* p, f32 a, f32 b);

void fn_8025B0C4(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x10) = a; *(f32*)((char*)p + 0x14) = b; }

}
