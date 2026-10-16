#include "types.h"
#include "pso/misc/TUnk_804CF0B8.h"
#include "pso/misc/TWindowFukidasi.h"
#include "pso/misc/TWindowGetComCard.h"

extern "C" {

void TWindowFukidasi__sub_80252C38(void* p);
void sub_80252C68__13TUnk_804CF0B8Fv(void* p);
void TWindowFukidasi__sub_80252C84(void* p);
int fn_80252CB0(void* p);
int fn_80252CBC(void* p);

void TUnk_804CF0B8::set_flag2c_bit100() { *(u32*)((char*)this + 0x2c) |= 0x100; }
void TUnk_804CF0B8::clear_flag2c_bit200() { *(u32*)((char*)this + 0x2c) &= 0xfffffdff; }
void TUnk_804CF0B8::set_flag2c_bit200() { *(u32*)((char*)this + 0x2c) |= 0x200; }
void TUnk_804CF0B8::clear_flag2c_bit100() { *(u32*)((char*)this + 0x2c) &= 0xfffffeff; }

}
