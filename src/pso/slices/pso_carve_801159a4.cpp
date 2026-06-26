#include "types.h"

extern "C" {

int fn_801159A4(void* p);
int fn_801159B0(void* p);
int fn_801159BC(void* p);

int fn_801159A4(void* p) { return (*(u8*)((char*)p + 0x0) >> 5) & 0x1; }
int fn_801159B0(void* p) { return *(u8*)((char*)p + 0x0) & 0x7; }
int fn_801159BC(void* p) { return *(u32*)((char*)p + 0x18c) & 0x20; }

}
