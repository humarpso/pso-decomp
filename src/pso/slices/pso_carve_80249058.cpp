#include "types.h"

extern "C" {

s32 fn_80249058(void* p);
int fn_80249060(void* p);
int fn_8024906C(void* p);

s32 fn_80249058(void* p) { return *(s32*)((char*)p + 0x18); }
int fn_80249060(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }
int fn_8024906C(void* p) { return (*(u16*)((char*)p + 0x70) >> 6) & 0x1; }

}
