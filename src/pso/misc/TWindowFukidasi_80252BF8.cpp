#include "types.h"

extern "C" {

void TWindowFukidasi__sub_80252BF8(void* p);
void TWindowFukidasi__sub_80252C08(void* p);
void TWindowFukidasi__sub_80252C18(void* p);
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
void render__17TWindowGetComCardFv(void);

void TWindowFukidasi__sub_80252BF8(void* p) { *(u32*)((char*)p + 0x2c) |= 0x100; }
void TWindowFukidasi__sub_80252C08(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffdff; }
void TWindowFukidasi__sub_80252C18(void* p) { *(u32*)((char*)p + 0x2c) |= 0x200; }
void TWindowFukidasi__sub_80252C28(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffeff; }

}
