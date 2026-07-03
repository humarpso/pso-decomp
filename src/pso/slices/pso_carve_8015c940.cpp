#include "types.h"

extern "C" {

s32 fn_8001960C();
s32 bswap_32__FPUl(s32);
void fn_8015C940(void);
void fn_8015C9BC(void* p);
void TOCtrlDubchik__sub_8015C9D0(void);

void fn_8015C940(void) {  }
int fn_8015C944(void) { return 0; }
void fn_8015C978(s32 arg0) {
    fn_8001960C();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
}
void fn_8015C9BC(void* p) { *(u8*)((char*)p + 0x0) = 103; *(u8*)((char*)p + 0x1) = 4; }

}
