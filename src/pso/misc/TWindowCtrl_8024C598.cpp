#include "types.h"

extern "C" {

int is_flag_2_set__11TWindowCtrlFPv(void* p);
void set_flag1e_bit8__11TWindowCtrlFPv(void* p);
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p);
void set_flag1e_bit40__11TWindowCtrlFPv(void* p);
u16 get_flags__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024C5F0(void* p);

int is_flag_2_set__11TWindowCtrlFPv(void* p) { return *(u16*)((char*)p + 0x4) & 0x4; }
void set_flag1e_bit8__11TWindowCtrlFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x8; }
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p) { *(u16*)((char*)p + 0x1e) &= 0xfffffff7; }

}
