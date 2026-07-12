#include "types.h"

extern "C" {

void set_flag0_bit2__15TWindowHelpItemFPv(void* p);
void TWindowSubStatusDisp__sub_8024420C(void* p);
void fn_8024422C(void* p, f32 a, f32 b);

void TWindowSubStatusDisp__sub_8024420C(void* p) { *(u16*)((char*)p + 0x0) &= 0xfffffffd; }
void set_flag0_bit2__15TWindowHelpItemFPv(void* p) { *(u16*)((char*)p + 0x0) |= 0x2; }
void fn_8024422C(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x60) = a; *(f32*)((char*)p + 0x64) = b; }

}
