#include "types.h"

extern "C" {

void TObjBoss2Tunnel__sub_8007EAE4(u8 *arg0);
void bswap_6xB2_play_sound(void *arg0);
void finalize_and_send_60__15TObjBoss2TunnelFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void bswap_16__FPUs(void *);
void bswap_32__FPUl(void *);
void read_be16_field2__10TObjPlayerFPv(void *);

void finalize_and_send_60__15TObjBoss2TunnelFPv(void *arg0) {
    bswap_6xB2_play_sound((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}

void bswap_6xB2_play_sound(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_16__FPUs((void *)((char *)arg0 + 6));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
}

void TObjBoss2Tunnel__sub_8007EAE4(u8 *arg0) {
    *(u8 *)((s8 *)arg0 + 0) = 0xB2;
    *(s8 *)((s8 *)arg0 + 1) = 3;
}

}
