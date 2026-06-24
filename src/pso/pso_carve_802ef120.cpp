#include "types.h"

extern "C" {

void fn_802EF120(void* p);
void fn_802EF12C(void* p);

void fn_802EF120(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void fn_802EF12C(void* p) { *(s32*)((char*)p + 0x24) = 1; }

}
