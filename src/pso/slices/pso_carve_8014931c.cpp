#include "types.h"

extern "C" {

s32 fn_8022675C(s32, s32, s32, s32);
s32 fn_8001960C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TObjNpcBase__vt86(void);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);

void TObjNpcBase__vt86(void) {  }
void TObjNpcBase__sub_80149320(s32 arg0) {
    fn_8022675C(0x40003804, arg0 + 0x38, 0, 0);
}
void TObjNpcBase__sub_80149358(void* p, s32 v) { *(s32*)((char*)p + 0x3ac) = v; }
void TObjNpcBase__sub_80149360(void* p, s32 v) { *(s32*)((char*)p + 0x3a8) = v; }
void TObjNpcBase__sub_80149368(void* p) { *(s32*)((char*)p + 0x0) = 2; }
int fn_80149374(void) { return 0; }
void fn_801493A8(s32 arg0) {
    fn_8001960C();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}

}
