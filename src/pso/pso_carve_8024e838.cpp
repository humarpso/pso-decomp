#include "types.h"

extern "C" {

void fn_8024E838(void* p, f32 a, f32 b, f32 c, f32 d);

void fn_8024E838(void* p, f32 a, f32 b, f32 c, f32 d) { *(f32*)((char*)p + 0x3c) = a; *(f32*)((char*)p + 0x40) = b; *(f32*)((char*)p + 0x44) = c; *(f32*)((char*)p + 0x48) = d; }

}
