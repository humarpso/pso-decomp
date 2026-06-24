#include "types.h"

extern "C" {

int fn_8024C598(void* p);
void fn_8024C5A4(void* p);
void fn_8024C5B4(void* p);
void fn_8024C5D8(void* p);
u16 fn_8024C5E8(void* p);
int fn_8024C5F0(void* p);

int fn_8024C598(void* p) { return *(u16*)((char*)p + 0x4) & 0x4; }
void fn_8024C5A4(void* p) { *(u16*)((char*)p + 0x1e) |= 0x8; }
void fn_8024C5B4(void* p) { *(u16*)((char*)p + 0x1e) &= 0xfffffff7; }
int fn_8024C5C4(void) { return 0; }
void fn_8024C5D8(void* p) { *(u16*)((char*)p + 0x1e) |= 0x40; }
u16 fn_8024C5E8(void* p) { return *(u16*)((char*)p + 0x76); }
int fn_8024C5F0(void* p) { return (*(u8*)((char*)p + 0x71) >> 1) & 0x1; }

}
