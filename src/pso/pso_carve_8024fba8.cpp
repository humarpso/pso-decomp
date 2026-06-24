#include "types.h"

extern "C" {

void fn_8024FBA8(void* p, u8 v);

void fn_8024FBA8(void* p, u8 v) { *(u8*)((char*)p + 0x64) = v; }

}
