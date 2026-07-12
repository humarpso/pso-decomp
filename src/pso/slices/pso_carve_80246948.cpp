#include "types.h"

extern "C" {

int fn_8024695C(void* p);
int fn_80246968(void* p);
int fn_80246974(void* p);

int TWindowSubAreaMapDisp__sub_80246948(void) { return 0; }
int fn_8024695C(void* p) { return (*(u32*)((char*)p + 0x2c) >> 8) & 0x1; }
int fn_80246968(void* p) { return (*(u32*)((char*)p + 0x2c) >> 9) & 0x1; }
int fn_80246974(void* p) { return (*(u32*)((char*)p + 0x2c) >> 10) & 0x1; }

}
