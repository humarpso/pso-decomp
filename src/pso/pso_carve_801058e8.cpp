#include "types.h"

extern "C" {

void fn_801058E8(void* p);
int fn_8010590C(void* p);
int fn_80105934(void* p);
int fn_8010595C(void* p);
void fn_801059B4(void* p);
int fn_801C675C(void*, int);

void fn_801058E8(void* p) { *(u8*)((char*)p + 0x7) |= 0x1; }
int fn_801058F8(void) { return 0; }
int fn_8010590C(void* p) { return fn_801C675C((char*)p + 0xd04, 1); }
int fn_80105934(void* p) { return fn_801C675C((char*)p + 0xd04, 3); }
int fn_8010595C(void* p) { return fn_801C675C((char*)p + 0xd04, 2); }
int fn_80105984(void) { return 0; }
void fn_801059B4(void* p) { *(s16*)((char*)p + 0xa) = 0; *(s16*)((char*)p + 0x8) = 0; *(s16*)((char*)p + 0x6) = 0; *(s16*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x14) = 0; *(s16*)((char*)p + 0x12) = 0; *(s16*)((char*)p + 0x10) = 0; *(s16*)((char*)p + 0xe) = 0; *(s16*)((char*)p + 0xc) = 0; }

}
