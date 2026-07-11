#include "types.h"

extern "C" {

int TItemMagSub__sub_801159BC(void* p);
int TItemMagSub__sub_801159A4(void* p);
int TItemMagSub__sub_801159B0(void* p);

int TItemMagSub__sub_801159A4(void* p) { return (*(u8*)((char*)p + 0x0) >> 5) & 0x1; }
int TItemMagSub__sub_801159B0(void* p) { return *(u8*)((char*)p + 0x0) & 0x7; }
int TItemMagSub__sub_801159BC(void* p) { return *(u32*)((char*)p + 0x18c) & 0x20; }

}
