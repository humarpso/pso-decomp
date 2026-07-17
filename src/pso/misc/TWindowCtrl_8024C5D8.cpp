#include "types.h"

extern "C" {

int is_flag_2_set__11TWindowCtrlFPv(void* p);
void set_flag1e_bit8__11TWindowCtrlFPv(void* p);
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p);
void set_flag1e_bit40__11TWindowCtrlFPv(void* p);
u16 get_flags__11TWindowCtrlFPv(void* p);
int get_flag_bit1__11TWindowCtrlFPv(void* p);

void set_flag1e_bit40__11TWindowCtrlFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x40; }
u16 get_flags__11TWindowCtrlFPv(void* p) { return *(u16*)((char*)p + 0x76); }
int get_flag_bit1__11TWindowCtrlFPv(void* p) { return (*(u8*)((char*)p + 0x71) >> 1) & 0x1; }

}
