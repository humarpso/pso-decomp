#include "types.h"

extern "C" {

void TWindowHelpItem__sub_8024421C(void* p);
void fn_8024420C(void* p);
void fn_8024422C(void* p, f32 a, f32 b);

void fn_8024420C(void* p) { *(u16*)((char*)p + 0x0) &= 0xfffffffd; }
void TWindowHelpItem__sub_8024421C(void* p) { *(u16*)((char*)p + 0x0) |= 0x2; }
void fn_8024422C(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x60) = a; *(f32*)((char*)p + 0x64) = b; }

}
