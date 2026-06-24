#include "types.h"

extern "C" {

void fn_8005A4E0(void* p, void* q);

void fn_8005A4E0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
