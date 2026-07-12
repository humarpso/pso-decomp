#include "types.h"

extern "C" {

void TWindowFukidasi__sub_80249788(void* p);
void TWindowFukidasi__sub_80249798(void* p);

void TWindowFukidasi__sub_80249788(void* p) { *(u32*)((char*)p + 0x2c) |= 0x400; }
void TWindowFukidasi__sub_80249798(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffbff; }

}
