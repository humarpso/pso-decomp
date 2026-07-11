#include "types.h"

extern "C" {

void set_flag1e_bit80__18TWindowSubShortCutFPv(void* p);

void set_flag1e_bit80__18TWindowSubShortCutFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x80; }

}
