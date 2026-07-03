#include "types.h"

extern "C" {

int TWindowCtrl__sub_8024C598(void* p);
void TWindowCtrl__sub_8024C5A4(void* p);
void TWindowCtrl__sub_8024C5B4(void* p);
void TWindowCtrl__sub_8024C5D8(void* p);
u16 TWindowCtrl__sub_8024C5E8(void* p);
int TWindowCtrl__sub_8024C5F0(void* p);

int TWindowCtrl__sub_8024C598(void* p) { return *(u16*)((char*)p + 0x4) & 0x4; }
void TWindowCtrl__sub_8024C5A4(void* p) { *(u16*)((char*)p + 0x1e) |= 0x8; }
void TWindowCtrl__sub_8024C5B4(void* p) { *(u16*)((char*)p + 0x1e) &= 0xfffffff7; }

}
