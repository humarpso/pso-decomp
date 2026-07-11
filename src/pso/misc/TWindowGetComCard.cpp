#include "types.h"

extern "C" {

void fn_80252C38(void* p);
void fn_80252C48(void* p);
void fn_80252C58(void* p);
void fn_80252C68(void* p);
int fn_80252C78(void* p);
void fn_80252C84(void* p);
int fn_80252C94(void* p);
void fn_80252CA0(void* p);
int fn_80252CB0(void* p);
int fn_80252CBC(void* p);
void render__17TWindowGetComCardFv(void);
void set_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void set_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit100__15TWindowFukidasiFPv(void* p);

void fn_80252C38(void* p) { *(u8*)((char*)p + 0x71) |= 0x4; }
void fn_80252C48(void* p) { *(u8*)((char*)p + 0x71) &= 0xfe; }
void fn_80252C58(void* p) { *(u8*)((char*)p + 0x71) |= 0x1; }
void fn_80252C68(void* p) { *(u8*)((char*)p + 0x71) |= 0x20; }
int fn_80252C78(void* p) { return *(u8*)((char*)p + 0x71) & 0x1; }
void fn_80252C84(void* p) { *(u8*)((char*)p + 0x71) &= 0xffffffdf; }
int fn_80252C94(void* p) { return (*(u8*)((char*)p + 0x71) >> 2) & 0x1; }
void fn_80252CA0(void* p) { *(u8*)((char*)p + 0x71) &= 0xfffffffb; }
int fn_80252CB0(void* p) { return (*(u8*)((char*)p + 0x71) >> 5) & 0x1; }
int fn_80252CBC(void* p) { return *(u16*)((char*)p + 0x0) & 0x10; }
void render__17TWindowGetComCardFv(void) {  }

}
