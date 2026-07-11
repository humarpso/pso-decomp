#include "types.h"

extern "C" {

s32 TObjPlayer__sub_8001960C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 fn_8010314C();
void fn_80103114(void* p, s16 v);

void fn_80102FCC(s32 arg0) {
    TObjPlayer__sub_8001960C();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_32__FPUl(arg0 + 8);
}
int fn_80103010(void) { return 0; }
int fn_80103044(void) { return 0; }
int fn_80103074(void) { return 0; }
void fn_801030A8(s32 arg0) {
    TObjPlayer__sub_8001960C();
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}
int fn_801030EC(void) { return 0; }
void fn_80103114(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
s32 fn_8010311C(s32 arg0) {
    fn_8010314C();
    return arg0;
}

}
