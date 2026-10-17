#include "types.h"
#include "pso/misc/TLobby_801E43E4.h"
#include "pso/boss/TObjBoss2Tunnel_8007EA74.h"
#include "pso/system/byteswap.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjBoss2Tunnel::finalize_and_send_60() {
    bswap_6xB2_play_sound(this);
    TLobby__send_and_handle_60((u8 *)this);
}

void bswap_6xB2_play_sound(void *arg0) {
    ((TObjPlayer *)arg0)->read_be16_field2();
    bswap_16((u16 *)((char *)arg0 + 6));
    bswap_32((u32 *)((char *)arg0 + 8));
}

void TObjBoss2Tunnel__sub_8007EAE4(u8 *arg0) {
    *(u8 *)((s8 *)arg0 + 0) = 0xB2;
    *(s8 *)((s8 *)arg0 + 1) = 3;
}

}
