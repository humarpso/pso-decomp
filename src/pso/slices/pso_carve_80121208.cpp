#include "types.h"

extern "C" {

void fn_80121208(void* p, s32 v);

void fn_80121208(void* p, s32 v) { *(s32*)((char*)p + 0xe0) = v; }

}
