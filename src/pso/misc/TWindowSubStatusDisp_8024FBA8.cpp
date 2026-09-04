#include "types.h"

extern "C" {

void set_input_mode__20TWindowSubStatusDispFPvUc(void* p, u8 v);

void set_input_mode__20TWindowSubStatusDispFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x64) = v; }

}
