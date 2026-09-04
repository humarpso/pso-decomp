#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *build_6x06_send_guild_card(void *arg0);
void TLobby__sub_80105A60(void* p);
void dispatch_packet_wrapper__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
M2C_UNK build_6x05_write_switch_flag();
int dispatch_packet__6TLobbyFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void dispatch_packet_wrapper__6TLobbyFPv(void* p) { TLobby__sub_80105A60((void*)(p)); dispatch_packet__6TLobbyFPv(p); }

void TLobby__sub_80105A60(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void *build_6x06_send_guild_card(void *arg0) {
    build_6x05_write_switch_flag();
    M2C_FIELD(arg0, s8 *, 0) = 0x60;
    M2C_FIELD(arg0, s8 *, 1) = 6;
    return arg0;
}

}
