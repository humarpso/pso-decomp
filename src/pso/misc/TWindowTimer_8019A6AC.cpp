#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
void TWindowTimer__sub_8019A6F8(void* p);

void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
}
void TWindowTimer__sub_8019A6F8(void* p) { *(u8*)((char*)p + 0x0) = 121; *(u8*)((char*)p + 0x1) = 6; }

}
