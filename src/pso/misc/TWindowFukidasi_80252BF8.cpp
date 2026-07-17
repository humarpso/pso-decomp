#include "types.h"

extern "C" {

void set_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void set_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void TWindowFukidasi__sub_80252C38(void* p);
void clear_visible_flag__15TWindowFukidasiFPv(void* p);
void set_flag__15TWindowFukidasiFPv(void* p);
void TWindowFukidasi__sub_80252C68(void* p);
int is_flag_set__15TWindowFukidasiFPv(void* p);
void TWindowFukidasi__sub_80252C84(void* p);
int is_active__15TWindowFukidasiFPv(void* p);
void clear_flag__15TWindowFukidasiFPv(void* p);
int fn_80252CB0(void* p);
int fn_80252CBC(void* p);
void render__17TWindowGetComCardFv(void);

void set_flag2c_bit100__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) |= 0x100; }
void clear_flag2c_bit200__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffdff; }
void set_flag2c_bit200__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) |= 0x200; }
void clear_flag2c_bit100__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffeff; }

}
