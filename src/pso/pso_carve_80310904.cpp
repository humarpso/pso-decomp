#include "types.h"

extern "C" {

void fn_80310904(void* p);

void fn_80310904(void* p) { *(s32*)((char*)p + 0x260) = 1; }

}
