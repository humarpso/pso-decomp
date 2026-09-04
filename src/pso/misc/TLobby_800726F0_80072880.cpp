#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80072880(u8 *arg0);
void TLobby__sub_800728FC(u8 *arg0);
void byteswap_challenge_packet__6TLobbyFPv(void *arg0);
void send_challenge_packet__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void bswap_32__FPUl(void *);
void read_be16_field2__10TObjPlayerFPv(void *);

void TLobby__sub_80072880(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x95;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

void byteswap_challenge_packet__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

void send_challenge_packet__6TLobbyFPv(void *arg0) {
    byteswap_challenge_packet__6TLobbyFPv((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}

void TLobby__sub_800728FC(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x8A;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

}
