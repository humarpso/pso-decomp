#include "types.h"

extern "C" {

void fn_80341B10(void* p);
void fn_80341B1C(void* p);

int fn_80341A08(void) { return 0; }
int fn_80341AC0(void) { return 0; }
int fn_80341AE0(void) { return 0; }
int fn_80341AF8(void) { return 0; }
void fn_80341B10(void* p) { *(s32*)((char*)p + 0x64) = 2; }
void fn_80341B1C(void* p) { *(s32*)((char*)p + 0x64) = 0; }

}
