#include "types.h"

extern "C" {

void fn_800D7B98(void* p);
void fn_800D7BA4(void* p);

void fn_800D7B98(void* p) { *(s32*)((char*)p + 0x18) = 1; }
void fn_800D7BA4(void* p) { *(s32*)((char*)p + 0x18) = 0; }

}
