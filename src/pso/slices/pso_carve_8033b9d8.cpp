#include "types.h"

extern "C" {

s32 fn_8033B9D8(void* p);
void fn_8033B9E0(void* p);
void fn_8033B9EC(void* p);

s32 fn_8033B9D8(void* p) { return *(s32*)((char*)p + 0x44); }
void fn_8033B9E0(void* p) { *(s32*)((char*)p + 0x40) = 1; }
void fn_8033B9EC(void* p) { *(s32*)((char*)p + 0x4c) = 1; }
int fn_8033B9F8(void) { return 0; }

}
