#include "types.h"

extern "C" {

int fn_80225C44(void* p);
int fn_80225C64(void* p);
void* fn_80225C84(void* p);
void fn_80225C8C(void* p);
int fn_80225C9C(void* p);
s32 fn_80225CA8(void* p);
int fn_80225B40(void*);

int fn_80225C44(void* p) { return fn_80225B40(p); }
int fn_80225C64(void* p) { return fn_80225B40(p); }
void* fn_80225C84(void* p) { return (char*)p + 0x8; }
void fn_80225C8C(void* p) { *(u8*)((char*)p + 0xcc) &= 0xfffffffd; }
int fn_80225C9C(void* p) { return *(u8*)((char*)p + 0xcc) & 0x1; }
s32 fn_80225CA8(void* p) { return *(s32*)((char*)p + 0x4); }

}
