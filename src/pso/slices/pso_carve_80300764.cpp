#include "types.h"

extern "C" {

void fn_80300764(void* p);

void fn_80300764(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
