#include "types.h"

extern "C" {

void fn_802AB23C(void* p);
void fn_802AB250(void* p);

void fn_802AB23C(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 2; }
void fn_802AB250(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 0; }
int fn_802AB260(void) { return 0; }
int fn_802AB28C(void) { return 0; }

}
