#include "types.h"

extern "C" {

s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TObjNpcBase__vt86(void);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);

void TObjNpcBase__vt86(void) {  }
void play_voice__11TObjNpcBaseFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x40003804, arg0 + 0x38, 0, 0);
}
void TObjNpcBase__sub_80149358(void* p, s32 v) { *(s32*)((char*)p + 0x3ac) = v; }
void TObjNpcBase__sub_80149360(void* p, s32 v) { *(s32*)((char*)p + 0x3a8) = v; }
void TObjNpcBase__sub_80149368(void* p) { *(s32*)((char*)p + 0x0) = 2; }

}
