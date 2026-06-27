#include "types.h"

extern "C" {

int TObjPlayer__sub_80019704(void* p);
u8 fn_8001972C(void* p);
s32 TObjPlayer__sub_80019734(void* p);
int fn_801C675C(void*, int);

int TObjPlayer__sub_80019704(void* p) { return fn_801C675C((char*)p + 0xd04, 6); }
u8 fn_8001972C(void* p) { return *(u8*)((char*)p + 0xed); }
s32 TObjPlayer__sub_80019734(void* p) { return *(s32*)((char*)p + 0x0); }
int TObjFish__sub_8001973C(void) { return 0; }
int fn_80019760(void) { return 0; }
int fn_80019784(void) { return 0; }

}
