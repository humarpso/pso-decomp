#include "types.h"

extern "C" {

void fn_80039D98(void* p);
void fn_80039DA4(void* p);
void fn_80039DB0(void* p);
void fn_80039DBC(void* p);
void fn_80039DC8(void* p);
void fn_80039DD4(void* p);

int fn_80039D88(void) { return 0; }
void fn_80039D98(void* p) { *(s32*)((char*)p + 0x20) = 5; }
void fn_80039DA4(void* p) { *(s32*)((char*)p + 0x20) = 3; }
void fn_80039DB0(void* p) { *(s32*)((char*)p + 0x20) = 2; }
void fn_80039DBC(void* p) { *(s32*)((char*)p + 0x20) = 4; }
void fn_80039DC8(void* p) { *(s32*)((char*)p + 0x20) = 1; }
void fn_80039DD4(void* p) { *(s32*)((char*)p + 0x20) = 0; }

}
