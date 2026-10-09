#include "types.h"

extern "C" {

s32 get_chr_select_base_plus_1154c__17TWindowOptionCtrlFv(void);
void set_flag70_bit400__17TWindowOptionCtrlFPv(void* p);
void set_flag70_bit100__17TWindowOptionCtrlFPv(void* p);
void clear_flag70_bit4__17TWindowOptionCtrlFPv(void* p);
int TWindowOptionCtrl__sub_8026C630(void* p);
int is_active__17TWindowOptionCtrlFPv(void* p);
s16 get_field_64__17TWindowOptionCtrlFPv(void* p);
s16 get_field_62__17TWindowOptionCtrlFPv(void* p);
int TWindowOptionCtrl__sub_8026C658(void* p);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();

s32 get_chr_select_base_plus_1154c__17TWindowOptionCtrlFv(void) {
    return get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1154C;
}
void set_flag70_bit400__17TWindowOptionCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x400; }
void set_flag70_bit100__17TWindowOptionCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }
void clear_flag70_bit4__17TWindowOptionCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xfffffffb; }
int TWindowOptionCtrl__sub_8026C630(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int is_active__17TWindowOptionCtrlFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
s16 get_field_64__17TWindowOptionCtrlFPv(void* p) { return *(s16*)((char*)p + 0x64); }
s16 get_field_62__17TWindowOptionCtrlFPv(void* p) { return *(s16*)((char*)p + 0x62); }
int TWindowOptionCtrl__sub_8026C658(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
