#include "types.h"

extern "C" {

void TWindowTimer__sub_8019A6F8(void* p);
int TWindowTimer__sub_8019A770(void* p);
void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0);
int set_timer_value__12TWindowTimerFii(int a0, int a1);
int TWindowCtrl__sub_8024A4EC(void*);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
}
void TWindowTimer__sub_8019A6F8(void* p) { *(u8*)((char*)p + 0x0) = 121; *(u8*)((char*)p + 0x1) = 6; }

    extern int lbl_8050DD50[];
int set_timer_value__12TWindowTimerFii(int a0, int a1) { lbl_8050DD50[a0] = a1; return (int)lbl_8050DD50; }

int TWindowTimer__sub_8019A770(void* p) { return TWindowCtrl__sub_8024A4EC(p); }

}
