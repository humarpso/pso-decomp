#include "types.h"

extern "C" {

s32 fn_80340820(void* p);
void fn_80340910(void* p);

int fn_803407BC(void) { return 0; }
int fn_803407F0(void) { return 0; }
s32 fn_80340820(void* p) { return *(s32*)((char*)p + 0x68); }
int fn_80340828(void) { return 0; }
void fn_80340910(void* p) { *(s32*)((char*)p + 0x60) = 1; }
int fn_8034091C(void) { return 0; }

}
