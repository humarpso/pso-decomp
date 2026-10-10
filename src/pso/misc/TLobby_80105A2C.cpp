#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
    extern const float lbl_805DAAB0;
void build_6x05_write_switch_flag(void* a0);
int dispatch_packet__6TLobbyFPv(void*);
void process_and_dispatch_packet__6TLobbyFPv(void* p);
void bswap_6x60_drop_request_fields(void* p);
int bswap_32__FPUl(void*);
void bswap_6xa2_fields__6TLobbyFPv(void* p);
void * build_6x06_send_guild_card(void *arg0);
void *build_6x06_guild_card_packet__6TLobbyFPv(void *arg0);
}

extern "C" {

void bswap_6x60_drop_request_fields(void* p);
void dispatch_packet_wrapper__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int dispatch_packet__6TLobbyFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void dispatch_packet_wrapper__6TLobbyFPv(void* p) { bswap_6x60_drop_request_fields((void*)(p)); dispatch_packet__6TLobbyFPv(p); }

void bswap_6x60_drop_request_fields(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void *build_6x06_send_guild_card(void *arg0) {
    build_6x05_write_switch_flag((void*)(arg0));
    M2C_FIELD(arg0, s8 *, 0) = 0x60;
    M2C_FIELD(arg0, s8 *, 1) = 6;
    return arg0;
}
void build_6x05_write_switch_flag(void* a0) { *(float*)((char*)a0 + 0xc) = lbl_805DAAB0; *(float*)((char*)a0 + 0x8) = lbl_805DAAB0; *(short*)((char*)a0 + 0x10) = 0; *(short*)((char*)a0 + 0x12) = 0; *(unsigned char*)((char*)a0 + 0x5) = 0; *(unsigned char*)((char*)a0 + 0x4) = 0; *(unsigned char*)((char*)a0 + 0x0) = 96; *(unsigned char*)((char*)a0 + 0x1) = 5; }
void process_and_dispatch_packet__6TLobbyFPv(void* p) { bswap_6xa2_fields__6TLobbyFPv((void*)((void*)(p))); dispatch_packet__6TLobbyFPv(p); }
void bswap_6xa2_fields__6TLobbyFPv(void* p) { bswap_6x60_drop_request_fields(p); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); }
void *build_6x06_guild_card_packet__6TLobbyFPv(void *arg0) {
    build_6x06_send_guild_card((void *)(arg0));
    *((u8 *)arg0 + 0) = 0xA2;
    *((u8 *)arg0 + 1) = 0x0A;
    return arg0;
}

}
