#include "types.h"

extern "C" {

void set_flag60_bit8__13TWindowSubMagFPv(void* p);
void clear_flag60_bit8__13TWindowSubMagFPv(void* p);
s32 TWindowSubMag__sub_8027C134(void* p);

void set_flag60_bit8__13TWindowSubMagFPv(void* p) { *(u8*)((char*)p + 0x60) |= 0x8; }
void clear_flag60_bit8__13TWindowSubMagFPv(void* p) { *(u8*)((char*)p + 0x60) &= 0xfffffff7; }
s32 TWindowSubMag__sub_8027C134(void* p) { return *(s32*)((char*)p + 0x68); }

}
