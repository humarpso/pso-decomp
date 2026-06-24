#include "types.h"

extern "C" {

int fn_8024E3D4(void* p);
int fn_8024E3E0(void* p);
int fn_8024E3F4(void* p);

int fn_8024E3CC(void) { return 0; }
int fn_8024E3D0(void) { return 0; }
int fn_8024E3D4(void* p) { return (*(u32*)((char*)p + 0x4c) >> 3) & 0x1; }
int fn_8024E3E0(void* p) { return *(u32*)((char*)p + 0x4c) & 0x1; }
int fn_8024E3EC(void) { return 0; }
int fn_8024E3F0(void) { return 0; }
int fn_8024E3F4(void* p) { return (*(u16*)((char*)p + 0x1c) >> 6) & 0x1; }
int fn_8024E400(void) { return 0; }
int fn_8024E434(void) { return 0; }
int fn_8024E464(void) { return 0; }
int fn_8024E4B8(void) { return 0; }

}
