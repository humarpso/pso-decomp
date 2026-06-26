#include "types.h"

extern "C" {

void fn_80252BF8(void* p);
void fn_80252C08(void* p);
void fn_80252C18(void* p);
void TWindowFukidasi__sub_80252C28(void* p);
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
void TWindowGetComCard__vt2(void);

void fn_80252BF8(void* p) { *(u32*)((char*)p + 0x2c) |= 0x100; }
void fn_80252C08(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffdff; }
void fn_80252C18(void* p) { *(u32*)((char*)p + 0x2c) |= 0x200; }
void TWindowFukidasi__sub_80252C28(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffeff; }
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
void TWindowGetComCard__vt2(void) {  }

}
