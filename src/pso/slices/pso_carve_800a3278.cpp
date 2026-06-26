#include "types.h"

extern "C" {

void fn_800A3278(void* p);
void fn_800A3284(void* p);

void fn_800A3278(void* p) { *(s32*)((char*)p + 0x340) = 0; }
void fn_800A3284(void* p) { *(s32*)((char*)p + 0x340) = 1; }

}
