#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
void fn_8015C940(void);
void TLobby__sub_8015C9BC(void* p);
void TOCtrlDubchik__sub_8015C9D0(void);

void byteswap_event_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
}
void TLobby__sub_8015C9BC(void* p) { *(u8*)((char*)p + 0x0) = 103; *(u8*)((char*)p + 0x1) = 4; }

}
