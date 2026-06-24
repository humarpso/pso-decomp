#include "types.h"

extern "C" {

void fn_80129D70(void* p);

void fn_80129D70(void* p) { *(s32*)((char*)p + 0x200) = 1; }

}
