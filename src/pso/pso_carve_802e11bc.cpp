#include "types.h"

extern "C" {

void fn_802E11BC(void* p);
void fn_802E11C8(void* p);

void fn_802E11BC(void* p) { *(s32*)((char*)p + 0x1c) = 0; }
void fn_802E11C8(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
