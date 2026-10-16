#include "types.h"
#include "pso/misc/TWindowFukidasi.h"
#include "pso/misc/TWindowGetComCard.h"

extern "C" {

void TWindowFukidasi__sub_80252C38(void* p);
void TWindowFukidasi__sub_80252C68(void* p);
void TWindowFukidasi__sub_80252C84(void* p);
int fn_80252CB0(void* p);
int fn_80252CBC(void* p);

void TWindowFukidasi::set_flag2c_bit100() { *(u32*)((char*)this + 0x2c) |= 0x100; }
void TWindowFukidasi::clear_flag2c_bit200() { *(u32*)((char*)this + 0x2c) &= 0xfffffdff; }
void TWindowFukidasi::set_flag2c_bit200() { *(u32*)((char*)this + 0x2c) |= 0x200; }
void TWindowFukidasi::clear_flag2c_bit100() { *(u32*)((char*)this + 0x2c) &= 0xfffffeff; }

}
