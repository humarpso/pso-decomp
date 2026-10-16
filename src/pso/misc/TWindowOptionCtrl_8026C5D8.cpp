#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

int TWindowOptionCtrl__sub_8026C630(void* p);
int TWindowOptionCtrl__sub_8026C658(void* p);

s32 TWindowOptionCtrl::get_chr_select_base_plus_1154c() {
    return TAdSinglePlyChrSelectGC::get_instance() + 0x1154C;
}
void TWindowOptionCtrl::set_flag70_bit400() { *(u16*)((char*)this + 0x70) |= 0x400; }
void TWindowOptionCtrl::set_flag70_bit100() { *(u16*)((char*)this + 0x70) |= 0x100; }
void TWindowOptionCtrl::clear_flag70_bit4() { *(u16*)((char*)this + 0x70) &= 0xfffffffb; }
int TWindowOptionCtrl__sub_8026C630(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowOptionCtrl::is_active() { return *(u8*)((char*)this + 0x60) & 0x1; }
s16 TWindowOptionCtrl::get_field_64() { return *(s16*)((char*)this + 0x64); }
s16 TWindowOptionCtrl::get_field_62() { return *(s16*)((char*)this + 0x62); }
int TWindowOptionCtrl__sub_8026C658(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
