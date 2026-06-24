#include "types.h"

extern "C" {

void fn_80249788(void* p);
void fn_80249798(void* p);

void fn_80249788(void* p) { *(u32*)((char*)p + 0x2c) |= 0x400; }
void fn_80249798(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffbff; }

}
