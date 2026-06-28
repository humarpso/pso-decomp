#include "types.h"

extern "C" {

s32 fn_8001960C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void fn_8007EAE4(void* p);
s32 fn_8007EAF8(void* p);

int fn_8007EA74(void) { return 0; }
void fn_8007EAA8(s32 arg0) {
    fn_8001960C();
    bswap_16__FPUs(arg0 + 6);
    bswap_32__FPUl(arg0 + 8);
}
void fn_8007EAE4(void* p) { *(u8*)((char*)p + 0x0) = 178; *(u8*)((char*)p + 0x1) = 3; }
s32 fn_8007EAF8(void* p) { return *(s32*)((char*)p + 0x2b0); }

}
