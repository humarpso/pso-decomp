#include "types.h"
#include "pso/misc/TWindowFukidasi.h"

extern "C" {

void TWindowFukidasi__sub_80252C38(void* p);
void clear_visible_flag__15TWindowFukidasiFv(void* p);
void set_flag__15TWindowFukidasiFv(void* p);
void TWindowFukidasi__sub_80252C68(void* p);
int is_flag_set__15TWindowFukidasiFv(void* p);
void TWindowFukidasi__sub_80252C84(void* p);
int is_active__15TWindowFukidasiFv(void* p);
void clear_flag__15TWindowFukidasiFv(void* p);
int fn_80252CB0(void* p);
int fn_80252CBC(void* p);
void render__17TWindowGetComCardFv(void);

void TWindowFukidasi::set_flag2c_bit100() { *(u32*)((char*)this + 0x2c) |= 0x100; }
void TWindowFukidasi::clear_flag2c_bit200() { *(u32*)((char*)this + 0x2c) &= 0xfffffdff; }
void TWindowFukidasi::set_flag2c_bit200() { *(u32*)((char*)this + 0x2c) |= 0x200; }
void TWindowFukidasi::clear_flag2c_bit100() { *(u32*)((char*)this + 0x2c) &= 0xfffffeff; }

}
