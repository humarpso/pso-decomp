#include "types.h"

extern "C" {

int get_active_flag__13TWindowSubMagFPv(void* p);
int TWindowSubMag__sub_8027C0E8(void* p);

int get_active_flag__13TWindowSubMagFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubMag__sub_8027C0E8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
