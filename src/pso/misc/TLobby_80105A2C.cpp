#include "types.h"

extern "C" {

void bswap_6xa2_fields__6TLobbyFPv(void* p);
void build_6x05_write_switch_flag(void* a0);
void *build_6x06_guild_card_packet__6TLobbyFPv(void *arg0);
void process_and_dispatch_packet__6TLobbyFPv(void* p);
int TLobby__sub_80105A60(void*);
int bswap_32__FPUl(void*);
void build_6x06_send_guild_card(void);
int dispatch_packet__6TLobbyFPv(void*);

    extern const float lbl_805DAAB0;
void build_6x05_write_switch_flag(void* a0) { *(float*)((char*)a0 + 0xc) = lbl_805DAAB0; *(float*)((char*)a0 + 0x8) = lbl_805DAAB0; *(short*)((char*)a0 + 0x10) = 0; *(short*)((char*)a0 + 0x12) = 0; *(unsigned char*)((char*)a0 + 0x5) = 0; *(unsigned char*)((char*)a0 + 0x4) = 0; *(unsigned char*)((char*)a0 + 0x0) = 96; *(unsigned char*)((char*)a0 + 0x1) = 5; }

void process_and_dispatch_packet__6TLobbyFPv(void* p) { bswap_6xa2_fields__6TLobbyFPv((void*)(p)); dispatch_packet__6TLobbyFPv(p); }

void bswap_6xa2_fields__6TLobbyFPv(void* p) { TLobby__sub_80105A60(p); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); }

void *build_6x06_guild_card_packet__6TLobbyFPv(void *arg0) {
    build_6x06_send_guild_card();
    *((u8 *)arg0 + 0) = 0xA2;
    *((u8 *)arg0 + 1) = 0x0A;
    return arg0;
}

}
