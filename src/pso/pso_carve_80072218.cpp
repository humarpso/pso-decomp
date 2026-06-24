#include "types.h"

extern "C" {

void fn_80072218(void* p);

void fn_80072218(void* p) { *(u8*)((char*)p + 0x0) = 0; *(u8*)((char*)p + 0x1) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; }

}
