#include "types.h"

extern "C" {

s32 TWindowOptionCtrl__sub_8026C5D8(void);
void TWindowOptionCtrl__sub_8026C600(void* p);
void TWindowOptionCtrl__sub_8026C610(void* p);
void TWindowOptionCtrl__sub_8026C620(void* p);
int TWindowOptionCtrl__sub_8026C630(void* p);
int TWindowOptionCtrl__sub_8026C63C(void* p);
s16 TWindowOptionCtrl__sub_8026C648(void* p);
s16 TWindowOptionCtrl__sub_8026C650(void* p);
int TWindowOptionCtrl__sub_8026C658(void* p);
s32 fn_80202BA0();

s32 TWindowOptionCtrl__sub_8026C5D8(void) {
    return fn_80202BA0() + 0x1154C;
}
void TWindowOptionCtrl__sub_8026C600(void* p) { *(u16*)((char*)p + 0x70) |= 0x400; }
void TWindowOptionCtrl__sub_8026C610(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }
void TWindowOptionCtrl__sub_8026C620(void* p) { *(u16*)((char*)p + 0x70) &= 0xfffffffb; }
int TWindowOptionCtrl__sub_8026C630(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowOptionCtrl__sub_8026C63C(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
s16 TWindowOptionCtrl__sub_8026C648(void* p) { return *(s16*)((char*)p + 0x64); }
s16 TWindowOptionCtrl__sub_8026C650(void* p) { return *(s16*)((char*)p + 0x62); }
int TWindowOptionCtrl__sub_8026C658(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
