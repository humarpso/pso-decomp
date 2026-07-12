#include "types.h"

extern "C" {

s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TObjPlayer__sub_8001960C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TObjNpcBase__vt86(void);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);

void TNpcPlayer__sub_801493A8(s32 arg0) {
    TObjPlayer__sub_8001960C();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}

}
