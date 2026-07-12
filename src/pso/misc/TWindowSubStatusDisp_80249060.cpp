#include "types.h"

extern "C" {

int TWindowSubStatusDisp__sub_80249060(void* p);
int TWindowSubStatusDisp__sub_8024906C(void* p);
s32 TWindowSubItem__sub_80249058(void* p);

int TWindowSubStatusDisp__sub_80249060(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }
int TWindowSubStatusDisp__sub_8024906C(void* p) { return (*(u16*)((char*)p + 0x70) >> 6) & 0x1; }

}
