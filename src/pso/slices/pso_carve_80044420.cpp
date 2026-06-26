#include "types.h"

extern "C" {

void fn_80044420(void* p);
void fn_80044434(void* p);

void fn_80044420(void* p) { *(s32*)((char*)p + 0x20) = 1; *(s32*)((char*)p + 0x24) = 0; }
void fn_80044434(void* p) { *(s32*)((char*)p + 0x20) = 2; *(s32*)((char*)p + 0x24) = 0; }
int fn_80044448(void) { return 0; }
int fn_80044470(void) { return 0; }

}
