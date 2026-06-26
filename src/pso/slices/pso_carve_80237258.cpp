#include "types.h"

extern "C" {

void fn_80237258(void* p);

void fn_80237258(void* p) { *(f32*)((char*)p + 0xbc) = *(f32*)((char*)p + 0x3c); }

}
