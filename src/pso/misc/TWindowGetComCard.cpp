#include "types.h"

extern "C" {

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
void set_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void set_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit100__15TWindowFukidasiFPv(void* p);

void TWindowFukidasi__sub_80252C38(void* p) { *(u8*)((char*)p + 0x71) |= 0x4; }
void clear_visible_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) &= 0xfe; }
void set_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) |= 0x1; }
void TWindowFukidasi__sub_80252C68(void* p) { *(u8*)((char*)p + 0x71) |= 0x20; }
int is_flag_set__15TWindowFukidasiFPv(void* p) { return *(u8*)((char*)p + 0x71) & 0x1; }
void TWindowFukidasi__sub_80252C84(void* p) { *(u8*)((char*)p + 0x71) &= 0xffffffdf; }
int is_active__15TWindowFukidasiFPv(void* p) { return (*(u8*)((char*)p + 0x71) >> 2) & 0x1; }
void clear_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) &= 0xfffffffb; }
int fn_80252CB0(void* p) { return (*(u8*)((char*)p + 0x71) >> 5) & 0x1; }
int fn_80252CBC(void* p) { return *(u16*)((char*)p + 0x0) & 0x10; }
void render__17TWindowGetComCardFv(void) {  }

}
