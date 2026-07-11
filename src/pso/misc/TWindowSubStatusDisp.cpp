#include "types.h"

extern "C" {

s32 get_array_entry__20TWindowSubStatusDispFPvi(void* p, int i);

s32 get_array_entry__20TWindowSubStatusDispFPvi(void* p, int i) { return ((s32*)*(void**)((char*)p + 0x28))[i]; }

}
