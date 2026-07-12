#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void finalize_and_send_60__15TObjBoss2TunnelFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void bswap_6xB2_play_sound(void *);

void finalize_and_send_60__15TObjBoss2TunnelFPv(void *arg0) {
    bswap_6xB2_play_sound(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
