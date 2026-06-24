#include "types.h"

extern "C" {

void fn_80064D88(void* p);
void fn_80064D94(void* p);
void fn_80064DA0(void* p);
void fn_80064DAC(void* p);

void fn_80064D88(void* p) { *(s32*)((char*)p + 0x4e4) = 3; }
void fn_80064D94(void* p) { *(s32*)((char*)p + 0x4e4) = 2; }
void fn_80064DA0(void* p) { *(s32*)((char*)p + 0x4e4) = 1; }
void fn_80064DAC(void* p) { *(s32*)((char*)p + 0x4e4) = 0; }

}
