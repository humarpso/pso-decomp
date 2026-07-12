#include "types.h"

extern "C" {

int TObjPlayer__sub_8013A820(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_8013A788(void* p, void* a1);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap_packet_header__6TLobbyFPv();
s32 TLobby__sub_801E44D8(s32, s32);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_8013A578(void* p);
void TLobby__sub_8013A5C0(void* p);

void bswap_header_fields__6TLobbyFi(s32 arg0) {
    bswap_16__FPUs(arg0 + 2);
    bswap_32__FPUl(arg0 + 4);
}
void bswap_and_handle_packet__6TLobbyFii(s32 arg0, s32 arg1) {
    bswap_packet_header__6TLobbyFPv();
    TLobby__sub_801E44D8(arg0, arg1);
}
void TLobby__sub_8013A578(void* p) { *(u8*)((char*)p + 0x0) = 111; *(u8*)((char*)p + 0x1) = 129; }
void send_packet_60__6TLobbyFi(s32 arg0) {
    bswap_packet_header__6TLobbyFPv();
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_8013A5C0(void* p) { *(u8*)((char*)p + 0x0) = 114; *(u8*)((char*)p + 0x1) = 1; }

}
