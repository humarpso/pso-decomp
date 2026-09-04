#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80072724(void *arg0);
void TLobby__sub_80072758(u8 *arg0);
void TLobby__sub_800727A0(void *arg0);
void TLobby__sub_800727EC(u8 *arg0);
void bswap_challenge_dead_flag__6TLobbyFPv(void *arg0);
void byteswap_challenge_time_packet__6TLobbyFPv(void *arg0);
void send_and_handle_60_wrapper__6TLobbyFPv(void *arg0);
void send_state__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void bswap_32__FPUl(void *);
void read_be16_field2__10TObjPlayerFPv(void *);

void bswap_challenge_dead_flag__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

void TLobby__sub_80072724(void *arg0) {
    bswap_challenge_dead_flag__6TLobbyFPv((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}

void TLobby__sub_80072758(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x9D;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void send_and_handle_60_wrapper__6TLobbyFPv(void *arg0) {
    TLobby__sub_800727A0((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}

void TLobby__sub_800727A0(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
}

void TLobby__sub_800727EC(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x97;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

void byteswap_challenge_time_packet__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
}

void send_state__6TLobbyFPv(void *arg0) {
    byteswap_challenge_time_packet__6TLobbyFPv((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}

}
