#include "types.h"

extern "C" {

s32 fn_801A513C(void* p);
int fn_801A5144(void* p);

s32 fn_801A513C(void* p) { return *(s32*)((char*)p + 0x24); }
int fn_801A5144(void* p) { return *(u8*)((char*)p + 0x1d) & 0x1; }
int fn_801A5150(void) { return 0; }
int fn_801A5188(void) { return 0; }

}
