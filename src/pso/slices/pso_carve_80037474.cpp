#include "types.h"

extern "C" {

void fn_80037474(void* p);
void fn_80037480(void* p);

void fn_80037474(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void fn_80037480(void* p) { *(s32*)((char*)p + 0x24) = 1; }

}
