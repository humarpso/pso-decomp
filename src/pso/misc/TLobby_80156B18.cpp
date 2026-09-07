#include "types.h"

extern "C" {
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
void bswap_header__6TLobbyFi(s32 arg0);
void bswap_60_header__6TLobbyFPv(void* p);
s32 TLobby__send_and_handle_60(s32);
void update_and_send_60__6TLobbyFi(s32 arg0);
void TLobby__sub_80156BA8(void* p);
}

extern "C" {

s32 TLobby__send_and_handle_60(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

void bswap_60_header__6TLobbyFPv(void* p) { bswap_header__6TLobbyFi((s32)(p)); }
void bswap_header__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void update_and_send_60__6TLobbyFi(s32 arg0) {
    bswap_60_header__6TLobbyFPv((void*)(arg0));
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_80156BA8(void* p) { *(u8*)((char*)p + 0x0) = 11; *(u8*)((char*)p + 0x1) = 3; }

}
