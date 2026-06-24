#include "types.h"

extern "C" {

s32 fn_8007B6D8(void* p);
int fn_8007B6E0(void* p);
u8 fn_8007B6EC(void* p);
int fn_8007B73C(void* p);
int bswap__16TPlyGuildCardTagFv(void*);

s32 fn_8007B6D8(void* p) { return *(s32*)((char*)p + 0x4); }
int fn_8007B6E0(void* p) { return *(u8*)((char*)p + 0x8c) & 0x1; }
u8 fn_8007B6EC(void* p) { return *(u8*)((char*)p + 0x8f); }
int fn_8007B6F4(void) { return 0; }
int fn_8007B708(void) { return 0; }
int fn_8007B73C(void* p) { return bswap__16TPlyGuildCardTagFv(p); }
int fn_8007B75C(void) { return 0; }

}
