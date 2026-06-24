#include "types.h"

extern "C" {

void fn_80250408(void* p);

void fn_80250408(void* p) { *(f32*)((char*)p + 0x60) = *(f32*)((char*)p + 0x80); *(f32*)((char*)p + 0x64) = *(f32*)((char*)p + 0x80); }

}
