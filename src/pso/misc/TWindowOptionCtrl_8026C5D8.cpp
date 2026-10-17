#include "types.h"
#include "pso/misc/TWindowOptionCtrl_8026C5D8.h"
#include "pso/misc/TWindowSoundBalance.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 TWindowOptionCtrl::get_chr_select_base_plus_1154c() {
    return TAdSinglePlyChrSelectGC::get_instance() + 0x1154C;
}
void TWindowOptionCtrl::set_flag70_bit400() { *(u16*)((char*)this + 0x70) |= 0x400; }
void TWindowSubComCardList::set_flag70_bit100() { this->m_70 |= 0x100; }
void TWindowOptionCtrl::clear_flag70_bit4() { *(u16*)((char*)this + 0x70) &= 0xfffffffb; }
int TWindowOptionCtrl__sub_8026C630(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSoundBalance::is_active() { return this->m_60 & 0x1; }
s16 TWindowOptionCtrl::get_field_64() { return *(s16*)((char*)this + 0x64); }
s16 TWindowOptionCtrl::get_field_62() { return *(s16*)((char*)this + 0x62); }
int TWindowOptionCtrl__sub_8026C658(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
